
/* cocos2d::Director::loadProjectionIdentityMatrix(unsigned long) */

void __thiscall cocos2d::Director::loadProjectionIdentityMatrix(Director *this,ulong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  
  uVar8 = Mat4::IDENTITY._56_8_;
  uVar7 = Mat4::IDENTITY._48_8_;
  uVar6 = Mat4::IDENTITY._40_8_;
  uVar5 = Mat4::IDENTITY._32_8_;
  uVar4 = Mat4::IDENTITY._24_8_;
  uVar3 = Mat4::IDENTITY._16_8_;
  uVar2 = Mat4::IDENTITY._0_8_;
  lVar9 = *(long *)(this + 0x58) + param_1 * 0x30;
                    /* try { // try from 00f997a8 to 010997ab has its CatchHandler @ 00f997bc */
                    /* try { // try from 00f997ac to 0109983b has its CatchHandler @ 00f99738 */
  uVar10 = (*(long *)(lVar9 + 0x28) + *(long *)(lVar9 + 0x20)) - 1;
                    /* catch() { ... } // from try @ 00f997a8 with catch @ 00f997bc */
  puVar1 = (undefined8 *)
           (*(long *)(*(long *)(lVar9 + 8) + (uVar10 >> 3 & 0x1ffffffffffffff8)) +
           (uVar10 & 0x3f) * 0x40);
  puVar1[1] = Mat4::IDENTITY._8_8_;
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  puVar1[5] = uVar6;
  puVar1[4] = uVar5;
  puVar1[7] = uVar8;
  puVar1[6] = uVar7;
  return;
}

