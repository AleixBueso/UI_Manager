#ifndef __j1GUI_H__
#define __j1GUI_H__

#include "j1Module.h"
#include "p2Point.h"
#include "UI Element.h"
#include "Label.h"
#include "Button.h"
#include "Input Box.h"
#include "Image.h"
#include "Cursor.h"

#define CURSOR_WIDTH 2

// TODO 1: Create your structure of classes

class UI_Manager : public j1Module
{
	p2List<UI_Element*> element_list;
	p2Point<int> pos;
public:
	Label* CreateLabel();
	Button* CreateButton();
	InputBox* CreateInputBox();
	Image* CreateImage();
};


// ---------------------------------------------------
class j1Gui : public j1Module
{
public:

	j1Gui();

	// Destructor
	virtual ~j1Gui();

	// Called when before render is available
	bool Awake(pugi::xml_node&);

	// Call before first frame
	bool Start();

	// Called before all Updates
	bool PreUpdate();

	// Called after all Updates
	bool PostUpdate();

	// Called before quitting
	bool CleanUp();

	// TODO 2: Create the factory methods
	// Gui creation functions

	const SDL_Texture* GetAtlas() const;

private:

	SDL_Texture* atlas;
	p2SString atlas_file_name;
};

#endif // __j1GUI_H__