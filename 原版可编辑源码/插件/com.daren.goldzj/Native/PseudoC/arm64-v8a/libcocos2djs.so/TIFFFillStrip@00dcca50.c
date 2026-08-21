
undefined8 TIFFFillStrip(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  size_t sVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar11 = (ulong)param_2;
  iVar3 = _TIFFFillStriles();
  if (iVar3 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0xf0) == 0) {
    return 0;
  }
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((uVar5 >> 0x11 & 1) == 0) {
    uVar12 = *(ulong *)(*(long *)(param_1 + 0xf0) + uVar11 * 8);
    if (uVar12 == 0) {
      TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFFillStrip",
                   "Invalid strip byte count %llu, strip %lu",0,uVar11);
      return 0;
    }
    if (((uVar5 >> 0xb & 1) != 0) && ((uVar5 & (*(ushort *)(param_1 + 0x7e) | 0x100)) != 0)) {
      if (((uVar5 >> 9 & 1) != 0) && (*(void **)(param_1 + 0x368) != (void *)0x0)) {
        _TIFFfree(*(void **)(param_1 + 0x368));
        *(undefined8 *)(param_1 + 0x368) = 0;
        *(undefined8 *)(param_1 + 0x370) = 0;
        uVar5 = *(uint *)(param_1 + 0x10);
      }
      uVar9 = *(ulong *)(param_1 + 0x3a0);
      *(uint *)(param_1 + 0x10) = uVar5 & 0xfffffdff;
      uVar10 = *(ulong *)(*(long *)(param_1 + 0xe8) + uVar11 * 8);
      if ((uVar9 < uVar12) || (uVar9 - uVar12 < uVar10)) {
        TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFFillStrip",
                     "Read error on strip %lu; got %llu bytes, expected %llu",uVar11,uVar9 - uVar10,
                     uVar12);
        *(undefined4 *)(param_1 + 0x284) = 0xffffffff;
        return 0;
      }
      *(ulong *)(param_1 + 0x370) = uVar12;
      lVar7 = *(long *)(*(long *)(param_1 + 0xe8) + uVar11 * 8);
      *(undefined8 *)(param_1 + 0x378) = 0;
      *(ulong *)(param_1 + 0x380) = uVar12;
      *(long *)(param_1 + 0x368) = *(long *)(param_1 + 0x398) + lVar7;
      *(uint *)(param_1 + 0x10) = uVar5 & 0xfffffdff | 0x800000;
      goto LAB_00dccc60;
    }
    if (*(long *)(param_1 + 0x370) < (long)uVar12) {
      *(undefined4 *)(param_1 + 0x284) = 0xffffffff;
      if ((uVar5 >> 9 & 1) == 0) {
        TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFFillStrip",
                     "Data buffer too small to hold strip %lu",uVar11);
        return 0;
      }
      *(uint *)(param_1 + 0x10) = uVar5 & 0xff7fffff;
      if (*(void **)(param_1 + 0x368) != (void *)0x0) {
        _TIFFfree(*(void **)(param_1 + 0x368));
        *(undefined8 *)(param_1 + 0x368) = 0;
        *(undefined8 *)(param_1 + 0x370) = 0;
      }
      sVar8 = uVar12 + 0x3ff & 0xfffffffffffffc00;
      if ((uVar12 + 0x3ff & 0xfffffffffffffc00) == 0) {
        sVar8 = 0xffffffffffffffff;
      }
      *(size_t *)(param_1 + 0x370) = sVar8;
      pvVar4 = _TIFFmalloc(sVar8);
      *(void **)(param_1 + 0x368) = pvVar4;
      uVar5 = *(uint *)(param_1 + 0x10) | 0x200;
      *(uint *)(param_1 + 0x10) = uVar5;
      if (pvVar4 == (void *)0x0) goto LAB_00dccd2c;
    }
    if ((uVar5 >> 0x17 & 1) == 0) {
      pvVar4 = *(void **)(param_1 + 0x368);
    }
    else {
      *(undefined4 *)(param_1 + 0x284) = 0xffffffff;
      *(uint *)(param_1 + 0x10) = uVar5 & 0xff7fffff;
      if (*(void **)(param_1 + 0x368) != (void *)0x0) {
        if ((uVar5 >> 9 & 1) != 0) {
          _TIFFfree(*(void **)(param_1 + 0x368));
        }
        *(undefined8 *)(param_1 + 0x368) = 0;
        *(undefined8 *)(param_1 + 0x370) = 0;
      }
      sVar8 = uVar12 + 0x3ff & 0xfffffffffffffc00;
      if ((uVar12 + 0x3ff & 0xfffffffffffffc00) == 0) {
        sVar8 = 0xffffffffffffffff;
      }
      *(size_t *)(param_1 + 0x370) = sVar8;
      pvVar4 = _TIFFmalloc(sVar8);
      *(void **)(param_1 + 0x368) = pvVar4;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200;
      if (pvVar4 == (void *)0x0) {
LAB_00dccd2c:
        TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFReadBufferSetup",
                     "No space for data buffer at scanline %lu",*(undefined4 *)(param_1 + 0x27c));
        *(undefined8 *)(param_1 + 0x370) = 0;
        return 0;
      }
    }
    uVar11 = FUN_00dcce4c(param_1,uVar11,pvVar4,uVar12,"TIFFFillStrip");
    if (uVar11 != uVar12) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(ulong *)(param_1 + 0x380) = uVar12;
    if ((*(uint *)(param_1 + 0x10) & (*(ushort *)(param_1 + 0x7e) | 0x100)) == 0) {
      TIFFReverseBits(*(undefined8 *)(param_1 + 0x368),uVar12);
    }
  }
LAB_00dccc60:
  iVar3 = _TIFFFillStriles(param_1);
  if ((iVar3 != 0) && (*(long *)(param_1 + 0xf0) != 0)) {
    uVar5 = *(uint *)(param_1 + 0x10);
    if ((uVar5 >> 5 & 1) == 0) {
      iVar3 = (**(code **)(param_1 + 0x2c8))(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      uVar5 = *(uint *)(param_1 + 0x10) | 0x20;
      *(uint *)(param_1 + 0x10) = uVar5;
    }
    uVar1 = *(uint *)(param_1 + 0xe0);
    *(uint *)(param_1 + 0x284) = param_2;
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    *(uint *)(param_1 + 0x27c) = *(int *)(param_1 + 0x84) * (param_2 - uVar2 * uVar1);
    *(uint *)(param_1 + 0x10) = uVar5 & 0xffefffff;
    if ((uVar5 >> 0x11 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_1 + 0x368);
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0xf0) + (ulong)param_2 * 8);
    }
    else {
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x388) = 0;
    }
    *(undefined8 *)(param_1 + 0x390) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00dcccf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(param_1 + 0x2d0))(param_1);
    return uVar6;
  }
  return 0;
}

