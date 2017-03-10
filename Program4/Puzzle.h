//
// Created by thuan on 01/03/17.
//

#ifndef UNTITLED_PUZZLE_H
#define UNTITLED_PUZZLE_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Puzzle
{
public:
	Puzzle();
	
	virtual ~Puzzle();
	
	/*
	 * This function is used to help printout the content of a Puzzle
	 * @param output the output stream
	 * @param thePuzzle the Puzzle to print out
	 */
	friend ostream &operator<<(ostream &output , const Puzzle &thePuzzle);
	
	/*
	 * This function is used to take parse information to a Puzzle
	 * @param input the Input Stream
	 * @param theFile
	 */
	friend istream &operator>>(istream &input , Puzzle &puzzle);
	
	/*
	 * This is a helper method for the output method
	 * Because different Puzzle have different ways to print out, so this is a virtual method
	 */
	virtual void helpOutput(ostream &output) const = 0;
	
	/*
	 * This is a helper method for the input method
	 * Because different Puzzle have different ways 
	 */
	virtual void helpInput(istream &input) = 0;



};


#endif //UNTITLED_PUZZLE_H
