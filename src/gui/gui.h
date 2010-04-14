/* $Id$ */

#ifndef GUI_GUI_H
#define GUI_GUI_H

extern void GUI_DrawWiredRectangle(uint16 left, uint16 top, uint16 right, uint16 bottom, uint16 colour);
extern void GUI_DisplayText(const char *str, uint16 arg0A, ...);
extern void GUI_DrawText(char *string, int16 left, int16 top, uint8 arg0E, uint8 arg10);
/* editbox.c */
extern uint16 GUI_EditBox(csip32 text, uint16 maxLength, uint16 unknown1, csip32 wcsip, csip32 uknown3, uint16 unknown4);


extern void emu_GUI_DrawWiredRectangle();
extern void emu_GUI_DisplayText();
extern void emu_GUI_DrawText();
/* emu_editbox.c */
extern void emu_GUI_EditBox();

#endif /* GUI_GUI_H */
