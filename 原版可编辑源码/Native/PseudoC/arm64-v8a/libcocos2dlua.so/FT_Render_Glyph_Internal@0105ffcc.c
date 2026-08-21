
ulong FT_Render_Glyph_Internal(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
                    /* try { // try from 0105ffe8 to 0116004b has its CatchHandler @ 0105ff74 */
  iVar1 = *(int *)(param_2 + 0x90);
  if (iVar1 != 0x62697473) {
    if (iVar1 == 0x6f75746c) {
      lVar9 = *(long *)(param_1 + 0x128);
      lVar10 = *(long *)(param_1 + 0x118);
    }
    else {
                    /* catch() { ... } // from try @ 0105ffc4 with catch @ 01060028 */
      if (param_1 == 0) {
        return 7;
      }
      for (lVar10 = *(long *)(param_1 + 0x118); lVar10 != 0; lVar10 = *(long *)(lVar10 + 8)) {
        lVar9 = *(long *)(lVar10 + 0x10);
        if (*(int *)(lVar9 + 0x20) == iVar1) goto joined_r0x01060054;
      }
      lVar9 = 0;
    }
joined_r0x01060054:
    if (lVar9 == 0) {
      return 7;
    }
    bVar2 = false;
    while( true ) {
      uVar5 = (**(code **)(lVar9 + 0x78))(lVar9,param_2,param_3,0);
      uVar4 = (uint)uVar5;
      if ((uVar4 == 0) || ((uVar4 & 0xff) != 0x13)) break;
      plVar6 = (long *)(param_1 + 0x118);
      if (lVar10 != 0) {
        plVar6 = (long *)(lVar10 + 8);
      }
      lVar10 = *plVar6;
      if (lVar10 != 0) {
        do {
          lVar9 = *(long *)(lVar10 + 0x10);
          if (*(int *)(lVar9 + 0x20) == *(int *)(param_2 + 0x90)) goto LAB_010600b8;
          lVar10 = *(long *)(lVar10 + 8);
        } while (lVar10 != 0);
      }
      lVar9 = 0;
LAB_010600b8:
      bVar2 = true;
      if (lVar9 == 0) {
        return uVar5;
      }
    }
    bVar3 = uVar4 == 0;
    if (bVar3 && bVar2) {
      uVar4 = 0x21;
    }
    if (!bVar3 || !bVar2) {
      return (ulong)uVar4;
    }
    plVar6 = *(long **)(param_1 + 0x118);
    if (plVar6 == (long *)0x0) {
      return 6;
    }
    while (plVar6[2] != lVar9) {
                    /* try { // try from 0106010c to 0116021b has its CatchHandler @ 0106010c
                       catch() { ... } // from try @ 0106010c with catch @ 0106010c
                       catch() { ... } // from try @ 010602c4 with catch @ 0106010c */
      plVar6 = (long *)plVar6[1];
      if (plVar6 == (long *)0x0) {
        return 6;
      }
    }
    lVar10 = *plVar6;
    if (lVar10 != 0) {
      plVar8 = (long *)plVar6[1];
      *(long **)(lVar10 + 8) = plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(param_1 + 0x120);
      }
      *plVar8 = lVar10;
      *plVar6 = 0;
      puVar7 = *(undefined8 **)(param_1 + 0x118);
      plVar6[1] = (long)puVar7;
      *puVar7 = plVar6;
      *(long **)(param_1 + 0x118) = plVar6;
    }
    if (*(int *)(lVar9 + 0x20) == 0x6f75746c) {
      *(long *)(param_1 + 0x128) = lVar9;
      return 0;
    }
  }
  return 0;
}

