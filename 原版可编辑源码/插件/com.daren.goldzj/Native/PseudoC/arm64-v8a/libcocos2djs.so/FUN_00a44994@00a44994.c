
void FUN_00a44994(byte *param_1,long *param_2)

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
                    /* catch() { ... } // from try @ 00a44900 with catch @ 00a449cc */
  lVar14 = *param_2;
  (*(code *)PTR_free_01d1b748)(lVar14);
                    /* catch() { ... } // from try @ 00a44918 with catch @ 00a449e4 */
  *param_2 = 0;
                    /* catch() { ... } // from try @ 00a448d8 with catch @ 00a449e8 */
                    /* catch() { ... } // from try @ 00a44920 with catch @ 00a449ec */
  (*(code *)PTR_free_01d1b748)(param_2[1]);
  param_2[1] = 0;
                    /* catch() { ... } // from try @ 00a44908 with catch @ 00a449fc */
  (*(code *)PTR_free_01d1b748)(param_2[2]);
  param_2[2] = 0;
  (*(code *)PTR_free_01d1b748)(param_2[4]);
                    /* catch() { ... } // from try @ 00a448c4 with catch @ 00a44a14 */
  param_2[4] = 0;
                    /* catch() { ... } // from try @ 00a44898 with catch @ 00a44a18 */
  (*(code *)PTR_free_01d1b748)(param_2[5]);
  param_2[5] = 0;
  (*(code *)PTR_free_01d1b748)(param_2[6]);
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
        if (iVar7 == 0) break;
        param_1 = param_1 + 1;
        uVar17 = (uint)*param_1;
      } while (uVar17 != 0);
    }
    for (lVar11 = 0; ((uVar17 != 0 && (uVar17 != 0x3d)) && ((int)lVar11 != 0xff));
        lVar11 = lVar11 + 1) {
      local_168[lVar11] = (char)uVar17;
      uVar17 = (uint)param_1[lVar11 + 1];
    }
    param_1 = param_1 + lVar11;
    local_168[lVar11] = 0;
    pbVar15 = param_1 + 1;
    if (*param_1 != 0x3d) {
      if ((lVar14 == 0) || (*(char *)((long)param_2 + 0x1c) != '\0')) {
        uVar10 = 0x3d;
        if (*param_2 != 0) {
          uVar10 = 0;
        }
      }
      else {
LAB_00a44f08:
        uVar10 = 0x3d;
      }
      goto LAB_00a44f18;
    }
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
    else if (*pbVar15 == 0x22) {
      bVar4 = false;
      iVar7 = 0x3ff;
      puVar13 = local_568;
      do {
        while( true ) {
          if (iVar7 == 0) goto LAB_00a44e80;
          iVar7 = iVar7 + -1;
          if (0x21 < uVar17) break;
          if (uVar17 == 10) {
            bVar2 = pbVar16[1];
          }
          else {
            if (uVar17 != 0xd) goto LAB_00a44de0;
            bVar2 = pbVar16[1];
          }
          iVar7 = 0;
joined_r0x00a44e00:
          uVar17 = (uint)bVar2;
          pbVar16 = pbVar16 + 1;
          if (uVar17 == 0) goto LAB_00a44e80;
        }
        if (uVar17 == 0x5c) {
          if (bVar4) goto LAB_00a44de0;
          *puVar13 = 0x5c;
          bVar4 = true;
          bVar2 = pbVar16[1];
          puVar13 = puVar13 + 1;
          goto joined_r0x00a44e00;
        }
        if ((uVar17 != 0x22) || (bVar4)) {
LAB_00a44de0:
          bVar4 = false;
          *puVar13 = (char)uVar17;
          bVar2 = pbVar16[1];
          puVar13 = puVar13 + 1;
          goto joined_r0x00a44e00;
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
          if (iVar7 == 0) goto LAB_00a44e80;
          if ((0x2c < uVar17) || ((1L << ((ulong)uVar17 & 0x3f) & 0x100000002400U) == 0)) break;
          iVar7 = 0;
          bVar2 = pbVar16[1];
joined_r0x00a44e68:
          uVar17 = (uint)bVar2;
          pbVar16 = pbVar16 + 1;
          puVar12 = puVar13;
          if (uVar17 == 0) goto LAB_00a44e80;
        }
        iVar7 = iVar7 + -1;
        if ((uVar17 != 0x5c) || (bVar4)) {
          bVar4 = false;
          *puVar12 = (char)uVar17;
          bVar2 = pbVar16[1];
          puVar13 = puVar12 + 1;
          goto joined_r0x00a44e68;
        }
        puVar13 = puVar12 + 1;
        *puVar12 = 0x5c;
        bVar4 = true;
        pbVar16 = pbVar16 + 1;
        uVar17 = (uint)*pbVar16;
        puVar12 = puVar13;
      } while (uVar17 != 0);
    }
