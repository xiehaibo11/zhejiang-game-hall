
/* cocostudio::ActionMoveFrame::~ActionMoveFrame() */

void __thiscall cocostudio::ActionMoveFrame::~ActionMoveFrame(ActionMoveFrame *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x38);
  *(undefined ***)this = &PTR__ActionMoveFrame_016c7a80;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x40) = pvVar1;
    operator_delete(pvVar1);
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

