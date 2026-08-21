
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
  
                    /* catch() { ... } // from try @ 0106bd10 with catch @ 0106c188
                       catch() { ... } // from try @ 0106c128 with catch @ 0106c188 */
                    /* catch() { ... } // from try @ 0106c0a4 with catch @ 0106c190 */
                    /* catch() { ... } // from try @ 0106bec0 with catch @ 0106c1a4 */
                    /* catch() { ... } // from try @ 0106be84 with catch @ 0106c1a8
                       catch() { ... } // from try @ 0106bf50 with catch @ 0106c1a8 */
  if (((param_1 == (long *)0x0) || (lVar8 = *param_1, lVar8 == 0)) ||
     (*(undefined8 **)(lVar8 + 8) != &ft_outline_glyph_class)) {
    return 6;
  }
  iVar4 = FT_Glyph_Copy(lVar8,&local_48);
  if (iVar4 != 0) {
    return iVar4;
  }
  puVar1 = local_48 + 5;
  iVar4 = FT_Stroker_ParseOutline(param_2,puVar1,0);
  if (iVar4 != 0) goto LAB_0106c33c;
  if (param_2 == 0) {
                    /* try { // try from 0106c2d8 to 0116c2df has its CatchHandler @ 0106c45c */
    iVar4 = 0;
    iVar7 = 0;
  }
  else {
    if (*(int *)(param_2 + 0x70) == 0) {
                    /* try { // try from 0106c2e4 to 0116c2ef has its CatchHandler @ 0106c458 */
      iVar6 = 0;
      lVar8 = 0;
LAB_0106c2ec:
      iVar5 = (int)lVar8;
      *(undefined1 *)(param_2 + 0x98) = 1;
      iVar4 = *(int *)(param_2 + 0xa0);
      if (iVar4 != 0) goto LAB_0106c284;
LAB_0106c2fc:
      iVar7 = 0;
                    /* try { // try from 0106c300 to 0116c30b has its CatchHandler @ 0106c444 */
      lVar8 = 0;
LAB_0106c304:
      iVar4 = (int)lVar8;
      *(undefined1 *)(param_2 + 200) = 1;
    }
    else {
                    /* try { // try from 0106c22c to 0116c26b has its CatchHandler @ 0106c490 */
      lVar8 = 0;
      bVar3 = false;
      iVar6 = 0;
      do {
        bVar2 = *(byte *)(*(long *)(param_2 + 0x80) + lVar8);
        if ((bVar2 >> 2 & 1) == 0) {
          if (!bVar3) goto LAB_0106c274;
        }
        else {
          if (bVar3) goto LAB_0106c274;
          bVar3 = true;
        }
        lVar8 = lVar8 + 1;
        if ((bVar2 & 8) != 0) {
          bVar3 = false;
        }
        iVar6 = iVar6 + ((bVar2 & 8) >> 3);
                    /* try { // try from 0106c26c to 0116c27b has its CatchHandler @ 0106c480 */
      } while (*(int *)(param_2 + 0x70) != (int)lVar8);
      if (!bVar3) goto LAB_0106c2ec;
LAB_0106c274:
      iVar5 = 0;
      iVar6 = 0;
      iVar4 = *(int *)(param_2 + 0xa0);
      if (iVar4 == 0) goto LAB_0106c2fc;
LAB_0106c284:
      lVar8 = 0;
      bVar3 = false;
      iVar7 = 0;
      do {
        bVar2 = *(byte *)(*(long *)(param_2 + 0xb0) + lVar8);
        if ((bVar2 >> 2 & 1) == 0) {
          if (!bVar3) goto LAB_0106c2cc;
        }
        else {
          if (bVar3) goto LAB_0106c2cc;
          bVar3 = true;
        }
        lVar8 = lVar8 + 1;
                    /* try { // try from 0106c2b8 to 0116c2cb has its CatchHandler @ 0106c460 */
        if ((bVar2 & 8) != 0) {
          bVar3 = false;
        }
        iVar7 = iVar7 + ((bVar2 & 8) >> 3);
      } while (iVar4 != (int)lVar8);
      if (!bVar3) goto LAB_0106c304;
LAB_0106c2cc:
      iVar4 = 0;
      iVar7 = 0;
    }
    iVar4 = iVar4 + iVar5;
    iVar7 = iVar7 + iVar6;
  }
                    /* try { // try from 0106c318 to 0116c35b has its CatchHandler @ 0106c460 */
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
LAB_0106c33c:
  FT_Done_Glyph(local_48);
  if (param_3 == '\0') {
    *param_1 = 0;
  }
                    /* try { // try from 0106c1dc to 0116c22b has its CatchHandler @ 0106c1dc
                       catch() { ... } // from try @ 0106c1dc with catch @ 0106c1dc
                       catch() { ... } // from try @ 0106c3ec with catch @ 0106c1dc
                       catch() { ... } // from try @ 0106c430 with catch @ 0106c1dc */
  return iVar4;
}

