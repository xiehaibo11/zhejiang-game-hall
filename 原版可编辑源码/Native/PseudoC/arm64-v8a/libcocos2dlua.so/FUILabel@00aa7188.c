
/* fairygui::FUILabel::FUILabel() */

void __thiscall fairygui::FUILabel::FUILabel(FUILabel *this)

{
  TextFormat *this_00;
  
  cocos2d::Label::Label((Label *)this,0,0);
  *(undefined ***)this = &PTR__FUILabel_016a8180;
  *(undefined ***)(this + 0x300) = &PTR__FUILabel_016a87d0;
  *(undefined ***)(this + 0x2f8) = &PTR__FUILabel_016a87a0;
  this_00 = operator_new(0x58);
  TextFormat::TextFormat(this_00);
  *(TextFormat **)(this + 0x6a0) = this_00;
  *(undefined8 *)(this + 0x6a8) = 0;
  *(undefined8 *)(this + 0x6b8) = 0;
  *(undefined8 *)(this + 0x6b0) = 0;
  *(undefined4 *)(this + 0x6c0) = 0xffffffff;
  *(undefined2 *)(this + 0x6c4) = 0;
  return;
}

