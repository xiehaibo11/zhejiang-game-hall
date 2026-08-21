
/* cocos2d::Particle3DRender::copyAttributesTo(cocos2d::Particle3DRender*) */

void __thiscall
cocos2d::Particle3DRender::copyAttributesTo(Particle3DRender *this,Particle3DRender *param_1)

{
  Ref *this_00;
  undefined8 uVar1;
  
  if (*(Ref **)(param_1 + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(param_1 + 0x30));
  }
  this_00 = *(Ref **)(this + 0x30);
  *(Ref **)(param_1 + 0x30) = this_00;
  if (this_00 != (Ref *)0x0) {
    Ref::retain(this_00);
  }
  param_1[0x38] = this[0x38];
  uVar1 = *(undefined8 *)(this + 0x3c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(this + 0x44);
  *(undefined8 *)(param_1 + 0x3c) = uVar1;
  param_1[0x48] = this[0x48];
  param_1[0x49] = this[0x49];
  return;
}

