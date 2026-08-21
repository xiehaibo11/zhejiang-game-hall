
/* WARNING: Removing unreachable block (ram,0x00aee06c) */
/* WARNING: Removing unreachable block (ram,0x00aee08c) */
/* WARNING: Removing unreachable block (ram,0x00aedf58) */
/* WARNING: Removing unreachable block (ram,0x00aee04c) */
/* WARNING: Removing unreachable block (ram,0x00aee07c) */
/* WARNING: Removing unreachable block (ram,0x00aee05c) */
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
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aede38 with catch @ 00aedda4
                       catch(type#1 @ 00000000) { ... } // from try @ 00aededc with catch @ 00aedda4
                        */
  lVar20 = *(long *)(param_1 + 0x148);
  lVar19 = *(long *)(param_1 + 0x90);
  uVar2 = *(uint *)(lVar20 + 0x1c) & 0x30000;
  CRYPTO_free(*(void **)(lVar20 + 0x168));
  *(undefined8 *)(lVar20 + 0x168) = 0;
  *(undefined8 *)(lVar20 + 0x170) = 0;
                    /* try { // try from 00aede30 to 00bede37 has its CatchHandler @ 00aedee4 */
                    /* try { // try from 00aede38 to 00beded7 has its CatchHandler @ 00aedda4 */
  if (((*(int *)(param_1 + 0x38) == 0) && (uVar2 == 0)) &&
     (puVar11 = *(undefined1 **)(lVar20 + 0x158), puVar11 != (undefined1 *)0x0)) {
    uVar14 = *(undefined8 *)(lVar20 + 0x160);
  }
  else if ((uVar2 == 0) &&
          (puVar11 = *(undefined1 **)(lVar20 + 0x148), puVar11 != (undefined1 *)0x0)) {
    uVar14 = *(undefined8 *)(lVar20 + 0x150);
  }
  else {
                    /* try { // try from 00aeddf4 to 00beddf7 has its CatchHandler @ 00aedee0 */
    lVar21 = *(long *)(param_1 + 0x148);
    uVar3 = *(uint *)(lVar21 + 0x1c) & 0x30000;
    puVar11 = &DAT_013d3786;
    if (uVar3 == 0x30000) {
      uVar14 = 4;
    }
    else if (uVar3 == 0x20000) {
      puVar11 = &DAT_013d3788;
      uVar14 = 2;
    }
    else if (uVar3 == 0x10000) {
      puVar11 = &DAT_013d3786;
      uVar14 = 2;
    }
    else if ((*(int *)(param_1 + 0x38) == 0) ||
            (puVar11 = *(undefined1 **)(lVar21 + 0x158), puVar11 == (undefined1 *)0x0)) {
      puVar11 = *(undefined1 **)(lVar21 + 0x148);
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &DAT_013d378a;
        uVar14 = 0x24;
      }
      else {
        uVar14 = *(undefined8 *)(lVar21 + 0x150);
      }
    }
    else {
      uVar14 = *(undefined8 *)(lVar21 + 0x160);
    }
  }
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
  iVar7 = FUN_00af08ac(param_1,0,puVar4,uVar15,puVar11,uVar6);
  if (iVar7 == 0) {
    *(undefined8 *)(lVar20 + 0x168) = 0;
    *(undefined8 *)(lVar20 + 0x170) = 0;
  }
  else {
                    /* try { // try from 00aeded8 to 00bededb has its CatchHandler @ 00aedee0 */
                    /* try { // try from 00aededc to 00bedf33 has its CatchHandler @ 00aedda4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aeddf4 with catch @ 00aedee0
                       catch(type#1 @ 00000000) { ... } // from try @ 00aeded8 with catch @ 00aedee0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aede30 with catch @ 00aedee4
                        */
    pvVar8 = CRYPTO_malloc(iVar7 << 4,"ssl/t1_lib.c",0xde2);
    if (pvVar8 == (void *)0x0) {
      return 0;
    }
    iVar7 = FUN_00af08ac(param_1,pvVar8,puVar4,uVar15,puVar11,uVar6);
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
            goto LAB_00aedfc4;
          }
          if (bVar5 == 0xee) {
            lVar21 = 5;
            goto LAB_00aedfc4;
          }
                    /* try { // try from 00aedf98 to 00bedfeb has its CatchHandler @ 00aedf98
                       catch() { ... } // from try @ 00aedf98 with catch @ 00aedf98
                       catch() { ... } // from try @ 00aee0b4 with catch @ 00aedf98 */
          if (bVar5 == 0xef) {
            lVar21 = 6;
            goto LAB_00aedfc4;
          }
          goto LAB_00aee0bc;
        }
        if (bVar5 == 1) {
          lVar21 = 1;
        }
        else if (bVar5 == 2) {
          lVar21 = 2;
        }
        else {
          if (bVar5 != 3) goto LAB_00aee0bc;
          lVar21 = 3;
        }
