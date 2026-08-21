
void FUN_010ad63c(uint *param_1,short param_2,long param_3,ulong param_4,long param_5,long param_6)

{
  short sVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = (long)(int)param_1[1];
                    /* try { // try from 010ad644 to 011ad987 has its CatchHandler @ 010ad644
                       catch() { ... } // from try @ 010ad644 with catch @ 010ad644
                       catch() { ... } // from try @ 010ad994 with catch @ 010ad644
                       catch() { ... } // from try @ 010adbd0 with catch @ 010ad644
                       catch() { ... } // from try @ 010adc58 with catch @ 010ad644
                       catch() { ... } // from try @ 010adfa0 with catch @ 010ad644
                       catch() { ... } // from try @ 010adff4 with catch @ 010ad644
                       catch() { ... } // from try @ 010ae0ac with catch @ 010ad644
                       catch() { ... } // from try @ 010ae1a4 with catch @ 010ad644
                       catch() { ... } // from try @ 010ae250 with catch @ 010ad644
                       catch() { ... } // from try @ 010ae2d8 with catch @ 010ad644
                       catch() { ... } // from try @ 010ae37c with catch @ 010ad644
                       catch() { ... } // from try @ 010ae3e4 with catch @ 010ad644
                       catch() { ... } // from try @ 010ae46c with catch @ 010ad644
                       catch() { ... } // from try @ 010ae5b8 with catch @ 010ad644 */
  uVar6 = -lVar7;
  uVar4 = param_3 + -1 + lVar7 & uVar6;
  uVar5 = uVar6 & param_4;
  uVar3 = uVar4;
  if ((long)uVar4 <= (long)uVar5) {
    uVar6 = (ulong)*param_1;
    goto LAB_010ad760;
  }
  if (uVar4 != uVar5 + lVar7) {
    return;
  }
  uVar2 = *(uint *)(param_5 + 0x18);
  uVar8 = uVar5;
  switch(uVar2 & 7) {
  case 0:
    break;
  case 1:
  case 5:
    if ((*(long *)(param_5 + 0x38) == param_6) && (*(long *)(param_5 + 0x20) < 1)) {
      if ((uVar2 >> 4 & 1) == 0) {
        return;
      }
      if ((long)(param_4 - param_3) < (long)(int)param_1[2]) {
        return;
      }
    }
    if ((*(long *)(param_6 + 0x38) == param_5) && (*(long *)(param_5 + 0x28) == (long)param_2)) {
      if ((uVar2 >> 5 & 1) == 0) {
        return;
      }
      if ((long)(param_4 - param_3) < (long)(int)param_1[2]) {
        return;
      }
    }
    if ((uVar2 & 7) != 1) goto switchD_010ad690_caseD_4;
    break;
  default:
    return;
  case 4:
switchD_010ad690_caseD_4:
    lVar7 = param_3 + -1 + param_4;
    if (lVar7 < 0) {
      lVar7 = lVar7 + 1;
    }
    uVar8 = (long)(int)param_1[2] + (lVar7 >> 1) & uVar6;
  }
  uVar6 = (ulong)*param_1;
  if ((-1 < (long)uVar8) &&
     (uVar3 = uVar8, (long)(ulong)(ushort)param_1[0x14] <= (long)uVar8 >> (uVar6 & 0x3f))) {
    uVar3 = uVar5;
  }
  if (uVar3 != uVar4) {
    uVar5 = uVar4;
  }
  lVar7 = (long)uVar5 >> (uVar6 & 0x3f);
  if (((-1 < lVar7) && (lVar7 < (long)(ulong)(ushort)param_1[0x14])) &&
     ((0x80U >> (ulong)((uint)lVar7 & 7) &
      (uint)*(byte *)(*(long *)(param_1 + 0x16) +
                     *(long *)(param_1 + 0x40) + ((lVar7 << 0x2d) >> 0x30))) != 0)) {
    return;
  }
LAB_010ad760:
  uVar3 = (long)uVar3 >> (uVar6 & 0x3f);
  if ((-1 < (long)uVar3) && ((long)uVar3 < (long)(ulong)(ushort)param_1[0x14])) {
    sVar1 = (short)(uVar3 >> 3);
    if (sVar1 < *(short *)((long)param_1 + 0x112)) {
      *(short *)((long)param_1 + 0x112) = sVar1;
    }
    if ((short)param_1[0x45] < (short)(uVar3 >> 3)) {
      *(short *)(param_1 + 0x45) = sVar1;
    }
    *(byte *)(*(long *)(param_1 + 0x16) + *(long *)(param_1 + 0x40) + (long)sVar1) =
         (byte)(0x80 >> (ulong)((uint)uVar3 & 7)) |
         *(byte *)(*(long *)(param_1 + 0x16) + *(long *)(param_1 + 0x40) + (long)sVar1);
  }
  return;
}

