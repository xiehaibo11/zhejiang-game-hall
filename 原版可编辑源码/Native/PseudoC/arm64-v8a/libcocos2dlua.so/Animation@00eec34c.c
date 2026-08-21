
/* cocos2d::Animation::Animation() */

void __thiscall cocos2d::Animation::Animation(Animation *this)

{
  Ref::Ref((Ref *)this);
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR__Animation_016fa430;
  *(undefined ***)(this + 0x28) = &PTR_clone_016fa458;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x58] = (Animation)0x0;
  return;
}

