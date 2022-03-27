// Copyright Eric Chauvin 2022.



/*
To Do:

Uint16 with markers.
UTF8 encoding?


A C Preprocessor Error Checker
I have to make a dictionary of all macros and then check
to see that I'm not using any of them.
That they aren't interfering.
That, I can write an article about.


-H, --trace-includes
Show header includes and nesting depth


A preprocessor could also clean up things like ifdef POSIX
and remove things you don't want.
So it cleans up include files.
Or make a dictionary showing macros that are just #defined
but empty.  With #ifdefs associated with them.


Experiment to see what this changes.
-nobuiltininc
Disable builtin #include directories

-E, --preprocess
Only run the preprocessor

use -v to see the paths, then modify them with these
and see what they do.
clang++ -isystem
iquote

It will use an environment variable to add include search
paths.
What exactly is being included?
-v for verbose output to see it.




stdlib.h

// Execute the given line as a shell command.

extern int system (const char *__command) __wur;

What is it execlv() or what?


*/






#pragma once


// I never use the C preprocessor except to use
// #include statements.


#include "../LinuxApi/BasicTypes.h"
#include "../LinuxApi/FileIO.h"



class MainApp
  {
  private:
  FileIO mainIO;

  public:
  inline static const char* getVersionStr( void )
    {
    return "3/27/2022";
    }

  // Int32 mainLoop( Int32 argc, char* argv[] );
  Int32 mainLoop( void );

  };
