# Final Course Project | Game Engine Design and Implementation
Jaden Chen 100912701

- As I completed the project solo, I implemented the Optimization, Observer and State design patterns, also including improvements from the previous assignment and Performance Profiling.

#### Game Design Pattern Improvements from the previous assignment
A major improvement that I have made from the previous assignment is upgrading the audio manager singleton to play context-based soundtracks depending on what the player is doing. I have implemented the State design pattern in my Singleton to handle playing specific music in different game states, such as when the player is in combat, in a UI menu, or out of combat.

<img width="1814" height="720" alt="Screenshot 2025-11-19 232825" src="https://github.com/user-attachments/assets/058fa02a-88e7-47d7-88d5-f0f85851a495" />

This is the function that changes the music state inside the audio manager Singleton. The reason why I implemented it this way was due to the Singleton being a global instance that can be accessed from any class. For instance, inside my game, I accessed the singleton to change the music state from 3 different blueprints across my project for certain events, such as entering the main menu level, which changes to the InMenu state, entering the main level, which changes to the Default state, and hitting the boss, which changes to the InCombat state. It was also implemented this way due to most of the audio logic in the game already being handled by the Singleton.

#### Optimization
The optimization design pattern that I chose to implement was Dirty Flag. It seemed like the most reasonable optimization pattern to implement in my project for one main reason which was the size of the project. 

<img width="681" height="96" alt="DirtyFlag" src="https://github.com/user-attachments/assets/b2c3fc37-8d8a-40ce-a243-e8bb2b18c1cc" />



#### Observer and State


#### Performance Profiling


#### Video Report
https://youtu.be/swCHUKtXIfY
