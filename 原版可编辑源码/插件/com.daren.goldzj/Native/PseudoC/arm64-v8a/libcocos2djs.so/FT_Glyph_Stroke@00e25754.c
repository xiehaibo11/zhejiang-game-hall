
int FT_Glyph_Stroke(long *param_1,long param_2,char param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *local_48;
  
  if (((param_1 == (long *)0x0) || (lVar8 = *param_1, lVar8 == 0)) ||
     (*(undefined8 **)(lVar8 + 8) != &DAT_01c97ff0)) {
    return 6;
  }
  iVar4 = FT_Glyph_Copy(lVar8,&local_48);
  if (iVar4 != 0) {
    return iVar4;
  }
  puVar1 = local_48 + 5;
  iVar4 = FT_Stroker_ParseOutline(param_2,puVar1,0);
  if (iVar4 != 0) goto LAB_00e25910;
  if (param_2 == 0) {
    iVar4 = 0;
    iVar7 = 0;
  }
  else {
    if (*(int *)(param_2 + 0x70) == 0) {
      iVar6 = 0;
      lVar8 = 0;
LAB_00e258c0:
      iVar5 = (int)lVar8;
      *(undefined1 *)(param_2 + 0x98) = 1;
      iVar4 = *(int *)(param_2 + 0xa0);
      if (iVar4 != 0) goto LAB_00e25858;
LAB_00e258d0:
      iVar7 = 0;
      lVar8 = 0;
LAB_00e258d8:
      iVar4 = (int)lVar8;
      *(undefined1 *)(param_2 + 200) = 1;
    }
    else {
      lVar8 = 0;
      bVar3 = false;
      iVar6 = 0;
      do {
        bVar2 = *(byte *)(*(long *)(param_2 + 0x80) + lVar8);
        if ((bVar2 >> 2 & 1) == 0) {
          if (!bVar3) goto LAB_00e25848;
        }
        else {
          if (bVar3) goto LAB_00e25848;
          bVar3 = true;
        }
        lVar8 = lVar8 + 1;
        if ((bVar2 & 8) != 0) {
          bVar3 = false;
        }
        iVar6 = iVar6 + ((bVar2 & 8) >> 3);
      } while (*(int *)(param_2 + 0x70) != (int)lVar8);
      if (!bVar3) goto LAB_00e258c0;
LAB_00e25848:
      iVar5 = 0;
      iVar6 = 0;
      iVar4 = *(int *)(param_2 + 0xa0);
      if (iVar4 == 0) goto LAB_00e258d0;
LAB_00e25858:
      lVar8 = 0;
      bVar3 = false;
      iVar7 = 0;
      do {
        bVar2 = *(byte *)(*(long *)(param_2 + 0xb0) + lVar8);
        if ((bVar2 >> 2 & 1) == 0) {
          if (!bVar3) goto LAB_00e258a0;
        }
        else {
          if (bVar3) goto LAB_00e258a0;
          bVar3 = true;
        }
        lVar8 = lVar8 + 1;
        if ((bVar2 & 8) != 0) {
          bVar3 = false;
        }
        iVar7 = iVar7 + ((bVar2 & 8) >> 3);
      } while (iVar4 != (int)lVar8);
      if (!bVar3) goto LAB_00e258d8;
LAB_00e258a0:
      iVar4 = 0;
      iVar7 = 0;
    }
    iVar4 = iVar4 + iVar5;
    iVar7 = iVar7 + iVar6;
  }
  FT_Outline_Done(*local_48,puVar1);
  iVar4 = FT_Outline_New(*local_48,iVar4,iVar7,puVar1);
  if (iVar4 == 0) {
    *(undefined4 *)puVar1 = 0;
    FT_Stroker_Export(param_2,puVar1);
    if (param_3 != '\0') {
      FT_Done_Glyph(*param_1);
    }
    *param_1 = (long)local_48;
    return 0;
  }
LAB_00e25910:
  FT_Done_Glyph(local_48);
  if (param_3 == '\0') {
    *param_1 = 0;
  }
  return iVar4;
}

