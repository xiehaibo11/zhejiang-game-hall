
/* WARNING: Removing unreachable block (ram,0x00adf1b8) */
/* WARNING: Removing unreachable block (ram,0x00adf1d8) */
/* WARNING: Removing unreachable block (ram,0x00adf0a4) */
/* WARNING: Removing unreachable block (ram,0x00adf198) */
/* WARNING: Removing unreachable block (ram,0x00adf1c8) */
/* WARNING: Removing unreachable block (ram,0x00adf1a8) */
/* WARNING: Type propagation algorithm not settling */

undefined8 tls1_process_sigalgs(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  byte bVar5;
  undefined8 uVar6;
  int iVar7;
  void *pvVar8;
  char *pcVar9;
  EVP_MD *pEVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  byte *pbVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  lVar20 = *(long *)(param_1 + 0x148);
  lVar19 = *(long *)(param_1 + 0x90);
  uVar2 = *(uint *)(lVar20 + 0x1c) & 0x30000;
  CRYPTO_free(*(void **)(lVar20 + 0x168));
  *(undefined8 *)(lVar20 + 0x168) = 0;
  *(undefined8 *)(lVar20 + 0x170) = 0;
  if (((*(int *)(param_1 + 0x38) == 0) && (uVar2 == 0)) &&
     (puVar11 = *(undefined1 **)(lVar20 + 0x158), puVar11 != (undefined1 *)0x0)) {
    uVar14 = *(undefined8 *)(lVar20 + 0x160);
                    /* try { // try from 00adef8c to 00bdef93 has its CatchHandler @ 00adefc4 */
  }
  else if ((uVar2 == 0) &&
          (puVar11 = *(undefined1 **)(lVar20 + 0x148), puVar11 != (undefined1 *)0x0)) {
    uVar14 = *(undefined8 *)(lVar20 + 0x150);
  }
  else {
    lVar21 = *(long *)(param_1 + 0x148);
    uVar3 = *(uint *)(lVar21 + 0x1c) & 0x30000;
    puVar11 = &DAT_018a5306;
    if (uVar3 == 0x30000) {
      uVar14 = 4;
                    /* try { // try from 00adef94 to 00bdef9b has its CatchHandler @ 00adefb4 */
    }
    else if (uVar3 == 0x20000) {
      puVar11 = &DAT_018a5308;
                    /* try { // try from 00adef9c to 00bdefa3 has its CatchHandler @ 00adefa4 */
      uVar14 = 2;
    }
    else if (uVar3 == 0x10000) {
      puVar11 = &DAT_018a5306;
      uVar14 = 2;
    }
    else {
                    /* catch() { ... } // from try @ 00adee68 with catch @ 00adefa4
                       catch() { ... } // from try @ 00adef9c with catch @ 00adefa4
                       try { // try from 00adefa4 to 00bdf067 has its CatchHandler @ 00adec9c */
      if ((*(int *)(param_1 + 0x38) == 0) ||
         (puVar11 = *(undefined1 **)(lVar21 + 0x158), puVar11 == (undefined1 *)0x0)) {
        puVar11 = *(undefined1 **)(lVar21 + 0x148);
        if (puVar11 == (undefined1 *)0x0) {
          puVar11 = &DAT_018a530a;
          uVar14 = 0x24;
        }
        else {
          uVar14 = *(undefined8 *)(lVar21 + 0x150);
                    /* catch() { ... } // from try @ 00aded58 with catch @ 00adefc4
                       catch() { ... } // from try @ 00adef8c with catch @ 00adefc4 */
        }
      }
      else {
        uVar14 = *(undefined8 *)(lVar21 + 0x160);
                    /* catch() { ... } // from try @ 00adede0 with catch @ 00adefb4
                       catch() { ... } // from try @ 00adef94 with catch @ 00adefb4 */
      }
    }
  }
                    /* catch() { ... } // from try @ 00adeec8 with catch @ 00adefd4 */
  puVar16 = *(undefined1 **)(*(long *)(param_1 + 0x90) + 0x2c0);
  uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x2c8);
  puVar4 = puVar16;
  uVar6 = uVar14;
  if ((*(uint *)(param_1 + 0x1e4) & 0x400000) != 0 || uVar2 != 0) {
    puVar4 = puVar11;
    uVar6 = uVar15;
    uVar15 = uVar14;
    puVar11 = puVar16;
  }
  iVar7 = FUN_00ae19f8(param_1,0,puVar4,uVar15,puVar11,uVar6);
                    /* catch() { ... } // from try @ 00adee94 with catch @ 00adf01c */
  if (iVar7 == 0) {
    *(undefined8 *)(lVar20 + 0x168) = 0;
    *(undefined8 *)(lVar20 + 0x170) = 0;
  }
  else {
    pvVar8 = CRYPTO_malloc(iVar7 << 4,"ssl/t1_lib.c",0xde2);
    if (pvVar8 == (void *)0x0) {
      return 0;
    }
    iVar7 = FUN_00ae19f8(param_1,pvVar8,puVar4,uVar15,puVar11,uVar6);
    *(void **)(lVar20 + 0x168) = pvVar8;
    *(long *)(lVar20 + 0x170) = (long)iVar7;
    if ((long)iVar7 != 0) {
      pbVar18 = (byte *)((long)pvVar8 + 0xd);
      uVar17 = 0;
      do {
        bVar5 = pbVar18[-1];
        if (0xec < bVar5) {
          if (bVar5 == 0xed) {
            lVar21 = 4;
            goto LAB_00adf110;
          }
          if (bVar5 == 0xee) {
            lVar21 = 5;
            goto LAB_00adf110;
          }
          if (bVar5 == 0xef) {
            lVar21 = 6;
            goto LAB_00adf110;
          }
          goto LAB_00adf208;
        }
        if (bVar5 == 1) {
          lVar21 = 1;
        }
        else if (bVar5 == 2) {
          lVar21 = 2;
        }
        else {
          if (bVar5 != 3) goto LAB_00adf208;
          lVar21 = 3;
        }
LAB_00adf110:
        lVar1 = lVar19 + lVar21 * 8;
        if (*(long *)(lVar1 + 0x2d8) != 0) goto LAB_00adf208;
        bVar5 = *pbVar18;
                    /* try { // try from 00adf120 to 00bdf127 has its CatchHandler @ 00adf2d0 */
        uVar14 = 0;
                    /* try { // try from 00adf128 to 00bdf1a7 has its CatchHandler @ 00adf068 */
        if (0xec < bVar5) {
          if (bVar5 == 0xed) {
            puVar13 = (undefined4 *)&UNK_018a5460;
          }
          else if (bVar5 == 0xee) {
            puVar13 = (undefined4 *)&UNK_018a5470;
          }
          else {
            if (bVar5 != 0xef) goto switchD_00adf148_default;
            puVar13 = (undefined4 *)&UNK_018a5480;
          }
          goto LAB_00adf168;
        }
        lVar12 = 1;
        switch(bVar5) {
        case 1:
          iVar7 = FIPS_mode();
          uVar14 = 0;
          if (iVar7 == 0) {
            lVar12 = 0;
            goto switchD_00adf148_caseD_2;
          }
          goto switchD_00adf148_default;
        case 2:
switchD_00adf148_caseD_2:
          puVar13 = (undefined4 *)(&UNK_018a5400 + lVar12 * 0x10);
          if (puVar13 != (undefined4 *)0x0) break;
          uVar14 = 0;
          goto switchD_00adf148_default;
        case 3:
          puVar13 = (undefined4 *)&UNK_018a5420;
          break;
        case 4:
                    /* try { // try from 00adf1b0 to 00bdf1d3 has its CatchHandler @ 00adf068 */
          puVar13 = (undefined4 *)&UNK_018a5430;
          break;
        case 5:
          puVar13 = (undefined4 *)&UNK_018a5440;
          break;
        case 6:
          puVar13 = &DAT_018a5450;
                    /* try { // try from 00adf1d4 to 00bdf1e7 has its CatchHandler @ 00adf320 */
          break;
        default:
          goto switchD_00adf148_default;
        }
LAB_00adf168:
        uVar14 = ssl_md(puVar13[2]);
switchD_00adf148_default:
        *(undefined8 *)(lVar1 + 0x2d8) = uVar14;
        *(undefined4 *)(lVar19 + lVar21 * 4 + 0x310) = 0x100;
        if ((int)lVar21 == 1) {
          *(undefined4 *)(lVar19 + 0x310) = 0x100;
                    /* try { // try from 00adf204 to 00bdf20b has its CatchHandler @ 00adf2e0 */
          *(undefined8 *)(lVar19 + 0x2d8) = uVar14;
        }
LAB_00adf208:
                    /* try { // try from 00adf20c to 00bdf2af has its CatchHandler @ 00adf068 */
        uVar17 = uVar17 + 1;
        pbVar18 = pbVar18 + 0x10;
      } while (uVar17 < *(ulong *)(lVar20 + 0x170));
    }
  }
  if ((*(uint *)(*(long *)(param_1 + 0x148) + 0x1c) & 0x30001) == 0) {
    if (*(long *)(lVar19 + 0x2e8) == 0) {
      pEVar10 = EVP_sha1();
      *(EVP_MD **)(lVar19 + 0x2e8) = pEVar10;
      lVar20 = *(long *)(lVar19 + 0x2e0);
    }
    else {
      lVar20 = *(long *)(lVar19 + 0x2e0);
    }
    if (lVar20 == 0) {
      pEVar10 = EVP_sha1();
      *(EVP_MD **)(lVar19 + 0x2e0) = pEVar10;
      pEVar10 = EVP_sha1();
      *(EVP_MD **)(lVar19 + 0x2d8) = pEVar10;
      lVar20 = *(long *)(lVar19 + 0x2f0);
    }
    else {
      lVar20 = *(long *)(lVar19 + 0x2f0);
    }
    if (lVar20 == 0) {
      pEVar10 = EVP_sha1();
                    /* try { // try from 00adf2b0 to 00bdf2b7 has its CatchHandler @ 00adf2d0 */
      *(EVP_MD **)(lVar19 + 0x2f0) = pEVar10;
      lVar20 = *(long *)(lVar19 + 0x2f8);
    }
    else {
      lVar20 = *(long *)(lVar19 + 0x2f8);
    }
                    /* try { // try from 00adf2b8 to 00bdf2bf has its CatchHandler @ 00adf2c0 */
    if (lVar20 == 0) {
                    /* catch() { ... } // from try @ 00adf1a8 with catch @ 00adf2c0
                       catch() { ... } // from try @ 00adf2b8 with catch @ 00adf2c0
                       try { // try from 00adf2c0 to 00bdf35b has its CatchHandler @ 00adf068 */
      pcVar9 = OBJ_nid2sn(0x329);
      pEVar10 = EVP_get_digestbyname(pcVar9);
      *(EVP_MD **)(lVar19 + 0x2f8) = pEVar10;
      lVar20 = *(long *)(lVar19 + 0x300);
                    /* catch() { ... } // from try @ 00adf120 with catch @ 00adf2d0
                       catch() { ... } // from try @ 00adf2b0 with catch @ 00adf2d0 */
    }
    else {
      lVar20 = *(long *)(lVar19 + 0x300);
    }
    if (lVar20 == 0) {
      pcVar9 = OBJ_nid2sn(0x3d6);
      pEVar10 = EVP_get_digestbyname(pcVar9);
                    /* catch() { ... } // from try @ 00adf204 with catch @ 00adf2e0 */
      *(EVP_MD **)(lVar19 + 0x300) = pEVar10;
      lVar20 = *(long *)(lVar19 + 0x308);
    }
    else {
      lVar20 = *(long *)(lVar19 + 0x308);
    }
    if (lVar20 == 0) {
      pcVar9 = OBJ_nid2sn(0x3d7);
      pEVar10 = EVP_get_digestbyname(pcVar9);
      *(EVP_MD **)(lVar19 + 0x308) = pEVar10;
    }
    return 1;
  }
  return 1;
}

