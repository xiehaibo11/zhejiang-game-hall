
/* convertbtTransformToMat4(btTransform const&) */

void convertbtTransformToMat4(btTransform *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Mat4 *in_x8;
  
  cocos2d::Mat4::Mat4(in_x8);
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar7 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  uVar8 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)in_x8 = *(undefined4 *)param_1;
  *(undefined4 *)(in_x8 + 4) = uVar1;
  *(undefined4 *)(in_x8 + 0x10) = uVar3;
  *(undefined4 *)(in_x8 + 0x14) = uVar4;
  *(undefined4 *)(in_x8 + 0x20) = uVar6;
  *(undefined4 *)(in_x8 + 0x24) = uVar7;
  *(undefined4 *)(in_x8 + 8) = uVar2;
  *(undefined4 *)(in_x8 + 0x18) = uVar5;
                    /* try { // try from 01040160 to 01140373 has its CatchHandler @ 01040160
                       catch() { ... } // from try @ 01040160 with catch @ 01040160
                       catch() { ... } // from try @ 01040380 with catch @ 01040160 */
  *(undefined4 *)(in_x8 + 0x28) = uVar8;
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  *(undefined8 *)(in_x8 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(in_x8 + 0x38) = uVar1;
  return;
}

