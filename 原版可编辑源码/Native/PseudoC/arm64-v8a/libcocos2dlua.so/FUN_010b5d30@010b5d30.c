
undefined8 FUN_010b5d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  short sVar5;
  short *psVar6;
  long lVar7;
  long lVar8;
  
  if (*(int *)(param_1 + 0x80) == 3) {
    return 0;
  }
  psVar6 = *(short **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x80) = 3;
  if (psVar6 == (short *)0x0) {
    return 3;
  }
  if (*(char *)(param_1 + 0x84) != '\0') {
    lVar2 = *(long *)(param_1 + 0x18);
    if (((ulong)*(uint *)(lVar2 + 0xc) <
         (long)*(short *)(lVar2 + 0x18) + (long)*(short *)(lVar2 + 0x60) + 1U) &&
       (uVar3 = FT_GlyphLoader_CheckPoints(lVar2,0,1), (int)uVar3 != 0)) {
      return uVar3;
    }
    sVar5 = *psVar6;
    if ((long)sVar5 < 1) goto LAB_010b5de0;
    *(short *)(*(long *)(psVar6 + 0xc) + (long)sVar5 * 2 + -2) = psVar6[1] + -1;
  }
  sVar5 = *psVar6;
LAB_010b5de0:
  *psVar6 = sVar5 + 1;
  lVar2 = *(long *)(param_1 + 0x18);
  if (((long)*(short *)(lVar2 + 0x1a) + (long)*(short *)(lVar2 + 0x62) + 1U <=
       (ulong)*(uint *)(lVar2 + 8)) ||
     (uVar3 = FT_GlyphLoader_CheckPoints(lVar2,1,0), (int)uVar3 == 0)) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (*(char *)(param_1 + 0x84) != '\0') {
      sVar5 = *(short *)(lVar2 + 2);
      lVar7 = *(long *)(lVar2 + 8);
      lVar8 = *(long *)(lVar2 + 0x10);
      lVar4 = FT_RoundFix(param_2);
      plVar1 = (long *)(lVar7 + (long)sVar5 * 0x10);
      *plVar1 = lVar4 >> 0x10;
      lVar4 = FT_RoundFix(param_3);
      plVar1[1] = lVar4 >> 0x10;
      *(undefined1 *)(lVar8 + sVar5) = 1;
    }
    uVar3 = 0;
    *(short *)(lVar2 + 2) = *(short *)(lVar2 + 2) + 1;
  }
  return uVar3;
}

