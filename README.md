show double initialization of static memory in C++

log of running `tester` :

```
EnumParser ctor, this = 0x104764000
EnumParser ctor, this = 0x104300000
main enter
ping
do_keyhole_stuff enter
ping
do_keyhole_stuff exit
main exititng
EnumParser ~dtor, this = 0x104300000
EnumParser ~dtor, this = 0x104764000

```
