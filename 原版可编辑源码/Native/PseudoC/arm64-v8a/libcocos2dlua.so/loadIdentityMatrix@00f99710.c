
/* cocos2d::Director::loadIdentityMatrix(cocos2d::MATRIX_STACK_TYPE) */

void __thiscall cocos2d::Director::loadIdentityMatrix(Director *this,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  uVar8 = Mat4::IDENTITY._56_8_;
  uVar7 = Mat4::IDENTITY._48_8_;
  uVar6 = Mat4::IDENTITY._32_8_;
  uVar5 = Mat4::IDENTITY._24_8_;
  uVar4 = Mat4::IDENTITY._16_8_;
  uVar3 = Mat4::IDENTITY._8_8_;
  uVar2 = Mat4::IDENTITY._0_8_;
  if (param_2 == 2) {
                    /* try { // try from 00f99738 to 0109978f has its CatchHandler @ 00f99738
                       catch() { ... } // from try @ 00f99738 with catch @ 00f99738
                       catch() { ... } // from try @ 00f997ac with catch @ 00f99738 */
    uVar9 = (*(long *)(this + 0x98) + *(long *)(this + 0x90)) - 1;
    this = this + 0x78;
  }
  else if (param_2 == 1) {
    lVar10 = *(long *)(this + 0x58);
    this = (Director *)(lVar10 + 8);
    uVar9 = (*(long *)(lVar10 + 0x28) + *(long *)(lVar10 + 0x20)) - 1;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    uVar9 = (*(long *)(this + 0x50) + *(long *)(this + 0x48)) - 1;
    this = this + 0x30;
  }
  puVar1 = (undefined8 *)
           (*(long *)(*(long *)this + (uVar9 >> 3 & 0x1ffffffffffffff8)) + (uVar9 & 0x3f) * 0x40);
  puVar1[5] = Mat4::IDENTITY._40_8_;
  puVar1[4] = uVar6;
  puVar1[7] = uVar8;
  puVar1[6] = uVar7;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
                    /* try { // try from 00f99790 to 0109979f has its CatchHandler @ 00f9980c */
  return;
}

