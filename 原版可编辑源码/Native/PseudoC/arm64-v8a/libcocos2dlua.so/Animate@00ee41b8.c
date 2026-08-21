
/* cocos2d::Animate::Animate() */

void __thiscall cocos2d::Animate::Animate(Animate *this)

{
  undefined8 *puVar1;
  
  Action::Action((Action *)this);
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined ***)this = &PTR__Animate_016f8960;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f89c0;
  puVar1 = operator_new(0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined8 **)(this + 0x58) = puVar1;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  return;
}

