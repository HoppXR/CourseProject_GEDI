# Course Project | Game Engine Design and Implementation
Jaden Chen 100912701

#### Group formation
I decided to work alone on this project for two reasons: to get a more in-depth understanding of the course material, and to create systems that will most likely be implemented in my GDW game. I figured that for this project, it would be a good idea to create systems that could be used in my GDW game, so 
I could save time by creating 5 systems applicable to both my GDW game and this project, instead of creating 5 systems specifically for this project, then having to create an additional 1-5 for my game.

- I will be contributing 100% of the work and will be responsible for the Singleton, Factory, Command, Plugin/DLL, and Observation design pattern ideation and implementation.

#### Interactive media scenario information
The scenario I will be using to develop the assignment's deliverables will be a boss fight scene loosely inspired by my GDW game. The purpose of this scenario is to provide a small scope game that presents all implementations of the assignment deliverables and to create systems eligible to be implemented in my GDW game. 
The player is expected to use various abilities, such as a fire or water ability, to defeat the boss. The game will include audio functionality, a simple combat system, a boss enemy, and various systems to handle health, damage, ability spawning, etc.

#### Singleton
<img width="700" height="478" alt="singleton" src="https://github.com/user-attachments/assets/18eae267-eb6e-4194-b172-7a32c30be148" />

For the singleton implementation, I decided to create an Audio Manager using the Game Instance Blueprint that manages the playback of sound effects and music, stops music, and adjusts audio volume.
It was implemented this way to provide easy access to playing sound effects and music or stopping music from any class. The main reason for this way of implementation was to make adjusting the volume of both sound effects and music simpler.
For instance, the singleton that I have implemented contains a variable that corresponds to the sound effect or music volume managed in one single place. If I wanted to do volume control without a singleton, I would have to set the volume of every sound effect I use manually.
My interactive media experience benefits from this because audio is a crucial part of any game, and being able to easily handle audio inside any game makes the development process simpler.

#### Command design pattern
<img width="1224" height="292" alt="Command" src="https://github.com/user-attachments/assets/9f762956-59e2-488e-8fec-f9226eb39de4" />

The command design pattern implementation was definitely the trickiest one. I decided to create a system that handles commands for the gameplay mechanics. To explain in further detail, I created a command interface that includes an execution function that allows commands like swapping abilities and attacking to be created.
The command pattern was implemented this way to allow for a more complex but better way of handling gameplay mechanic logic, where the ability logic is all handled inside the command, while the execution can be handled anywhere as long as there is a reference to it. 
The command implementation benefits the experience as it provides a more modular approach to creating and executing abilities in the game.

#### Factory pattern
<img width="797" height="310" alt="factory" src="https://github.com/user-attachments/assets/5edf21e8-9e4d-4fb3-a9d0-86160b822776" />

Moving on to the factory pattern implementation, I created a factory that creates different abilities. The base object that the factory produces is a projectile, but inheriting from the projectile, I created a fire and water projectile that have their own unique interactions with the boss and player.
It was implemented this way to make spawning the abilities easier while also providing a better implementation alongside the command design pattern. The experience benefits from this implementation because it creates a very modular system that can be easily expanded in the future if more abilities need to be added.

#### Plugin/DLL
<img width="317" height="302" alt="plugin" src="https://github.com/user-attachments/assets/d2ee53c0-cd19-4832-9a74-198f32a6f4c2" />

When it comes to the Plugin/DLL implementation, I created a health system that can add health, take away health, and check if the entity is dead. I used this in my game to handle the health of the player and the boss enemy. It is a very basic implementation of a health system, but it can be further iterated upon to allow for more features, like storing health data inside the system instead of creating health data individually for each entity. This implementation suits this experience as it provides a very easy-to-use system to do simple health calculations, while also being extremely reusable on possible future projects where a health system would be needed.

#### Video Report
https://youtu.be/ROFFGtmd5G8
