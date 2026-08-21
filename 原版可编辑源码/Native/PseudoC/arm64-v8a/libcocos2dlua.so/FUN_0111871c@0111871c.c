
undefined8 FUN_0111871c(long param_1,long param_2,undefined8 *param_3)

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
                    /* try { // try from 0111875c to 0121877b has its CatchHandler @ 011187b8 */
  if ((1 << (ulong)(*(ushort *)(param_2 + 2) & 0x1f) & 0x31f7aU) == 0) {
    return 2;
  }
                    /* try { // try from 0111877c to 012187bb has its CatchHandler @ 01118718 */
  uVar4 = FUN_01117fa4(param_1,param_2,&local_54,4,&local_60);
  if (((int)uVar4 != 0) || (local_60 == (double *)0x0)) {
                    /* try { // try from 011187bc to 012187c3 has its CatchHandler @ 011187cc */
    *param_3 = 0;
    return uVar4;
  }
  if (*(short *)(param_2 + 2) == 0xb) {
    if (*(char *)(param_1 + 0x10) < '\0') {
      TIFFSwabArrayOfLong(local_60,local_54);
    }
    *param_3 = local_60;
    return 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111875c with catch @ 011187b8
                        */
  }
                    /* try { // try from 011187c4 to 012187cf has its CatchHandler @ 01118718 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 011187bc with catch @ 011187cc
                        */
  pfVar5 = _TIFFmalloc((ulong)local_54 << 2);
                    /* catch() { ... } // from try @ 01118814 with catch @ 011187d0 */
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
                    /* try { // try from 0111880c to 01218813 has its CatchHandler @ 01118870 */
        pfVar5[lVar14] = fVar15;
        lVar14 = lVar14 + 1;
                    /* try { // try from 01118814 to 0121888b has its CatchHandler @ 011187d0 */
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
                    /* catch() { ... } // from try @ 0111880c with catch @ 01118870 */
      pdVar9 = local_60;
      do {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabLong(pdVar9);
        }
        fVar15 = (float)NEON_ucvtf(*(undefined4 *)pdVar9);
                    /* try { // try from 0111888c to 012188e3 has its CatchHandler @ 0111888c
                       catch(type#1 @ 00000000) { ... } // from try @ 0111888c with catch @ 0111888c
                       catch(type#1 @ 00000000) { ... } // from try @ 0111891c with catch @ 0111888c
                       catch(type#1 @ 00000000) { ... } // from try @ 0111897c with catch @ 0111888c
                        */
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
          if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) goto LAB_011188ec;
LAB_011188c0:
          uVar6 = *puVar11;
          if (uVar6 == 0) goto LAB_011188fc;
LAB_011188c8:
          fVar15 = (float)uVar12 / (float)uVar6;
        }
        else {
          TIFFSwabLong(puVar13);
                    /* try { // try from 011188e4 to 012188eb has its CatchHandler @ 0111896c */
          uVar12 = *puVar13;
          if ((*(uint *)(param_1 + 0x10) >> 7 & 1) == 0) goto LAB_011188c0;
LAB_011188ec:
          TIFFSwabLong(puVar11);
                    /* try { // try from 011188f4 to 0121891b has its CatchHandler @ 01118970 */
          uVar6 = *puVar11;
          if (uVar6 != 0) goto LAB_011188c8;
LAB_011188fc:
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
                    /* try { // try from 0111891c to 01218973 has its CatchHandler @ 0111888c */
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 011188e4 with catch @ 0111896c
                        */
      } while ((uint)lVar14 < local_54);
    }
    break;
  case 9:
                    /* try { // try from 01118974 to 0121897b has its CatchHandler @ 01118984 */
    if (local_54 != 0) {
      lVar14 = 0;
                    /* try { // try from 0111897c to 01218987 has its CatchHandler @ 0111888c */
      pdVar9 = local_60;
      do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118974 with catch @ 01118984
                        */
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
          if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) goto LAB_011189f8;
LAB_011189cc:
          uVar6 = *puVar11;
          if (uVar6 == 0) goto LAB_01118a08;
LAB_011189d4:
          fVar15 = (float)(int)uVar12 / (float)uVar6;
        }
        else {
          TIFFSwabLong(puVar13);
          uVar12 = *puVar13;
          if ((*(uint *)(param_1 + 0x10) >> 7 & 1) == 0) goto LAB_011189cc;
LAB_011189f8:
          TIFFSwabLong(puVar11);
          uVar6 = *puVar11;
          if (uVar6 != 0) goto LAB_011189d4;
LAB_01118a08:
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
                    /* try { // try from 01118ac4 to 01218acb has its CatchHandler @ 01118b6c */
        uVar7 = uVar7 - (local_54 & 3);
                    /* try { // try from 01118acc to 01218b03 has its CatchHandler @ 01118a78 */
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
                    /* try { // try from 01118b04 to 01218b23 has its CatchHandler @ 01118b88 */
          pfVar8 = pfVar5 + uVar7;
          pdVar9 = local_60 + uVar7;
          if ((local_54 & 3) == 0) break;
        }
      }
      do {
        uVar12 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar12;
                    /* try { // try from 01118b24 to 01218b8b has its CatchHandler @ 01118a78 */
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118acc with catch @ 01118a78
                       catch(type#1 @ 00000000) { ... } // from try @ 01118b24 with catch @ 01118a78
                       catch(type#1 @ 00000000) { ... } // from try @ 01118b94 with catch @ 01118a78
                        */
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

