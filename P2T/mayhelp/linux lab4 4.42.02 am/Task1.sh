#!/bin/bash
for file in *
do
	
	# Checks for files in the current directory
	if [ -f $file ]; then
		# Checks for 0 size files
		if [ ! -s $file ]; then
			# Ask for user if they want to delete the file
			echo "Do you want to delete $file? (Y/N)"
			read answer			
			if [ ${answer} == "Y" ] || [ ${answer} ==  "y" ]; then
				rm $file
				echo "$file has been deleted!"
			# if user do not want to delete, check for another files
			else
				echo "Looking for next 0 size file..."
				continue
			fi
		fi
		
	fi	

done
echo "There are no files or no 0 size files"
exit 0

