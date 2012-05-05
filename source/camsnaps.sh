a=1;


while [ $a -le 10 ]
do
dat=$( date +"%y_%m_%d_%H_%M_%S")
streamer -q -w 40 -c /dev/video0 -b 64 -o /root/final/data/camsnaps/$dat.jpeg;
a=$((a+1 ));
done
