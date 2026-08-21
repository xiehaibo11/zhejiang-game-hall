
/* cocos2d::Sprite::populateTriangle(int, cocos2d::V3F_C4B_T2F_Quad const&) */

void __thiscall
cocos2d::Sprite::populateTriangle(Sprite *this,int param_1,V3F_C4B_T2F_Quad *param_2)

{
  Sprite SVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (8 < (uint)param_1) {
    return;
  }
  if ((1 << (ulong)(param_1 & 0x1f) & 0x145U) == 0) {
    return;
  }
  if (this[0x509] != (Sprite)0x0) {
    if ((param_1 & 0xffU) * -0x55555555 < 0x55555556) {
      param_1 = param_1 + 2;
      SVar1 = this[0x50a];
      goto joined_r0x00f3fb78;
    }
    param_1 = param_1 + -2;
  }
  SVar1 = this[0x50a];
joined_r0x00f3fb78:
  if (SVar1 != (Sprite)0x0) {
    if (param_1 < 3) {
      param_1 = param_1 + 6;
    }
    else {
      param_1 = param_1 + -6;
    }
  }
                    /* catch() { ... } // from try @ 00f3fc28 with catch @ 00f3fb84 */
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  iVar2 = (param_1 << 2) / 3;
  lVar4 = *(long *)(this + 0x4b0) + (long)iVar2 * 0x18;
  *(undefined8 *)(lVar4 + 0x88) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(lVar4 + 0x80) = uVar6;
  *(undefined8 *)(lVar4 + 0x78) = uVar5;
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  lVar4 = *(long *)(this + 0x4b0) + (long)iVar2 * 0x18;
  *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(lVar4 + 0x20) = uVar6;
  *(undefined8 *)(lVar4 + 0x18) = uVar5;
                    /* try { // try from 00f3fbd8 to 0103fbdf has its CatchHandler @ 00f3fc64 */
  uVar6 = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)param_2;
  lVar4 = *(long *)(this + 0x4b0) + (long)iVar2 * 0x18;
  *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(lVar4 + 0x68) = uVar6;
  *(undefined8 *)(lVar4 + 0x60) = uVar5;
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  puVar3 = (undefined8 *)(*(long *)(this + 0x4b0) + (long)iVar2 * 0x18);
                    /* try { // try from 00f3fc00 to 0103fc27 has its CatchHandler @ 00f3fc6c */
  puVar3[2] = *(undefined8 *)(param_2 + 0x28);
  puVar3[1] = uVar6;
  *puVar3 = uVar5;
  return;
}

