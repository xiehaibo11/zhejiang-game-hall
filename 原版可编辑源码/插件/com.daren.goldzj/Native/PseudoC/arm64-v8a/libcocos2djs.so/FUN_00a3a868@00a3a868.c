
undefined8 FUN_00a3a868(long *param_1,short *param_2,ulong param_3,undefined4 *param_4)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  size_t sVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  char *pcVar13;
  long lVar14;
  
  lVar12 = *param_1;
  lVar14 = *(long *)(lVar12 + 0x218);
  sVar6 = strlen((char *)(param_1 + 0xd7));
  uVar1 = sVar6 + 1;
  if (((param_3 < uVar1) || (iVar5 = memcmp(param_1 + 0xd7,param_2,sVar6), iVar5 != 0)) ||
     (*(char *)((long)param_2 + sVar6) != ' ')) {
    if ((param_3 < 2) || (*param_2 != 0x202a)) {
      if (lVar14 == 0) {
        return 0;
      }
      if (*(long *)(lVar14 + 0x38) != 0) {
        return 0;
      }
      if ((param_3 != 3) || ((char)*param_2 != '+')) {
        if (param_3 < 2) {
          return 0;
        }
        if (*param_2 != 0x202b) {
          return 0;
        }
      }
                    /* catch() { ... } // from try @ 00a3a7d8 with catch @ 00a3a988 */
                    /* catch() { ... } // from try @ 00a3a7cc with catch @ 00a3a98c */
      uVar9 = 0x2b;
                    /* catch() { ... } // from try @ 00a3a7ac with catch @ 00a3a990 */
      if (((int)param_1[0xd1] == 5) || ((int)param_1[0xd1] == 0xb)) goto LAB_00a3ae64;
                    /* catch() { ... } // from try @ 00a3a7e4 with catch @ 00a3a9a0 */
      pcVar13 = "Unexpected continuation response";
      goto LAB_00a3a9a8;
    }
    uVar8 = 0;
    switch((int)param_1[0xd1]) {
    case 2:
      pbVar3 = (byte *)((long)param_2 + param_3);
      pbVar11 = (byte *)(param_2 + 1);
                    /* try { // try from 00a3a9f8 to 00b3aa47 has its CatchHandler @ 00a3a9f8
                       catch() { ... } // from try @ 00a3a9f8 with catch @ 00a3a9f8
                       catch() { ... } // from try @ 00a3abd8 with catch @ 00a3a9f8 */
      if ((2 < (long)param_3) && (*pbVar11 - 0x30 < 10)) {
        lVar12 = param_3 - 3;
        pbVar7 = (byte *)((long)param_2 + 3);
        do {
          pbVar11 = pbVar7;
          lVar14 = lVar12;
          if (pbVar3 <= pbVar11) break;
          lVar12 = lVar14 + -1;
          pbVar7 = pbVar11 + 1;
        } while (*pbVar11 - 0x30 < 10);
        if (lVar14 == 0) {
          return 0;
        }
        if (*pbVar11 != 0x20) {
          return 0;
        }
        pbVar11 = pbVar11 + 1;
      }
                    /* try { // try from 00a3aa48 to 00b3aa5f has its CatchHandler @ 00a3ac8c */
      if (pbVar3 < pbVar11 + 10) {
        return 0;
      }
      uVar8 = FUN_00a33838(pbVar11,"CAPABILITY",10);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      if (pbVar11 + 0xc != pbVar3) {
        bVar4 = pbVar11[10];
                    /* try { // try from 00a3aa74 to 00b3aa87 has its CatchHandler @ 00a3ac88 */
joined_r0x00a3ad0c:
        if (bVar4 != 0x20) {
          return 0;
        }
      }
      break;
    default:
      goto switchD_00a3a9dc_caseD_3;
    case 7:
      pcVar13 = *(char **)(lVar14 + 0x38);
      pbVar3 = (byte *)((long)param_2 + param_3);
                    /* try { // try from 00a3aa88 to 00b3aa97 has its CatchHandler @ 00a3ac74 */
      pbVar11 = (byte *)(param_2 + 1);
      if (pcVar13 == (char *)0x0) {
        pbVar7 = pbVar11;
                    /* try { // try from 00a3ad38 to 00b3ad4f has its CatchHandler @ 00a3ad80 */
        if ((2 < (long)param_3) && (*pbVar11 - 0x30 < 10)) {
          lVar12 = param_3 - 3;
          pbVar2 = (byte *)((long)param_2 + 3);
          do {
            pbVar7 = pbVar2;
            lVar10 = lVar12;
                    /* try { // try from 00a3ad50 to 00b3ad93 has its CatchHandler @ 00a3acf4 */
            if (pbVar3 <= pbVar7) break;
            lVar12 = lVar10 + -1;
            pbVar2 = pbVar7 + 1;
          } while (*pbVar7 - 0x30 < 10);
          if (lVar10 == 0) {
            return 0;
          }
          if (*pbVar7 != 0x20) {
            return 0;
          }
                    /* catch() { ... } // from try @ 00a3ad38 with catch @ 00a3ad80 */
          pbVar7 = pbVar7 + 1;
        }
        if (pbVar3 < pbVar7 + 4) {
          return 0;
        }
                    /* catch() { ... } // from try @ 00a3adfc with catch @ 00a3ad94 */
        uVar8 = FUN_00a33838(pbVar7,"LIST",4);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        if ((pbVar7 + 6 != pbVar3) && (pbVar7[4] != 0x20)) {
          return 0;
        }
        pcVar13 = *(char **)(lVar14 + 0x38);
        if (pcVar13 == (char *)0x0) break;
      }
      sVar6 = strlen(pcVar13);
                    /* try { // try from 00a3aa98 to 00b3aa9f has its CatchHandler @ 00a3ac9c */
      pbVar7 = pbVar11;
      if (((long)param_3 < 3) || (9 < *pbVar11 - 0x30)) {
LAB_00a3aafc:
        pbVar2 = pbVar7 + sVar6;
        if (((pbVar2 <= pbVar3) && (iVar5 = FUN_00a33838(pbVar7,pcVar13,sVar6), iVar5 != 0)) &&
           ((pbVar2 + 2 == pbVar3 || (*pbVar2 == 0x20)))) break;
      }
      else {
        lVar12 = param_3 - 3;
        pbVar2 = (byte *)((long)param_2 + 3);
        do {
          pbVar7 = pbVar2;
          lVar10 = lVar12;
          if (pbVar3 <= pbVar7) break;
                    /* try { // try from 00a3aad8 to 00b3aadf has its CatchHandler @ 00a3ac58 */
                    /* try { // try from 00a3aae0 to 00b3ab07 has its CatchHandler @ 00a3ac9c */
          lVar12 = lVar10 + -1;
          pbVar2 = pbVar7 + 1;
        } while (*pbVar7 - 0x30 < 10);
        if ((lVar10 != 0) && (*pbVar7 == 0x20)) {
          pbVar7 = pbVar7 + 1;
          goto LAB_00a3aafc;
        }
      }
                    /* try { // try from 00a3ab38 to 00b3ab43 has its CatchHandler @ 00a3ac54 */
      iVar5 = strcmp(*(char **)(lVar14 + 0x38),"STORE");
      if (iVar5 == 0) {
        if ((2 < (long)param_3) && (*pbVar11 - 0x30 < 10)) {
          lVar12 = param_3 - 3;
          pbVar7 = (byte *)((long)param_2 + 3);
          do {
            pbVar11 = pbVar7;
            lVar10 = lVar12;
                    /* try { // try from 00a3adec to 00b3adfb has its CatchHandler @ 00a3af04 */
            if (pbVar3 <= pbVar11) break;
                    /* try { // try from 00a3adfc to 00b3af1f has its CatchHandler @ 00a3ad94 */
            lVar12 = lVar10 + -1;
            pbVar7 = pbVar11 + 1;
          } while (*pbVar11 - 0x30 < 10);
          if ((lVar10 == 0) || (*pbVar11 != 0x20)) goto LAB_00a3ab40;
          pbVar11 = pbVar11 + 1;
        }
        if (((pbVar11 + 5 <= pbVar3) && (iVar5 = FUN_00a33838(pbVar11,"FETCH",5), iVar5 != 0)) &&
           ((pbVar11 + 7 == pbVar3 || (pbVar11[5] == 0x20)))) break;
      }
LAB_00a3ab40:
      pcVar13 = *(char **)(lVar14 + 0x38);
                    /* try { // try from 00a3ab44 to 00b3ab9f has its CatchHandler @ 00a3ac9c */
      iVar5 = strcmp(pcVar13,"SELECT");
                    /* try { // try from 00a3aba0 to 00b3aba7 has its CatchHandler @ 00a3ac70 */
                    /* try { // try from 00a3aba8 to 00b3abd7 has its CatchHandler @ 00a3ac78 */
      if ((((((iVar5 != 0) && (iVar5 = strcmp(pcVar13,"EXAMINE"), iVar5 != 0)) &&
            (iVar5 = strcmp(pcVar13,"SEARCH"), iVar5 != 0)) &&
           ((iVar5 = strcmp(pcVar13,"EXPUNGE"), iVar5 != 0 &&
            (iVar5 = strcmp(pcVar13,"LSUB"), iVar5 != 0)))) &&
          (iVar5 = strcmp(pcVar13,"UID"), iVar5 != 0)) &&
         (iVar5 = strcmp(pcVar13,"NOOP"), iVar5 != 0)) {
        return 0;
      }
      break;
    case 8:
      break;
    case 9:
      pbVar3 = (byte *)((long)param_2 + param_3);
                    /* try { // try from 00a3abd8 to 00b3acf3 has its CatchHandler @ 00a3a9f8 */
      pbVar11 = (byte *)(param_2 + 1);
      if ((2 < (long)param_3) && (*pbVar11 - 0x30 < 10)) {
        lVar12 = param_3 - 3;
        pbVar7 = (byte *)((long)param_2 + 3);
        do {
          pbVar11 = pbVar7;
          lVar14 = lVar12;
          if (pbVar3 <= pbVar11) break;
          lVar12 = lVar14 + -1;
          pbVar7 = pbVar11 + 1;
        } while (*pbVar11 - 0x30 < 10);
        if (lVar14 == 0) {
          return 0;
        }
        if (*pbVar11 != 0x20) {
          return 0;
        }
        pbVar11 = pbVar11 + 1;
      }
      if (pbVar3 < pbVar11 + 5) {
        return 0;
      }
      uVar8 = FUN_00a33838(pbVar11,"FETCH",5);
                    /* catch() { ... } // from try @ 00a3ab38 with catch @ 00a3ac54 */
      if ((int)uVar8 == 0) {
        return uVar8;
      }
                    /* catch() { ... } // from try @ 00a3aad8 with catch @ 00a3ac58 */
      if (pbVar11 + 7 != pbVar3) {
        bVar4 = pbVar11[5];
        goto joined_r0x00a3ad0c;
      }
      break;
    case 0xd:
                    /* catch() { ... } // from try @ 00a3aa88 with catch @ 00a3ac74 */
      pbVar3 = (byte *)((long)param_2 + param_3);
                    /* catch() { ... } // from try @ 00a3aba8 with catch @ 00a3ac78 */
      pbVar11 = (byte *)(param_2 + 1);
                    /* catch() { ... } // from try @ 00a3aa74 with catch @ 00a3ac88 */
                    /* catch() { ... } // from try @ 00a3aa48 with catch @ 00a3ac8c */
      if ((2 < (long)param_3) && (*pbVar11 - 0x30 < 10)) {
        lVar12 = param_3 - 3;
        pbVar7 = (byte *)((long)param_2 + 3);
        do {
          pbVar11 = pbVar7;
          lVar14 = lVar12;
                    /* catch() { ... } // from try @ 00a3aa98 with catch @ 00a3ac9c
                       catch() { ... } // from try @ 00a3aae0 with catch @ 00a3ac9c
                       catch() { ... } // from try @ 00a3ab44 with catch @ 00a3ac9c */
          if (pbVar3 <= pbVar11) break;
          lVar12 = lVar14 + -1;
          pbVar7 = pbVar11 + 1;
        } while (*pbVar11 - 0x30 < 10);
        if (lVar14 == 0) {
          return 0;
        }
        if (*pbVar11 != 0x20) {
          return 0;
        }
        pbVar11 = pbVar11 + 1;
      }
      if (pbVar3 < pbVar11 + 6) {
        return 0;
      }
      uVar8 = FUN_00a33838(pbVar11,"SEARCH",6);
                    /* try { // try from 00a3acf4 to 00b3ad37 has its CatchHandler @ 00a3acf4
                       catch() { ... } // from try @ 00a3acf4 with catch @ 00a3acf4
                       catch() { ... } // from try @ 00a3ad50 with catch @ 00a3acf4 */
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      if (pbVar11 + 8 != pbVar3) {
        bVar4 = pbVar11[6];
        goto joined_r0x00a3ad0c;
      }
    }
    uVar9 = 0x2a;
  }
  else if (param_3 - uVar1 < 2) {
LAB_00a3a924:
    pcVar13 = "Bad tagged response";
LAB_00a3a9a8:
    FUN_00a23020(lVar12,pcVar13);
    uVar9 = 0xffffffff;
  }
  else {
    param_2 = (short *)((long)param_2 + uVar1);
    if (*param_2 == 0x4b4f) {
      uVar9 = 0x4f;
    }
    else if (*param_2 == 0x4f4e) {
      uVar9 = 0x4e;
    }
    else {
                    /* try { // try from 00a3a914 to 00b3a9f7 has its CatchHandler @ 00a3a758 */
      if ((param_3 - uVar1 < 3) || (iVar5 = memcmp(param_2,&DAT_01895eae,3), iVar5 != 0))
      goto LAB_00a3a924;
      uVar9 = 0x42;
    }
  }
LAB_00a3ae64:
  uVar8 = 1;
  *param_4 = uVar9;
switchD_00a3a9dc_caseD_3:
  return uVar8;
}

