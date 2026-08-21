
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::Label::getStringNumLines() */

int __thiscall cocos2d::Label::getStringNumLines(Label *this)

{
  Label *pLVar1;
  Label LVar2;
  Label *pLVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  Label *pLVar7;
  int iVar8;
  ulong uVar9;
  Label *in_x15;
  Label *extraout_x15;
  Label *in_x16;
  Label *extraout_x16;
  long lVar10;
  
  if (this[0x30c] != (Label)0x0) {
    (**(code **)(*(long *)this + 0x5c8))(this);
    in_x15 = extraout_x15;
    in_x16 = extraout_x16;
  }
  if (*(int *)(this + 0x308) != 3) {
    return *(int *)(this + 0x340);
  }
  LVar2 = this[0x310];
  if (((byte)LVar2 & 1) == 0) {
    if ((byte)LVar2 >> 1 == 0) {
LAB_00f0e9c0:
      *(undefined4 *)(this + 0x340) = 0;
      return 0;
    }
  }
  else if (*(long *)(this + 0x318) == 0) goto LAB_00f0e9c0;
  if (((byte)LVar2 & 1) == 0) {
    uVar4 = (ulong)((byte)LVar2 >> 1);
  }
  else {
    uVar4 = *(ulong *)(this + 0x318);
  }
  uVar4 = uVar4 - 1;
  if (uVar4 == 0) {
    iVar6 = 1;
                    /* catch() { ... } // from try @ 00f0ea08 with catch @ 00f0e9dc */
  }
  else {
    pLVar1 = this + 0x314;
    if (uVar4 != 1) {
      uVar9 = 0;
      iVar6 = 0;
      uVar5 = uVar4 & 0xfffffffffffffffe;
      iVar8 = 1;
      do {
        if (((byte)LVar2 & 1) != 0) {
          in_x15 = *(Label **)(this + 800);
        }
        if (((byte)LVar2 & 1) != 0) {
          in_x16 = *(Label **)(this + 800);
        }
        lVar10 = uVar9 * 4;
        pLVar7 = pLVar1;
        pLVar3 = pLVar1;
                    /* try { // try from 00f0ea00 to 0100ea07 has its CatchHandler @ 00f0ea4c */
        if (((byte)LVar2 & 1) != 0) {
          pLVar7 = in_x16;
          pLVar3 = in_x15;
        }
                    /* try { // try from 00f0ea08 to 0100ea67 has its CatchHandler @ 00f0e9dc */
        in_x15 = (Label *)(ulong)*(uint *)(pLVar3 + lVar10);
        in_x16 = (Label *)(ulong)*(uint *)(pLVar7 + lVar10 + 4);
        uVar9 = uVar9 + 2;
        if (*(uint *)(pLVar3 + lVar10) == 10) {
          iVar8 = iVar8 + 1;
        }
        if (*(uint *)(pLVar7 + lVar10 + 4) == 10) {
          iVar6 = iVar6 + 1;
        }
      } while (uVar5 != uVar9);
      iVar6 = iVar6 + iVar8;
      goto joined_r0x00f0ea4c;
    }
    uVar5 = 0;
    iVar6 = 1;
    do {
      pLVar7 = pLVar1;
      if (((byte)LVar2 & 1) != 0) {
        pLVar7 = *(Label **)(this + 800);
      }
      lVar10 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      if (*(int *)(pLVar7 + lVar10) == 10) {
        iVar6 = iVar6 + 1;
      }
joined_r0x00f0ea4c:
                    /* catch() { ... } // from try @ 00f0ea00 with catch @ 00f0ea4c */
    } while (uVar4 != uVar5);
  }
  *(int *)(this + 0x340) = iVar6;
  return iVar6;
}

