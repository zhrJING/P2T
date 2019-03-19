#!/bin/bash
task3{
    if [ ! -d "$DIRECTORY" ]; then
    mkdir $DIRECTORY
    echo " new directory created."
    mv /home/workspace/DIRECTORY/ /home/workspace/
    else
        echo " already exist."
        mv /home/workspace/DIRECTORY/ /home/workspace/
    fi

}
