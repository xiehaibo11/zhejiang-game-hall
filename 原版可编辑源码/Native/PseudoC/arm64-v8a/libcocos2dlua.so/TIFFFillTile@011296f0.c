
undefined8 TIFFFillTile(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  undefined8 uVar7;
  size_t sVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar12 = (ulong)param_2;
  iVar4 = _TIFFFillStriles();
  if (iVar4 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0xf0) == 0) {
    return 0;
  }
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((uVar6 >> 0x11 & 1) == 0) {
    uVar13 = *(ulong *)(*(long *)(param_1 + 0xf0) + uVar12 * 8);
    if (uVar13 == 0) {
      TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFFillTile",
                   "%llu: Invalid tile byte count, tile %lu",0,uVar12);
      return 0;
    }
    if (((uVar6 >> 0xb & 1) != 0) && ((uVar6 & (*(ushort *)(param_1 + 0x7e) | 0x100)) != 0)) {
      if (((uVar6 >> 9 & 1) != 0) && (*(void **)(param_1 + 0x368) != (void *)0x0)) {
        _TIFFfree(*(void **)(param_1 + 0x368));
        *(undefined8 *)(param_1 + 0x368) = 0;
        *(undefined8 *)(param_1 + 0x370) = 0;
        uVar6 = *(uint *)(param_1 + 0x10);
      }
      *(uint *)(param_1 + 0x10) = uVar6 & 0xfffffdff;
      if ((*(ulong *)(param_1 + 0x3a0) < uVar13) ||
         (*(ulong *)(param_1 + 0x3a0) - uVar13 < *(ulong *)(*(long *)(param_1 + 0xe8) + uVar12 * 8))
         ) {
        *(undefined4 *)(param_1 + 0x2ac) = 0xffffffff;
        return 0;
      }
      *(ulong *)(param_1 + 0x370) = uVar13;
      lVar9 = *(long *)(*(long *)(param_1 + 0xe8) + uVar12 * 8);
      *(undefined8 *)(param_1 + 0x378) = 0;
      *(ulong *)(param_1 + 0x380) = uVar13;
      *(long *)(param_1 + 0x368) = *(long *)(param_1 + 0x398) + lVar9;
      *(uint *)(param_1 + 0x10) = uVar6 & 0xfffffdff | 0x800000;
      goto LAB_01129930;
    }
    if (*(long *)(param_1 + 0x370) < (long)uVar13) {
      *(undefined4 *)(param_1 + 0x2ac) = 0xffffffff;
      if ((uVar6 >> 9 & 1) == 0) {
        TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFFillTile",
                     "Data buffer too small to hold tile %lu",uVar12);
        return 0;
      }
      *(uint *)(param_1 + 0x10) = uVar6 & 0xff7fffff;
      if (*(void **)(param_1 + 0x368) != (void *)0x0) {
        _TIFFfree(*(void **)(param_1 + 0x368));
        *(undefined8 *)(param_1 + 0x368) = 0;
        *(undefined8 *)(param_1 + 0x370) = 0;
      }
      sVar8 = uVar13 + 0x3ff & 0xfffffffffffffc00;
      if ((uVar13 + 0x3ff & 0xfffffffffffffc00) == 0) {
        sVar8 = 0xffffffffffffffff;
      }
      *(size_t *)(param_1 + 0x370) = sVar8;
      pvVar5 = _TIFFmalloc(sVar8);
      *(void **)(param_1 + 0x368) = pvVar5;
      uVar6 = *(uint *)(param_1 + 0x10) | 0x200;
      *(uint *)(param_1 + 0x10) = uVar6;
      if (pvVar5 == (void *)0x0) goto LAB_011298e8;
    }
    if ((uVar6 >> 0x17 & 1) == 0) {
      pvVar5 = *(void **)(param_1 + 0x368);
    }
    else {
      *(undefined4 *)(param_1 + 0x2ac) = 0xffffffff;
      *(uint *)(param_1 + 0x10) = uVar6 & 0xff7fffff;
      if (*(void **)(param_1 + 0x368) != (void *)0x0) {
        if ((uVar6 >> 9 & 1) != 0) {
          _TIFFfree(*(void **)(param_1 + 0x368));
        }
        *(undefined8 *)(param_1 + 0x368) = 0;
        *(undefined8 *)(param_1 + 0x370) = 0;
      }
      sVar8 = uVar13 + 0x3ff & 0xfffffffffffffc00;
      if ((uVar13 + 0x3ff & 0xfffffffffffffc00) == 0) {
        sVar8 = 0xffffffffffffffff;
      }
      *(size_t *)(param_1 + 0x370) = sVar8;
      pvVar5 = _TIFFmalloc(sVar8);
      *(void **)(param_1 + 0x368) = pvVar5;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200;
      if (pvVar5 == (void *)0x0) {
LAB_011298e8:
        TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFReadBufferSetup",
                     "No space for data buffer at scanline %lu",*(undefined4 *)(param_1 + 0x27c));
        *(undefined8 *)(param_1 + 0x370) = 0;
        return 0;
      }
    }
    uVar12 = FUN_01129b04(param_1,uVar12,pvVar5,uVar13,"TIFFFillTile");
    if (uVar12 != uVar13) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(ulong *)(param_1 + 0x380) = uVar13;
    if ((*(uint *)(param_1 + 0x10) & (*(ushort *)(param_1 + 0x7e) | 0x100)) == 0) {
      TIFFReverseBits(*(undefined8 *)(param_1 + 0x368),uVar13);
    }
  }
