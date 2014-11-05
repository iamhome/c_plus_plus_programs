fileName=$(echo $1 | cut -f1 -d.)

g++ $1 -o executables/$fileName