
undefined4 TIFFReadScanline(undefined8 *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  
  if (*(int *)((long)param_1 + 0xc) == 1) {
    uVar4 = param_1[0x77];
    uVar7 = *param_1;
    pcVar8 = "File not open for reading";
  }
  else {
    if ((*(byte *)((long)param_1 + 0x11) >> 2 & 1) == 0) {
      uVar10 = (ulong)*(uint *)((long)param_1 + 0x5c);
      if (*(uint *)((long)param_1 + 0x5c) <= param_3) {
        uVar4 = param_1[0x77];
        pcVar8 = (char *)*param_1;
        pcVar9 = "%lu: Row out of range, max %lu";
LAB_01128be0:
        TIFFErrorExt(uVar4,pcVar8,pcVar9,param_3,uVar10);
        return 0xffffffff;
      }
      if (*(short *)((long)param_1 + 0xaa) == 2) {
        uVar10 = (ulong)*(ushort *)((long)param_1 + 0x82);
        if ((uint)*(ushort *)((long)param_1 + 0x82) <= (param_4 & 0xffff)) {
          uVar4 = param_1[0x77];
          pcVar8 = (char *)*param_1;
          param_3 = param_4 & 0xffff;
          pcVar9 = "%lu: Sample out of range, max %lu";
          goto LAB_01128be0;
        }
        uVar12 = 0;
        if (*(uint *)((long)param_1 + 0x84) != 0) {
          uVar12 = param_3 / *(uint *)((long)param_1 + 0x84);
        }
        uVar12 = uVar12 + *(int *)(param_1 + 0x1c) * (param_4 & 0xffff);
      }
      else {
        uVar12 = 0;
        if (*(uint *)((long)param_1 + 0x84) != 0) {
          uVar12 = param_3 / *(uint *)((long)param_1 + 0x84);
        }
      }
      if ((uVar12 != *(uint *)((long)param_1 + 0x284)) &&
         (iVar3 = TIFFFillStrip(param_1,uVar12), iVar3 == 0)) {
        return 0xffffffff;
      }
      if (param_3 < *(uint *)((long)param_1 + 0x27c)) {
        lVar13 = param_1[0x6f];
        iVar3 = _TIFFFillStriles(param_1);
        if (lVar13 != 0) {
          if (iVar3 == 0) {
            return 0xffffffff;
          }
          if (param_1[0x1e] == 0) {
            return 0xffffffff;
          }
          if ((long)param_1[0x6e] < 0) {
            *(undefined4 *)((long)param_1 + 0x284) = 0xffffffff;
            if ((*(uint *)(param_1 + 2) >> 9 & 1) == 0) {
              TIFFErrorExt(param_1[0x77],"TIFFFillStripPartial",
                           "Data buffer too small to hold part of strip %lu",(long)(int)uVar12);
              return 0xffffffff;
            }
            *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xff7fffff;
            if ((void *)param_1[0x6d] != (void *)0x0) {
              _TIFFfree((void *)param_1[0x6d]);
              param_1[0x6d] = 0;
              param_1[0x6e] = 0;
            }
            param_1[0x6e] = 0xffffffffffffffff;
            pvVar6 = _TIFFmalloc(0xffffffffffffffff);
            param_1[0x6d] = pvVar6;
            *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x200;
            if (pvVar6 == (void *)0x0) {
              TIFFErrorExt(param_1[0x77],"TIFFReadBufferSetup",
                           "No space for data buffer at scanline %lu",
                           *(undefined4 *)((long)param_1 + 0x27c));
              param_1[0x6e] = 0;
              return 0xffffffff;
            }
          }
          param_1[0x6f] = 0;
          param_1[0x70] = 0;
          lVar14 = *(long *)(param_1[0x1d] + (long)(int)uVar12 * 8);
          uVar10 = (ulong)(int)uVar12;
          lVar13 = (*(code *)param_1[0x7a])(param_1[0x77],lVar14,0);
          if (lVar13 != lVar14) {
            uVar4 = param_1[0x77];
            param_3 = *(uint *)((long)param_1 + 0x27c);
            pcVar8 = "TIFFFillStripPartial";
            pcVar9 = "Seek error at scanline %lu, strip %lu";
            goto LAB_01128be0;
          }
          uVar10 = (*(long *)(param_1[0x1e] + uVar10 * 8) - param_1[0x6f]) - param_1[0x70];
          if ((ulong)param_1[0x6e] <= uVar10) {
            uVar10 = param_1[0x6e];
          }
          uVar5 = (*(code *)param_1[0x78])(param_1[0x77],param_1[0x6d],uVar10);
          if (uVar5 != uVar10) {
            TIFFErrorExt(param_1[0x77],"TIFFFillStripPartial",
                         "Read error at scanline %lu; got %llu bytes, expected %llu",
                         *(undefined4 *)((long)param_1 + 0x27c),uVar5,uVar10);
            return 0xffffffff;
          }
          param_1[0x6f] = param_1[0x70] + param_1[0x6f];
          param_1[0x70] = uVar10;
          param_1[0x71] = param_1[0x6d];
          if ((*(uint *)(param_1 + 2) & (*(ushort *)((long)param_1 + 0x7e) | 0x100)) == 0) {
            TIFFReverseBits(param_1[0x6d],uVar10);
          }
          iVar3 = _TIFFFillStriles(param_1);
        }
        if (iVar3 == 0) {
          return 0xffffffff;
        }
        if (param_1[0x1e] == 0) {
          return 0xffffffff;
        }
        uVar11 = *(uint *)(param_1 + 2);
        if ((uVar11 >> 5 & 1) == 0) {
          iVar3 = (*(code *)param_1[0x59])(param_1);
          if (iVar3 == 0) {
            return 0xffffffff;
          }
          uVar11 = *(uint *)(param_1 + 2) | 0x20;
          *(uint *)(param_1 + 2) = uVar11;
        }
        uVar1 = *(uint *)(param_1 + 0x1c);
        *(uint *)((long)param_1 + 0x284) = uVar12;
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = uVar12 / uVar1;
        }
        *(uint *)((long)param_1 + 0x27c) = *(int *)((long)param_1 + 0x84) * (uVar12 - uVar2 * uVar1)
        ;
        *(uint *)(param_1 + 2) = uVar11 & 0xffefffff;
        if ((uVar11 >> 0x11 & 1) == 0) {
          param_1[0x71] = param_1[0x6d];
          uVar4 = *(undefined8 *)(param_1[0x1e] + (ulong)uVar12 * 8);
        }
        else {
          uVar4 = 0;
          param_1[0x71] = 0;
        }
        param_1[0x72] = uVar4;
        iVar3 = (*(code *)param_1[0x5a])(param_1);
        if (iVar3 == 0) {
          return 0xffffffff;
        }
      }
      if (*(uint *)((long)param_1 + 0x27c) != param_3) {
        iVar3 = (*(code *)param_1[0x66])(param_1,param_3 - *(uint *)((long)param_1 + 0x27c));
        if (iVar3 == 0) {
          return 0xffffffff;
        }
        *(uint *)((long)param_1 + 0x27c) = param_3;
      }
      iVar3 = (*(code *)param_1[0x5f])(param_1,param_2,param_1[0x6b],param_4);
      *(uint *)((long)param_1 + 0x27c) = param_3 + 1;
      if (iVar3 == 0) {
        return 0xffffffff;
      }
      (*(code *)param_1[0x7d])(param_1,param_2,param_1[0x6b]);
      if (0 < iVar3) {
        return 1;
      }
      return 0xffffffff;
    }
    uVar4 = param_1[0x77];
    uVar7 = *param_1;
    pcVar8 = "Can not read scanlines from a tiled image";
  }
  TIFFErrorExt(uVar4,uVar7,pcVar8);
  return 0xffffffff;
}

