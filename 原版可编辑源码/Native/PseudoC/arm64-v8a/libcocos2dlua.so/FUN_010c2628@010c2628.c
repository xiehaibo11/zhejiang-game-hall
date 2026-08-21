
void FUN_010c2628(ulong param_1,undefined1 *param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined1 uVar12;
  uint uVar13;
  
  uVar6 = (uint)param_1;
  uVar13 = (uint)(param_1 >> 0x18) & 0xff;
  if ((uVar13 - 0x41 < 0x3a) && (5 < uVar13 - 0x5b)) {
    lVar11 = 0;
  }
  else {
    cVar3 = "0123456789ABCDEF"[param_1 >> 0x1c & 0xf];
    cVar4 = "0123456789ABCDEF"[uVar6 >> 0x18 & 0xf];
    uVar13 = 0x5d;
    *param_2 = 0x5b;
    param_2[1] = cVar3;
    param_2[2] = cVar4;
    lVar11 = 3;
  }
  uVar5 = uVar6 >> 0x10 & 0xff;
  uVar8 = lVar11 + 1;
  param_2[lVar11] = (char)uVar13;
  if ((uVar5 - 0x41 < 0x3a) && (5 < uVar5 - 0x5b)) {
    uVar12 = (undefined1)(param_1 >> 0x10);
  }
  else {
    cVar3 = "0123456789ABCDEF"[uVar6 >> 0x14 & 0xf];
    cVar4 = "0123456789ABCDEF"[uVar6 >> 0x10 & 0xf];
    param_2[uVar8] = 0x5b;
    uVar8 = (ulong)((uint)lVar11 | 4);
    param_2[lVar11 + 2] = cVar3;
    param_2[lVar11 + 3] = cVar4;
    uVar12 = 0x5d;
  }
  uVar13 = uVar6 >> 8 & 0xff;
  lVar11 = (long)(int)uVar8;
  uVar7 = lVar11 + 1;
  param_2[lVar11] = uVar12;
  if ((uVar13 - 0x41 < 0x3a) && (5 < uVar13 - 0x5b)) {
    uVar12 = (undefined1)(param_1 >> 8);
  }
  else {
    cVar3 = "0123456789ABCDEF"[uVar6 >> 0xc & 0xf];
    cVar4 = "0123456789ABCDEF"[uVar6 >> 8 & 0xf];
    param_2[uVar7] = 0x5b;
    uVar7 = (ulong)((int)uVar8 + 4);
    param_2[lVar11 + 2] = cVar3;
    param_2[lVar11 + 3] = cVar4;
    uVar12 = 0x5d;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010c2794 with catch @ 010c2740
                        */
  lVar11 = (long)(int)uVar7;
  uVar8 = lVar11 + 1;
  param_2[lVar11] = uVar12;
  if ((0x39 < (uVar6 & 0xff) - 0x41) || ((uVar6 & 0xff) - 0x5b < 6)) {
    cVar3 = "0123456789ABCDEF"[uVar6 >> 4 & 0xf];
    cVar4 = "0123456789ABCDEF"[uVar6 & 0xf];
    param_2[uVar8] = 0x5b;
                    /* try { // try from 010c278c to 011c2793 has its CatchHandler @ 010c2908 */
    uVar8 = (ulong)((int)uVar7 + 4);
    uVar6 = 0x5d;
                    /* try { // try from 010c2794 to 011c290b has its CatchHandler @ 010c2740 */
    param_2[lVar11 + 2] = cVar3;
    param_2[lVar11 + 3] = cVar4;
  }
  lVar11 = (long)(int)uVar8;
  uVar8 = lVar11 + 1;
  param_2[lVar11] = (char)uVar6;
  if (param_3 != 0) {
    param_2[uVar8] = 0x3a;
    param_2[lVar11 + 2] = 0x20;
    lVar9 = 0;
    while( true ) {
      iVar10 = (int)(lVar11 + 3);
      if (*(char *)(param_3 + lVar9) == '\0') break;
      lVar2 = lVar9 + 1;
      param_2[lVar9 + lVar11 + 3] = *(char *)(param_3 + lVar9);
      bVar1 = 0xc1 < lVar9;
      lVar9 = lVar2;
      if (bVar1) {
        param_2[iVar10 + (int)lVar2] = 0;
        return;
      }
    }
    uVar8 = (ulong)(uint)(iVar10 + (int)lVar9);
  }
  param_2[(int)uVar8] = 0;
  return;
}

