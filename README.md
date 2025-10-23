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
For the singleton implementation, I decided to create an Audio Manager using the Game Instance Blueprint that manages the playback of sound effects and music, stopping music, and audio volume adjustability.
It was implemented this way to provide easy access to playing sound effects and music or stopping music from any class. The main reason for this way of implementation was to make adjusting the volume of both sound effects and music simpler.
For instance, the singleton that I have implemented contains a variable that corresponds to the sound effect or music volume managed in one single place. If I wanted to do volume control without a singleton i would have to set the volume of every sound effect I use manually.
My interactive media experience benefits from this because audio is a crucial part of any game and being able to easily handle audio inside any game makes the development process simpler.

#### Command design pattern
When it comes to the command design pattern implementation, I decided to create a system that 

#### Factory pattern
Moving on to the factory pattern implementation, I created a factory that creates different abilities. The base object that the factory produces is a projectile, but inheriting from the projectile I created a fire and water projectile that have their own unique interactions with the boss and player.


#### Plugin/DLL


#### Video Report
