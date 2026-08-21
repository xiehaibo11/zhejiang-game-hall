
/* WARNING: Type propagation algorithm not settling */

int FUN_00a51670(long *param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  char *pcVar6;
  undefined8 uVar7;
  size_t sVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  char *local_68;
  size_t local_58;
  
  lVar11 = *param_1;
  plVar1 = (long *)(lVar11 + 0x8cc0);
  lVar14 = *(long *)(lVar11 + 0x218);
  pcVar12 = (char *)*plVar1;
  *(undefined1 *)((long)param_1 + 0x6a9) = 0;
  *(undefined1 *)((long)param_1 + 0x6ab) = 0;
  if (*(int *)(lVar11 + 0x5f8) == 3) {
                    /* try { // try from 00a516e8 to 00b517cb has its CatchHandler @ 00a51588 */
    if (*pcVar12 == '\0') {
      *(undefined4 *)(param_1 + 0xd3) = 0;
      goto LAB_00a519e8;
    }
    pcVar6 = strrchr(pcVar12,0x2f);
    lVar13 = lVar11;
    if (pcVar6 == (char *)0x0) goto LAB_00a51960;
    lVar13 = (*(code *)PTR_calloc_01d1b760)(1,8);
    param_1[0xd2] = lVar13;
    if (lVar13 == 0) {
      return 0x1b;
    }
    lVar10 = (long)pcVar6 - (long)pcVar12;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    iVar4 = FUN_00a2eb18(*param_1,pcVar12,lVar10,lVar13,0,0);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0xd3) = 1;
      pcVar12 = pcVar6 + 1;
                    /* try { // try from 00a519e0 to 00b51acb has its CatchHandler @ 00a517cc */
      cVar2 = *pcVar12;
      goto joined_r0x00a519e4;
    }
    lVar11 = param_1[0xd2];
    if (lVar11 == 0) goto LAB_00a51a98;
                    /* catch() { ... } // from try @ 00a51608 with catch @ 00a5175c */
                    /* catch() { ... } // from try @ 00a515fc with catch @ 00a51760 */
                    /* catch() { ... } // from try @ 00a515dc with catch @ 00a51764 */
    if (0 < (int)param_1[0xd3]) {
      lVar14 = 0;
      do {
                    /* catch() { ... } // from try @ 00a51614 with catch @ 00a51774 */
        lVar13 = lVar14 * 8;
        (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar11 + lVar13));
        lVar14 = lVar14 + 1;
        *(undefined8 *)(param_1[0xd2] + lVar13) = 0;
        lVar11 = param_1[0xd2];
      } while (lVar14 < (int)param_1[0xd3]);
    }
  }
  else {
    if (*(int *)(lVar11 + 0x5f8) == 2) {
      if ((*pcVar12 == '\0') || (sVar5 = strlen(pcVar12), pcVar12[sVar5 - 1] == '/'))
      goto LAB_00a519e8;
LAB_00a51954:
      cVar2 = *pcVar12;
    }
    else {
      param_1[0xd3] = 0x500000000;
      lVar13 = (*(code *)PTR_calloc_01d1b760)(5,8);
      param_1[0xd2] = lVar13;
      if (lVar13 == 0) {
        return 0x1b;
      }
                    /* try { // try from 00a517cc to 00b51827 has its CatchHandler @ 00a517cc
                       catch() { ... } // from try @ 00a517cc with catch @ 00a517cc
                       catch() { ... } // from try @ 00a519e0 with catch @ 00a517cc */
      iVar4 = strcmp(pcVar12,"/");
      if (iVar4 != 0) {
        pcVar6 = strchr(pcVar12,0x2f);
        if (pcVar6 == (char *)0x0) {
          if (pcVar12 == (char *)0x0) goto LAB_00a519e8;
        }
        else {
          do {
            if ((long)pcVar12 - *plVar1 < 1) {
              uVar9 = 0;
              lVar13 = (long)pcVar6 - (long)pcVar12;
              if (lVar13 != 0) goto LAB_00a51830;
LAB_00a518a8:
              if ((int)param_1[0xd3] == 0) {
                uVar7 = (*(code *)PTR_strdup_01d1b758)("/");
                lVar13 = param_1[0xd3];
                lVar10 = (long)(int)lVar13 * 8;
                *(undefined8 *)(param_1[0xd2] + lVar10) = uVar7;
                *(int *)(param_1 + 0xd3) = (int)lVar13 + 1;
                if (*(long *)(param_1[0xd2] + lVar10) == 0) {
                  FUN_00a23020(lVar11,"no memory");
                  lVar11 = param_1[0xd2];
                  if (lVar11 == 0) goto LAB_00a51c9c;
                  if (0 < (int)param_1[0xd3]) {
                    lVar14 = 0;
                    do {
                      lVar13 = lVar14 * 8;
                      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar11 + lVar13));
                      lVar14 = lVar14 + 1;
                      *(undefined8 *)(param_1[0xd2] + lVar13) = 0;
                      lVar11 = param_1[0xd2];
                    } while (lVar14 < (int)param_1[0xd3]);
                  }
                  goto LAB_00a51c90;
                }
              }
            }
            else {
              uVar9 = (ulong)((int)param_1[0xd3] == 0);
                    /* try { // try from 00a51828 to 00b5183f has its CatchHandler @ 00a51a64 */
              lVar13 = (long)pcVar6 - (long)pcVar12;
              if (lVar13 == 0) goto LAB_00a518a8;
LAB_00a51830:
                    /* try { // try from 00a51848 to 00b51853 has its CatchHandler @ 00a51a60 */
              iVar4 = FUN_00a2eb18(*param_1,(long)pcVar12 - uVar9,lVar13 + uVar9,
                                   param_1[0xd2] + (long)(int)param_1[0xd3] * 8,0,1);
                    /* try { // try from 00a51854 to 00b5185f has its CatchHandler @ 00a51a5c */
              if (iVar4 != 0) {
                (*(code *)PTR_free_01d1b748)
                          (*(undefined8 *)(param_1[0xd2] + (long)(int)param_1[0xd3] * 8));
                lVar11 = param_1[0xd2];
                if (lVar11 != 0) {
                  if (0 < (int)param_1[0xd3]) {
                    lVar14 = 0;
                    do {
                      lVar13 = lVar14 * 8;
                      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar11 + lVar13));
                      lVar14 = lVar14 + 1;
                      *(undefined8 *)(param_1[0xd2] + lVar13) = 0;
                      lVar11 = param_1[0xd2];
                    } while (lVar14 < (int)param_1[0xd3]);
                  }
                  (*(code *)PTR_free_01d1b748)();
                  param_1[0xd2] = 0;
                  *(undefined4 *)(param_1 + 0xd3) = 0;
                }
                goto LAB_00a51a98;
              }
                    /* try { // try from 00a51860 to 00b519df has its CatchHandler @ 00a51a74 */
              iVar3 = *(int *)((long)param_1 + 0x69c);
              iVar4 = (int)param_1[0xd3] + 1;
              *(int *)(param_1 + 0xd3) = iVar4;
              if (iVar3 <= iVar4) {
                *(int *)((long)param_1 + 0x69c) = (int)((long)iVar3 << 1);
                lVar13 = (*(code *)PTR_realloc_01d1b750)(param_1[0xd2],(long)iVar3 << 4);
                if (lVar13 == 0) {
                  lVar11 = param_1[0xd2];
                  if (lVar11 == 0) goto LAB_00a51c9c;
                  if (0 < (int)param_1[0xd3]) {
                    lVar14 = 0;
                    do {
                      lVar13 = lVar14 * 8;
                      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar11 + lVar13));
                      lVar14 = lVar14 + 1;
                      *(undefined8 *)(param_1[0xd2] + lVar13) = 0;
                      lVar11 = param_1[0xd2];
                    } while (lVar14 < (int)param_1[0xd3]);
                  }
LAB_00a51c90:
                  (*(code *)PTR_free_01d1b748)();
                  param_1[0xd2] = 0;
                  *(undefined4 *)(param_1 + 0xd3) = 0;
LAB_00a51c9c:
                  (*(code *)PTR_free_01d1b748)(param_1[0xd4]);
                  param_1[0xd4] = 0;
                    /* try { // try from 00a51cb4 to 00b51d97 has its CatchHandler @ 00a51acc */
                  (*(code *)PTR_free_01d1b748)(param_1[0xdd]);
                  param_1[0xdd] = 0;
                  return 0x1b;
                }
                param_1[0xd2] = lVar13;
              }
            }
            pcVar12 = pcVar6 + 1;
            pcVar6 = strchr(pcVar12,0x2f);
          } while (pcVar6 != (char *)0x0);
        }
        goto LAB_00a51954;
      }
      pcVar12 = pcVar12 + 1;
      uVar7 = (*(code *)PTR_strdup_01d1b758)("/");
      *(undefined8 *)param_1[0xd2] = uVar7;
      *(int *)(param_1 + 0xd3) = (int)param_1[0xd3] + 1;
      cVar2 = *pcVar12;
    }
