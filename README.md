# charcode
**A simple CLI utility that prints the ASCII code for a given character**

---

This is a study project.

Despite this fact, I do use this utility myself on daily basis,<br>
and therefore I may continue to update it with new features.

## Usage
You can pass the character in question as an argument,<br>
or type it in a prompt when executing the **`charcode`** command.

## Installation
* On Debian, download and install the **latest release** (recommended):<br>
&nbsp;&nbsp;&nbsp;&nbsp; `sudo apt install ./charcode_1.1-1_amd64.deb`<br>
* To compile and install from source using **Makefile**, run:<br>
&nbsp;&nbsp;&nbsp;&nbsp; `sudo apt install build-essential gcc make`<br>
&nbsp;&nbsp;&nbsp;&nbsp; `make`<br>
&nbsp;&nbsp;&nbsp;&nbsp; `sudo make install`<br>
&nbsp;&nbsp;&nbsp;&nbsp; `make clean`<br>
* To compile and install from source using **GCC**, run:<br>
&nbsp;&nbsp;&nbsp;&nbsp; `sudo apt install build-essential gcc`<br>
&nbsp;&nbsp;&nbsp;&nbsp; `gcc charcode.c -o charcode`<br>
&nbsp;&nbsp;&nbsp;&nbsp; `chmod 755 charcode`<br>
&nbsp;&nbsp;&nbsp;&nbsp; `sudo mkdir -p /usr/local/bin`<br>
&nbsp;&nbsp;&nbsp;&nbsp; `sudo mv charcode /usr/local/bin/charcode`<br>
* To uninstall it later, run:<br>
&nbsp;&nbsp;&nbsp;&nbsp; If you installed with **APT**:<br>
&nbsp;&nbsp;&nbsp;&nbsp; `sudo apt autoremove charcode`<br>
&nbsp;&nbsp;&nbsp;&nbsp; If you compiled and installed from source:<br>
&nbsp;&nbsp;&nbsp;&nbsp; `sudo rm -f /usr/local/bin/charcode`<br>
&nbsp;&nbsp;&nbsp;&nbsp; In case you changed the directory in **Makefile**:<br>
&nbsp;&nbsp;&nbsp;&nbsp; `sudo rm -f $(whereis charcode | cut -d' ' -f2)`<br>

## Known bugs
* It will ignore the multibyte commands, such as when pressing `<Enter>` or a cursor key
* The multibyte commands will show wrong characters instead of properly interpreted commands
* It will not recognize and display properly the characters beyond the standard 128 ASCII table
