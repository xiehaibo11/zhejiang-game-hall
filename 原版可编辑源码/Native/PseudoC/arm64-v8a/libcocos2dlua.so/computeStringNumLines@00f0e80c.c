
/* cocos2d::Label::computeStringNumLines() */

void __thiscall cocos2d::Label::computeStringNumLines(Label *this)

{
  Label *pLVar1;
  Label LVar2;
  Label *pLVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  Label *pLVar8;
  ulong uVar9;
  Label *in_x15;
  Label *in_x16;
  long lVar10;
  
  LVar2 = this[0x310];
  if (((byte)LVar2 & 1) == 0) {
    if ((byte)LVar2 >> 1 == 0) {
LAB_00f0e87c:
      *(undefined4 *)(this + 0x340) = 0;
      return;
    }
  }
  else if (*(long *)(this + 0x318) == 0) goto LAB_00f0e87c;
  if (((byte)LVar2 & 1) == 0) {
    uVar4 = (ulong)((byte)LVar2 >> 1);
  }
  else {
    uVar4 = *(ulong *)(this + 0x318);
  }
  uVar4 = uVar4 - 1;
  if (uVar4 == 0) {
    *(undefined4 *)(this + 0x340) = 1;
    return;
  }
  pLVar1 = this + 0x314;
  if (uVar4 == 1) {
    uVar5 = 0;
    iVar6 = 1;
    do {
      pLVar8 = pLVar1;
      if (((byte)LVar2 & 1) != 0) {
        pLVar8 = *(Label **)(this + 800);
      }
      lVar10 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      if (*(int *)(pLVar8 + lVar10) == 10) {
        iVar6 = iVar6 + 1;
      }
joined_r0x00f0e908:
    } while (uVar4 != uVar5);
    *(int *)(this + 0x340) = iVar6;
    return;
  }
  uVar9 = 0;
  iVar6 = 0;
  uVar5 = uVar4 & 0xfffffffffffffffe;
  iVar7 = 1;
  do {
    if (((byte)LVar2 & 1) != 0) {
      in_x15 = *(Label **)(this + 800);
    }
    if (((byte)LVar2 & 1) != 0) {
      in_x16 = *(Label **)(this + 800);
    }
    lVar10 = uVar9 * 4;
    pLVar8 = pLVar1;
    pLVar3 = pLVar1;
    if (((byte)LVar2 & 1) != 0) {
      pLVar8 = in_x16;
      pLVar3 = in_x15;
    }
    in_x15 = (Label *)(ulong)*(uint *)(pLVar3 + lVar10);
    in_x16 = (Label *)(ulong)*(uint *)(pLVar8 + lVar10 + 4);
    uVar9 = uVar9 + 2;
    if (*(uint *)(pLVar3 + lVar10) == 10) {
      iVar7 = iVar7 + 1;
    }
    if (*(uint *)(pLVar8 + lVar10 + 4) == 10) {
      iVar6 = iVar6 + 1;
    }
  } while (uVar5 != uVar9);
  iVar6 = iVar6 + iVar7;
  goto joined_r0x00f0e908;
}

