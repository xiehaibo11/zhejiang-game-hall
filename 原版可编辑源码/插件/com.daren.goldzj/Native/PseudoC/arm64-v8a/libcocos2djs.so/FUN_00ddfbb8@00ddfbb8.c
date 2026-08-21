
undefined8 FUN_00ddfbb8(long param_1,void *param_2,ulong param_3)

{
  size_t __n;
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  
  pbVar10 = *(byte **)(param_1 + 0x388);
  lVar8 = *(long *)(param_1 + 0x390);
LAB_00ddfc24:
  do {
    if ((long)param_3 < 1) {
      *(byte **)(param_1 + 0x388) = pbVar10;
      *(long *)(param_1 + 0x390) = lVar8;
      return 1;
    }
    lVar9 = 0;
    lVar6 = lVar8;
    do {
      if (lVar6 < 1) {
LAB_00ddfd84:
        *(byte **)(param_1 + 0x388) = pbVar10 + lVar9;
        *(long *)(param_1 + 0x390) = lVar6;
        TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"PackBitsDecode",
                     "Not enough data for scanline %lu",*(undefined4 *)(param_1 + 0x27c));
        return 0;
      }
      bVar3 = pbVar10[lVar9];
      uVar7 = (ulong)bVar3;
      if (-1 < (char)bVar3) {
        if ((long)param_3 <= (long)uVar7) {
          TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"PackBitsDecode",
                         "Discarding %lu bytes to avoid buffer overrun",(1 - param_3) + uVar7);
          uVar7 = param_3 - 1;
        }
        __n = uVar7 + 1;
        if (lVar6 <= (long)__n) {
          TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"PackBitsDecode",
                         "Terminating PackBitsDecode due to lack of data.");
          lVar8 = lVar8 - lVar9;
          lVar9 = lVar9 + 1;
          lVar6 = lVar8 + -1;
          goto LAB_00ddfd84;
        }
        _TIFFmemcpy(param_2,pbVar10 + lVar9 + 1,__n);
        param_2 = (void *)((long)param_2 + __n);
        param_3 = param_3 - __n;
        pbVar10 = pbVar10 + lVar9 + uVar7 + 2;
        lVar8 = ((lVar8 - uVar7) - lVar9) + -2;
        goto LAB_00ddfc24;
      }
      lVar9 = lVar9 + 1;
      lVar6 = lVar6 + -1;
    } while (((ulong)bVar3 | 0xffffffffffffff00) == 0xffffffffffffff80);
    uVar7 = 1 - ((ulong)bVar3 | 0xffffffffffffff00);
    if (uVar7 - param_3 != 0 && (long)param_3 <= (long)uVar7) {
      TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"PackBitsDecode",
                     "Discarding %lu bytes to avoid buffer overrun",uVar7 - param_3);
      uVar7 = param_3;
    }
    pbVar1 = pbVar10 + lVar9;
    param_3 = param_3 - uVar7;
    pbVar10 = pbVar1 + 1;
    lVar8 = (lVar8 - lVar9) + -1;
  } while ((long)uVar7 < 1);
  pbVar10 = pbVar1 + 1;
  uVar2 = 0xfffffffffffffffe;
  if (-2 < (long)~uVar7) {
    uVar2 = ~uVar7;
  }
  uVar2 = uVar7 + uVar2 + 2;
  memset(param_2,(uint)*pbVar1,uVar2);
  if ((1 < uVar2) && (uVar4 = uVar2 & 0xfffffffffffffffe, uVar4 != 0)) goto code_r0x00ddfce8;
  goto LAB_00ddfd04;
code_r0x00ddfce8:
  uVar7 = uVar7 - uVar4;
  param_2 = (void *)((long)param_2 + uVar4);
  uVar5 = uVar4;
  do {
    uVar5 = uVar5 - 2;
  } while (uVar5 != 0);
  if (uVar2 != uVar4) {
LAB_00ddfd04:
    lVar9 = uVar7 + 1;
    do {
      lVar9 = lVar9 + -1;
      param_2 = (void *)((long)param_2 + 1);
    } while (1 < lVar9);
  }
  goto LAB_00ddfc24;
}

