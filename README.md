# PARKING ENTRY PROTOTYPE
Parking Entry prototype keeps the count of vehicle entering the parking lot and indicates if the parking lot is full.
Components used : IC-74LS90, IC-74LS85, IC-74LS47, IR module, Arduino Uno, 7-segment display, LEDs, jumper wires, resistors, breadboard.

IR module is used to sense the movement of the vehicle whose output signal is sent to the arduino. With some delay in
time, clock pulse is sent to the decade counter which is a mod-10 counter. The count can be seen in the 7-segment display using the 
display driver. The output of the decade counter is also given to the comparator which is used to tell if the parking lot is full or not.
LEDs are used to indicate if the parking lot is full or not.