LAB_00aedfc4:
        lVar1 = lVar19 + lVar21 * 8;
        if (*(long *)(lVar1 + 0x2d8) != 0) goto LAB_00aee0bc;
        bVar5 = *pbVar18;
        uVar14 = 0;
        if (0xec < bVar5) {
          if (bVar5 == 0xed) {
            puVar13 = (undefined4 *)&UNK_013d38e0;
          }
          else if (bVar5 == 0xee) {
            puVar13 = (undefined4 *)&UNK_013d38f0;
          }
          else {
                    /* try { // try from 00aee03c to 00bee0a7 has its CatchHandler @ 00aee124 */
            if (bVar5 != 0xef) goto switchD_00aedffc_default;
            puVar13 = (undefined4 *)&UNK_013d3900;
          }
          goto LAB_00aee01c;
        }
                    /* try { // try from 00aedfec to 00bedfef has its CatchHandler @ 00aee110 */
        lVar12 = 1;
        switch(bVar5) {
        case 1:
          iVar7 = FIPS_mode();
          uVar14 = 0;
          if (iVar7 == 0) {
            lVar12 = 0;
            goto switchD_00aedffc_caseD_2;
          }
          goto switchD_00aedffc_default;
        case 2:
switchD_00aedffc_caseD_2:
          puVar13 = (undefined4 *)(&UNK_013d3880 + lVar12 * 0x10);
          if (puVar13 != (undefined4 *)0x0) break;
          uVar14 = 0;
          goto switchD_00aedffc_default;
        case 3:
          puVar13 = (undefined4 *)&UNK_013d38a0;
          break;
        case 4:
          puVar13 = (undefined4 *)&UNK_013d38b0;
          break;
        case 5:
          puVar13 = (undefined4 *)&UNK_013d38c0;
          break;
        case 6:
          puVar13 = &DAT_013d38d0;
          break;
        default:
          goto switchD_00aedffc_default;
        }
LAB_00aee01c:
        uVar14 = ssl_md(puVar13[2]);
switchD_00aedffc_default:
        *(undefined8 *)(lVar1 + 0x2d8) = uVar14;
                    /* try { // try from 00aee0ac to 00bee0b3 has its CatchHandler @ 00aee0f8 */
        *(undefined4 *)(lVar19 + lVar21 * 4 + 0x310) = 0x100;
        if ((int)lVar21 == 1) {
                    /* try { // try from 00aee0b4 to 00bee13f has its CatchHandler @ 00aedf98 */
          *(undefined4 *)(lVar19 + 0x310) = 0x100;
          *(undefined8 *)(lVar19 + 0x2d8) = uVar14;
        }
LAB_00aee0bc:
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
                    /* catch() { ... } // from try @ 00aee0ac with catch @ 00aee0f8 */
      lVar20 = *(long *)(lVar19 + 0x2f0);
    }
    if (lVar20 == 0) {
      pEVar10 = EVP_sha1();
      *(EVP_MD **)(lVar19 + 0x2f0) = pEVar10;
      lVar20 = *(long *)(lVar19 + 0x2f8);
    }
    else {
      lVar20 = *(long *)(lVar19 + 0x2f8);
    }
    if (lVar20 == 0) {
      pcVar9 = OBJ_nid2sn(0x329);
      pEVar10 = EVP_get_digestbyname(pcVar9);
      *(EVP_MD **)(lVar19 + 0x2f8) = pEVar10;
      lVar20 = *(long *)(lVar19 + 0x300);
    }
    else {
      lVar20 = *(long *)(lVar19 + 0x300);
    }
    if (lVar20 == 0) {
      pcVar9 = OBJ_nid2sn(0x3d6);
      pEVar10 = EVP_get_digestbyname(pcVar9);
      *(EVP_MD **)(lVar19 + 0x300) = pEVar10;
      lVar20 = *(long *)(lVar19 + 0x308);
    }
    else {
                    /* catch() { ... } // from try @ 00aedfec with catch @ 00aee110 */
      lVar20 = *(long *)(lVar19 + 0x308);
    }
    if (lVar20 == 0) {
      pcVar9 = OBJ_nid2sn(0x3d7);
      pEVar10 = EVP_get_digestbyname(pcVar9);
      *(EVP_MD **)(lVar19 + 0x308) = pEVar10;
    }
                    /* catch() { ... } // from try @ 00aee03c with catch @ 00aee124 */
    return 1;
  }
  return 1;
}

