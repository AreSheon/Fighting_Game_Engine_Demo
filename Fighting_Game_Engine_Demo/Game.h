#pragma once

#ifndef GAME_H
#define GAME_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

enum GameState
{
	menu,
	characterSelect,
	play,
	end
};

//central game uber class

class Game
{
	GameState state;
	bool keys[1024];//not sure what this is for. I'm assuming for key inputs
	unsigned int width, height;//width height of screen
	//constructor/destructor
	Game(unsigned int width, unsigned int height);
	~Game();

	void Init();//this initialize game state -> textures, shaders, level etc
	
	//game loop
	void ProccessInput(float dt);
	void Update(float dt);
	void Draw();

};


#endif