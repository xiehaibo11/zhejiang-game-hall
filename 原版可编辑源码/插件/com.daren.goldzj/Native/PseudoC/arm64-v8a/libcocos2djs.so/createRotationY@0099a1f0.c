
/* cocos2d::Mat4::createRotationY(float, cocos2d::Mat4*) */

void cocos2d::Mat4::createRotationY(float param_1,Mat4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float local_18;
  float local_14;
  
  uVar7 = IDENTITY._56_8_;
  uVar6 = IDENTITY._48_8_;
  uVar5 = IDENTITY._32_8_;
  uVar4 = IDENTITY._24_8_;
  uVar3 = IDENTITY._16_8_;
  uVar2 = IDENTITY._8_8_;
  uVar1 = IDENTITY._0_8_;
                    /* try { // try from 0099a214 to 00a9a2b7 has its CatchHandler @ 0099a3b0 */
  *(undefined8 *)(param_2 + 0x28) = IDENTITY._40_8_;
  *(undefined8 *)(param_2 + 0x20) = uVar5;
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *(undefined8 *)(param_2 + 8) = uVar2;
  *(undefined8 *)param_2 = uVar1;
  *(undefined8 *)(param_2 + 0x18) = uVar4;
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  sincosf(param_1,&local_14,&local_18);
  *(float *)param_2 = local_18;
  *(float *)(param_2 + 0x20) = local_14;
  *(float *)(param_2 + 8) = -local_14;
  *(float *)(param_2 + 0x28) = local_18;
  return;
}

