
/* non-virtual thunk to fairygui::FUILabel::~FUILabel() */

void __thiscall fairygui::FUILabel::~FUILabel(FUILabel *this)

{
  byte *pbVar1;
  
  *(undefined ***)(this + -0x2f8) = &PTR__FUILabel_016a8180;
  pbVar1 = *(byte **)(this + 0x3a8);
  *(undefined ***)(this + 8) = &PTR__FUILabel_016a87d0;
  *(undefined ***)this = &PTR__FUILabel_016a87a0;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 1) != 0) {
      operator_delete(*(void **)(pbVar1 + 0x10));
    }
    operator_delete(pbVar1);
  }
  if (((byte)this[0x3b0] & 1) != 0) {
    operator_delete(*(void **)(this + 0x3c0));
  }
  cocos2d::Label::~Label((Label *)(this + -0x2f8));
  return;
}

