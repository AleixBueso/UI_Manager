#include "UI Element.h"
#include "p2SString.h"

#ifndef __LABEL_H__
#define __LABEL_H__
class Label : public UI_Element
{
	p2SString text;
public:
	Label();

	// Destructor
	virtual ~Label();

	// Call before first frame
	bool Start();

	// Called before all Updates
	bool PreUpdate();

	// Called after all Updates
	bool PostUpdate();

	// Called before quitting
	bool CleanUp();
};

#endif //__LABEL_H__