
/* cocos2d::Director::loadMatrix(cocos2d::MATRIX_STACK_TYPE, cocos2d::Mat4 const&) */

void __thiscall cocos2d::Director::loadMatrix(Director *this,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 2) {
                    /* catch() { ... } // from try @ 00f99790 with catch @ 00f9980c */
    uVar2 = (*(long *)(this + 0x98) + *(long *)(this + 0x90)) - 1;
    this = this + 0x78;
  }
  else if (param_2 == 1) {
    lVar3 = *(long *)(this + 0x58);
    this = (Director *)(lVar3 + 8);
    uVar2 = (*(long *)(lVar3 + 0x28) + *(long *)(lVar3 + 0x20)) - 1;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    uVar2 = (*(long *)(this + 0x50) + *(long *)(this + 0x48)) - 1;
    this = this + 0x30;
  }
  uVar4 = param_3[4];
  uVar6 = param_3[7];
  uVar5 = param_3[6];
  uVar8 = param_3[1];
  uVar7 = *param_3;
  uVar10 = param_3[3];
  uVar9 = param_3[2];
  puVar1 = (undefined8 *)
           (*(long *)(*(long *)this + (uVar2 >> 3 & 0x1ffffffffffffff8)) + (uVar2 & 0x3f) * 0x40);
  puVar1[5] = param_3[5];
  puVar1[4] = uVar4;
  puVar1[7] = uVar6;
  puVar1[6] = uVar5;
  puVar1[1] = uVar8;
  *puVar1 = uVar7;
  puVar1[3] = uVar10;
  puVar1[2] = uVar9;
  return;
}

