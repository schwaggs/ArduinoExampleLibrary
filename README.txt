=======================================
Instructions
=======================================

1. Open the corresponding shortcut to your system (There are libraries in both the user profile and program files).

2. Create a new folder with the desired name of your library. This is what will show in the dropdown in the Arduino IDE.

3. Inside that folder create a header file and implementation file and call them whatever you want.

4. Inside the header file write up a header guard, include the Arduino header file, and create your class or whatever.

5. Inside the implementation file include your header file and write function implementations, constructors, or whatever.

6. Next create a new text file and name it "keywords". Inside this text file you create the keywords of your library that will be highlighted
   by Arduino. To do this, write the desired keyword immediatley followed by a tab, no spaces, and the phrase "KEYWORDX" where X is 1, 2, 3...

7. Now inside our library folder create a new folder called "examples". This is where your example sketches will go that appear in the dropdown in the Arduino IDE.

8. To create an example sketch just create a new Arduino project and save it to the examples folder with the desired example name that will display in the    dropdown.

9. Now with all Arduino windows closed, open arduino and create a new sketch. In the sketch tab, under "Include Library", you should see your new library under "Contributed Libraries".

10. In the file tab, under "Examples", you should see an entry for your library name. This should dropout to a list of the examples you created in the     examples folder.


=======================================
Notes
=======================================
- The included "Example Library" folder contains all the files that should be created for the library.
- Each entry in the keywords file must be followed by a tab and no leading or trailing spaces followed by the phrase "KEYWORDX" where X is 1, 2, 3...
- It is not required to create a class for a library.