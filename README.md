# my-password-manager

need to create password...


## How use

For example... you need to create a password for buy stuff on [skate.ch](https://www.skate.ch)
and you have to create a account. You are creating that at a 12th November 2069 (12.11.2069).
You excecute ...
* ```~$ ./passwordManager``` 
* ```Give me your pin :```
* ```1234```
* ``` PIN OK, the date :12112069```
* ```--> #(&HLW2482bw7```
You only need to have this program on you alway and the date when you create your account...
And nobody can't steal your password whithout your date of creating account and the pin.


## How work

It's just a chaotic function
```
	c
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

* ```~$ git clone https://github.com/theo-grivel/42-Libft```
* ```~$ git clone https://github.com/theo-grivel/my-password-manager```
* ```~$ cd 42-libft```
* ```~$ pkg install clang```
* ```~$ ar rc libft.a *c```
* ```~$ mv libft.a ../my-password-manager```
* ```~$ cd ../my-password-manager```
* ```~$ clang src/main.c -L. -lft```
* ```~$ mv a.out pass```
* ```~$ ./pass```

Here, the soft is work...


