# CodeRunner(for Windows only)

# [Github](https://github.com/Davidasx/CodeRunner) (Remember to give me a star!)

A tool for many online judges.Processes testcases via [Competitive Companion](https://codeforces.com/blog/entry/60073) and uses [CF-Tool](https://codeforces.com/blog/entry/66552) to compile and test programs.
[cut]
## Install

First,install and configure  [Competitive Companion](https://codeforces.com/blog/entry/60073) and  [CF-Tool](https://codeforces.com/blog/entry/66552).
**Note:You should configure the pre-script and post-script for the CF-Tool template to compile automatically.**

Download crun.exe and coderun.exe and parse2cf.exe(Download the source files if you want to.They're optional.)

Then put the files in a folder that's in the environmental variable PATH.(Search that if you don't know what it is.)

## Usage

```powershell
coderun [FILENAME]:test code [FILENAME] in the terminal.
crun [FILENAME]:test code [FILENAME] in a popup window.
```

**Note: if it's the first time testing a code,the program will have to fetch the testcases first.Please click on the Competitive Companion icon in the browser to get the testcases after typing in the command.**

## For Dev-C++ Users

To  make testing easier,you could add CodeRunner as a **compiler** in Dev-C++.

Use Tools>Compiler Options>Add a Blank Compiler Set(a little green plus icon).

![pic1](/predownloaded/d9/40/d9405bc386f715a85e0088ff5072bddd9489e598.png)

Then enter the compiler name:CodeRunner

![pic2](/predownloaded/cb/d3/cbd3136743ce94cd7f055c0cb3c6e27849487034.png)

In the Directories page,enter the place where you put coderun.exe and crun.exe and click "Add"

![pic3](/predownloaded/77/65/7765a83f00243639a2f302dea02986e0fa70c9bf.png)

Finally,configure the programs as in the following picture and click OK.

![pic4](/predownloaded/ea/3d/ea3d9d09b47b9fc0e685afcad41c76847cd297e0.png)

To use the tool,simply switch your compiler to CodeRunner and press the Compile button(or F9)!

![pic5](/predownloaded/1d/30/1d30caa39371dae1373d39824ee6ddf6f982317d.png)

A window will pop up,which will ask you to fetch the testcases and test your code.

Enjoy!

