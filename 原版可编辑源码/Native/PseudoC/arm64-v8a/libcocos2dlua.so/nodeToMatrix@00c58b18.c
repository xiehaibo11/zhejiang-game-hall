
/* cocostudio::TransformHelp::nodeToMatrix(cocostudio::BaseData const&, cocos2d::Mat4&) */

void cocostudio::TransformHelp::nodeToMatrix(BaseData *param_1,Mat4 *param_2)

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
  float local_28;
  float fStack_24;
  
  uVar7 = cocos2d::Mat4::IDENTITY._56_8_;
  uVar6 = cocos2d::Mat4::IDENTITY._48_8_;
  uVar5 = cocos2d::Mat4::IDENTITY._32_8_;
  uVar4 = cocos2d::Mat4::IDENTITY._24_8_;
  uVar3 = cocos2d::Mat4::IDENTITY._16_8_;
  uVar2 = cocos2d::Mat4::IDENTITY._8_8_;
  uVar1 = cocos2d::Mat4::IDENTITY._0_8_;
  *(undefined8 *)(param_2 + 0x28) = cocos2d::Mat4::IDENTITY._40_8_;
  *(undefined8 *)(param_2 + 0x20) = uVar5;
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *(undefined8 *)(param_2 + 8) = uVar2;
  *(undefined8 *)param_2 = uVar1;
  *(undefined8 *)(param_2 + 0x18) = uVar4;
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  if (*(float *)(param_1 + 0x30) == -*(float *)(param_1 + 0x34)) {
    sincosf(*(float *)(param_1 + 0x30),&fStack_24,&local_28);
    *(float *)param_2 = local_28 * *(float *)(param_1 + 0x38);
    *(float *)(param_2 + 4) = -(fStack_24 * *(float *)(param_1 + 0x38));
    *(float *)(param_2 + 0x10) = fStack_24 * *(float *)(param_1 + 0x3c);
    local_28 = local_28 * *(float *)(param_1 + 0x3c);
  }
  else {
    fVar9 = *(float *)(param_1 + 0x38);
    fVar8 = cosf(*(float *)(param_1 + 0x34));
    *(float *)param_2 = fVar8 * fVar9;
    fVar9 = *(float *)(param_1 + 0x38);
    fVar8 = sinf(*(float *)(param_1 + 0x34));
    *(float *)(param_2 + 4) = fVar9 * fVar8;
    fVar9 = *(float *)(param_1 + 0x3c);
    fVar8 = sinf(*(float *)(param_1 + 0x30));
    *(float *)(param_2 + 0x10) = fVar9 * fVar8;
    fVar8 = *(float *)(param_1 + 0x3c);
    local_28 = cosf(*(float *)(param_1 + 0x30));
    local_28 = fVar8 * local_28;
  }
  *(float *)(param_2 + 0x14) = local_28;
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x28);
  return;
}

