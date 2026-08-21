
/* WARNING: Removing unreachable block (ram,0x00a3c0fc) */
/* WARNING: Removing unreachable block (ram,0x00a3c350) */

undefined8 FUN_00a3bd60(long *param_1)

{
  byte *pbVar1;
  long *plVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  size_t sVar6;
  ulong uVar7;
  void *__dest;
  long lVar8;
  char *pcVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 local_78;
  int local_6c;
  int local_68;
  undefined4 uStack_64;
  
  lVar8 = param_1[0x4c];
  local_78 = 0;
  plVar2 = param_1 + 0xc3;
  if ((int)param_1[0xd1] == 4) {
    uVar5 = FUN_00a17c8c(param_1,0,(char *)((long)param_1 + 0x68c));
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if ((int)param_1[0xd1] != 4) {
                    /* catch() { ... } // from try @ 00a3bcf4 with catch @ 00a3bdc0 */
      *(undefined4 *)(param_1 + 0xd1) = 4;
    }
    if (*(char *)((long)param_1 + 0x68c) != '\0') {
                    /* catch() { ... } // from try @ 00a3bd0c with catch @ 00a3bdd8 */
                    /* catch() { ... } // from try @ 00a3bccc with catch @ 00a3bddc */
                    /* catch() { ... } // from try @ 00a3bd14 with catch @ 00a3bde0 */
                    /* catch() { ... } // from try @ 00a3bcfc with catch @ 00a3bdf0 */
      *(undefined4 *)((long)param_1 + 0x6ac) = 0;
      *(undefined4 *)((long)param_1 + 0x6b4) = 0;
      param_1[0x80] = (long)&PTR_s_POP3S_01c6db70;
      *(undefined1 *)(param_1 + 0x77) = 1;
      *(undefined1 *)(param_1 + 0xda) = 0;
      uVar5 = FUN_00a3e3a4(plVar2,"%s",&DAT_01896021);
                    /* catch() { ... } // from try @ 00a3bcb8 with catch @ 00a3be08 */
      if ((int)uVar5 == 0) {
                    /* catch() { ... } // from try @ 00a3bc8c with catch @ 00a3be0c */
        *(undefined4 *)(param_1 + 0xd1) = 2;
        return uVar5;
      }
      return uVar5;
    }
  }
  else {
    if (param_1[0xc9] != 0) {
      uVar5 = FUN_00a3e704(plVar2);
      return uVar5;
    }
    do {
                    /* try { // try from 00a3be5c to 00b3be9f has its CatchHandler @ 00a3be5c
                       catch() { ... } // from try @ 00a3be5c with catch @ 00a3be5c
                       catch() { ... } // from try @ 00a3beb8 with catch @ 00a3be5c */
      uVar5 = FUN_00a3e418((int)lVar8,plVar2,&local_6c,&local_78);
      iVar4 = local_6c;
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (local_6c == 0) {
        return 0;
      }
      switch((int)param_1[0xd1]) {
      case 1:
        lVar14 = *param_1;
        sVar6 = strlen((char *)(lVar14 + 0xb08));
                    /* try { // try from 00a3bea0 to 00b3beb7 has its CatchHandler @ 00a3bee8 */
        if (iVar4 != 0x2b) {
          FUN_00a23020(lVar14,"Got unexpected pop3-server response");
          return 8;
        }
                    /* try { // try from 00a3beb8 to 00b3befb has its CatchHandler @ 00a3be5c */
        if (((3 < sVar6) && (uVar7 = sVar6 - 2, 3 < uVar7)) &&
           (*(char *)(lVar14 + uVar7 + 0xb08) == '>')) {
          lVar13 = 0;
          lVar16 = sVar6 - 4;
          do {
            if (*(char *)(lVar14 + 0xb0b + lVar13) == '<') {
              if (sVar6 - 4 != lVar13) {
                __dest = (void *)(*(code *)PTR_calloc_01d1b760)(1,(sVar6 - lVar13) + -3);
                param_1[0xd9] = (long)__dest;
                if (__dest != (void *)0x0) {
                    /* catch() { ... } // from try @ 00a3c168 with catch @ 00a3c2c8 */
                  memcpy(__dest,(void *)(lVar14 + lVar13 + 0xb0b),(sVar6 - lVar13) - 4);
                  *(undefined1 *)(param_1[0xd9] + lVar16) = 0;
                  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
                }
              }
              break;
            }
            uVar15 = lVar13 + 4;
            lVar13 = lVar13 + 1;
                    /* catch() { ... } // from try @ 00a3bea0 with catch @ 00a3bee8 */
            lVar16 = lVar16 + -1;
          } while (uVar15 < uVar7);
        }
        break;
      case 2:
        lVar14 = *param_1;
                    /* try { // try from 00a3befc to 00b3bf4b has its CatchHandler @ 00a3befc
                       catch() { ... } // from try @ 00a3befc with catch @ 00a3befc
                       catch() { ... } // from try @ 00a3c004 with catch @ 00a3befc */
        piVar12 = (int *)(lVar14 + 0xb08);
        sVar6 = strlen((char *)piVar12);
        if (iVar4 != 0x2b) {
          if (iVar4 == 0x2a) {
            if (3 < sVar6) {
              if (*piVar12 == 0x534c5453) {
                    /* try { // try from 00a3c2e4 to 00b3c337 has its CatchHandler @ 00a3c2e4
                       catch() { ... } // from try @ 00a3c2e4 with catch @ 00a3c2e4
                       catch() { ... } // from try @ 00a3c4ac with catch @ 00a3c2e4 */
                *(undefined1 *)(param_1 + 0xda) = 1;
              }
              else if (*piVar12 == 0x52455355) {
                *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
              }
              else {
                lVar13 = sVar6 - 5;
                    /* try { // try from 00a3bf4c to 00b3bf63 has its CatchHandler @ 00a3c0cc */
                    /* try { // try from 00a3bf78 to 00b3bf8b has its CatchHandler @ 00a3c0c8 */
                if (((4 < sVar6) && (iVar4 = memcmp(piVar12,"SASL ",5), iVar4 == 0)) &&
                   (*(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4, lVar13 != 0)) {
                  lVar14 = lVar14 + 0xb0d;
                  do {
                    lVar16 = 0;
                    /* try { // try from 00a3bf8c to 00b3bf9b has its CatchHandler @ 00a3c09c */
                    while ((uVar7 = (ulong)*(byte *)(lVar14 + lVar16),
                           *(byte *)(lVar14 + lVar16) < 0x21 &&
                           ((1L << (uVar7 & 0x3f) & 0x100002600U) != 0))) {
                      lVar16 = lVar16 + 1;
                      if (lVar13 == lVar16) goto LAB_00a3c1dc;
                    }
                    /* try { // try from 00a3bfb4 to 00b3bfbb has its CatchHandler @ 00a3c080 */
                    /* try { // try from 00a3bfbc to 00b3bfcb has its CatchHandler @ 00a3c0b0 */
                    uVar15 = 1;
                    /* try { // try from 00a3bfcc to 00b3bfd3 has its CatchHandler @ 00a3c098 */
                    /* try { // try from 00a3bfd4 to 00b3c003 has its CatchHandler @ 00a3c0a0 */
                    while ((0x20 < (uint)uVar7 || ((1L << (uVar7 & 0x3f) & 0x100002600U) == 0))) {
                      if ((ulong)(lVar13 - lVar16) <= uVar15) goto LAB_00a3bff8;
                      pbVar1 = (byte *)(lVar14 + lVar16 + uVar15);
                      uVar15 = uVar15 + 1;
                      uVar7 = (ulong)*pbVar1;
                    }
                    uVar15 = uVar15 - 1;
LAB_00a3bff8:
                    uVar11 = FUN_00a41098(lVar14 + lVar16,uVar15,&local_68);
                    /* try { // try from 00a3c004 to 00b3c11b has its CatchHandler @ 00a3befc */
                    if ((uVar11 != 0) && (CONCAT44(uStack_64,local_68) == uVar15)) {
                      *(uint *)((long)param_1 + 0x6ac) = *(uint *)((long)param_1 + 0x6ac) | uVar11;
                    }
                    lVar13 = (lVar13 - uVar15) - lVar16;
                    lVar14 = lVar14 + uVar15 + lVar16;
                  } while (lVar13 != 0);
                }
              }
            }
            goto LAB_00a3c1dc;
          }
          *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
LAB_00a3c1d0:
          uVar5 = FUN_00a3c4bc(param_1);
LAB_00a3c1d8:
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          goto LAB_00a3c1dc;
        }
        if ((*(int *)(lVar14 + 0x630) == 0) || ((char)param_1[0x53] != '\0')) goto LAB_00a3c1d0;
        if ((char)param_1[0xda] == '\0') {
                    /* try { // try from 00a3c358 to 00b3c363 has its CatchHandler @ 00a3c524 */
          if (*(int *)(lVar14 + 0x630) != 1) {
                    /* try { // try from 00a3c364 to 00b3c36f has its CatchHandler @ 00a3c520 */
            FUN_00a23020(lVar14,"STLS not supported.");
            return 0x40;
          }
          goto LAB_00a3c1d0;
        }
        uVar5 = FUN_00a3e3a4(plVar2,"%s",&DAT_0189604a);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        uVar10 = 3;
        goto LAB_00a3c0bc;
      case 3:
        if (local_6c != 0x2b) {
                    /* try { // try from 00a3c168 to 00b3c17b has its CatchHandler @ 00a3c2c8 */
          if (*(int *)(*param_1 + 0x630) != 1) {
            FUN_00a23020(*param_1,"STARTTLS denied. %c",local_6c);
            return 0x40;
          }
          goto LAB_00a3c1d0;
        }
        uVar5 = FUN_00a17c8c(param_1,0,(char *)((long)param_1 + 0x68c));
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if ((int)param_1[0xd1] != 4) {
          *(undefined4 *)(param_1 + 0xd1) = 4;
        }
        if (*(char *)((long)param_1 + 0x68c) == '\0') goto LAB_00a3c1dc;
                    /* catch() { ... } // from try @ 00a3bfb4 with catch @ 00a3c080 */
        param_1[0x80] = (long)&PTR_s_POP3S_01c6db70;
        *(undefined1 *)(param_1 + 0x77) = 1;
        break;
      default:
switchD_00a3be8c_caseD_4:
        *(undefined4 *)(param_1 + 0xd1) = 0;
        return 0;
      case 5:
                    /* catch() { ... } // from try @ 00a3bf78 with catch @ 00a3c0c8 */
        lVar14 = *param_1;
                    /* catch() { ... } // from try @ 00a3bf4c with catch @ 00a3c0cc */
        uVar5 = FUN_00a41cb8(param_1 + 0xd4,param_1,local_6c,&local_68);
        if ((int)uVar5 != 0) goto LAB_00a3c1d8;
        if (local_68 == 0) {
          uVar11 = *(uint *)((long)param_1 + 0x6c4) & *(uint *)(param_1 + 0xd8);
          if ((uVar11 >> 1 & 1) != 0) {
            uVar5 = FUN_00a3c5d8(param_1);
            iVar4 = (int)uVar5;
            goto joined_r0x00a3c180;
          }
          if ((uVar11 & 1) == 0) {
            FUN_00a23020(lVar14,"Authentication cancelled");
            return 0x43;
          }
          uVar11 = (uint)*(byte *)(param_1 + 0x78);
          if (*(byte *)(param_1 + 0x78) != 0) {
            puVar3 = &DAT_0189703a;
            if ((undefined1 *)param_1[0x43] != (undefined1 *)0x0) {
              puVar3 = (undefined1 *)param_1[0x43];
            }
                    /* try { // try from 00a3c338 to 00b3c34f has its CatchHandler @ 00a3c528 */
            uVar5 = FUN_00a3e3a4(plVar2,"USER %s",puVar3);
            if ((int)uVar5 != 0) goto LAB_00a3c1d8;
            uVar11 = 7;
          }
          *(uint *)(param_1 + 0xd1) = uVar11;
        }
        else if (local_68 == 2) goto LAB_00a3c15c;
        goto LAB_00a3c1dc;
      case 6:
        if (local_6c == 0x2b) goto switchD_00a3be8c_caseD_4;
        lVar8 = *param_1;
        pcVar9 = "Authentication failed: %d";
        goto LAB_00a3c3cc;
      case 7:
        if (local_6c != 0x2b) goto LAB_00a3c3c0;
        puVar3 = &DAT_0189703a;
                    /* catch() { ... } // from try @ 00a3c17c with catch @ 00a3c11c */
        if ((undefined1 *)param_1[0x44] != (undefined1 *)0x0) {
          puVar3 = (undefined1 *)param_1[0x44];
        }
        uVar5 = FUN_00a3e3a4(plVar2,"PASS %s",puVar3);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        *(undefined4 *)(param_1 + 0xd1) = 8;
        goto LAB_00a3c1e8;
      case 8:
        if (local_6c == 0x2b) goto switchD_00a3be8c_caseD_4;
LAB_00a3c3c0:
        lVar8 = *param_1;
        pcVar9 = "Access denied. %c";
LAB_00a3c3cc:
        FUN_00a23020(lVar8,pcVar9,local_6c);
        return 0x43;
      case 9:
        if (local_6c == 0x2b) {
          lVar14 = *param_1;
          piVar12 = *(int **)(lVar14 + 0x218);
          param_1[0xd3] = 2;
          param_1[0xd2] = 2;
          if (*piVar12 == 0) {
            FUN_00a335d8(param_1,0,0xffffffffffffffff,0,0,0xffffffff,0);
            lVar13 = param_1[0xc3];
            if (lVar13 != 0) {
              if (*(char *)(lVar14 + 0x620) == '\0') {
                uVar5 = FUN_00a3bb6c(param_1,lVar13,param_1[0xc4]);
                if ((int)uVar5 != 0) {
                  return uVar5;
                }
                lVar13 = param_1[0xc3];
              }
              (*(code *)PTR_free_01d1b748)(lVar13);
              uVar5 = 0;
              param_1[0xc3] = 0;
              param_1[0xc4] = 0;
              goto LAB_00a3c17c;
            }
          }
LAB_00a3c15c:
          uVar5 = 0;
        }
        else {
          uVar5 = 0x38;
        }
LAB_00a3c17c:
                    /* try { // try from 00a3c17c to 00b3c2e3 has its CatchHandler @ 00a3c11c */
        *(undefined4 *)(param_1 + 0xd1) = 0;
        iVar4 = (int)uVar5;
joined_r0x00a3c180:
        if (iVar4 != 0) {
          return uVar5;
        }
LAB_00a3c1dc:
        if ((int)param_1[0xd1] == 0) {
          return 0;
        }
        goto LAB_00a3c1e8;
      }
                    /* catch() { ... } // from try @ 00a3bfcc with catch @ 00a3c098 */
                    /* catch() { ... } // from try @ 00a3bf8c with catch @ 00a3c09c */
                    /* catch() { ... } // from try @ 00a3bfd4 with catch @ 00a3c0a0 */
      *(undefined4 *)((long)param_1 + 0x6ac) = 0;
      *(undefined4 *)((long)param_1 + 0x6b4) = 0;
      *(undefined1 *)(param_1 + 0xda) = 0;
                    /* catch() { ... } // from try @ 00a3bfbc with catch @ 00a3c0b0 */
      uVar5 = FUN_00a3e3a4(plVar2,"%s",&DAT_01896021);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      uVar10 = 2;
LAB_00a3c0bc:
      *(undefined4 *)(param_1 + 0xd1) = uVar10;
LAB_00a3c1e8:
      uVar7 = FUN_00a3e1e0(plVar2);
    } while ((uVar7 & 1) != 0);
  }
                    /* try { // try from 00a3c370 to 00b3c4ab has its CatchHandler @ 00a3c538 */
  return 0;
}

