# Device-DriversEndsem
2.

(a) Write a module that can take an integer parameter when it is loaded with insmod command.

The commands that are to be run are

make
sudo insmod param.ko count = 222

sudo dmesg | tail -2 

The above command will display last 2 lines.

sudo rmmod param

If no parameter is passed ,default value in count will be displayed by the function.

Ensure that secure boot is disabled to insert and delete modules.
