#include <iostream>
#include <vector>
#include <string>

//signature function
int main()
{
    std::cout << "Hello world!" << std::endl;
}
/*
shell:
ubuntu -- pacman = apt
man (package) -- manual for the chosen package
whoami -- get the name of current user
su (user) -- change the current user
ctrl + r -- search for previostly used commands
ctrl + a/e -- move cursor to left/right
grep -- find (-r recursive) in this reguar expressions work
cat -- concatenate (view many files)
tac -- reversed cat
head/tain -n N -- view N lines
ls | grep .cpp -- find all c++ files


navigation:
ls -- list of files (-a view hidden files)(-l more information)
pwd -- print working directory
cd .. -- move one layer up
cd - -- move to the previous directory
mkdir -- make directory
rmdir -- remove dir
mv -- rename file
chmod -- change mode (chmod +x scripts.sh)
file (file) -- view info about file
cp (from) (to) -- copy (-r for firectories)
cat `cat file_names` -- print the internal of files that listed in file_names
cat file_names | xargs cat -- basically the same as previous, but there we take names from file_names and give it as args to cat
echo -- print the arg
echo "2 * 4" | bc -- give the 2*4 as the argument to the asic calc
ps aux | grep python -- find process python
htop - get the gui for processes

https://overthewire.org/wargames/bandit/ -- training tasks

while man:
-N -- reveal numeration of lines
/name -- find name
~./bashrc -- set up terminal
*/