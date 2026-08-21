
/* cocos2d::Pass::Pass() */

void __thiscall cocos2d::Pass::Pass(Pass *this)

{
  RenderState::RenderState((RenderState *)this);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 0x405;
  *(undefined ***)this = &PTR__Pass_01724160;
  this[0x74] = (Pass)0x1;
  return;
}

