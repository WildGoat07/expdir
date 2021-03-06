# expdir

`expdir` is a tool to navigate easily between folders using a terminal.

here is an example of what it looks like :

![image](https://user-images.githubusercontent.com/30344403/116304648-17754000-a7a3-11eb-8e75-460e884dc058.png)

You can control the cursor using the arrow keys and validate the directory using the space key.

It is also possible to search for a specific folder using :

![image](https://user-images.githubusercontent.com/30344403/116304921-5d320880-a7a3-11eb-98f1-a84f3e33320a.png)

It is also available without fancy visuals for the most common terminals :

![image](https://user-images.githubusercontent.com/30344403/116305013-776be680-a7a3-11eb-84e5-23e14e37eb2e.png)

It also reacts to mouse clicks for the heretics out there.

## Usage

Simply call `expdir` to start the explorer. You can still call `expdir --help` for a list of all the options available.

Controls :
- `Space` : Validate the directory go change the current working directory.
- `Ctrl+X` : Stop the application, do not move to directory.
- `F5` : Refresh the directory.
- `Tab` : Go back to the parent of the current folder.
- arrow key : move up/down or change page (left/right)
- any letter : search for a specific folder.

#### Custom aliases

You can also add aliases to the directories : you will have to edit `/etc/expdir/aliases` for system-wide aliases, or `~/.config/expdir/aliases` for user-wide aliases. Note : you will have to create the `~/.config/expdir/aliases` file.
A very simple alias (that is already added system-wide upon installation), for example :
```sh
%HOME%=~
```

This will simply change the home folder of an user to `~`.

## Installation

Go to the [latest release](https://github.com/WildGoat07/expdir/releases/latest) and follow the steps.
After the intallation, you have to source bash_profile again so you can use this. Creating a new terminal will quickly do the trick.

## Build

First install the dependencies to build the project :
```sh
sudo apt update
sudo apt install build-essential libncurses5-dev libncursesw5-dev
```
To build, clone this repository, then build using the makefile.
You can also generate the .deb using `make deb`. It will be in the ./package folder.
```
git clone https://github.com/WildGoat07/expdir
cd expdir
make deb
```

### Special mentions

Special thanks to [BaptisteMiq](https://github.com/BaptisteMiq) for testing and finding bugs.
