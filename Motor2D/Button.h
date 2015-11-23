#include "UI Element.h"
#include "p2SString.h"
#include "SDL_image\include\SDL_image.h"
#include "Image.h"

#ifndef __BUTTON_H__
#define __BUTTON_H__
class Button : public UI_Element
{
	SDL_Rect rect;
	Image* button_image;
public:
	Button();

	// Destructor
	virtual ~Button();

	// Call before first frame
	bool Start();

	// Called before all Updates
	bool PreUpdate();

	// Called after all Updates
	bool PostUpdate();

	// Called before quitting
	bool CleanUp();
};

#endif //__BUTTON_H__