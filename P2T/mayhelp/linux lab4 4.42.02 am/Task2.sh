#!/bin/bash
# read every line in help-read.txt
cat help-read.txt | while read line
do
	# prints the word count of each line
	echo $line | wc -w
done

exit 0
