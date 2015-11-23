#include "Image.h"

#ifndef __CURSOR_H__
#define __CURSOR_H__
class Cursor : public UI_Element
{
	Image cursor_image;
public:
	Cursor();

	// Destructor
	virtual ~Cursor();

	// Call before first frame
	bool Start();

	// Called before all Updates
	bool PreUpdate();

	// Called after all Updates
	bool PostUpdate();

	// Called before quitting
	bool CleanUp();
};
#endif //__CURSOR_H__