joined_r0x00a519e4:
    if (cVar2 == '\0') {
LAB_00a519e8:
      param_1[0xd4] = 0;
    }
    else {
      lVar13 = *param_1;
LAB_00a51960:
      iVar4 = FUN_00a2eb18(lVar13,pcVar12,0,param_1 + 0xd4,0,1);
      if (iVar4 != 0) {
        lVar11 = param_1[0xd2];
        if (lVar11 == 0) goto LAB_00a51a98;
        if (0 < (int)param_1[0xd3]) {
          lVar14 = 0;
          do {
            lVar13 = lVar14 * 8;
            (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar11 + lVar13));
            lVar14 = lVar14 + 1;
            *(undefined8 *)(param_1[0xd2] + lVar13) = 0;
            lVar11 = param_1[0xd2];
          } while (lVar14 < (int)param_1[0xd3]);
        }
        goto LAB_00a51a84;
      }
    }
    if (((*(char *)(lVar11 + 0x621) != '\0') && (param_1[0xd4] == 0)) &&
       (*(int *)(lVar14 + 0x18) == 0)) {
                    /* try { // try from 00a51b58 to 00b51cb3 has its CatchHandler @ 00a51d40 */
      FUN_00a23020(lVar11,"Uploading to a URL without a file name!");
      return 3;
    }
    *(undefined1 *)((long)param_1 + 0x6aa) = 0;
    if (param_1[0xd6] == 0) {
      return 0;
    }
    iVar4 = FUN_00a2eb18(*param_1,*plVar1,0,&local_68,&local_58,0);
    if (iVar4 == 0) {
      sVar5 = 0;
      if ((char *)param_1[0xd4] != (char *)0x0) {
        sVar5 = strlen((char *)param_1[0xd4]);
      }
                    /* try { // try from 00a51acc to 00b51b1f has its CatchHandler @ 00a51acc
                       catch() { ... } // from try @ 00a51acc with catch @ 00a51acc
                       catch() { ... } // from try @ 00a51cb4 with catch @ 00a51acc */
      sVar5 = local_58 - sVar5;
      pcVar12 = (char *)param_1[0xd6];
      local_58 = sVar5;
      sVar8 = strlen(pcVar12);
      if ((sVar5 == sVar8) && (iVar4 = strncmp(local_68,pcVar12,sVar5), iVar4 == 0)) {
        FUN_00a22d58(lVar11,"Request has same path as previous transfer\n");
        *(undefined1 *)((long)param_1 + 0x6aa) = 1;
      }
                    /* try { // try from 00a51b20 to 00b51b37 has its CatchHandler @ 00a51d30 */
      (*(code *)PTR_free_01d1b748)(local_68);
      return 0;
    }
    lVar11 = param_1[0xd2];
    if (lVar11 == 0) goto LAB_00a51a98;
    if (0 < (int)param_1[0xd3]) {
      lVar14 = 0;
      do {
        lVar13 = lVar14 * 8;
                    /* catch() { ... } // from try @ 00a51854 with catch @ 00a51a5c */
                    /* catch() { ... } // from try @ 00a51848 with catch @ 00a51a60 */
        (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar11 + lVar13));
                    /* catch() { ... } // from try @ 00a51828 with catch @ 00a51a64 */
        lVar14 = lVar14 + 1;
        *(undefined8 *)(param_1[0xd2] + lVar13) = 0;
                    /* catch() { ... } // from try @ 00a51860 with catch @ 00a51a74 */
        lVar11 = param_1[0xd2];
      } while (lVar14 < (int)param_1[0xd3]);
    }
  }
LAB_00a51a84:
  (*(code *)PTR_free_01d1b748)();
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0;
LAB_00a51a98:
  (*(code *)PTR_free_01d1b748)(param_1[0xd4]);
  param_1[0xd4] = 0;
  (*(code *)PTR_free_01d1b748)(param_1[0xdd]);
  param_1[0xdd] = 0;
                    /* try { // try from 00a51b40 to 00b51b4b has its CatchHandler @ 00a51d2c */
                    /* try { // try from 00a51b4c to 00b51b57 has its CatchHandler @ 00a51d28 */
  return iVar4;
}

