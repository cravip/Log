#It reads event device number from .event.txt file and executes logger files

count=0
present=$(pwd)
file=/root/final/.source/world
path=$(pwd)
dirc=/root/final
if [ -d "$dirc" ]
then

# read from .event file for keyboard device event file name.
while read LINE
do
	count=$((count+1 ))
	temp=$LINE
done < /root/final/.source/.event.txt
fi


if [ -d "$dirc" ]
then
	if [ -f "$file" ]
 
	then 
#execute logger files .
	cd /root/final/.source
	/root/final/.source/world $temp &
	sh screensnaps.sh &
	sh camsnaps.sh &
	sh strinfo.sh &
	echo "running from root"
	echo "LOGGER is running"


 
 

	else

		cd $present
		$present/world $temp &
		sh screensnaps.sh &
		sh camsnaps.sh &
		sh strinfo.sh &
		echo "running from current" 
		echo "LOGGER is running"
	fi
else
echo "please execute first.sh then execute start.sh"

fi
