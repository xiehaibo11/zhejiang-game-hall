
/* fairygui::HtmlParser::HtmlParser() */

void __thiscall fairygui::HtmlParser::HtmlParser(HtmlParser *this)

{
  undefined2 uVar1;
  
  *(undefined ***)this = &PTR__HtmlParser_016aa9f8;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  TextFormat::TextFormat((TextFormat *)(this + 0x48));
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  cocos2d::Color3B::Color3B((Color3B *)(this + 0xc9));
  uVar1 = HtmlParseOptions::defaultLinkColor;
  this[0xcb] = DAT_01782ac6;
  *(undefined2 *)(this + 0xc9) = uVar1;
  this[200] = HtmlParseOptions::defaultLinkUnderline;
  return;
}

