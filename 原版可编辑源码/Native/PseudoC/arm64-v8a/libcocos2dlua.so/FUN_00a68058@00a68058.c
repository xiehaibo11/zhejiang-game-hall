
/* WARNING: Type propagation algorithm not settling */

int FUN_00a68058(long *param_1)

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
    if (*pcVar12 == '\0') {
      *(undefined4 *)(param_1 + 0xd3) = 0;
      goto LAB_00a683d0;
    }
    pcVar6 = strrchr(pcVar12,0x2f);
    lVar13 = lVar11;
    if (pcVar6 == (char *)0x0) goto LAB_00a68348;
    lVar13 = (*(code *)PTR_calloc_01769a18)(1,8);
    param_1[0xd2] = lVar13;
    if (lVar13 == 0) {
      return 0x1b;
    }
    lVar10 = (long)pcVar6 - (long)pcVar12;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    iVar4 = FUN_00a45500(*param_1,pcVar12,lVar10,lVar13,0,0);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0xd3) = 1;
      pcVar12 = pcVar6 + 1;
      cVar2 = *pcVar12;
      goto joined_r0x00a683cc;
    }
    lVar11 = param_1[0xd2];
    if (lVar11 == 0) goto LAB_00a68480;
    if (0 < (int)param_1[0xd3]) {
      lVar14 = 0;
      do {
        lVar13 = lVar14 * 8;
        (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar11 + lVar13));
        lVar14 = lVar14 + 1;
        *(undefined8 *)(param_1[0xd2] + lVar13) = 0;
        lVar11 = param_1[0xd2];
      } while (lVar14 < (int)param_1[0xd3]);
    }
  }
  else {
    if (*(int *)(lVar11 + 0x5f8) == 2) {
      if ((*pcVar12 == '\0') || (sVar5 = strlen(pcVar12), pcVar12[sVar5 - 1] == '/'))
      goto LAB_00a683d0;
LAB_00a6833c:
      cVar2 = *pcVar12;
    }
    else {
      param_1[0xd3] = 0x500000000;
      lVar13 = (*(code *)PTR_calloc_01769a18)(5,8);
      param_1[0xd2] = lVar13;
      if (lVar13 == 0) {
        return 0x1b;
      }
      iVar4 = strcmp(pcVar12,"/");
      if (iVar4 != 0) {
        pcVar6 = strchr(pcVar12,0x2f);
        if (pcVar6 == (char *)0x0) {
          if (pcVar12 == (char *)0x0) goto LAB_00a683d0;
        }
        else {
          do {
            if ((long)pcVar12 - *plVar1 < 1) {
              uVar9 = 0;
              lVar13 = (long)pcVar6 - (long)pcVar12;
              if (lVar13 != 0) goto LAB_00a68218;
LAB_00a68290:
              if ((int)param_1[0xd3] == 0) {
                uVar7 = (*(code *)PTR_strdup_01769a10)(&DAT_0144b7ba);
                lVar13 = param_1[0xd3];
                lVar10 = (long)(int)lVar13 * 8;
                *(undefined8 *)(param_1[0xd2] + lVar10) = uVar7;
                *(int *)(param_1 + 0xd3) = (int)lVar13 + 1;
                if (*(long *)(param_1[0xd2] + lVar10) == 0) {
                  FUN_00a38a08(lVar11,"no memory");
                  lVar11 = param_1[0xd2];
                  if (lVar11 == 0) goto LAB_00a68684;
                  if (0 < (int)param_1[0xd3]) {
                    lVar14 = 0;
                    do {
                      lVar13 = lVar14 * 8;
                      (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar11 + lVar13));
                      lVar14 = lVar14 + 1;
                      *(undefined8 *)(param_1[0xd2] + lVar13) = 0;
                      lVar11 = param_1[0xd2];
                    } while (lVar14 < (int)param_1[0xd3]);
                  }
                  goto LAB_00a68678;
                }
              }
            }
            else {
              uVar9 = (ulong)((int)param_1[0xd3] == 0);
              lVar13 = (long)pcVar6 - (long)pcVar12;
              if (lVar13 == 0) goto LAB_00a68290;
LAB_00a68218:
              iVar4 = FUN_00a45500(*param_1,(long)pcVar12 - uVar9,lVar13 + uVar9,
                                   param_1[0xd2] + (long)(int)param_1[0xd3] * 8,0,1);
              if (iVar4 != 0) {
                (*(code *)PTR_free_01769a00)
                          (*(undefined8 *)(param_1[0xd2] + (long)(int)param_1[0xd3] * 8));
                lVar11 = param_1[0xd2];
                if (lVar11 != 0) {
                  if (0 < (int)param_1[0xd3]) {
                    lVar14 = 0;
                    do {
                      lVar13 = lVar14 * 8;
                      (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar11 + lVar13));
                      lVar14 = lVar14 + 1;
                      *(undefined8 *)(param_1[0xd2] + lVar13) = 0;
                      lVar11 = param_1[0xd2];
                    } while (lVar14 < (int)param_1[0xd3]);
                  }
                  (*(code *)PTR_free_01769a00)();
                  param_1[0xd2] = 0;
                  *(undefined4 *)(param_1 + 0xd3) = 0;
                }
                goto LAB_00a68480;
              }
              iVar3 = *(int *)((long)param_1 + 0x69c);
              iVar4 = (int)param_1[0xd3] + 1;
              *(int *)(param_1 + 0xd3) = iVar4;
              if (iVar3 <= iVar4) {
                *(int *)((long)param_1 + 0x69c) = (int)((long)iVar3 << 1);
                lVar13 = (*(code *)PTR_realloc_01769a08)(param_1[0xd2],(long)iVar3 << 4);
                if (lVar13 == 0) {
                  lVar11 = param_1[0xd2];
                  if (lVar11 == 0) goto LAB_00a68684;
                  if (0 < (int)param_1[0xd3]) {
                    lVar14 = 0;
                    do {
                      lVar13 = lVar14 * 8;
                      (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar11 + lVar13));
                      lVar14 = lVar14 + 1;
                      *(undefined8 *)(param_1[0xd2] + lVar13) = 0;
                      lVar11 = param_1[0xd2];
                    } while (lVar14 < (int)param_1[0xd3]);
                  }
LAB_00a68678:
                  (*(code *)PTR_free_01769a00)();
                  param_1[0xd2] = 0;
                  *(undefined4 *)(param_1 + 0xd3) = 0;
LAB_00a68684:
                  (*(code *)PTR_free_01769a00)(param_1[0xd4]);
                  param_1[0xd4] = 0;
                  (*(code *)PTR_free_01769a00)(param_1[0xdd]);
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
        goto LAB_00a6833c;
      }
      pcVar12 = pcVar12 + 1;
      uVar7 = (*(code *)PTR_strdup_01769a10)(&DAT_0144b7ba);
      *(undefined8 *)param_1[0xd2] = uVar7;
      *(int *)(param_1 + 0xd3) = (int)param_1[0xd3] + 1;
      cVar2 = *pcVar12;
    }
joined_r0x00a683cc:
    if (cVar2 == '\0') {
LAB_00a683d0:
      param_1[0xd4] = 0;
    }
    else {
      lVar13 = *param_1;
LAB_00a68348:
      iVar4 = FUN_00a45500(lVar13,pcVar12,0,param_1 + 0xd4,0,1);
      if (iVar4 != 0) {
        lVar11 = param_1[0xd2];
        if (lVar11 == 0) goto LAB_00a68480;
        if (0 < (int)param_1[0xd3]) {
          lVar14 = 0;
          do {
            lVar13 = lVar14 * 8;
            (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar11 + lVar13));
            lVar14 = lVar14 + 1;
            *(undefined8 *)(param_1[0xd2] + lVar13) = 0;
            lVar11 = param_1[0xd2];
          } while (lVar14 < (int)param_1[0xd3]);
        }
        goto LAB_00a6846c;
      }
    }
    if (((*(char *)(lVar11 + 0x621) != '\0') && (param_1[0xd4] == 0)) &&
       (*(int *)(lVar14 + 0x18) == 0)) {
      FUN_00a38a08(lVar11,"Uploading to a URL without a file name!");
      return 3;
    }
    *(undefined1 *)((long)param_1 + 0x6aa) = 0;
    if (param_1[0xd6] == 0) {
      return 0;
    }
    iVar4 = FUN_00a45500(*param_1,*plVar1,0,&local_68,&local_58,0);
    if (iVar4 == 0) {
      sVar5 = 0;
      if ((char *)param_1[0xd4] != (char *)0x0) {
        sVar5 = strlen((char *)param_1[0xd4]);
      }
      sVar5 = local_58 - sVar5;
      pcVar12 = (char *)param_1[0xd6];
      local_58 = sVar5;
      sVar8 = strlen(pcVar12);
      if ((sVar5 == sVar8) && (iVar4 = strncmp(local_68,pcVar12,sVar5), iVar4 == 0)) {
        FUN_00a38740(lVar11,"Request has same path as previous transfer\n");
        *(undefined1 *)((long)param_1 + 0x6aa) = 1;
      }
      (*(code *)PTR_free_01769a00)(local_68);
      return 0;
    }
    lVar11 = param_1[0xd2];
    if (lVar11 == 0) goto LAB_00a68480;
    if (0 < (int)param_1[0xd3]) {
      lVar14 = 0;
      do {
        lVar13 = lVar14 * 8;
        (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar11 + lVar13));
        lVar14 = lVar14 + 1;
        *(undefined8 *)(param_1[0xd2] + lVar13) = 0;
        lVar11 = param_1[0xd2];
      } while (lVar14 < (int)param_1[0xd3]);
    }
  }
LAB_00a6846c:
  (*(code *)PTR_free_01769a00)();
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0;
LAB_00a68480:
  (*(code *)PTR_free_01769a00)(param_1[0xd4]);
  param_1[0xd4] = 0;
  (*(code *)PTR_free_01769a00)(param_1[0xdd]);
  param_1[0xdd] = 0;
  return iVar4;
}

