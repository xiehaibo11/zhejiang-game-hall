
void FUN_01080e98(long param_1,long *param_2)

{
  short sVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  short *psVar8;
  long lVar9;
  
  lVar7 = *(long *)(param_1 + 0x38);
  if (*(char *)(lVar7 + 0x80) == '\0') {
    lVar9 = param_2[1];
    lVar5 = *param_2;
    psVar8 = *(short **)(lVar7 + 0x28);
    *(undefined1 *)(lVar7 + 0x80) = 1;
    if (*(char *)(lVar7 + 0x81) != '\0') {
      lVar4 = *(long *)(lVar7 + 0x18);
      if (((ulong)*(uint *)(lVar4 + 0xc) <
           (long)*(short *)(lVar4 + 0x18) + (long)*(short *)(lVar4 + 0x60) + 1U) &&
         (iVar3 = FT_GlyphLoader_CheckPoints(lVar4,0,1), iVar3 != 0)) goto LAB_01080ff8;
      if (0 < (long)*psVar8) {
        *(short *)(*(long *)(psVar8 + 0xc) + (long)*psVar8 * 2 + -2) = psVar8[1] + -1;
      }
    }
    *psVar8 = *psVar8 + 1;
    lVar4 = *(long *)(lVar7 + 0x18);
    if (((ulong)*(uint *)(lVar4 + 8) <
         (long)*(short *)(lVar4 + 0x1a) + (long)*(short *)(lVar4 + 0x62) + 1U) &&
       (iVar3 = FT_GlyphLoader_CheckPoints(lVar4,1,0), iVar3 != 0)) goto LAB_01080ff8;
    lVar4 = *(long *)(lVar7 + 0x28);
    if (*(char *)(lVar7 + 0x81) != '\0') {
      sVar1 = *(short *)(lVar4 + 2);
      lVar6 = *(long *)(lVar4 + 0x10);
      plVar2 = (long *)(*(long *)(lVar4 + 8) + (long)sVar1 * 0x10);
      plVar2[1] = lVar9 >> 10;
      *plVar2 = lVar5 >> 10;
      *(undefined1 *)(lVar6 + sVar1) = 1;
    }
    *(short *)(lVar4 + 2) = *(short *)(lVar4 + 2) + 1;
  }
  lVar5 = *(long *)(lVar7 + 0x18);
  lVar4 = param_2[3];
  lVar9 = param_2[2];
  if (((long)*(short *)(lVar5 + 0x1a) + (long)*(short *)(lVar5 + 0x62) + 1U <=
       (ulong)*(uint *)(lVar5 + 8)) || (iVar3 = FT_GlyphLoader_CheckPoints(lVar5,1,0), iVar3 == 0))
  {
    lVar5 = *(long *)(lVar7 + 0x28);
    if (*(char *)(lVar7 + 0x81) != '\0') {
      sVar1 = *(short *)(lVar5 + 2);
      lVar7 = *(long *)(lVar5 + 0x10);
      plVar2 = (long *)(*(long *)(lVar5 + 8) + (long)sVar1 * 0x10);
      plVar2[1] = lVar4 >> 10;
      *plVar2 = lVar9 >> 10;
      *(undefined1 *)(lVar7 + sVar1) = 1;
    }
    *(short *)(lVar5 + 2) = *(short *)(lVar5 + 2) + 1;
    return;
  }
LAB_01080ff8:
  if (**(int **)(param_1 + 0x30) == 0) {
    **(int **)(param_1 + 0x30) = iVar3;
  }
  return;
}

