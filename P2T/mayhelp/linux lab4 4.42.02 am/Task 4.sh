#!/bin/bash
task4($PASSED){
    if [ -d "${PASSED}" ] ; then
        echo "$PASSED is a directory";
    else
        if [ -f "${PASSED}" ]; then
            echo "${PASSED} is a file";
        else
            echo "${PASSED} is not valid";
            exit 1
        fi
    fi

}
