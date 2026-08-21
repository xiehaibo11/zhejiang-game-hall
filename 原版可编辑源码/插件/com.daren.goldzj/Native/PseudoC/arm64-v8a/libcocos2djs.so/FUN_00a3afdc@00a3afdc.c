
int FUN_00a3afdc(undefined8 *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  size_t sVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
  char cVar12;
  long lVar13;
  char *pcVar14;
  long lVar15;
  int local_44;
  
  uVar4 = FUN_00a41854(param_1 + 0xd2,param_1);
  if ((uVar4 & 1) == 0) {
    *(undefined4 *)(param_1 + 0xd1) = 0;
    return 0;
  }
  iVar3 = FUN_00a41874(param_1 + 0xd2,param_1,*(undefined1 *)((long)param_1 + 0x6bf),&local_44);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (local_44 == 1) {
    uVar7 = 5;
  }
  else {
    if ((*(char *)((long)param_1 + 0x6be) != '\0') || ((*(byte *)(param_1 + 0xd6) & 1) == 0)) {
      FUN_00a22d58(*param_1,"No known authentication mechanisms supported!\n");
      return 0x43;
    }
    uVar7 = 0;
    if (*(char *)(param_1 + 0x78) != '\0') {
      pcVar14 = (char *)param_1[0x43];
      if (pcVar14 == (char *)0x0) {
        pcVar6 = (char *)0x0;
        pcVar14 = (char *)param_1[0x44];
      }
      else {
        lVar13 = 0;
        lVar15 = 0;
        bVar2 = false;
        pcVar6 = pcVar14;
        while( true ) {
          while( true ) {
            for (; cVar9 = *pcVar6, cVar9 == '\"'; pcVar6 = pcVar6 + 1) {
              lVar15 = lVar15 + 1;
            }
            if (cVar9 != '\\') break;
                    /* try { // try from 00a3b0f4 to 00b3b1d7 has its CatchHandler @ 00a3af20 */
            lVar13 = lVar13 + 1;
            pcVar6 = pcVar6 + 1;
          }
          if (cVar9 == '\0') break;
          if (bVar2) {
            bVar2 = true;
            pcVar6 = pcVar6 + 1;
          }
          else {
            cVar12 = '(';
            pcVar10 = "(){ %*]";
            do {
              pcVar10 = pcVar10 + 1;
              bVar2 = cVar9 == cVar12;
              cVar12 = *pcVar10;
              if (bVar2) break;
            } while (cVar12 != '\0');
            pcVar6 = pcVar6 + 1;
          }
        }
        if (bVar2 || (lVar15 != 0 || lVar13 != 0)) {
          sVar5 = strlen(pcVar14);
          lVar1 = 2;
          if (!bVar2) {
            lVar1 = 0;
          }
          lVar15 = lVar15 + lVar13 + lVar1 + sVar5;
          pcVar6 = (char *)(*(code *)PTR_malloc_01d1b740)(lVar15 + 1);
                    /* catch() { ... } // from try @ 00a3afa0 with catch @ 00a3b168 */
                    /* catch() { ... } // from try @ 00a3af94 with catch @ 00a3b16c */
          if (pcVar6 != (char *)0x0) {
            pcVar10 = pcVar6;
                    /* catch() { ... } // from try @ 00a3af74 with catch @ 00a3b170 */
            if (bVar2) {
                    /* catch() { ... } // from try @ 00a3afac with catch @ 00a3b180 */
              pcVar10 = pcVar6 + 1;
              *pcVar6 = '\"';
              pcVar6[lVar15 + -1] = '\"';
            }
            do {
              cVar9 = *pcVar14;
              if ((cVar9 == '\"') || (cVar9 == '\\')) {
                pcVar11 = pcVar10 + 1;
                *pcVar10 = '\\';
                cVar9 = *pcVar14;
              }
              else {
                pcVar11 = pcVar10;
                if (cVar9 == '\0') goto LAB_00a3b1fc;
              }
              *pcVar11 = cVar9;
              pcVar14 = pcVar14 + 1;
              pcVar10 = pcVar11 + 1;
            } while( true );
          }
          goto LAB_00a3b200;
        }
                    /* try { // try from 00a3b1d8 to 00b3b22b has its CatchHandler @ 00a3b1d8
                       catch() { ... } // from try @ 00a3b1d8 with catch @ 00a3b1d8
                       catch() { ... } // from try @ 00a3b340 with catch @ 00a3b1d8 */
        pcVar6 = (char *)(*(code *)PTR_strdup_01d1b758)(pcVar14);
        pcVar14 = (char *)param_1[0x44];
      }
      goto joined_r0x00a3b1cc;
    }
  }
  goto LAB_00a3b038;
LAB_00a3b1fc:
  pcVar6[lVar15] = '\0';
LAB_00a3b200:
  pcVar14 = (char *)param_1[0x44];
joined_r0x00a3b1cc:
  if (pcVar14 == (char *)0x0) {
    pcVar10 = (char *)0x0;
  }
  else {
    lVar13 = 0;
    lVar15 = 0;
    bVar2 = false;
    pcVar10 = pcVar14;
    while( true ) {
      while( true ) {
        for (; cVar9 = *pcVar10, cVar9 == '\"'; pcVar10 = pcVar10 + 1) {
                    /* try { // try from 00a3b22c to 00b3b243 has its CatchHandler @ 00a3b3bc */
          lVar15 = lVar15 + 1;
        }
        if (cVar9 != '\\') break;
        lVar13 = lVar13 + 1;
        pcVar10 = pcVar10 + 1;
                    /* try { // try from 00a3b264 to 00b3b33f has its CatchHandler @ 00a3b3cc */
      }
      if (cVar9 == '\0') break;
                    /* try { // try from 00a3b24c to 00b3b257 has its CatchHandler @ 00a3b3b8 */
      if (bVar2) {
        bVar2 = true;
        pcVar10 = pcVar10 + 1;
                    /* try { // try from 00a3b258 to 00b3b263 has its CatchHandler @ 00a3b3b4 */
      }
      else {
        cVar12 = '(';
        pcVar11 = "(){ %*]";
        do {
          pcVar11 = pcVar11 + 1;
          bVar2 = cVar9 == cVar12;
          cVar12 = *pcVar11;
          if (bVar2) break;
        } while (cVar12 != '\0');
        pcVar10 = pcVar10 + 1;
      }
    }
    if (bVar2 || (lVar15 != 0 || lVar13 != 0)) {
      sVar5 = strlen(pcVar14);
      lVar1 = 2;
      if (!bVar2) {
        lVar1 = 0;
      }
      lVar15 = lVar15 + lVar13 + lVar1 + sVar5;
      pcVar10 = (char *)(*(code *)PTR_malloc_01d1b740)(lVar15 + 1);
      if (pcVar10 != (char *)0x0) {
        pcVar11 = pcVar10;
        if (bVar2) {
          pcVar11 = pcVar10 + 1;
          *pcVar10 = '\"';
          pcVar10[lVar15 + -1] = '\"';
        }
        do {
          cVar9 = *pcVar14;
          if ((cVar9 == '\"') || (cVar9 == '\\')) {
            pcVar8 = pcVar11 + 1;
            *pcVar11 = '\\';
            cVar9 = *pcVar14;
          }
          else {
            pcVar8 = pcVar11;
            if (cVar9 == '\0') goto LAB_00a3b348;
          }
          *pcVar8 = cVar9;
          pcVar14 = pcVar14 + 1;
          pcVar11 = pcVar8 + 1;
        } while( true );
      }
    }
    else {
      pcVar10 = (char *)(*(code *)PTR_strdup_01d1b758)(pcVar14);
                    /* try { // try from 00a3b340 to 00b3b423 has its CatchHandler @ 00a3b1d8 */
    }
  }
  goto LAB_00a3b34c;
LAB_00a3b348:
  pcVar10[lVar15] = '\0';
LAB_00a3b34c:
  pcVar14 = pcVar6;
  if (pcVar6 == (char *)0x0) {
    pcVar14 = "";
  }
  pcVar11 = pcVar10;
  if (pcVar10 == (char *)0x0) {
    pcVar11 = "";
  }
  iVar3 = FUN_00a3ae90(param_1,"LOGIN %s %s",pcVar14,pcVar11);
  (*(code *)PTR_free_01d1b748)(pcVar6);
  (*(code *)PTR_free_01d1b748)(pcVar10);
  if (iVar3 == 0) {
    uVar7 = 6;
LAB_00a3b038:
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0xd1) = uVar7;
  }
  return iVar3;
}

