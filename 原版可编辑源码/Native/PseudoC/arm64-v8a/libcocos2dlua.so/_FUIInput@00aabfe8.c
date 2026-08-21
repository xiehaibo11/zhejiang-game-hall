
/* non-virtual thunk to fairygui::FUIInput::~FUIInput() */

void __thiscall fairygui::FUIInput::~FUIInput(FUIInput *this)

{
  EditBox *this_00;
  byte *pbVar1;
  
  this_00 = (EditBox *)(this + -0x318);
  *(undefined ***)this_00 = &PTR__FUIInput_016a94f8;
  pbVar1 = *(byte **)(this + 0x2b8);
  *(undefined ***)this = &PTR__FUIInput_016a9ba8;
  *(undefined ***)(this + 0x1d8) = &PTR__FUIInput_016a9bd0;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 1) != 0) {
      operator_delete(*(void **)(pbVar1 + 0x10));
    }
    operator_delete(pbVar1);
  }
  cocos2d::ui::EditBox::~EditBox(this_00);
  operator_delete(this_00);
  return;
}

