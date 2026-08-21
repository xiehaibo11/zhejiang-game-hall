
undefined8 FUN_01133ea0(undefined8 *param_1)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  size_t __size;
  void *pvVar4;
  undefined8 uVar5;
  char *pcVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  
  if (*(short *)((long)param_1 + 0x74) == 1) {
                    /* try { // try from 01133ec8 to 01233ee7 has its CatchHandler @ 01134034 */
    lVar9 = param_1[0x6a];
    if ((*(byte *)((long)param_1 + 0x11) >> 2 & 1) == 0) {
      __size = TIFFScanlineSize();
      puVar7 = (uint *)(param_1 + 0xb);
    }
    else {
      __size = TIFFTileRowSize(param_1);
      puVar7 = (uint *)((long)param_1 + 100);
    }
    uVar1 = *puVar7;
    *(size_t *)(lVar9 + 8) = __size;
    *(uint *)(lVar9 + 0x10) = uVar1;
    if ((*(byte *)(lVar9 + 0x20) & 1) == 0) {
      sVar2 = *(short *)(param_1 + 0xf);
      uVar11 = uVar1 + 0x1f & 0xffffffe0;
      bVar3 = false;
      if (0xffffffdf < uVar1) {
        uVar11 = 0;
      }
      *(undefined8 *)(lVar9 + 0x60) = 0;
      if (sVar2 == 4) goto joined_r0x01133f74;
LAB_01133f80:
      plVar10 = (long *)(lVar9 + 0x60);
      if (((uVar11 != 0) && (uVar1 = uVar11 << 1, uVar1 != 0)) && ((uVar11 & 0x7fffffff) == uVar11))
      {
        pvVar4 = (void *)_TIFFCheckMalloc(param_1,(ulong)uVar1,4,"for Group 3/4 run arrays");
        *plVar10 = (long)pvVar4;
        if (pvVar4 == (void *)0x0) {
          return 0;
        }
        memset(pvVar4,0,(ulong)uVar1 << 2);
        *(long *)(lVar9 + 0x70) = *plVar10;
        if (bVar3) {
          lVar8 = *plVar10 + (ulong)uVar11 * 4;
        }
        else {
          lVar8 = 0;
        }
        *(long *)(lVar9 + 0x68) = lVar8;
        if ((*(short *)(param_1 + 0xf) == 3) && ((*(byte *)(lVar9 + 0x20) & 1) != 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01133d20 with catch @ 0113402c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01133db8 with catch @ 01134030
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01133ec8 with catch @ 01134034
                        */
          param_1[0x5f] = FUN_01134f50;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01133e3c with catch @ 01134038
                        */
          param_1[0x61] = FUN_01134f50;
          param_1[99] = FUN_01134f50;
        }
        lVar9 = param_1[0x6a];
        if (!bVar3) {
          *(undefined8 *)(lVar9 + 0x80) = 0;
          return 1;
        }
        pvVar4 = _TIFFmalloc(__size);
        *(void **)(lVar9 + 0x80) = pvVar4;
        if (pvVar4 != (void *)0x0) {
          return 1;
        }
        uVar5 = param_1[0x77];
        pcVar6 = "No space for Group 3/4 reference line";
        goto LAB_01133efc;
      }
    }
    else {
      uVar11 = uVar1 + 0x1f & 0xffffffe0;
      *(undefined8 *)(lVar9 + 0x60) = 0;
      if (0xffffffdf < uVar1) {
        uVar11 = 0;
      }
joined_r0x01133f74:
      if ((uVar11 & 0x8000001f) == 0) {
        uVar11 = uVar11 << 1;
        bVar3 = true;
        goto LAB_01133f80;
      }
    }
    TIFFErrorExt(param_1[0x77],*param_1,"Row pixels integer overflow (rowpixels %u)");
  }
  else {
                    /* try { // try from 01133ee8 to 012340e3 has its CatchHandler @ 01133d00 */
    uVar5 = param_1[0x77];
    pcVar6 = "Bits/sample must be 1 for Group 3/4 encoding/decoding";
LAB_01133efc:
    TIFFErrorExt(uVar5,"Fax3SetupState",pcVar6);
  }
  return 0;
}

