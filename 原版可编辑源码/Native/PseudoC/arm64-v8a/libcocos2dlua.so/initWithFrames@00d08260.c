
/* cocos2d::Animate3D::initWithFrames(cocos2d::Animation3D*, int, int, float) */

undefined8 __thiscall
cocos2d::Animate3D::initWithFrames
          (Animate3D *this,Animation3D *param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  Configuration *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  *(float *)(this + 0x88) = param_4;
  fVar5 = *(float *)(param_1 + 0x50);
  fVar6 = (1.0 / param_4) * (float)param_2;
  fVar4 = (1.0 / param_4) * (float)(param_3 - param_2);
  fVar7 = fVar5 - fVar6;
  if (fVar4 <= fVar7) {
    fVar7 = fVar4;
  }
  *(float *)(this + 0x4c) = fVar7;
  *(float *)(this + 0x84) = fVar7;
  *(float *)(this + 0x70) = fVar6 / fVar5;
  *(float *)(this + 0x74) = fVar7 / fVar5;
  *(Animation3D **)(this + 0x60) = param_1;
  Ref::retain((Ref *)param_1);
  this_00 = (Configuration *)Configuration::getInstance();
  iVar1 = Configuration::getAnimate3DQuality(this_00);
  if (iVar1 == 2) {
    uVar2 = 0;
    uVar3 = 2;
  }
  else {
    if (iVar1 != 1) goto LAB_00d082f8;
    uVar2 = 1;
    uVar3 = 1;
  }
  *(undefined4 *)(this + 0x8c) = uVar2;
  *(undefined4 *)(this + 0x90) = uVar3;
  *(undefined4 *)(this + 0x94) = uVar2;
LAB_00d082f8:
  *(int *)(this + 0x98) = iVar1;
  return 1;
}

