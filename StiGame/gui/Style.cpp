#include <iostream>
#include "Style.h"

#include "GamePath.h"

namespace StiGame
{

namespace Gui
{

Style::Style(void)
{
	//foreground = Color(200, 250, 250);
	//background = Color(15, 15, 15);
    foreground = Color(25, 25, 25);
	background = Color(245, 245, 245);
	highlightForeground = Color(255, 255, 255);
	highlightBackground = Color(120, 120, 120);

	normalFont = new Font(GamePath::getFilepath(AssetRoot, "font.ttf").c_str(), 16);
	bigFont = new Font(GamePath::getFilepath(AssetRoot, "font.ttf").c_str(), 32);

	dropListArrow = new Surface(GamePath::getFilepath(AssetGui, "droplist_arrow.png").c_str());
	upArrow = new Surface(GamePath::getFilepath(AssetGui, "uparrow.png").c_str());
	downArrow = new Surface(GamePath::getFilepath(AssetGui, "downarrow.png").c_str());
	checkbox = new Surface(GamePath::getFilepath(AssetGui, "checkbox.png").c_str());
	checkboxChecked = new Surface(GamePath::getFilepath(AssetGui, "checkbox_checked.png").c_str());
	radio = new Surface(GamePath::getFilepath(AssetGui, "radio.png").c_str());
	radioChecked = new Surface(GamePath::getFilepath(AssetGui, "radio_true.png").c_str());
	buttonLeft = new Surface(GamePath::getFilepath(AssetGui, "button_left.png").c_str());
	buttonRight = new Surface(GamePath::getFilepath(AssetGui, "button_right.png").c_str());
	buttonBackground = new Surface(GamePath::getFilepath(AssetGui, "button_bg.png").c_str());
	buttonHighlightLeft = new Surface(GamePath::getFilepath(AssetGui, "hbutton_left.png").c_str());
	buttonHighlightRight = new Surface(GamePath::getFilepath(AssetGui, "hbutton_right.png").c_str());
	buttonHighlightBackground = new Surface(GamePath::getFilepath(AssetGui, "hbutton_bg.png").c_str());

    spinnerUpArrow = new Surface(GamePath::getFilepath(AssetGui, "spinner_uparrow.png").c_str());
    spinnerDownArrow = new Surface(GamePath::getFilepath(AssetGui, "spinner_downarrow.png").c_str());
}

Surface *Style::getRadio(void)
{
    return radio;
}

Surface *Style::getRadioChecked(void)
{
    return radioChecked;
}

Surface *Style::getCheckbox(void)
{
    return checkbox;
}

Surface *Style::getCheckboxChecked(void)
{
    return checkboxChecked;
}

Surface *Style::getDropListArrow(void)
{
    return dropListArrow;
}

Color *Style::getBackground(void)
{
	return &background;
}

Color *Style::getForeground(void)
{
	return &foreground;
}

Color *Style::getHighlightBackground(void)
{
	return &highlightBackground;
}

Color *Style::getHighlightForeground(void)
{
	return &highlightForeground;
}

Font *Style::getNormalFont(void)
{
	return normalFont;
}

Surface *Style::getUpArrow(void)
{
    return upArrow;
}

Surface *Style::getDownArrow(void)
{
    return downArrow;
}

void Style::unload(void)
{
	delete normalFont;
}

Surface* Style::getButtonLeft(void)
{
    return buttonLeft;
}

Surface* Style::getButtonRight(void)
{
    return buttonRight;
}

Surface* Style::getButtonBackground(void)
{
    return buttonBackground;
}

Surface* Style::getHighlightButtonLeft(void)
{
    return buttonHighlightLeft;
}

Surface* Style::getHighlightButtonRight(void)
{
    return buttonHighlightRight;
}

Surface* Style::getHighlightButtonBackground(void)
{
    return buttonHighlightBackground;
}


Surface* Style::getSpinnerUpArrow(void)
{
    return spinnerUpArrow;
}

Surface* Style::getSpinnerDownArrow(void)
{
    return spinnerDownArrow;
}


Font* Style::getBigFont(void)
{
    return bigFont;
}

Style::~Style(void)
{
}

}

}

#ifdef C_WRAPPER
extern "C"
{
    StiGame::Gui::Style* Style_new()
    {
        return new StiGame::Gui::Style();
    }

    StiGame::Color* Style_getForeground(StiGame::Gui::Style *style)
    {
        return style->getForeground();
    }

    StiGame::Color* Style_getBackground(StiGame::Gui::Style *style)
    {
        return style->getBackground();
    }

    StiGame::Color* Style_getHighlightForeground(StiGame::Gui::Style *style)
    {
        return style->getHighlightForeground();
    }

    StiGame::Color* Style_getHighlightBackground(StiGame::Gui::Style *style)
    {
        return style->getHighlightBackground();
    }

    StiGame::Surface* Style_getDropListArrow(StiGame::Gui::Style *style)
    {
        return style->getDropListArrow();
    }

    StiGame::Surface* Style_getUpArrow(StiGame::Gui::Style *style)
    {
        return style->getUpArrow();
    }

    StiGame::Surface* Style_getDownArrow(StiGame::Gui::Style *style)
    {
        return style->getDownArrow();
    }

    StiGame::Surface* Style_getCheckbox(StiGame::Gui::Style *style)
    {
        return style->getCheckbox();
    }

    StiGame::Surface* Style_getCheckboxChecked(StiGame::Gui::Style *style)
    {
        return style->getCheckboxChecked();
    }

    StiGame::Surface* Style_getRadio(StiGame::Gui::Style *style)
    {
        return style->getRadio();
    }

    StiGame::Surface* Style_getRadioChecked(StiGame::Gui::Style *style)
    {
        return style->getRadioChecked();
    }
}
#endif // C_WRAPPER
