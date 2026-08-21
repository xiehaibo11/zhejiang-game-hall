
/* cocos2d::kmMat4Identity(cocos2d::Mat4*) */

void cocos2d::kmMat4Identity(Mat4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = Mat4::IDENTITY._56_8_;
  uVar6 = Mat4::IDENTITY._48_8_;
  uVar5 = Mat4::IDENTITY._32_8_;
  uVar4 = Mat4::IDENTITY._24_8_;
  uVar3 = Mat4::IDENTITY._16_8_;
  uVar2 = Mat4::IDENTITY._8_8_;
  uVar1 = Mat4::IDENTITY._0_8_;
  *(undefined8 *)(param_1 + 0x28) = Mat4::IDENTITY._40_8_;
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)param_1 = uVar1;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  return;
}

