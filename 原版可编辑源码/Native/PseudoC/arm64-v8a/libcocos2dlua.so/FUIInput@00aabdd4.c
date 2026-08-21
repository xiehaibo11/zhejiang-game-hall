
/* fairygui::FUIInput::FUIInput() */

void __thiscall fairygui::FUIInput::FUIInput(FUIInput *this)

{
  TextFormat *this_00;
  
  cocos2d::ui::EditBox::EditBox((EditBox *)this);
  *(undefined ***)this = &PTR__FUIInput_016a94f8;
  *(undefined ***)(this + 0x318) = &PTR__FUIInput_016a9ba8;
  *(undefined ***)(this + 0x4f0) = &PTR__FUIInput_016a9bd0;
  this_00 = operator_new(0x58);
  TextFormat::TextFormat(this_00);
  *(TextFormat **)(this + 0x5d0) = this_00;
  this[0x5d8] = (FUIInput)0x0;
  *(undefined4 *)(this + 0x5dc) = 0;
  return;
}

