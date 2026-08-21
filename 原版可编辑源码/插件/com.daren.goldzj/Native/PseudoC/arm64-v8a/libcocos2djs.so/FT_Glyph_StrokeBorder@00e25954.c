
int FT_Glyph_StrokeBorder(long *param_1,long param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *local_58;
  
  if (((param_1 == (long *)0x0) || (lVar6 = *param_1, lVar6 == 0)) ||
     (*(undefined8 **)(lVar6 + 8) != &DAT_01c97ff0)) {
    return 6;
  }
  iVar4 = FT_Glyph_Copy(lVar6,&local_58);
  if (iVar4 != 0) {
    return iVar4;
  }
  puVar1 = local_58 + 5;
  iVar4 = FT_Outline_Get_Orientation(puVar1);
  iVar5 = FT_Stroker_ParseOutline(param_2,puVar1,0);
  if (iVar5 != 0) goto LAB_00e25acc;
  uVar7 = (ulong)((param_3 != '\0') != (iVar4 != 0));
  if (param_2 == 0) {
LAB_00e25a80:
    uVar8 = 0;
    iVar5 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + uVar7 * 0x30 + 0x70);
    if (iVar4 == 0) {
      iVar5 = 0;
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      bVar3 = false;
      iVar5 = 0;
      do {
        bVar2 = *(byte *)(*(long *)(param_2 + uVar7 * 0x30 + 0x80) + uVar8);
        if ((bVar2 >> 2 & 1) == 0) {
          if (!bVar3) goto LAB_00e25a80;
        }
        else {
          if (bVar3) goto LAB_00e25a80;
          bVar3 = true;
        }
        uVar8 = uVar8 + 1;
        if ((bVar2 & 8) != 0) {
          bVar3 = false;
        }
        iVar5 = iVar5 + ((bVar2 & 8) >> 3);
      } while (iVar4 != (int)uVar8);
      if (bVar3) goto LAB_00e25a80;
    }
    *(undefined1 *)(param_2 + uVar7 * 0x30 + 0x98) = 1;
  }
  FT_Outline_Done(*local_58,puVar1);
  iVar5 = FT_Outline_New(*local_58,uVar8 & 0xffffffff,iVar5,puVar1);
  if (iVar5 == 0) {
    *(undefined4 *)puVar1 = 0;
    FT_Stroker_ExportBorder(param_2,uVar7,puVar1);
    if (param_4 != '\0') {
      FT_Done_Glyph(*param_1);
    }
    *param_1 = (long)local_58;
    return 0;
  }
LAB_00e25acc:
  FT_Done_Glyph(local_58);
  if (param_4 == '\0') {
    *param_1 = 0;
  }
  return iVar5;
}

