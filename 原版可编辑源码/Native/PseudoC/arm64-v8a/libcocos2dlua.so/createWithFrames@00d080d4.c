
/* cocos2d::Animate3D::createWithFrames(cocos2d::Animation3D*, int, int, float) */

Action * cocos2d::Animate3D::createWithFrames
                   (Animation3D *param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  Action *this;
  Configuration *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  this = operator_new(0x168,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined4 *)(this + 0x58) = 2;
    *(undefined8 *)(this + 0x84) = 0x41f0000000000000;
    *(undefined8 *)(this + 0x7c) = 0;
    *(undefined8 *)(this + 0x70) = 0x3f80000000000000;
    *(undefined8 *)(this + 0x68) = 0x3f8000003f800000;
    *(undefined ***)this = &PTR__Animate3D_016d1fe0;
    *(undefined ***)(this + 0x28) = &PTR_clone_016d2040;
    *(undefined8 *)(this + 0x60) = 0;
    this[0x78] = (Action)0x0;
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined8 *)(this + 0xb0) = 0;
    *(undefined4 *)(this + 0xc0) = 0x3f800000;
    *(undefined8 *)(this + 0xd0) = 0;
    *(undefined8 *)(this + 200) = 0;
    *(undefined8 *)(this + 0xe0) = 0;
    *(undefined8 *)(this + 0xd8) = 0;
    *(undefined4 *)(this + 0xe8) = 0x3f800000;
    *(undefined8 *)(this + 0xf8) = 0;
    *(undefined8 *)(this + 0xf0) = 0;
    *(undefined8 *)(this + 0x108) = 0;
    *(undefined8 *)(this + 0x100) = 0;
    *(undefined4 *)(this + 0x110) = 0x3f800000;
    *(undefined8 *)(this + 0x120) = 0;
    *(undefined8 *)(this + 0x118) = 0;
    *(undefined8 *)(this + 0x130) = 0;
    *(undefined8 *)(this + 0x128) = 0;
    *(undefined8 *)(this + 0x148) = 0;
    *(undefined8 *)(this + 0x140) = 0;
    *(undefined8 *)(this + 0x158) = 0;
    *(undefined8 *)(this + 0x150) = 0;
    *(undefined4 *)(this + 0x138) = 0x3f800000;
    *(undefined4 *)(this + 0x160) = 0x3f800000;
    *(undefined8 *)(this + 0x94) = 0x200000000;
    *(undefined8 *)(this + 0x8c) = 0x200000000;
  }
  fVar6 = *(float *)(param_1 + 0x50);
  fVar5 = (1.0 / param_4) * (float)param_2;
  fVar4 = (1.0 / param_4) * (float)(param_3 - param_2);
  fVar7 = fVar6 - fVar5;
  if (fVar4 <= fVar7) {
    fVar7 = fVar4;
  }
  *(float *)(this + 0x4c) = fVar7;
  *(float *)(this + 0x84) = fVar7;
  *(float *)(this + 0x88) = param_4;
  *(float *)(this + 0x70) = fVar5 / fVar6;
  *(float *)(this + 0x74) = fVar7 / fVar6;
  *(Animation3D **)(this + 0x60) = param_1;
  Ref::retain((Ref *)param_1);
  this_00 = (Configuration *)Configuration::getInstance();
  iVar1 = Configuration::getAnimate3DQuality(this_00);
  if (iVar1 == 2) {
    uVar2 = 0;
    uVar3 = 2;
  }
  else {
    if (iVar1 != 1) goto LAB_00d08220;
    uVar2 = 1;
    uVar3 = 1;
  }
  *(undefined4 *)(this + 0x8c) = uVar2;
  *(undefined4 *)(this + 0x90) = uVar3;
  *(undefined4 *)(this + 0x94) = uVar2;
LAB_00d08220:
  *(int *)(this + 0x98) = iVar1;
  Ref::autorelease((Ref *)this);
  return this;
}

