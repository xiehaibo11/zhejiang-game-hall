
/* cocos2d::RenderState::RenderState() */

void __thiscall cocos2d::RenderState::RenderState(RenderState *this)

{
  Ref *this_00;
  
  Ref::Ref((Ref *)this);
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (RenderState)0x1;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__RenderState_01724270;
  *(undefined8 *)(this + 0x58) = 0;
  this_00 = (Ref *)StateBlock::create();
  *(Ref **)(this + 0x30) = this_00;
  if (this_00 != (Ref *)0x0) {
    Ref::retain(this_00);
  }
  return;
}

