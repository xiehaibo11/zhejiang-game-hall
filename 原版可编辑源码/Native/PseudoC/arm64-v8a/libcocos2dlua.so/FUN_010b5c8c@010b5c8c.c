
undefined8 FUN_010b5c8c(long param_1)

{
  short sVar1;
  long lVar2;
  undefined8 uVar3;
  short *psVar4;
  
  psVar4 = *(short **)(param_1 + 0x28);
  if (psVar4 == (short *)0x0) {
    uVar3 = 3;
  }
  else {
    if (*(char *)(param_1 + 0x84) == '\0') {
      sVar1 = *psVar4;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x18);
                    /* try { // try from 010b5cd4 to 011b5ff7 has its CatchHandler @ 010b5cd4
                       catch() { ... } // from try @ 010b5cd4 with catch @ 010b5cd4
                       catch() { ... } // from try @ 010b5ffc with catch @ 010b5cd4
                       catch() { ... } // from try @ 010b6084 with catch @ 010b5cd4 */
      if (((ulong)*(uint *)(lVar2 + 0xc) <
           (long)*(short *)(lVar2 + 0x18) + (long)*(short *)(lVar2 + 0x60) + 1U) &&
         (uVar3 = FT_GlyphLoader_CheckPoints(lVar2,0,1), (int)uVar3 != 0)) {
        return uVar3;
      }
      sVar1 = *psVar4;
      if (0 < (long)sVar1) {
        *(short *)(*(long *)(psVar4 + 0xc) + (long)sVar1 * 2 + -2) = psVar4[1] + -1;
        sVar1 = *psVar4;
      }
    }
    uVar3 = 0;
    *psVar4 = sVar1 + 1;
  }
  return uVar3;
}

