
/* cocos2d::Pass::~Pass() */

void __thiscall cocos2d::Pass::~Pass(Pass *this)

{
  *(undefined ***)this = &PTR__Pass_01724160;
  if (*(Ref **)(this + 0x60) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x60));
  }
  if (*(Ref **)(this + 0x68) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x68));
  }
  RenderState::~RenderState((RenderState *)this);
  return;
}

