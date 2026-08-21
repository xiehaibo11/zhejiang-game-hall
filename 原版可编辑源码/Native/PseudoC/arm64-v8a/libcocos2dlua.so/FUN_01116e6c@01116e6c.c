
undefined8 FUN_01116e6c(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  double *pdVar3;
  float fVar4;
  ulong uVar5;
  double *pdVar6;
  float *pfVar7;
  ulong uVar8;
  float fVar9;
  float *pfVar10;
  long lVar11;
  double dVar12;
  undefined8 uVar13;
  float *local_60;
  uint local_54;
  
  if (0x11 < *(ushort *)(param_2 + 2)) {
    return 2;
  }
  if ((1 << (ulong)(*(ushort *)(param_2 + 2) & 0x1f) & 0x31f7aU) == 0) {
    return 2;
  }
  uVar2 = FUN_01117fa4(param_1,param_2,&local_54,8,&local_60);
  if (((int)uVar2 != 0) || (local_60 == (float *)0x0)) {
    *param_3 = 0;
    return uVar2;
  }
  if (*(short *)(param_2 + 2) == 0xc) {
    if (*(char *)(param_1 + 0x10) < '\0') {
      TIFFSwabArrayOfLong8(local_60,local_54);
    }
    *param_3 = local_60;
    return 0;
  }
  pdVar3 = _TIFFmalloc((ulong)local_54 << 3);
  if (pdVar3 == (double *)0x0) {
    _TIFFfree(local_60);
    return 7;
  }
                    /* try { // try from 01116f3c to 01216f43 has its CatchHandler @ 01116f50 */
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
    if (local_54 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01116f3c with catch @ 01116f50
                        */
      lVar11 = 0;
      do {
        dVar12 = (double)NEON_ucvtf((ulong)*(byte *)((long)local_60 + lVar11));
        pdVar3[lVar11] = dVar12;
        lVar11 = lVar11 + 1;
      } while ((uint)lVar11 < local_54);
    }
    break;
  case 3:
    if (local_54 != 0) {
      lVar11 = 0;
      pfVar7 = local_60;
      do {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabShort(pfVar7);
        }
        pdVar3[lVar11] = (double)*(ushort *)pfVar7;
        lVar11 = lVar11 + 1;
        pfVar7 = (float *)((long)pfVar7 + 2);
      } while ((uint)lVar11 < local_54);
    }
    break;
  case 4:
    if (local_54 != 0) {
      lVar11 = 0;
      pfVar7 = local_60;
      do {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabLong(pfVar7);
        }
        pdVar3[lVar11] = (double)(uint)*pfVar7;
        lVar11 = lVar11 + 1;
        pfVar7 = pfVar7 + 1;
      } while ((uint)lVar11 < local_54);
    }
    break;
  case 5:
    if (local_54 != 0) {
      lVar11 = 0;
      pfVar7 = local_60 + 1;
      do {
        pfVar10 = pfVar7 + -1;
        if ((*(uint *)(param_1 + 0x10) >> 7 & 1) == 0) {
          fVar9 = *pfVar10;
          if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) goto LAB_0111703c;
LAB_01117010:
          fVar4 = *pfVar7;
          if (fVar4 == 0.0) goto LAB_0111704c;
LAB_01117018:
          dVar12 = (double)(uint)fVar9 / (double)(uint)fVar4;
        }
        else {
          TIFFSwabLong(pfVar10);
          fVar9 = *pfVar10;
          if ((*(uint *)(param_1 + 0x10) >> 7 & 1) == 0) goto LAB_01117010;
LAB_0111703c:
          TIFFSwabLong(pfVar7);
          fVar4 = *pfVar7;
          if (fVar4 != 0.0) goto LAB_01117018;
LAB_0111704c:
          dVar12 = 0.0;
        }
        pdVar3[lVar11] = dVar12;
        lVar11 = lVar11 + 1;
        pfVar7 = pfVar7 + 2;
      } while ((uint)lVar11 < local_54);
    }
    break;
  case 6:
    if (local_54 != 0) {
      lVar11 = 0;
      do {
        pdVar3[lVar11] = (double)(int)*(char *)((long)local_60 + lVar11);
        lVar11 = lVar11 + 1;
      } while ((uint)lVar11 < local_54);
    }
    break;
  case 8:
    if (local_54 != 0) {
      lVar11 = 0;
      pfVar7 = local_60;
      do {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabShort(pfVar7);
        }
        pdVar3[lVar11] = (double)(int)*(short *)pfVar7;
        lVar11 = lVar11 + 1;
        pfVar7 = (float *)((long)pfVar7 + 2);
      } while ((uint)lVar11 < local_54);
    }
    break;
  case 9:
    if (local_54 != 0) {
      lVar11 = 0;
      pfVar7 = local_60;
      do {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabLong(pfVar7);
        }
        pdVar3[lVar11] = (double)(int)*pfVar7;
        lVar11 = lVar11 + 1;
        pfVar7 = pfVar7 + 1;
      } while ((uint)lVar11 < local_54);
    }
    break;
  case 10:
    if (local_54 != 0) {
      lVar11 = 0;
      pfVar7 = local_60 + 1;
      do {
        pfVar10 = pfVar7 + -1;
        if ((*(uint *)(param_1 + 0x10) >> 7 & 1) == 0) {
          fVar9 = *pfVar10;
          if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) goto LAB_01117148;
LAB_0111711c:
          fVar4 = *pfVar7;
          if (fVar4 == 0.0) goto LAB_01117158;
LAB_01117124:
          dVar12 = (double)(int)fVar9 / (double)(uint)fVar4;
        }
        else {
          TIFFSwabLong(pfVar10);
          fVar9 = *pfVar10;
          if ((*(uint *)(param_1 + 0x10) >> 7 & 1) == 0) goto LAB_0111711c;
LAB_01117148:
          TIFFSwabLong(pfVar7);
          fVar4 = *pfVar7;
          if (fVar4 != 0.0) goto LAB_01117124;
LAB_01117158:
          dVar12 = 0.0;
        }
        pdVar3[lVar11] = dVar12;
        lVar11 = lVar11 + 1;
        pfVar7 = pfVar7 + 2;
      } while ((uint)lVar11 < local_54);
    }
    break;
  case 0xb:
    if (*(char *)(param_1 + 0x10) < '\0') {
      TIFFSwabArrayOfLong(local_60,(ulong)local_54);
    }
    if (local_54 != 0) {
      uVar5 = (ulong)(local_54 - 1) + 1;
      pdVar6 = pdVar3;
      pfVar7 = local_60;
      if (uVar5 < 4) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 - (local_54 & 3);
        if (uVar5 != 0) {
          pfVar7 = local_60 + 2;
          pdVar6 = pdVar3 + 2;
          uVar8 = uVar5;
          do {
            uVar2 = *(undefined8 *)(pfVar7 + -2);
            uVar13 = *(undefined8 *)pfVar7;
            pfVar7 = pfVar7 + 4;
            uVar8 = uVar8 - 4;
            pdVar6[-1] = (double)(float)((ulong)uVar2 >> 0x20);
            pdVar6[-2] = (double)(float)uVar2;
            pdVar6[1] = (double)(float)((ulong)uVar13 >> 0x20);
            *pdVar6 = (double)(float)uVar13;
            pdVar6 = pdVar6 + 4;
          } while (uVar8 != 0);
          pdVar6 = pdVar3 + uVar5;
          pfVar7 = local_60 + uVar5;
          if ((local_54 & 3) == 0) break;
        }
      }
      do {
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar1;
        *pdVar6 = (double)*pfVar7;
        pdVar6 = pdVar6 + 1;
        pfVar7 = pfVar7 + 1;
      } while (uVar1 < local_54);
    }
    break;
  case 0x10:
    if (local_54 != 0) {
      lVar11 = 0;
      pfVar7 = local_60;
      do {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabLong8(pfVar7);
        }
        dVar12 = (double)NEON_ucvtf(*(undefined8 *)pfVar7);
        pdVar3[lVar11] = dVar12;
        lVar11 = lVar11 + 1;
        pfVar7 = pfVar7 + 2;
      } while ((uint)lVar11 < local_54);
    }
    break;
  case 0x11:
    if (local_54 != 0) {
      lVar11 = 0;
      pfVar7 = local_60;
      do {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabLong8(pfVar7);
        }
        pdVar3[lVar11] = (double)*(long *)pfVar7;
        lVar11 = lVar11 + 1;
        pfVar7 = pfVar7 + 2;
      } while ((uint)lVar11 < local_54);
    }
  }
  _TIFFfree(local_60);
  *param_3 = pdVar3;
  return 0;
}

