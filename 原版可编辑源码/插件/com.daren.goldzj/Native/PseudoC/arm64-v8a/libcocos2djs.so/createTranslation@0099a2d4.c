
/* cocos2d::Mat4::createTranslation(float, float, float, cocos2d::Mat4*) */

void cocos2d::Mat4::createTranslation(float param_1,float param_2,float param_3,Mat4 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = IDENTITY._56_8_;
  uVar6 = IDENTITY._48_8_;
  uVar5 = IDENTITY._32_8_;
  uVar4 = IDENTITY._24_8_;
  uVar3 = IDENTITY._16_8_;
  uVar2 = IDENTITY._8_8_;
  uVar1 = IDENTITY._0_8_;
  *(undefined8 *)(param_4 + 0x28) = IDENTITY._40_8_;
  *(undefined8 *)(param_4 + 0x20) = uVar5;
  *(undefined8 *)(param_4 + 0x38) = uVar7;
  *(undefined8 *)(param_4 + 0x30) = uVar6;
  *(undefined8 *)(param_4 + 8) = uVar2;
  *(undefined8 *)param_4 = uVar1;
  *(undefined8 *)(param_4 + 0x18) = uVar4;
  *(undefined8 *)(param_4 + 0x10) = uVar3;
  *(float *)(param_4 + 0x30) = param_1;
  *(float *)(param_4 + 0x34) = param_2;
  *(float *)(param_4 + 0x38) = param_3;
  return;
}

