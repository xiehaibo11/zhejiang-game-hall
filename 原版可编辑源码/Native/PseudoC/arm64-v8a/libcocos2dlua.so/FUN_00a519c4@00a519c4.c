
int FUN_00a519c4(undefined8 *param_1)

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
  
  uVar4 = FUN_00a5823c(param_1 + 0xd2,param_1);
  if ((uVar4 & 1) == 0) {
    *(undefined4 *)(param_1 + 0xd1) = 0;
    return 0;
  }
                    /* catch() { ... } // from try @ 00a51960 with catch @ 00a519f4 */
                    /* catch() { ... } // from try @ 00a51944 with catch @ 00a519f8
                       catch() { ... } // from try @ 00a519a0 with catch @ 00a519f8 */
  iVar3 = FUN_00a5825c(param_1 + 0xd2,param_1,*(undefined1 *)((long)param_1 + 0x6bf),&local_44);
  if (iVar3 != 0) {
    return iVar3;
  }
                    /* try { // try from 00a51a14 to 00b51a5f has its CatchHandler @ 00a51a14
                       catch() { ... } // from try @ 00a51a14 with catch @ 00a51a14
                       catch() { ... } // from try @ 00a51a7c with catch @ 00a51a14 */
  if (local_44 == 1) {
    uVar7 = 5;
  }
  else {
    if ((*(char *)((long)param_1 + 0x6be) != '\0') || ((*(byte *)(param_1 + 0xd6) & 1) == 0)) {
                    /* try { // try from 00a51a60 to 00b51a7b has its CatchHandler @ 00a51af8 */
      FUN_00a38740(*param_1,"No known authentication mechanisms supported!\n");
      return 0x43;
    }
                    /* try { // try from 00a51a7c to 00b51b2f has its CatchHandler @ 00a51a14 */
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
                    /* catch() { ... } // from try @ 00a51a60 with catch @ 00a51af8 */
              if (bVar2) break;
            } while (cVar12 != '\0');
            pcVar6 = pcVar6 + 1;
          }
        }
        if (bVar2 || (lVar15 != 0 || lVar13 != 0)) {
          sVar5 = strlen(pcVar14);
                    /* try { // try from 00a51b30 to 00b51b87 has its CatchHandler @ 00a51b30
                       catch() { ... } // from try @ 00a51b30 with catch @ 00a51b30
                       catch() { ... } // from try @ 00a51c0c with catch @ 00a51b30
                       catch() { ... } // from try @ 00a51c90 with catch @ 00a51b30 */
          lVar1 = 2;
          if (!bVar2) {
            lVar1 = 0;
          }
          lVar15 = lVar15 + lVar13 + lVar1 + sVar5;
          pcVar6 = (char *)(*(code *)PTR_malloc_017699f8)(lVar15 + 1);
          if (pcVar6 != (char *)0x0) {
            pcVar10 = pcVar6;
            if (bVar2) {
              pcVar10 = pcVar6 + 1;
              *pcVar6 = '\"';
              pcVar6[lVar15 + -1] = '\"';
            }
            do {
              cVar9 = *pcVar14;
                    /* try { // try from 00a51b88 to 00b51c0b has its CatchHandler @ 00a51ca4 */
              if ((cVar9 == '\"') || (cVar9 == '\\')) {
                pcVar11 = pcVar10 + 1;
                *pcVar10 = '\\';
                cVar9 = *pcVar14;
              }
              else {
                pcVar11 = pcVar10;
                if (cVar9 == '\0') goto LAB_00a51be4;
              }
              *pcVar11 = cVar9;
              pcVar14 = pcVar14 + 1;
              pcVar10 = pcVar11 + 1;
            } while( true );
          }
          goto LAB_00a51be8;
        }
        pcVar6 = (char *)(*(code *)PTR_strdup_01769a10)(pcVar14);
        pcVar14 = (char *)param_1[0x44];
      }
      goto joined_r0x00a51bb4;
    }
  }
  goto LAB_00a51a20;
LAB_00a51be4:
  pcVar6[lVar15] = '\0';
LAB_00a51be8:
  pcVar14 = (char *)param_1[0x44];
joined_r0x00a51bb4:
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
          lVar15 = lVar15 + 1;
        }
        if (cVar9 != '\\') break;
        lVar13 = lVar13 + 1;
        pcVar10 = pcVar10 + 1;
      }
      if (cVar9 == '\0') break;
      if (bVar2) {
        bVar2 = true;
        pcVar10 = pcVar10 + 1;
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
                    /* try { // try from 00a51c0c to 00b51c7b has its CatchHandler @ 00a51b30 */
        pcVar10 = pcVar10 + 1;
      }
    }
                    /* try { // try from 00a51c7c to 00b51c8f has its CatchHandler @ 00a51ca4 */
    if (bVar2 || (lVar15 != 0 || lVar13 != 0)) {
      sVar5 = strlen(pcVar14);
                    /* try { // try from 00a51c90 to 00b51cdf has its CatchHandler @ 00a51b30 */
      lVar1 = 2;
      if (!bVar2) {
        lVar1 = 0;
      }
                    /* catch() { ... } // from try @ 00a51b88 with catch @ 00a51ca4
                       catch() { ... } // from try @ 00a51c7c with catch @ 00a51ca4 */
      lVar15 = lVar15 + lVar13 + lVar1 + sVar5;
      pcVar10 = (char *)(*(code *)PTR_malloc_017699f8)(lVar15 + 1);
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
            if (cVar9 == '\0') goto LAB_00a51d30;
          }
          *pcVar8 = cVar9;
          pcVar14 = pcVar14 + 1;
          pcVar11 = pcVar8 + 1;
        } while( true );
      }
    }
    else {
                    /* try { // try from 00a51d24 to 00b51d37 has its CatchHandler @ 00a51dac */
      pcVar10 = (char *)(*(code *)PTR_strdup_01769a10)(pcVar14);
    }
  }
  goto LAB_00a51d34;
LAB_00a51d30:
  pcVar10[lVar15] = '\0';
LAB_00a51d34:
                    /* try { // try from 00a51d38 to 00b51de7 has its CatchHandler @ 00a51ce0 */
  pcVar14 = pcVar6;
  if (pcVar6 == (char *)0x0) {
    pcVar14 = "";
  }
  pcVar11 = pcVar10;
  if (pcVar10 == (char *)0x0) {
    pcVar11 = "";
  }
  iVar3 = FUN_00a51878(param_1,"LOGIN %s %s",pcVar14,pcVar11);
  (*(code *)PTR_free_01769a00)(pcVar6);
  (*(code *)PTR_free_01769a00)(pcVar10);
  if (iVar3 == 0) {
    uVar7 = 6;
LAB_00a51a20:
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0xd1) = uVar7;
  }
  return iVar3;
}

