
undefined8 FUN_00dbb288(long param_1,long param_2,ushort param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (*(void **)(param_1 + 0xf0) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0xf0));
  }
  lVar3 = _TIFFCheckMalloc(param_1,*(undefined4 *)(param_1 + 0xe4),8,"for \"StripByteCounts\" array"
                          );
  *(long *)(param_1 + 0xf0) = lVar3;
  if (lVar3 == 0) {
    return 0xffffffff;
  }
  if (*(short *)(param_1 + 0x78) == 1) {
    if ((*(byte *)(param_1 + 0x11) >> 2 & 1) == 0) {
      lVar3 = TIFFScanlineSize64(param_1);
      uVar2 = *(uint *)(param_1 + 0xe4);
      if (uVar2 != 0) {
        lVar5 = *(long *)(param_1 + 0xf0);
        uVar1 = 0;
        if (*(uint *)(param_1 + 0xe0) != 0) {
          uVar1 = *(uint *)(param_1 + 0x5c) / *(uint *)(param_1 + 0xe0);
        }
        lVar3 = lVar3 * (ulong)uVar1;
        if (uVar2 < 4) {
          uVar8 = 0;
        }
        else {
          uVar8 = (ulong)uVar2 - (ulong)(uVar2 & 3);
          if (uVar8 != 0) {
            plVar11 = (long *)(lVar5 + 0x10);
            uVar13 = uVar8;
            do {
              plVar11[-1] = lVar3;
              plVar11[-2] = lVar3;
              plVar11[1] = lVar3;
              *plVar11 = lVar3;
              uVar13 = uVar13 - 4;
              plVar11 = plVar11 + 4;
            } while (uVar13 != 0);
            if ((uVar2 & 3) == 0) goto LAB_00dbb518;
          }
        }
        do {
          *(long *)(lVar5 + uVar8 * 8) = lVar3;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar2);
      }
    }
    else {
      uVar4 = TIFFTileSize64(param_1);
      uVar2 = *(uint *)(param_1 + 0xe4);
      if (uVar2 != 0) {
        lVar3 = *(long *)(param_1 + 0xf0);
        if (uVar2 < 4) {
          uVar8 = 0;
        }
        else {
          uVar8 = (ulong)uVar2 - (ulong)(uVar2 & 3);
          if (uVar8 != 0) {
            puVar9 = (undefined8 *)(lVar3 + 0x10);
            uVar13 = uVar8;
            do {
              puVar9[-1] = uVar4;
              puVar9[-2] = uVar4;
              puVar9[1] = uVar4;
              *puVar9 = uVar4;
              uVar13 = uVar13 - 4;
              puVar9 = puVar9 + 4;
            } while (uVar13 != 0);
            if ((uVar2 & 3) == 0) goto LAB_00dbb518;
          }
        }
        do {
          *(undefined8 *)(lVar3 + uVar8 * 8) = uVar4;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar2);
      }
    }
    goto LAB_00dbb518;
  }
  uVar8 = (**(code **)(param_1 + 0x3e0))(*(undefined8 *)(param_1 + 0x3b8));
  iVar7 = 0xe;
  if ((*(uint *)(param_1 + 0x10) & 0x80000) != 0) {
    iVar7 = 0x20;
  }
  uVar13 = (ulong)(iVar7 + (((*(uint *)(param_1 + 0x10) & 0x80000) >> 0x10) + 0xc) * (uint)param_3);
  if (param_3 != 0) {
    plVar11 = (long *)(param_2 + 8);
    do {
      TIFFDataWidth(*(undefined2 *)((long)plVar11 + -6));
      uVar2 = TIFFDataWidth(*(undefined2 *)((long)plVar11 + -6));
      if (uVar2 == 0) {
        TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"EstimateStripByteCounts",
                     "Cannot determine size of unknown tag type %d",
                     *(undefined2 *)((long)plVar11 + -6));
        return 0xffffffff;
      }
      param_3 = param_3 - 1;
      uVar6 = 0;
      if ((((ulong)*(uint *)(param_1 + 0x10) & 0x80000) >> 0x11) + 5 <= *plVar11 * (ulong)uVar2) {
        uVar6 = *plVar11 * (ulong)uVar2;
      }
      uVar13 = uVar6 + uVar13;
      plVar11 = plVar11 + 3;
    } while (param_3 != 0);
  }
  uVar6 = uVar8 - uVar13;
  if (*(short *)(param_1 + 0xaa) == 2) {
    uVar6 = 0;
    if ((ulong)*(ushort *)(param_1 + 0x82) != 0) {
      uVar6 = (uVar8 - uVar13) / (ulong)*(ushort *)(param_1 + 0x82);
    }
  }
  uVar2 = *(uint *)(param_1 + 0xe4);
  lVar3 = *(long *)(param_1 + 0xf0);
  if (uVar2 == 0) {
    uVar13 = 0xffffffff;
  }
  else {
    if (uVar2 < 4) {
      uVar13 = 0;
LAB_00dbb45c:
      do {
        *(ulong *)(lVar3 + uVar13 * 8) = uVar6;
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar2);
    }
    else {
      uVar13 = (ulong)uVar2 - (ulong)(uVar2 & 3);
      if (uVar13 == 0) goto LAB_00dbb45c;
      puVar10 = (ulong *)(lVar3 + 0x10);
      uVar12 = uVar13;
      do {
        puVar10[-1] = uVar6;
        puVar10[-2] = uVar6;
        puVar10[1] = uVar6;
        *puVar10 = uVar6;
        uVar12 = uVar12 - 4;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      if ((uVar2 & 3) != 0) goto LAB_00dbb45c;
    }
    uVar13 = uVar13 - 1 & 0xffffffff;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0xe8) + uVar13 * 8);
  if (uVar8 < (ulong)(*(long *)(lVar3 + uVar13 * 8) + lVar5)) {
    *(ulong *)(lVar3 + uVar13 * 8) = uVar8 - lVar5;
  }
LAB_00dbb518:
  uVar8 = *(ulong *)(param_1 + 0x38);
  *(ulong *)(param_1 + 0x38) = uVar8 | 0x1000000;
  if (((uint)uVar8 >> 0x11 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x5c);
  }
  return 1;
}

