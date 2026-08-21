
/* cocos2d::extension::ControlSwitchSprite::~ControlSwitchSprite() */

void __thiscall
cocos2d::extension::ControlSwitchSprite::~ControlSwitchSprite(ControlSwitchSprite *this)

{
  *(undefined ***)this = &PTR__ControlSwitchSprite_016ebef0;
  *(undefined ***)(this + 0x2f8) = &PTR__ControlSwitchSprite_016ec618;
  *(undefined ***)(this + 0x530) = &PTR__ControlSwitchSprite_016ec658;
  if (*(Ref **)(this + 0x558) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x558));
  }
  if (*(Ref **)(this + 0x560) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x560));
  }
  if (*(Ref **)(this + 0x568) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x568));
  }
  if (*(Ref **)(this + 0x570) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x570));
  }
  if (*(Ref **)(this + 0x578) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x578));
  }
  if (*(Ref **)(this + 0x548) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x548));
  }
  if (*(Ref **)(this + 0x580) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x580));
  }
  Sprite::~Sprite((Sprite *)this);
  return;
}

