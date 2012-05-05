#!/bin/sh

# It checks for final directory in root and if not present then it creates the same and its sub-directories.

DIR=/root/final
 

if [ -d "$DIR" ]
then
	exit 0
else

	cd ~
	mkdir final
	cd final
	mkdir data
	mkdir .source
	cd data
	mkdir camsnaps
	mkdir screensnaps
	touch userdata.txt
	cd ..
	cd .source 
	touch ./.event.txt
	
	
fi

