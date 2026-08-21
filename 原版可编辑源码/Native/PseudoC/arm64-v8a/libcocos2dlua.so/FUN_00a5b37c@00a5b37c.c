
void FUN_00a5b37c(byte *param_1,long *param_2)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  char *pcStack_570;
  undefined1 local_568 [1024];
  undefined1 local_168 [256];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00a5b3b0 to 00b5b3cf has its CatchHandler @ 00a5b488 */
  lVar14 = *param_2;
  (*(code *)PTR_free_01769a00)(lVar14);
  *param_2 = 0;
                    /* try { // try from 00a5b3d0 to 00b5b403 has its CatchHandler @ 00a5b2a4 */
  (*(code *)PTR_free_01769a00)(param_2[1]);
  param_2[1] = 0;
  (*(code *)PTR_free_01769a00)(param_2[2]);
  param_2[2] = 0;
  (*(code *)PTR_free_01769a00)(param_2[4]);
  param_2[4] = 0;
                    /* try { // try from 00a5b404 to 00b5b417 has its CatchHandler @ 00a5b48c */
  (*(code *)PTR_free_01769a00)(param_2[5]);
  param_2[5] = 0;
                    /* try { // try from 00a5b418 to 00b5b4df has its CatchHandler @ 00a5b2a4 */
  (*(code *)PTR_free_01769a00)(param_2[6]);
  bVar6 = false;
  bVar5 = false;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined1 *)((long)param_2 + 0x1c) = 0;
  do {
    uVar17 = (uint)*param_1;
    if (*param_1 != 0) {
      do {
        iVar7 = isspace(uVar17);
                    /* try { // try from 00a5b6d0 to 00b5b6e3 has its CatchHandler @ 00a5b728 */
        if (iVar7 == 0) break;
        param_1 = param_1 + 1;
        uVar17 = (uint)*param_1;
      } while (uVar17 != 0);
    }
                    /* try { // try from 00a5b6e4 to 00b5b743 has its CatchHandler @ 00a5b57c */
    for (lVar11 = 0; ((uVar17 != 0 && (uVar17 != 0x3d)) && ((int)lVar11 != 0xff));
        lVar11 = lVar11 + 1) {
      local_168[lVar11] = (char)uVar17;
      uVar17 = (uint)param_1[lVar11 + 1];
    }
    param_1 = param_1 + lVar11;
    local_168[lVar11] = 0;
    pbVar15 = param_1 + 1;
                    /* catch() { ... } // from try @ 00a5b5d0 with catch @ 00a5b724
                       catch() { ... } // from try @ 00a5b6b8 with catch @ 00a5b724 */
    if (*param_1 != 0x3d) {
      if ((lVar14 == 0) || (*(char *)((long)param_2 + 0x1c) != '\0')) {
        uVar10 = 0x3d;
        if (*param_2 != 0) {
          uVar10 = 0;
        }
      }
      else {
LAB_00a5b8f0:
                    /* catch() { ... } // from try @ 00a5b7e8 with catch @ 00a5b8f0
                       catch() { ... } // from try @ 00a5b898 with catch @ 00a5b8f0 */
        uVar10 = 0x3d;
      }
      goto LAB_00a5b900;
    }
                    /* catch() { ... } // from try @ 00a5b620 with catch @ 00a5b728
                       catch() { ... } // from try @ 00a5b6d0 with catch @ 00a5b728 */
    pbVar16 = param_1 + 2;
    pbVar1 = pbVar16;
    if (*pbVar15 != 0x22) {
      pbVar1 = pbVar15;
    }
    uVar17 = (uint)*pbVar1;
    if (*pbVar1 == 0) {
      puVar13 = local_568;
      pbVar16 = pbVar1;
    }
    else {
                    /* try { // try from 00a5b744 to 00b5b797 has its CatchHandler @ 00a5b744
                       catch() { ... } // from try @ 00a5b744 with catch @ 00a5b744
                       catch() { ... } // from try @ 00a5b84c with catch @ 00a5b744
                       catch() { ... } // from try @ 00a5b8ac with catch @ 00a5b744 */
      if (*pbVar15 == 0x22) {
        bVar4 = false;
        iVar7 = 0x3ff;
        puVar13 = local_568;
        do {
          while( true ) {
            if (iVar7 == 0) goto LAB_00a5b868;
            iVar7 = iVar7 + -1;
            if (0x21 < uVar17) break;
            if (uVar17 == 10) {
              bVar2 = pbVar16[1];
            }
            else {
              if (uVar17 != 0xd) goto LAB_00a5b7c8;
              bVar2 = pbVar16[1];
            }
            iVar7 = 0;
joined_r0x00a5b7e8:
            uVar17 = (uint)bVar2;
                    /* try { // try from 00a5b7e8 to 00b5b84b has its CatchHandler @ 00a5b8f0 */
            pbVar16 = pbVar16 + 1;
            if (uVar17 == 0) goto LAB_00a5b868;
          }
          if (uVar17 == 0x5c) {
            if (bVar4) goto LAB_00a5b7c8;
            *puVar13 = 0x5c;
            bVar4 = true;
            bVar2 = pbVar16[1];
            puVar13 = puVar13 + 1;
            goto joined_r0x00a5b7e8;
          }
                    /* try { // try from 00a5b798 to 00b5b7db has its CatchHandler @ 00a5b8ec */
          if ((uVar17 != 0x22) || (bVar4)) {
LAB_00a5b7c8:
            bVar4 = false;
            *puVar13 = (char)uVar17;
            bVar2 = pbVar16[1];
            puVar13 = puVar13 + 1;
            goto joined_r0x00a5b7e8;
          }
          iVar7 = 0;
          bVar4 = false;
          pbVar16 = pbVar16 + 1;
          uVar17 = (uint)*pbVar16;
        } while (uVar17 != 0);
      }
      else {
        bVar4 = false;
        iVar7 = 0x3ff;
        puVar12 = local_568;
        pbVar16 = pbVar15;
        do {
          while( true ) {
            puVar13 = puVar12;
            if (iVar7 == 0) goto LAB_00a5b868;
            if ((0x2c < uVar17) || ((1L << ((ulong)uVar17 & 0x3f) & 0x100000002400U) == 0)) break;
            iVar7 = 0;
            bVar2 = pbVar16[1];
joined_r0x00a5b850:
            uVar17 = (uint)bVar2;
            pbVar16 = pbVar16 + 1;
            puVar12 = puVar13;
            if (uVar17 == 0) goto LAB_00a5b868;
          }
          iVar7 = iVar7 + -1;
          if ((uVar17 != 0x5c) || (bVar4)) {
            bVar4 = false;
            *puVar12 = (char)uVar17;
                    /* try { // try from 00a5b84c to 00b5b87f has its CatchHandler @ 00a5b744 */
            bVar2 = pbVar16[1];
            puVar13 = puVar12 + 1;
            goto joined_r0x00a5b850;
          }
          puVar13 = puVar12 + 1;
          *puVar12 = 0x5c;
          bVar4 = true;
          pbVar16 = pbVar16 + 1;
          uVar17 = (uint)*pbVar16;
          puVar12 = puVar13;
        } while (uVar17 != 0);
      }
    }
LAB_00a5b868:
    *puVar13 = 0;
    iVar7 = FUN_00a4a0f8(local_168,"nonce");
    if (iVar7 == 0) {
      iVar7 = FUN_00a4a0f8(local_168,"stale");
      if (iVar7 == 0) {
        iVar7 = FUN_00a4a0f8(local_168,"realm");
        if (iVar7 != 0) {
          (*(code *)PTR_free_01769a00)(param_2[2]);
          lVar11 = (*(code *)PTR_strdup_01769a10)(local_568);
          param_2[2] = lVar11;
          if (lVar11 != 0) goto LAB_00a5b8a4;
          goto LAB_00a5b8fc;
        }
        iVar7 = FUN_00a4a0f8(local_168,"opaque");
        if (iVar7 != 0) {
          (*(code *)PTR_free_01769a00)(param_2[4]);
          lVar11 = (*(code *)PTR_strdup_01769a10)(local_568);
          param_2[4] = lVar11;
          goto joined_r0x00a5b8a0;
        }
        iVar7 = FUN_00a4a0f8(local_168,&DAT_013c9609);
        if (iVar7 == 0) {
          iVar7 = FUN_00a4a0f8(local_168,"algorithm");
          if (iVar7 == 0) goto LAB_00a5b8a4;
          (*(code *)PTR_free_01769a00)(param_2[6]);
                    /* try { // try from 00a5b620 to 00b5b683 has its CatchHandler @ 00a5b728 */
          lVar11 = (*(code *)PTR_strdup_01769a10)(local_568);
          param_2[6] = lVar11;
          if (lVar11 != 0) {
            iVar7 = FUN_00a4a0f8(local_568,"MD5-sess");
            if (iVar7 == 0) {
              iVar7 = FUN_00a4a0f8(local_568,&DAT_013e6c17);
              if (iVar7 == 0) goto LAB_00a5b8f0;
              *(undefined4 *)(param_2 + 3) = 0;
                    /* try { // try from 00a5b6b8 to 00b5b6cb has its CatchHandler @ 00a5b724 */
              bVar2 = *pbVar16;
            }
            else {
              *(undefined4 *)(param_2 + 3) = 1;
              bVar2 = *pbVar16;
            }
            goto joined_r0x00a5b654;
          }
          goto LAB_00a5b8fc;
        }
        pcVar8 = (char *)(*(code *)PTR_strdup_01769a10)(local_568);
        pcVar9 = pcVar8;
        if (pcVar8 == (char *)0x0) {
LAB_00a5b8fc:
          uVar10 = 0x1b;
LAB_00a5b900:
                    /* try { // try from 00a5b90c to 00b5b96b has its CatchHandler @ 00a5b90c
                       catch() { ... } // from try @ 00a5b90c with catch @ 00a5b90c
                       catch() { ... } // from try @ 00a5bb78 with catch @ 00a5b90c
                       catch() { ... } // from try @ 00a5bc70 with catch @ 00a5b90c */
          if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar10);
          }
          return;
        }
                    /* try { // try from 00a5b57c to 00b5b5cf has its CatchHandler @ 00a5b57c
                       catch() { ... } // from try @ 00a5b57c with catch @ 00a5b57c
                       catch() { ... } // from try @ 00a5b684 with catch @ 00a5b57c
                       catch() { ... } // from try @ 00a5b6e4 with catch @ 00a5b57c */
        while (pcVar9 = strtok_r(pcVar9,",",&pcStack_570), pcVar9 != (char *)0x0) {
          iVar7 = FUN_00a4a0f8(pcVar9,"auth");
          if (iVar7 == 0) {
            iVar7 = FUN_00a4a0f8(pcVar9,"auth-int");
            bVar6 = (bool)(bVar6 | iVar7 != 0);
          }
          else {
            bVar5 = true;
          }
          pcVar9 = (char *)0x0;
        }
                    /* try { // try from 00a5b5d0 to 00b5b613 has its CatchHandler @ 00a5b724 */
        (*(code *)PTR_free_01769a00)(pcVar8);
        if (bVar5) {
          (*(code *)PTR_free_01769a00)(param_2[5]);
          pcVar9 = "auth";
LAB_00a5b680:
                    /* try { // try from 00a5b684 to 00b5b6b7 has its CatchHandler @ 00a5b57c */
          lVar11 = (*(code *)PTR_strdup_01769a10)(pcVar9);
          param_2[5] = lVar11;
          if (lVar11 == 0) goto LAB_00a5b8fc;
        }
        else if (bVar6) {
          (*(code *)PTR_free_01769a00)(param_2[5]);
          pcVar9 = "auth-int";
          goto LAB_00a5b680;
        }
        bVar2 = *pbVar16;
      }
      else {
                    /* catch() { ... } // from try @ 00a5b3b0 with catch @ 00a5b488 */
        iVar7 = FUN_00a4a0f8(local_568,&DAT_012a5ace);
                    /* catch() { ... } // from try @ 00a5b304 with catch @ 00a5b48c
                       catch() { ... } // from try @ 00a5b404 with catch @ 00a5b48c */
        if (iVar7 == 0) goto LAB_00a5b8a4;
        *(undefined1 *)((long)param_2 + 0x1c) = 1;
        *(undefined4 *)(param_2 + 7) = 1;
        bVar2 = *pbVar16;
      }
    }
    else {
                    /* try { // try from 00a5b880 to 00b5b893 has its CatchHandler @ 00a5b8ec */
      (*(code *)PTR_free_01769a00)(*param_2);
                    /* try { // try from 00a5b898 to 00b5b8ab has its CatchHandler @ 00a5b8f0 */
      lVar11 = (*(code *)PTR_strdup_01769a10)(local_568);
      *param_2 = lVar11;
joined_r0x00a5b8a0:
      if (lVar11 == 0) goto LAB_00a5b8fc;
LAB_00a5b8a4:
      bVar2 = *pbVar16;
    }
joined_r0x00a5b654:
    uVar17 = (uint)bVar2;
    param_1 = pbVar16;
    if (bVar2 != 0) {
      do {
                    /* try { // try from 00a5b8ac to 00b5b90b has its CatchHandler @ 00a5b744 */
        param_1 = pbVar16 + 1;
        iVar7 = isspace(uVar17);
        if (iVar7 == 0) {
          if (uVar17 != 0x2c) {
            param_1 = pbVar16;
          }
          break;
        }
        uVar17 = (uint)*param_1;
        pbVar16 = param_1;
      } while (uVar17 != 0);
    }
  } while( true );
}

