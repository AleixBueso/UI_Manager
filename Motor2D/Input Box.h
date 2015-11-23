#include "Image.h"

#ifndef __INPUT_BOX_H__
#define __INPUT_BOX_H__
class InputBox : public UI_Element
{
	SDL_Rect rect;
	Image* box_image;
public:
	InputBox();

	// Destructor
	virtual ~InputBox();

	// Call before first frame
	bool Start();

	// Called before all Updates
	bool PreUpdate();

	// Called after all Updates
	bool PostUpdate();

	// Called before quitting
	bool CleanUp();
};

#endif //__INPUT_BOX_H__