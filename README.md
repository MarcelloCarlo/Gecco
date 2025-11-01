# Kaya Today Series: Gecco Server

## About <a name = "about"></a>

A sample HTTP Server using C. Based from this [tutorial](https://medium.com/@justup1080/tutorial-creating-a-minimalist-http-server-in-c-2303d140c725) and this [one](https://dev.to/jeffreythecoder/how-i-built-a-simple-http-server-from-scratch-using-c-739)

<b>Kaya Today</b> is a series where I challenge myself to try other software development activities outside of my existing web development. And add another excuse for me to leave web development. 

### Prerequisites

You need to install <b>Git, GCC</b> and set up your <b>firewall</b> to allow ports that you want to use.

### Installing

Clone this repository. Yun lang.

## Usage <a name = "usage"></a>

Build it

```
gcc -o Gecco main.c server.c
```

Then run it, provide a port when it asks you.

```
./Gecco
```

And go to your browser and enter this URL

```
http://localhost:<yourSelectedPort>
```