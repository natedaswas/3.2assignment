//MAIN STUFF:


#include "header.h"


//DAT CONSTRUCTOR DO OH SNAP BOI

sequence::sequence()
{

}

//RESETS THE INDEX TO 0 SO YOU CAN START RETRIEVING THINGS
void sequence::start()
{
	current_index = 0;
	return;
}

//INCREASES THE CURRENT INDEX BY 1!!! WOW!!!
void sequence::advance()
{
	current_index++;
	return;
}

//UMM IM GUESS WE INSERT A NEW THING AT THE CURRENT INDEX
void sequence::insert(double& entry)
{	
	
	//precondition (size < capacity)
	if (current_index >= used)
	data[current_index] = entry;
	else
	{
	  for (int i = used; i > current_index; i--)
	  {	
	  data[i] = data[i -1];
	  }
	data[current_index] = entry;
	}
	used++;
}

//YEAH NO CLUE
void sequence::attach(double& entry)
{
	//precondition (size < capacity)
        if (current_index >= used)
        data[current_index] = entry;
        else
        {
          for (int i = used; i > (current_index + 1); i--)
          {
          data[i] = data[i -1];
          }
        data[current_index + 1] = entry;
        }
        used++;
}

//MAYBE THIS ONE REMOVES THE CURRENT SOMETHING
void sequence::remove_current()
{
	return;
}

//getter for the size of our sequence
size_type sequence::size()
{
        return used;
}

bool sequence::is_item()
{
        //yeah I don't know
        return;
}

value_type sequence::current()
{
        return current_index;
}

//THESE METHOD NAMES ARE AWFUL WHO WRITES THIS

//void statistician::next_number(double _next)



