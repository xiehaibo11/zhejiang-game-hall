
undefined8 FUN_00dd79f8(undefined8 *param_1)

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
      if (sVar2 == 4) goto joined_r0x00dd7acc;
LAB_00dd7ad8:
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
          param_1[0x5f] = FUN_00dd8aa8;
          param_1[0x61] = FUN_00dd8aa8;
          param_1[99] = FUN_00dd8aa8;
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
        goto LAB_00dd7a54;
      }
    }
    else {
      uVar11 = uVar1 + 0x1f & 0xffffffe0;
      *(undefined8 *)(lVar9 + 0x60) = 0;
      if (0xffffffdf < uVar1) {
        uVar11 = 0;
      }
joined_r0x00dd7acc:
      if ((uVar11 & 0x8000001f) == 0) {
        uVar11 = uVar11 << 1;
        bVar3 = true;
        goto LAB_00dd7ad8;
      }
    }
    TIFFErrorExt(param_1[0x77],*param_1,"Row pixels integer overflow (rowpixels %u)");
  }
  else {
    uVar5 = param_1[0x77];
    pcVar6 = "Bits/sample must be 1 for Group 3/4 encoding/decoding";
LAB_00dd7a54:
    TIFFErrorExt(uVar5,"Fax3SetupState",pcVar6);
  }
  return 0;
}

