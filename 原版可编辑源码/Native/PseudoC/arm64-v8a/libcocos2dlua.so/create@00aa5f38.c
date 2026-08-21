
/* fairygui::BitmapFont::create() */

Ref * fairygui::BitmapFont::create(void)

{
  Ref *this;
  
  this = operator_new(0x38);
  cocos2d::Ref::Ref(this);
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (Ref)0x0;
  *(undefined ***)this = &PTR__BitmapFont_016a7a60;
  *(undefined8 *)(this + 0x30) = 0;
  cocos2d::Ref::autorelease(this);
  return this;
}