LAB_00a44e80:
    *puVar13 = 0;
    iVar7 = FUN_00a33710(local_168,"nonce");
                    /* catch() { ... } // from try @ 00a44b4c with catch @ 00a44e90 */
    if (iVar7 == 0) {
      iVar7 = FUN_00a33710(local_168,"stale");
      if (iVar7 == 0) {
                    /* try { // try from 00a44ac4 to 00b44b07 has its CatchHandler @ 00a44a68 */
        iVar7 = FUN_00a33710(local_168,"realm");
        if (iVar7 != 0) {
          (*(code *)PTR_free_01d1b748)(param_2[2]);
          lVar11 = (*(code *)PTR_strdup_01d1b758)(local_568);
          param_2[2] = lVar11;
                    /* catch() { ... } // from try @ 00a44aac with catch @ 00a44af4 */
          if (lVar11 != 0) goto LAB_00a44ebc;
          goto LAB_00a44f14;
        }
                    /* catch() { ... } // from try @ 00a44b60 with catch @ 00a44b08 */
        iVar7 = FUN_00a33710(local_168,"opaque");
        if (iVar7 != 0) {
          (*(code *)PTR_free_01d1b748)(param_2[4]);
          lVar11 = (*(code *)PTR_strdup_01d1b758)(local_568);
          param_2[4] = lVar11;
          goto joined_r0x00a44eb8;
        }
        iVar7 = FUN_00a33710(local_168,&DAT_01896cd5);
                    /* try { // try from 00a44b4c to 00b44b5f has its CatchHandler @ 00a44e90 */
        if (iVar7 == 0) {
          iVar7 = FUN_00a33710(local_168,"algorithm");
          if (iVar7 == 0) goto LAB_00a44ebc;
          (*(code *)PTR_free_01d1b748)(param_2[6]);
          lVar11 = (*(code *)PTR_strdup_01d1b758)(local_568);
          param_2[6] = lVar11;
          if (lVar11 != 0) {
            iVar7 = FUN_00a33710(local_568,"MD5-sess");
            if (iVar7 == 0) {
              iVar7 = FUN_00a33710(local_568,&DAT_018b663d);
              if (iVar7 == 0) goto LAB_00a44f08;
              *(undefined4 *)(param_2 + 3) = 0;
              bVar2 = *pbVar16;
            }
            else {
              *(undefined4 *)(param_2 + 3) = 1;
              bVar2 = *pbVar16;
            }
            goto joined_r0x00a44c6c;
          }
          goto LAB_00a44f14;
        }
                    /* try { // try from 00a44b60 to 00b44eab has its CatchHandler @ 00a44b08 */
        pcVar8 = (char *)(*(code *)PTR_strdup_01d1b758)(local_568);
        pcVar9 = pcVar8;
        if (pcVar8 == (char *)0x0) {
LAB_00a44f14:
          uVar10 = 0x1b;
LAB_00a44f18:
                    /* try { // try from 00a44f24 to 00b44f2f has its CatchHandler @ 00a45158 */
          if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar10);
          }
                    /* try { // try from 00a44f30 to 00b44f3b has its CatchHandler @ 00a45154 */
                    /* try { // try from 00a44f3c to 00b4514b has its CatchHandler @ 00a4516c */
          return;
        }
        while (pcVar9 = strtok_r(pcVar9,",",&pcStack_570), pcVar9 != (char *)0x0) {
          iVar7 = FUN_00a33710(pcVar9,"auth");
          if (iVar7 == 0) {
            iVar7 = FUN_00a33710(pcVar9,"auth-int");
            bVar6 = (bool)(bVar6 | iVar7 != 0);
          }
          else {
            bVar5 = true;
          }
          pcVar9 = (char *)0x0;
        }
        (*(code *)PTR_free_01d1b748)(pcVar8);
        if (bVar5) {
          (*(code *)PTR_free_01d1b748)(param_2[5]);
          pcVar9 = "auth";
LAB_00a44c98:
          lVar11 = (*(code *)PTR_strdup_01d1b758)(pcVar9);
          param_2[5] = lVar11;
          if (lVar11 == 0) goto LAB_00a44f14;
        }
        else if (bVar6) {
          (*(code *)PTR_free_01d1b748)(param_2[5]);
          pcVar9 = "auth-int";
          goto LAB_00a44c98;
        }
        bVar2 = *pbVar16;
      }
      else {
        iVar7 = FUN_00a33710(local_568,"true");
        if (iVar7 == 0) goto LAB_00a44ebc;
        *(undefined1 *)((long)param_2 + 0x1c) = 1;
                    /* try { // try from 00a44aac to 00b44ac3 has its CatchHandler @ 00a44af4 */
        *(undefined4 *)(param_2 + 7) = 1;
        bVar2 = *pbVar16;
      }
    }
    else {
      (*(code *)PTR_free_01d1b748)(*param_2);
                    /* try { // try from 00a44eac to 00b44f03 has its CatchHandler @ 00a44eac
                       catch() { ... } // from try @ 00a44eac with catch @ 00a44eac
                       catch() { ... } // from try @ 00a4514c with catch @ 00a44eac */
      lVar11 = (*(code *)PTR_strdup_01d1b758)(local_568);
      *param_2 = lVar11;
joined_r0x00a44eb8:
      if (lVar11 == 0) goto LAB_00a44f14;
LAB_00a44ebc:
      bVar2 = *pbVar16;
    }
joined_r0x00a44c6c:
    uVar17 = (uint)bVar2;
    param_1 = pbVar16;
    if (bVar2 != 0) {
      do {
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

