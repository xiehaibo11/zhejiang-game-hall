
undefined8 FUN_00a51250(long *param_1,short *param_2,ulong param_3,undefined4 *param_4)

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
  
                    /* try { // try from 00a51260 to 00b5126b has its CatchHandler @ 00a51370 */
                    /* try { // try from 00a5126c to 00b51273 has its CatchHandler @ 00a51390 */
  lVar12 = *param_1;
                    /* try { // try from 00a5127c to 00b5128f has its CatchHandler @ 00a5136c */
  lVar14 = *(long *)(lVar12 + 0x218);
  sVar6 = strlen((char *)(param_1 + 0xd7));
                    /* try { // try from 00a51290 to 00b513ef has its CatchHandler @ 00a51070 */
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
                    /* catch() { ... } // from try @ 00a5127c with catch @ 00a5136c */
        if (*param_2 != 0x202b) {
          return 0;
        }
      }
                    /* catch() { ... } // from try @ 00a51260 with catch @ 00a51370 */
                    /* catch() { ... } // from try @ 00a51194 with catch @ 00a51374 */
      uVar9 = 0x2b;
                    /* catch() { ... } // from try @ 00a51174 with catch @ 00a51378 */
      if (((int)param_1[0xd1] == 5) || ((int)param_1[0xd1] == 0xb)) goto LAB_00a5184c;
      pcVar13 = "Unexpected continuation response";
      goto LAB_00a51390;
    }
    uVar8 = 0;
                    /* catch() { ... } // from try @ 00a511f0 with catch @ 00a513b0 */
                    /* catch() { ... } // from try @ 00a511c0 with catch @ 00a513b4 */
                    /* catch() { ... } // from try @ 00a51128 with catch @ 00a513b8 */
    switch((int)param_1[0xd1]) {
    case 2:
                    /* catch() { ... } // from try @ 00a510f8 with catch @ 00a513c8 */
      pbVar3 = (byte *)((long)param_2 + param_3);
      pbVar11 = (byte *)(param_2 + 1);
                    /* catch() { ... } // from try @ 00a510c0 with catch @ 00a513dc */
      if ((2 < (long)param_3) && (*pbVar11 - 0x30 < 10)) {
        lVar12 = param_3 - 3;
        pbVar7 = (byte *)((long)param_2 + 3);
        do {
          pbVar11 = pbVar7;
          lVar14 = lVar12;
                    /* try { // try from 00a513f0 to 00b516cf has its CatchHandler @ 00a513f0
                       catch() { ... } // from try @ 00a513f0 with catch @ 00a513f0
                       catch() { ... } // from try @ 00a51750 with catch @ 00a513f0 */
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
      if (pbVar3 < pbVar11 + 10) {
        return 0;
      }
      uVar8 = FUN_00a4a220(pbVar11,"CAPABILITY",10);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      if (pbVar11 + 0xc != pbVar3) {
        bVar4 = pbVar11[10];
joined_r0x00a516f4:
        if (bVar4 != 0x20) {
          return 0;
        }
      }
      break;
    default:
      goto switchD_00a513c4_caseD_3;
    case 7:
      pcVar13 = *(char **)(lVar14 + 0x38);
      pbVar3 = (byte *)((long)param_2 + param_3);
      pbVar11 = (byte *)(param_2 + 1);
      if (pcVar13 == (char *)0x0) {
        pbVar7 = pbVar11;
                    /* try { // try from 00a5171c to 00b5174f has its CatchHandler @ 00a517a0 */
        if ((2 < (long)param_3) && (*pbVar11 - 0x30 < 10)) {
          lVar12 = param_3 - 3;
          pbVar2 = (byte *)((long)param_2 + 3);
          do {
            pbVar7 = pbVar2;
            lVar10 = lVar12;
            if (pbVar3 <= pbVar7) break;
                    /* try { // try from 00a51750 to 00b517eb has its CatchHandler @ 00a513f0 */
            lVar12 = lVar10 + -1;
            pbVar2 = pbVar7 + 1;
          } while (*pbVar7 - 0x30 < 10);
          if (lVar10 == 0) {
            return 0;
          }
          if (*pbVar7 != 0x20) {
            return 0;
          }
          pbVar7 = pbVar7 + 1;
        }
        if (pbVar3 < pbVar7 + 4) {
          return 0;
        }
        uVar8 = FUN_00a4a220(pbVar7,"LIST",4);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
                    /* catch() { ... } // from try @ 00a51704 with catch @ 00a5179c */
                    /* catch() { ... } // from try @ 00a5171c with catch @ 00a517a0 */
        if ((pbVar7 + 6 != pbVar3) && (pbVar7[4] != 0x20)) {
          return 0;
        }
        pcVar13 = *(char **)(lVar14 + 0x38);
        if (pcVar13 == (char *)0x0) break;
      }
      sVar6 = strlen(pcVar13);
      pbVar7 = pbVar11;
      if (((long)param_3 < 3) || (9 < *pbVar11 - 0x30)) {
LAB_00a514e4:
        pbVar2 = pbVar7 + sVar6;
        if (((pbVar2 <= pbVar3) && (iVar5 = FUN_00a4a220(pbVar7,pcVar13,sVar6), iVar5 != 0)) &&
           ((pbVar2 + 2 == pbVar3 || (*pbVar2 == 0x20)))) break;
      }
      else {
        lVar12 = param_3 - 3;
        pbVar2 = (byte *)((long)param_2 + 3);
        do {
          pbVar7 = pbVar2;
          lVar10 = lVar12;
          if (pbVar3 <= pbVar7) break;
          lVar12 = lVar10 + -1;
          pbVar2 = pbVar7 + 1;
        } while (*pbVar7 - 0x30 < 10);
        if ((lVar10 != 0) && (*pbVar7 == 0x20)) {
          pbVar7 = pbVar7 + 1;
          goto LAB_00a514e4;
        }
      }
      iVar5 = strcmp(*(char **)(lVar14 + 0x38),"STORE");
      if (iVar5 == 0) {
        if ((2 < (long)param_3) && (*pbVar11 - 0x30 < 10)) {
          lVar12 = param_3 - 3;
          pbVar7 = (byte *)((long)param_2 + 3);
          do {
                    /* catch() { ... } // from try @ 00a516d0 with catch @ 00a517d0 */
            pbVar11 = pbVar7;
            lVar10 = lVar12;
            if (pbVar3 <= pbVar11) break;
                    /* try { // try from 00a517ec to 00b5182f has its CatchHandler @ 00a517ec
                       catch() { ... } // from try @ 00a517ec with catch @ 00a517ec
                       catch() { ... } // from try @ 00a51844 with catch @ 00a517ec */
            lVar12 = lVar10 + -1;
            pbVar7 = pbVar11 + 1;
          } while (*pbVar11 - 0x30 < 10);
          if ((lVar10 == 0) || (*pbVar11 != 0x20)) goto LAB_00a51528;
          pbVar11 = pbVar11 + 1;
        }
                    /* try { // try from 00a51830 to 00b51843 has its CatchHandler @ 00a518b8 */
                    /* try { // try from 00a51844 to 00b518f3 has its CatchHandler @ 00a517ec */
        if (((pbVar11 + 5 <= pbVar3) && (iVar5 = FUN_00a4a220(pbVar11,"FETCH",5), iVar5 != 0)) &&
           ((pbVar11 + 7 == pbVar3 || (pbVar11[5] == 0x20)))) break;
      }
LAB_00a51528:
      pcVar13 = *(char **)(lVar14 + 0x38);
      iVar5 = strcmp(pcVar13,"SELECT");
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
      uVar8 = FUN_00a4a220(pbVar11,"FETCH",5);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      if (pbVar11 + 7 != pbVar3) {
        bVar4 = pbVar11[5];
        goto joined_r0x00a516f4;
      }
      break;
    case 0xd:
      pbVar3 = (byte *)((long)param_2 + param_3);
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
      if (pbVar3 < pbVar11 + 6) {
        return 0;
      }
                    /* try { // try from 00a516d0 to 00b51703 has its CatchHandler @ 00a517d0 */
      uVar8 = FUN_00a4a220(pbVar11,"SEARCH",6);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      if (pbVar11 + 8 != pbVar3) {
        bVar4 = pbVar11[6];
        goto joined_r0x00a516f4;
      }
    }
    uVar9 = 0x2a;
  }
  else if (param_3 - uVar1 < 2) {
LAB_00a5130c:
    pcVar13 = "Bad tagged response";
LAB_00a51390:
                    /* catch() { ... } // from try @ 00a51230 with catch @ 00a51390
                       catch() { ... } // from try @ 00a5126c with catch @ 00a51390 */
                    /* catch() { ... } // from try @ 00a51214 with catch @ 00a51394 */
    FUN_00a38a08(lVar12,pcVar13);
                    /* catch() { ... } // from try @ 00a5114c with catch @ 00a51398
                       catch() { ... } // from try @ 00a51184 with catch @ 00a51398 */
    uVar9 = 0xffffffff;
  }
  else {
    param_2 = (short *)((long)param_2 + uVar1);
    if (*param_2 == 0x4b4f) {
      uVar9 = 0x4f;
    }
    else if (*param_2 == 0x4f4e) {
                    /* try { // try from 00a51704 to 00b51717 has its CatchHandler @ 00a5179c */
      uVar9 = 0x4e;
    }
    else {
      if ((param_3 - uVar1 < 3) || (iVar5 = memcmp(param_2,&DAT_013c87da,3), iVar5 != 0))
      goto LAB_00a5130c;
      uVar9 = 0x42;
    }
  }
LAB_00a5184c:
  uVar8 = 1;
  *param_4 = uVar9;
switchD_00a513c4_caseD_3:
  return uVar8;
}

