
/* cocos2d::PUSphere::PUSphere(cocos2d::Vec3 const&, float) */

void __thiscall cocos2d::PUSphere::PUSphere(PUSphere *this,Vec3 *param_1,float param_2)

{
  undefined8 uVar1;
  
  *(float *)this = param_2;
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 4) = uVar1;
  return;
}

