
/* cocos2d::Animate3D::setQuality(cocos2d::Animate3DQuality) */

void __thiscall cocos2d::Animate3D::setQuality(Animate3D *this,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 == 2) {
    uVar1 = 0;
    uVar2 = 2;
  }
  else {
    if (param_2 != 1) goto LAB_00d08340;
    uVar1 = 1;
    uVar2 = 1;
  }
  *(undefined4 *)(this + 0x8c) = uVar1;
  *(undefined4 *)(this + 0x90) = uVar2;
  *(undefined4 *)(this + 0x94) = uVar1;
LAB_00d08340:
  *(int *)(this + 0x98) = param_2;
  return;
}

