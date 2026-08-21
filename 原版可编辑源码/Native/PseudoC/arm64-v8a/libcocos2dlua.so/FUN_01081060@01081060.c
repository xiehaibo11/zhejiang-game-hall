
void FUN_01081060(long param_1,long *param_2)

{
  char cVar1;
  short sVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  short *psVar10;
  
  lVar9 = *(long *)(param_1 + 0x38);
  if (*(char *)(lVar9 + 0x80) == '\0') {
    lVar7 = param_2[1];
    lVar6 = *param_2;
    psVar10 = *(short **)(lVar9 + 0x28);
    *(undefined1 *)(lVar9 + 0x80) = 1;
    if (*(char *)(lVar9 + 0x81) != '\0') {
      lVar5 = *(long *)(lVar9 + 0x18);
      if (((ulong)*(uint *)(lVar5 + 0xc) <
           (long)*(short *)(lVar5 + 0x18) + (long)*(short *)(lVar5 + 0x60) + 1U) &&
         (iVar4 = FT_GlyphLoader_CheckPoints(lVar5,0,1), iVar4 != 0)) goto LAB_010811b4;
      if (0 < (long)*psVar10) {
        *(short *)(*(long *)(psVar10 + 0xc) + (long)*psVar10 * 2 + -2) = psVar10[1] + -1;
      }
    }
    *psVar10 = *psVar10 + 1;
    lVar5 = *(long *)(lVar9 + 0x18);
    if (((ulong)*(uint *)(lVar5 + 8) <
         (long)*(short *)(lVar5 + 0x1a) + (long)*(short *)(lVar5 + 0x62) + 1U) &&
       (iVar4 = FT_GlyphLoader_CheckPoints(lVar5,1,0), iVar4 != 0)) goto LAB_010811b4;
    lVar5 = *(long *)(lVar9 + 0x28);
    if (*(char *)(lVar9 + 0x81) != '\0') {
      sVar2 = *(short *)(lVar5 + 2);
      lVar8 = *(long *)(lVar5 + 0x10);
      plVar3 = (long *)(*(long *)(lVar5 + 8) + (long)sVar2 * 0x10);
      plVar3[1] = lVar7 >> 10;
      *plVar3 = lVar6 >> 10;
      *(undefined1 *)(lVar8 + sVar2) = 1;
    }
    *(short *)(lVar5 + 2) = *(short *)(lVar5 + 2) + 1;
  }
  lVar6 = *(long *)(lVar9 + 0x18);
  if (((ulong)*(uint *)(lVar6 + 8) <
       (long)*(short *)(lVar6 + 0x1a) + (long)*(short *)(lVar6 + 0x62) + 3U) &&
     (iVar4 = FT_GlyphLoader_CheckPoints(lVar6,3,0), iVar4 != 0)) {
LAB_010811b4:
    if (**(int **)(param_1 + 0x30) == 0) {
      **(int **)(param_1 + 0x30) = iVar4;
    }
    return;
  }
  lVar6 = *(long *)(lVar9 + 0x28);
  if (*(char *)(lVar9 + 0x81) == '\0') {
    *(short *)(lVar6 + 2) = *(short *)(lVar6 + 2) + 1;
    lVar7 = lVar6;
  }
  else {
    lVar5 = param_2[2];
    sVar2 = *(short *)(lVar6 + 2);
    lVar7 = *(long *)(lVar6 + 0x10);
    plVar3 = (long *)(*(long *)(lVar6 + 8) + (long)sVar2 * 0x10);
    plVar3[1] = param_2[3] >> 10;
    *plVar3 = lVar5 >> 10;
    *(undefined1 *)(lVar7 + sVar2) = 2;
    cVar1 = *(char *)(lVar9 + 0x81);
    lVar7 = *(long *)(lVar9 + 0x28);
    *(short *)(lVar6 + 2) = *(short *)(lVar6 + 2) + 1;
    if (cVar1 != '\0') {
      lVar5 = param_2[4];
      sVar2 = *(short *)(lVar7 + 2);
      lVar6 = *(long *)(lVar7 + 0x10);
      plVar3 = (long *)(*(long *)(lVar7 + 8) + (long)sVar2 * 0x10);
      plVar3[1] = param_2[5] >> 10;
      *plVar3 = lVar5 >> 10;
      *(undefined1 *)(lVar6 + sVar2) = 2;
      cVar1 = *(char *)(lVar9 + 0x81);
      lVar9 = *(long *)(lVar9 + 0x28);
      *(short *)(lVar7 + 2) = *(short *)(lVar7 + 2) + 1;
      if (cVar1 == '\0') {
        psVar10 = (short *)(lVar9 + 2);
      }
      else {
        lVar7 = param_2[6];
        psVar10 = (short *)(lVar9 + 2);
        sVar2 = *psVar10;
        lVar6 = *(long *)(lVar9 + 0x10);
        plVar3 = (long *)(*(long *)(lVar9 + 8) + (long)sVar2 * 0x10);
        plVar3[1] = param_2[7] >> 10;
        *plVar3 = lVar7 >> 10;
        *(undefined1 *)(lVar6 + sVar2) = 1;
      }
      goto LAB_0108127c;
    }
  }
  psVar10 = (short *)(lVar7 + 2);
  *psVar10 = *(short *)(lVar7 + 2) + 1;
LAB_0108127c:
  *psVar10 = *psVar10 + 1;
  return;
}

