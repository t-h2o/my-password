# my-password-manager

you need to create a password ?

## password generator

```sh
sudo apt install pwgen
```
Here there a programme as the mine but clearly better!
Check the man of pwgen

exampple :
```sh
pwgen -H ./file#something -N 1 -s 12
```

## How use

For example... you need to create a password for buy stuff on [skate.ch](https://www.skate.ch)
and you have to create a account. You are creating that at a 29th December 2001 (29.12.2001).
You excecute ...
* ```~$ ./pass``` 
```shell
	PASSWORD MANAGER

give your birhtday account : 29.12.2001

give a pin : 51

your code : Px{>uPTn6-TC

	END
```

This code ask you 2 things, a date and a number. 
This program doesn't store any password, 
he create a password with a date and a pin.


## How work

It's just a chaotic function
```
psw = f(date, pin);
```


## How use it on my phone

install 
[termux](https://play.google.com/store/apps/details?id=com.termux)
on 
[f-droid](https://f-droid.org/packages/com.termux/) 
or 
[goole play](https://play.google.com/store/apps/details?id=com.termux) 


## On termux...

With my experience, the best is termux from f-droid

### Update

* ```~$ apt-get update```
* ```~$ apt-get upgrade```


### install soft in termux

* ```~$ pkg install git```
* ```~$ pkg install clang```


### Dowload git repo

* ```~$ git clone https://github.com/theo-grivel/my-password-manager```

### Finish

* ```~$ cd ../my-password-manager/src```
* ```~$ clang *c```
* ```~$ mv a.out pass```
* ```~$ ./pass```

Here you have this program...
