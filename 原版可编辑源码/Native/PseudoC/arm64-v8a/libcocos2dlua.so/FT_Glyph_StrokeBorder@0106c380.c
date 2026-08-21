
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
     (*(undefined8 **)(lVar6 + 8) != &ft_outline_glyph_class)) {
    return 6;
  }
  iVar4 = FT_Glyph_Copy(lVar6,&local_58);
  if (iVar4 != 0) {
    return iVar4;
  }
  puVar1 = local_58 + 5;
  iVar4 = FT_Outline_Get_Orientation(puVar1);
                    /* try { // try from 0106c428 to 0116c42f has its CatchHandler @ 0106c430 */
                    /* catch() { ... } // from try @ 0106c3e4 with catch @ 0106c430
                       catch() { ... } // from try @ 0106c428 with catch @ 0106c430
                       try { // try from 0106c430 to 0116c4b3 has its CatchHandler @ 0106c1dc */
  iVar5 = FT_Stroker_ParseOutline(param_2,puVar1,0);
  if (iVar5 != 0) goto LAB_0106c4f8;
                    /* catch() { ... } // from try @ 0106c300 with catch @ 0106c444 */
  uVar7 = (ulong)((param_3 != '\0') != (iVar4 != 0));
  if (param_2 == 0) {
LAB_0106c4ac:
    uVar8 = 0;
    iVar5 = 0;
                    /* try { // try from 0106c4b4 to 0116c5db has its CatchHandler @ 0106c4b4
                       catch() { ... } // from try @ 0106c4b4 with catch @ 0106c4b4
                       catch() { ... } // from try @ 0106c5e4 with catch @ 0106c4b4 */
  }
  else {
    iVar4 = *(int *)(param_2 + uVar7 * 0x30 + 0x70);
                    /* catch() { ... } // from try @ 0106c2e4 with catch @ 0106c458 */
    if (iVar4 == 0) {
      iVar5 = 0;
      uVar8 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 0106c2d8 with catch @ 0106c45c */
                    /* catch() { ... } // from try @ 0106c2b8 with catch @ 0106c460
                       catch() { ... } // from try @ 0106c318 with catch @ 0106c460 */
      uVar8 = 0;
      bVar3 = false;
      iVar5 = 0;
      do {
        bVar2 = *(byte *)(*(long *)(param_2 + uVar7 * 0x30 + 0x80) + uVar8);
        if ((bVar2 >> 2 & 1) == 0) {
          if (!bVar3) goto LAB_0106c4ac;
        }
        else {
          if (bVar3) goto LAB_0106c4ac;
          bVar3 = true;
        }
                    /* catch() { ... } // from try @ 0106c22c with catch @ 0106c490 */
        uVar8 = uVar8 + 1;
        if ((bVar2 & 8) != 0) {
          bVar3 = false;
        }
        iVar5 = iVar5 + ((bVar2 & 8) >> 3);
      } while (iVar4 != (int)uVar8);
      if (bVar3) goto LAB_0106c4ac;
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
LAB_0106c4f8:
  FT_Done_Glyph(local_58);
  if (param_4 == '\0') {
    *param_1 = 0;
  }
                    /* try { // try from 0106c3e4 to 0116c3eb has its CatchHandler @ 0106c430 */
                    /* try { // try from 0106c3ec to 0116c427 has its CatchHandler @ 0106c1dc */
  return iVar5;
}

