#include "SDL_image\include\SDL_image.h"

#ifndef __IMAGE_H__
#define __IMAGE_H__
class Image : public UI_Element
{
	SDL_Texture* texture;
public:
	Image();

	// Destructor
	virtual ~Image();

	// Call before first frame
	bool Start();

	// Called before all Updates
	bool PreUpdate();

	// Called after all Updates
	bool PostUpdate();

	// Called before quitting
	bool CleanUp();

	void Draw();
};

#endif //__IMAGE_H__