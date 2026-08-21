
/* cocos2d::Animate3D::init(cocos2d::Animation3D*) */

undefined8 __thiscall cocos2d::Animate3D::init(Animate3D *this,Animation3D *param_1)

{
  int iVar1;
  Configuration *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(Animation3D **)(this + 0x60) = param_1;
  Ref::retain((Ref *)param_1);
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x4c) = uVar3;
  *(undefined4 *)(this + 0x84) = uVar3;
  this_00 = (Configuration *)Configuration::getInstance();
  iVar1 = Configuration::getAnimate3DQuality(this_00);
  if (iVar1 == 2) {
    uVar2 = 0;
    uVar3 = 2;
  }
  else {
    if (iVar1 != 1) goto LAB_00d07ed0;
    uVar2 = 1;
    uVar3 = 1;
  }
  *(undefined4 *)(this + 0x8c) = uVar2;
  *(undefined4 *)(this + 0x90) = uVar3;
  *(undefined4 *)(this + 0x94) = uVar2;
LAB_00d07ed0:
  *(int *)(this + 0x98) = iVar1;
  return 1;
}

