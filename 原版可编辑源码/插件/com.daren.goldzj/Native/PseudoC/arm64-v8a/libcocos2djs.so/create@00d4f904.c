
/* dragonBones::CCArmatureDisplay::create() */

Ref * dragonBones::CCArmatureDisplay::create(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Ref *this;
  
  this = operator_new(0xd0,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    *(undefined ***)(this + 0xc0) = &PTR__IEventDispatcher_01c91768;
    cocos2d::Ref::Ref(this);
    this[0xc] = (Ref)0x0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)this = 0x1c915a0;
    *(undefined8 *)(this + 0xc0) = 0x1c91688;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x48) = 0xffffffffffffffff;
    uVar2 = cocos2d::Color4F::WHITE._8_8_;
    uVar1 = cocos2d::Color4F::WHITE._0_8_;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x40) = uVar2;
    *(undefined8 *)(this + 0x38) = uVar1;
    *(undefined4 *)(this + 0x50) = 0xffffffff;
    *(undefined4 *)(this + 0x58) = 0xffffffff;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0x62) = 0;
    *(undefined8 *)(this + 0x5c) = 0;
    *(Ref **)(this + 0x18) = this + 0x20;
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined8 *)(this + 0xb0) = 0;
    cocos2d::Ref::autorelease(this);
  }
  return this;
}

