
undefined8 FUN_00dbc274(long param_1,long param_2,undefined8 *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  undefined8 uVar4;
  float *pfVar5;
  uint uVar6;
  ulong uVar7;
  float *pfVar8;
  double *pdVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  long lVar14;
  float fVar15;
  double dVar16;
  double *local_60;
  uint local_54;
  
  if (0x11 < *(ushort *)(param_2 + 2)) {
    return 2;
  }
  if ((1 << (ulong)(*(ushort *)(param_2 + 2) & 0x1f) & 0x31f7aU) == 0) {
    return 2;
  }
  uVar4 = FUN_00dbbafc(param_1,param_2,&local_54,4,&local_60);
  if (((int)uVar4 != 0) || (local_60 == (double *)0x0)) {
    *param_3 = 0;
    return uVar4;
  }
  if (*(short *)(param_2 + 2) == 0xb) {
    if (*(char *)(param_1 + 0x10) < '\0') {
      TIFFSwabArrayOfLong(local_60,local_54);
    }
    *param_3 = local_60;
    return 0;
  }
  pfVar5 = _TIFFmalloc((ulong)local_54 << 2);
  if (pfVar5 == (float *)0x0) {
    _TIFFfree(local_60);
    return 7;
  }
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
    if (local_54 != 0) {
      lVar14 = 0;
      do {
        fVar15 = (float)NEON_ucvtf((uint)*(byte *)((long)local_60 + lVar14));
        pfVar5[lVar14] = fVar15;
        lVar14 = lVar14 + 1;
      } while ((uint)lVar14 < local_54);
    }
    break;
  case 3:
    if (local_54 != 0) {
      lVar14 = 0;
      pdVar9 = local_60;
      do {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabShort(pdVar9);
        }
        pfVar5[lVar14] = (float)*(ushort *)pdVar9;
        lVar14 = lVar14 + 1;
        pdVar9 = (double *)((long)pdVar9 + 2);
      } while ((uint)lVar14 < local_54);
    }
    break;
  case 4:
    if (local_54 != 0) {
      lVar14 = 0;
      pdVar9 = local_60;
      do {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabLong(pdVar9);
        }
        fVar15 = (float)NEON_ucvtf(*(undefined4 *)pdVar9);
        pfVar5[lVar14] = fVar15;
        lVar14 = lVar14 + 1;
        pdVar9 = (double *)((long)pdVar9 + 4);
      } while ((uint)lVar14 < local_54);
    }
    break;
  case 5:
    if (local_54 != 0) {
      lVar14 = 0;
      puVar11 = (uint *)((long)local_60 + 4);
      do {
        puVar13 = puVar11 + -1;
        if ((*(uint *)(param_1 + 0x10) >> 7 & 1) == 0) {
          uVar12 = *puVar13;
          if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) goto LAB_00dbc444;
LAB_00dbc418:
          uVar6 = *puVar11;
          if (uVar6 == 0) goto LAB_00dbc454;
LAB_00dbc420:
          fVar15 = (float)uVar12 / (float)uVar6;
        }
        else {
          TIFFSwabLong(puVar13);
          uVar12 = *puVar13;
          if ((*(uint *)(param_1 + 0x10) >> 7 & 1) == 0) goto LAB_00dbc418;
LAB_00dbc444:
          TIFFSwabLong(puVar11);
          uVar6 = *puVar11;
          if (uVar6 != 0) goto LAB_00dbc420;
LAB_00dbc454:
          fVar15 = 0.0;
        }
        pfVar5[lVar14] = fVar15;
        lVar14 = lVar14 + 1;
        puVar11 = puVar11 + 2;
      } while ((uint)lVar14 < local_54);
    }
    break;
  case 6:
    if (local_54 != 0) {
      lVar14 = 0;
      do {
        pfVar5[lVar14] = (float)(int)*(char *)((long)local_60 + lVar14);
        lVar14 = lVar14 + 1;
      } while ((uint)lVar14 < local_54);
    }
    break;
  case 8:
    if (local_54 != 0) {
      lVar14 = 0;
      pdVar9 = local_60;
      do {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabShort(pdVar9);
        }
        pfVar5[lVar14] = (float)(int)(short)*(ushort *)pdVar9;
        lVar14 = lVar14 + 1;
        pdVar9 = (double *)((long)pdVar9 + 2);
      } while ((uint)lVar14 < local_54);
    }
    break;
  case 9:
    if (local_54 != 0) {
      lVar14 = 0;
      pdVar9 = local_60;
      do {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabLong(pdVar9);
        }
        pfVar5[lVar14] = (float)*(int *)pdVar9;
        lVar14 = lVar14 + 1;
        pdVar9 = (double *)((long)pdVar9 + 4);
      } while ((uint)lVar14 < local_54);
    }
    break;
  case 10:
    if (local_54 != 0) {
      lVar14 = 0;
      puVar11 = (uint *)((long)local_60 + 4);
      do {
        puVar13 = puVar11 + -1;
        if ((*(uint *)(param_1 + 0x10) >> 7 & 1) == 0) {
          uVar12 = *puVar13;
          if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) goto LAB_00dbc550;
LAB_00dbc524:
          uVar6 = *puVar11;
          if (uVar6 == 0) goto LAB_00dbc560;
LAB_00dbc52c:
          fVar15 = (float)(int)uVar12 / (float)uVar6;
        }
        else {
          TIFFSwabLong(puVar13);
          uVar12 = *puVar13;
          if ((*(uint *)(param_1 + 0x10) >> 7 & 1) == 0) goto LAB_00dbc524;
LAB_00dbc550:
          TIFFSwabLong(puVar11);
          uVar6 = *puVar11;
          if (uVar6 != 0) goto LAB_00dbc52c;
LAB_00dbc560:
          fVar15 = 0.0;
        }
        pfVar5[lVar14] = fVar15;
        lVar14 = lVar14 + 1;
        puVar11 = puVar11 + 2;
      } while ((uint)lVar14 < local_54);
    }
    break;
  case 0xc:
    if (*(char *)(param_1 + 0x10) < '\0') {
      TIFFSwabArrayOfLong8(local_60,(ulong)local_54);
    }
    if (local_54 != 0) {
      uVar7 = (ulong)(local_54 - 1) + 1;
      pfVar8 = pfVar5;
      pdVar9 = local_60;
      if (uVar7 < 4) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 - (local_54 & 3);
        if (uVar7 != 0) {
          pdVar9 = local_60 + 2;
          pfVar8 = pfVar5 + 2;
          uVar10 = uVar7;
          do {
            pdVar1 = pdVar9 + -2;
            pdVar2 = pdVar9 + -1;
            dVar16 = pdVar9[1];
            dVar3 = *pdVar9;
            pdVar9 = pdVar9 + 4;
            uVar10 = uVar10 - 4;
            *(ulong *)(pfVar8 + -2) = CONCAT44((float)*pdVar2,(float)*pdVar1);
            *(ulong *)pfVar8 = CONCAT44((float)dVar16,(float)dVar3);
            pfVar8 = pfVar8 + 4;
          } while (uVar10 != 0);
          pfVar8 = pfVar5 + uVar7;
          pdVar9 = local_60 + uVar7;
          if ((local_54 & 3) == 0) break;
        }
      }
      do {
        uVar12 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar12;
        *pfVar8 = (float)*pdVar9;
        pfVar8 = pfVar8 + 1;
        pdVar9 = pdVar9 + 1;
      } while (uVar12 < local_54);
    }
    break;
  case 0x10:
    if (local_54 != 0) {
      lVar14 = 0;
      pdVar9 = local_60;
      do {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabLong8(pdVar9);
        }
        pfVar5[lVar14] = (float)(ulong)*pdVar9;
        lVar14 = lVar14 + 1;
        pdVar9 = pdVar9 + 1;
      } while ((uint)lVar14 < local_54);
    }
    break;
  case 0x11:
    if (local_54 != 0) {
      lVar14 = 0;
      pdVar9 = local_60;
      do {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabLong8(pdVar9);
        }
        pfVar5[lVar14] = (float)(long)*pdVar9;
        lVar14 = lVar14 + 1;
        pdVar9 = pdVar9 + 1;
      } while ((uint)lVar14 < local_54);
    }
  }
  _TIFFfree(local_60);
  *param_3 = pfVar5;
  return 0;
}

