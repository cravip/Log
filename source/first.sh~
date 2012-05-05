# it creates /root/final and its subfolder and stores keyboard device event file's name in .event.txt file.
a=$(pwd)

#create /root/final
sh $a/crtfld.sh

while :
do

#copy contents of current folder in root/final/source folder
cp -r . /root/final/.source/
chmod 0777 start.sh
chmod 0777 world
echo "enter device path name"
read device
echo "your default device : $device  "
echo " are you sure : y/n"
read yorno


	if [ "$yorno" = "y" ]
	then
			
		#store device name in .event file.
		echo $device > /root/final/.source/.event.txt
		echo "successfully added"
		exit 0
		
	else
		continue
		 
		
	fi
done





