# Final Course Project | Game Engine Design and Implementation
Jaden Chen 100912701

- As I completed the project solo, I implemented the Optimization, Observer and State design patterns, also including improvements from the previous assignment and Performance Profiling.

#### Game Design Pattern Improvements from the previous assignment
A major improvement that I have made from the previous assignment is upgrading the audio manager singleton to play context-based soundtracks depending on what the player is doing. I have implemented the State design pattern in my Singleton to handle playing specific music in different game states, such as when the player is in combat, in a UI menu, or out of combat.

<img width="1814" height="720" alt="Screenshot 2025-11-19 232825" src="https://github.com/user-attachments/assets/058fa02a-88e7-47d7-88d5-f0f85851a495" />

This is the function that changes the music state inside the audio manager Singleton. The reason why I implemented it this way was due to the Singleton being a global instance that can be accessed from any class. For instance, inside my game, I accessed the singleton to change the music state from 3 different blueprints across my project for certain events, such as entering the main menu level, which changes to the InMenu state, entering the main level, which changes to the Default state, and hitting the boss, which changes to the InCombat state. It was also implemented this way due to most of the audio logic in the game already being handled by the Singleton.

#### Optimization
The Optimization design pattern that I chose to implement was Dirty Flag. It seemed like the most reasonable optimization pattern to implement in my project for one main reason, which was the size of the project. Considering the low scope of my game, Object Pooling does not seem to be a viable optimization, as it could possibly make the systems inside of my game more complex while also providing little to no performance improvement.

<img width="1362" height="192" alt="DirtyFlag" src="https://github.com/user-attachments/assets/b2c3fc37-8d8a-40ce-a243-e8bb2b18c1cc" />

I decided to implement the Dirty Flag design pattern in my health handler blueprint that updates the health UI for the boss and player. More specifically, the boss's health UI was handled using Dirty Flag. In the diagram above, the event tick function was used to implement the Dirty Flag pattern and a boolean was used to check if 
the object was dirty or not, executing game logic if it's dirty, and doing nothing if it's clean. My game benefits from this because it is a very simple and lightweight optimization technique that handles the changes of certain data inside my game, such as boss health in this example.

#### Observer
The Observer pattern was implemented in the health handler blueprint as well, but it handles the health UI for the player. It observes for the Notified event, and once it is called, it updates the player health variable and updates the player health UI.

<img width="591" height="348" alt="Observer" src="https://github.com/user-attachments/assets/179cf64f-38bc-4db1-ace0-2b6ccf991798" />

It was implemented this way since most of the UI in my game from the last assignment was implemented in the event tick function, causing the UI to update every frame, even when there was no change to be made. With the Observer implementation, it prevents unnecessary UI updates, which saves on frame computing time and only updates the UI when notified, resulting in a system that is both accurate and optimized.

#### State
The State pattern was implemented in my audio manager singleton to create different states in which a selected music track will play, depending on which state the player is currently in. The music state can be easily changed from any class in the game using a function in the audio manager singleton that takes an EMusicState Enum value that corresponds to its respective state and music soundtrack.

<img width="817" height="342" alt="State" src="https://github.com/user-attachments/assets/14a65d98-1299-470e-a6cf-a8f4d5822fcd" />

The pattern was implemented this way to have a cleaner, more readable, and modular way to play music depending on the context of the game. It allows the developer to add more states with their own unique behaviour to the audio manager if necessary. It benefits my game greatly as it allows for quick and smooth transitions between different music tracks in the game, depending on whether the player is in a UI menu or in combat. For example, when the player starts attacking the boss, the music state switches to the InCombat state, which changes the music to a boss fight theme, improving the player's immersion in the game.

#### Performance Profiling

There were 2 main aspects that stood out when looking at the performance of the game. They were the pause menu and the boss hit frame. In the previous assignment, when I implemented the UI elements in my game, I had them all constantly updating every frame, even if the value didn't change at all. This was quite a big issue when it came to the performance in both the pause menu and health UI, as the pause menu was calling to the audio manager every frame, updating the volume variables, which had a pretty big performance impact on the frame time, whereas the health UI kept constantly updating the player health and boss health text on the screen which had a slight impact on frame times.

<img width="356" height="372" alt="Performance" src="https://github.com/user-attachments/assets/4edac8f1-3f95-4be1-a71b-736cfce47f50" />

With the performance improvements of updating the UI and audio manager variables only when changed, it resulted in a small improvement to the frame times. The rough estimate of the improvement for the pause menu is around 2.4ms, whereas the boss hit frame had a tiny improvement of 0.4ms from the last assignment. These frame times may vary, but will be in a relative range.

##### Pause Menu previous assignment
<img width="1145" height="509" alt="Screenshot 2025-11-20 235505" src="https://github.com/user-attachments/assets/a210dc1d-c4ab-45a1-beeb-a76f56d1809b" />

##### Pause Menu current (2.4ms difference)
<img width="1147" height="525" alt="Screenshot 2025-11-20 235616" src="https://github.com/user-attachments/assets/8c768f3c-2f75-4d12-b434-2e826064d03d" />

##### Boss Hit Frame previous assignment
<img width="1148" height="576" alt="Screenshot 2025-11-20 235839" src="https://github.com/user-attachments/assets/15544310-151b-4a50-90fc-9e6ddaaafeb2" />

##### Boss Hit Frame current (0.4ms difference)
<img width="1145" height="555" alt="Screenshot 2025-11-20 235904" src="https://github.com/user-attachments/assets/a7e91650-5614-40b6-a13a-1281afac5ca1" />


#### Video Report
https://youtu.be/swCHUKtXIfY
