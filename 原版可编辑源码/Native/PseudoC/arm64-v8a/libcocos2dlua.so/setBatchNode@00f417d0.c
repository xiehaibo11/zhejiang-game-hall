
/* cocos2d::Sprite::setBatchNode(cocos2d::SpriteBatchNode*) */

void __thiscall cocos2d::Sprite::setBatchNode(Sprite *this,SpriteBatchNode *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  
  *(SpriteBatchNode **)(this + 0x310) = param_1;
  if (param_1 == (SpriteBatchNode *)0x0) {
    if (*(int *)(this + 0x42c) != 2) {
      *(undefined4 *)(this + 0x42c) = 0;
    }
    *(undefined8 *)(this + 0x308) = 0xffffffffffffffff;
    *(undefined8 *)(this + 0x300) = 0;
    this[0x319] = (Sprite)0x0;
    (**(code **)(*(long *)this + 0x5d8))(this,0);
    fVar8 = *(float *)(this + 0x440);
    fVar9 = *(float *)(this + 0x444);
    *(undefined4 *)(this + 0x470) = 0;
    *(undefined4 *)(this + 0x4a0) = 0;
    *(undefined4 *)(this + 0x458) = 0;
    *(float *)(this + 0x468) = fVar8;
    *(float *)(this + 0x46c) = fVar9;
    *(float *)(this + 0x49c) = fVar9;
    *(float *)(this + 0x450) = fVar8;
    *(float *)(this + 0x498) = fVar8 + *(float *)(this + 0x410);
    *(float *)(this + 0x454) = fVar9 + *(float *)(this + 0x414);
    *(float *)(this + 0x480) = fVar8 + *(float *)(this + 0x410);
    *(float *)(this + 0x484) = fVar9 + *(float *)(this + 0x414);
    *(undefined4 *)(this + 0x488) = 0;
  }
  else {
    *(undefined4 *)(this + 0x42c) = 3;
    uVar7 = Mat4::IDENTITY._56_8_;
    uVar6 = Mat4::IDENTITY._48_8_;
    uVar5 = Mat4::IDENTITY._32_8_;
    uVar4 = Mat4::IDENTITY._24_8_;
    uVar3 = Mat4::IDENTITY._16_8_;
    uVar2 = Mat4::IDENTITY._8_8_;
    uVar1 = Mat4::IDENTITY._0_8_;
    *(undefined8 *)(this + 0x344) = Mat4::IDENTITY._40_8_;
    *(undefined8 *)(this + 0x33c) = uVar5;
    *(undefined8 *)(this + 0x354) = uVar7;
    *(undefined8 *)(this + 0x34c) = uVar6;
    *(undefined8 *)(this + 0x324) = uVar2;
    *(undefined8 *)(this + 0x31c) = uVar1;
    *(undefined8 *)(this + 0x334) = uVar4;
    *(undefined8 *)(this + 0x32c) = uVar3;
    *(undefined8 *)(this + 0x300) = *(undefined8 *)(param_1 + 0x300);
  }
  return;
}