LAB_01129930:
  iVar4 = _TIFFFillStriles(param_1);
  if ((iVar4 != 0) && (*(long *)(param_1 + 0xf0) != 0)) {
    uVar6 = *(uint *)(param_1 + 0x10);
    if ((uVar6 >> 5 & 1) == 0) {
      iVar4 = (**(code **)(param_1 + 0x2c8))(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      uVar6 = *(uint *)(param_1 + 0x10) | 0x20;
      *(uint *)(param_1 + 0x10) = uVar6;
    }
    uVar1 = *(uint *)(param_1 + 100);
    uVar11 = 0;
    *(uint *)(param_1 + 0x2ac) = param_2;
    if (*(uint *)(param_1 + 0x58) < -uVar1) {
      uVar11 = 0;
      if (uVar1 != 0) {
        uVar11 = ((*(uint *)(param_1 + 0x58) + uVar1) - 1) / uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 0x68);
    uVar3 = 0;
    if (uVar11 != 0) {
      uVar3 = param_2 / uVar11;
    }
    uVar10 = 0;
    *(uint *)(param_1 + 0x27c) = uVar2 * (param_2 - uVar3 * uVar11);
    if (*(uint *)(param_1 + 0x5c) < -uVar2) {
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = ((uVar2 + *(uint *)(param_1 + 0x5c)) - 1) / uVar2;
      }
    }
    uVar11 = 0;
    if (uVar10 != 0) {
      uVar11 = param_2 / uVar10;
    }
    *(uint *)(param_1 + 0x2a8) = (param_2 - uVar11 * uVar10) * uVar1;
    *(uint *)(param_1 + 0x10) = uVar6 & 0xffefffff;
    if ((uVar6 >> 0x11 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_1 + 0x368);
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0xf0) + (ulong)param_2 * 8);
    }
    else {
      uVar7 = 0;
      *(undefined8 *)(param_1 + 0x388) = 0;
    }
    *(undefined8 *)(param_1 + 0x390) = uVar7;
    uVar6 = 0;
    if (*(uint *)(param_1 + 0xe0) != 0) {
      uVar6 = param_2 / *(uint *)(param_1 + 0xe0);
    }
                    /* WARNING: Could not recover jumptable at 0x01129a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(param_1 + 0x2d0))(param_1,uVar6);
    return uVar7;
  }
  return 0;
}

