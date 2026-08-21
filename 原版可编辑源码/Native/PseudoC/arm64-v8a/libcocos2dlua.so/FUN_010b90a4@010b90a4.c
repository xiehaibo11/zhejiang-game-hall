
short FUN_010b90a4(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  
                    /* catch() { ... } // from try @ 010b8f68 with catch @ 010b90a8
                       catch() { ... } // from try @ 010b900c with catch @ 010b90a8 */
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar1 = uVar2;
  if (uVar2 <= *param_2 + 1U) {
    uVar1 = *param_2 + 1;
  }
                    /* catch() { ... } // from try @ 010b8f8c with catch @ 010b90b8 */
  uVar2 = *(int *)(param_1 + 0x1c) + uVar2;
  if (uVar1 < uVar2) {
    uVar4 = (ulong)uVar1;
    do {
      sVar3 = *(short *)(*(long *)(param_1 + 0x20) + uVar4 * 2);
      if (sVar3 != 0) goto LAB_010b90e8;
      uVar4 = uVar4 + 1;
    } while ((uint)uVar4 < uVar2);
  }
  sVar3 = 0;
  uVar4 = 0;
LAB_010b90e8:
  *param_2 = (int)uVar4;
  return sVar3;
}

