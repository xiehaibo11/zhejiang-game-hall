
void FT_Select_Metrics(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar8 = *(long *)(param_1 + 0x40);
  lVar4 = *(long *)(param_1 + 0xa0);
  lVar7 = lVar8 + param_2 * 0x20;
  lVar5 = *(long *)(lVar7 + 0x10);
  *(short *)(lVar4 + 0x18) = (short)((int)lVar5 + 0x20U >> 6);
  lVar7 = *(long *)(lVar7 + 0x18);
                    /* try { // try from 0105e2c4 to 0115e2cb has its CatchHandler @ 0105e358 */
  *(short *)(lVar4 + 0x1a) = (short)((int)lVar7 + 0x20U >> 6);
                    /* try { // try from 0105e2cc to 0115e373 has its CatchHandler @ 0105e294 */
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    *(long *)(lVar4 + 0x30) = lVar7;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0x10000;
    *(undefined8 *)(lVar4 + 0x20) = 0x10000;
    *(long *)(lVar4 + 0x40) = (long)*(short *)(lVar8 + param_2 * 0x20) << 6;
    *(long *)(lVar4 + 0x48) = lVar5;
    return;
  }
  uVar9 = (ulong)*(ushort *)(param_1 + 0x88);
  if (uVar9 == 0) {
    uVar10 = 0x7fffffff;
    uVar6 = (lVar5 >> 0x3f & 0xffffffff00000002U) + 0x7fffffff;
    *(ulong *)(lVar4 + 0x20) = uVar6;
  }
  else {
    uVar12 = (ulong)(*(ushort *)(param_1 + 0x88) >> 1);
    lVar8 = -lVar5;
    if (-1 < lVar5) {
      lVar8 = lVar5;
    }
    uVar10 = 0;
    if (uVar9 != 0) {
      uVar10 = (uVar12 | lVar8 << 0x10) / uVar9;
    }
    uVar6 = -uVar10;
    if (-1 < lVar5) {
      uVar6 = uVar10;
    }
    lVar5 = -lVar7;
    if (-1 < lVar7) {
      lVar5 = lVar7;
    }
    uVar10 = 0;
    if (uVar9 != 0) {
      uVar10 = (uVar12 | lVar5 << 0x10) / uVar9;
    }
    *(ulong *)(lVar4 + 0x20) = uVar6;
  }
                    /* catch() { ... } // from try @ 0105e2c4 with catch @ 0105e358 */
  uVar9 = -uVar10;
  if (-1 < lVar7) {
    uVar9 = uVar10;
  }
  *(ulong *)(lVar4 + 0x28) = uVar9;
  sVar3 = *(short *)(param_1 + 0x8a);
  iVar1 = 1;
  if (sVar3 < 0) {
    iVar1 = -1;
  }
                    /* try { // try from 0105e374 to 0115e447 has its CatchHandler @ 0105e374
                       catch() { ... } // from try @ 0105e374 with catch @ 0105e374
                       catch() { ... } // from try @ 0105e478 with catch @ 0105e374
                       catch() { ... } // from try @ 0105e528 with catch @ 0105e374 */
  lVar7 = -(long)sVar3;
  if (sVar3 >= 0) {
    lVar7 = (long)sVar3;
  }
  uVar10 = -uVar9;
  if (-1 < (long)uVar9) {
    uVar10 = uVar9;
  }
  iVar2 = -iVar1;
  if (-1 < (long)uVar9) {
    iVar2 = iVar1;
  }
  lVar5 = (long)(lVar7 * uVar10 + 0x8000) >> 0x10;
  lVar7 = -lVar5;
  if (-1 < iVar2) {
    lVar7 = lVar5;
  }
  *(ulong *)(lVar4 + 0x30) = lVar7 + 0x3fU & 0xffffffffffffffc0;
  sVar3 = *(short *)(param_1 + 0x8c);
  iVar1 = 1;
  if (sVar3 < 0) {
    iVar1 = -1;
  }
  lVar7 = -(long)sVar3;
  if (sVar3 >= 0) {
    lVar7 = (long)sVar3;
  }
  iVar2 = -iVar1;
  if (-1 < (long)uVar9) {
    iVar2 = iVar1;
  }
  uVar11 = (long)(lVar7 * uVar10 + 0x8000) >> 0x10;
  uVar12 = -uVar11;
  if (-1 < iVar2) {
    uVar12 = uVar11;
  }
  *(ulong *)(lVar4 + 0x38) = uVar12 & 0xffffffffffffffc0;
  sVar3 = *(short *)(param_1 + 0x8e);
  iVar1 = 1;
  if (sVar3 < 0) {
    iVar1 = -1;
  }
  lVar7 = -(long)sVar3;
  if (sVar3 >= 0) {
    lVar7 = (long)sVar3;
  }
  iVar2 = -iVar1;
  if (-1 < (long)uVar9) {
    iVar2 = iVar1;
  }
  lVar5 = (long)(lVar7 * uVar10 + 0x8000) >> 0x10;
  lVar7 = -lVar5;
  if (-1 < iVar2) {
    lVar7 = lVar5;
  }
  *(ulong *)(lVar4 + 0x40) = lVar7 + 0x20U & 0xffffffffffffffc0;
  sVar3 = *(short *)(param_1 + 0x90);
  iVar1 = 1;
  if (sVar3 < 0) {
    iVar1 = -1;
  }
  lVar7 = -(long)sVar3;
  if (sVar3 >= 0) {
    lVar7 = (long)sVar3;
  }
  uVar9 = -uVar6;
  if (-1 < (long)uVar6) {
    uVar9 = uVar6;
  }
  iVar2 = -iVar1;
  if (-1 < (long)uVar6) {
    iVar2 = iVar1;
  }
  lVar5 = (long)(uVar9 * lVar7 + 0x8000) >> 0x10;
  lVar7 = -lVar5;
  if (-1 < iVar2) {
    lVar7 = lVar5;
  }
  *(ulong *)(lVar4 + 0x48) = lVar7 + 0x20U & 0xffffffffffffffc0;
  return;
}

