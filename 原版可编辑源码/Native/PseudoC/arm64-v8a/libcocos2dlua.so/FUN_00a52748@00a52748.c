
/* WARNING: Removing unreachable block (ram,0x00a52ae4) */
/* WARNING: Removing unreachable block (ram,0x00a52d38) */

undefined8 FUN_00a52748(long *param_1)

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
    uVar5 = FUN_00a2d674(param_1,0,(char *)((long)param_1 + 0x68c));
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if ((int)param_1[0xd1] != 4) {
      *(undefined4 *)(param_1 + 0xd1) = 4;
    }
    if (*(char *)((long)param_1 + 0x68c) != '\0') {
                    /* try { // try from 00a527d8 to 00b52823 has its CatchHandler @ 00a527d8
                       catch() { ... } // from try @ 00a527d8 with catch @ 00a527d8
                       catch() { ... } // from try @ 00a52840 with catch @ 00a527d8 */
      *(undefined4 *)((long)param_1 + 0x6ac) = 0;
      *(undefined4 *)((long)param_1 + 0x6b4) = 0;
      param_1[0x80] = (long)&PTR_s_POP3S_016a4340;
      *(undefined1 *)(param_1 + 0x77) = 1;
      *(undefined1 *)(param_1 + 0xda) = 0;
      uVar5 = FUN_00a54d8c(plVar2,"%s",&DAT_013c8951);
      if ((int)uVar5 == 0) {
        *(undefined4 *)(param_1 + 0xd1) = 2;
        return uVar5;
      }
      return uVar5;
    }
  }
  else {
    if (param_1[0xc9] != 0) {
      uVar5 = FUN_00a550ec(plVar2);
      return uVar5;
    }
                    /* try { // try from 00a52824 to 00b5283f has its CatchHandler @ 00a528bc */
    do {
                    /* try { // try from 00a52840 to 00b528f3 has its CatchHandler @ 00a527d8 */
      uVar5 = FUN_00a54e00((int)lVar8,plVar2,&local_6c,&local_78);
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
        if (iVar4 != 0x2b) {
          FUN_00a38a08(lVar14,"Got unexpected pop3-server response");
          return 8;
        }
        if (((3 < sVar6) && (uVar7 = sVar6 - 2, 3 < uVar7)) &&
           (*(char *)(lVar14 + uVar7 + 0xb08) == '>')) {
          lVar13 = 0;
          lVar16 = sVar6 - 4;
          do {
                    /* catch() { ... } // from try @ 00a52824 with catch @ 00a528bc */
            if (*(char *)(lVar14 + 0xb0b + lVar13) == '<') {
              if (sVar6 - 4 != lVar13) {
                    /* try { // try from 00a52c80 to 00b52cc3 has its CatchHandler @ 00a52c80
                       catch() { ... } // from try @ 00a52c80 with catch @ 00a52c80
                       catch() { ... } // from try @ 00a52e90 with catch @ 00a52c80
                       catch() { ... } // from try @ 00a52f10 with catch @ 00a52c80 */
                __dest = (void *)(*(code *)PTR_calloc_01769a18)(1,(sVar6 - lVar13) + -3);
                param_1[0xd9] = (long)__dest;
                if (__dest != (void *)0x0) {
                  memcpy(__dest,(void *)(lVar14 + lVar13 + 0xb0b),(sVar6 - lVar13) - 4);
                  *(undefined1 *)(param_1[0xd9] + lVar16) = 0;
                    /* try { // try from 00a52cc4 to 00b52cdb has its CatchHandler @ 00a52f6c */
                  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
                }
              }
              break;
            }
            uVar15 = lVar13 + 4;
            lVar13 = lVar13 + 1;
            lVar16 = lVar16 + -1;
          } while (uVar15 < uVar7);
        }
        break;
      case 2:
        lVar14 = *param_1;
        piVar12 = (int *)(lVar14 + 0xb08);
        sVar6 = strlen((char *)piVar12);
        if (iVar4 != 0x2b) {
          if (iVar4 == 0x2a) {
            if (3 < sVar6) {
              if (*piVar12 == 0x534c5453) {
                *(undefined1 *)(param_1 + 0xda) = 1;
              }
              else if (*piVar12 == 0x52455355) {
                    /* try { // try from 00a52ce8 to 00b52cff has its CatchHandler @ 00a52f48 */
                *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
              }
              else {
                lVar13 = sVar6 - 5;
                if (((4 < sVar6) && (iVar4 = memcmp(piVar12,"SASL ",5), iVar4 == 0)) &&
                   (*(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4, lVar13 != 0)) {
                  lVar14 = lVar14 + 0xb0d;
                  do {
                    lVar16 = 0;
                    while ((uVar7 = (ulong)*(byte *)(lVar14 + lVar16),
                           *(byte *)(lVar14 + lVar16) < 0x21 &&
                           ((1L << (uVar7 & 0x3f) & 0x100002600U) != 0))) {
                      lVar16 = lVar16 + 1;
                      if (lVar13 == lVar16) goto LAB_00a52bc4;
                    }
                    uVar15 = 1;
                    while ((0x20 < (uint)uVar7 || ((1L << (uVar7 & 0x3f) & 0x100002600U) == 0))) {
                      if ((ulong)(lVar13 - lVar16) <= uVar15) goto LAB_00a529e0;
                      pbVar1 = (byte *)(lVar14 + lVar16 + uVar15);
                      uVar15 = uVar15 + 1;
                      uVar7 = (ulong)*pbVar1;
                    }
                    uVar15 = uVar15 - 1;
LAB_00a529e0:
                    uVar11 = FUN_00a57a80(lVar14 + lVar16,uVar15,&local_68);
                    if ((uVar11 != 0) && (CONCAT44(uStack_64,local_68) == uVar15)) {
                      *(uint *)((long)param_1 + 0x6ac) = *(uint *)((long)param_1 + 0x6ac) | uVar11;
                    }
                    lVar13 = (lVar13 - uVar15) - lVar16;
                    lVar14 = lVar14 + uVar15 + lVar16;
                  } while (lVar13 != 0);
                }
              }
            }
            goto LAB_00a52bc4;
          }
                    /* try { // try from 00a52bb0 to 00b52bcb has its CatchHandler @ 00a52c48 */
          *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
LAB_00a52bb8:
          uVar5 = FUN_00a52ea4(param_1);
LAB_00a52bc0:
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          goto LAB_00a52bc4;
        }
        if ((*(int *)(lVar14 + 0x630) == 0) || ((char)param_1[0x53] != '\0')) goto LAB_00a52bb8;
        if ((char)param_1[0xda] == '\0') {
                    /* try { // try from 00a52d40 to 00b52d57 has its CatchHandler @ 00a52f68 */
          if (*(int *)(lVar14 + 0x630) != 1) {
            FUN_00a38a08(lVar14,"STLS not supported.");
            return 0x40;
          }
          goto LAB_00a52bb8;
        }
        uVar5 = FUN_00a54d8c(plVar2,"%s",&DAT_013c897a);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        uVar10 = 3;
        goto LAB_00a52aa4;
      case 3:
        if (local_6c != 0x2b) {
          if (*(int *)(*param_1 + 0x630) != 1) {
            FUN_00a38a08(*param_1,"STARTTLS denied. %c",local_6c);
            return 0x40;
          }
          goto LAB_00a52bb8;
        }
        uVar5 = FUN_00a2d674(param_1,0,(char *)((long)param_1 + 0x68c));
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if ((int)param_1[0xd1] != 4) {
          *(undefined4 *)(param_1 + 0xd1) = 4;
        }
                    /* try { // try from 00a52a5c to 00b52a9f has its CatchHandler @ 00a52a5c
                       catch() { ... } // from try @ 00a52a5c with catch @ 00a52a5c
                       catch() { ... } // from try @ 00a52ab4 with catch @ 00a52a5c */
        if (*(char *)((long)param_1 + 0x68c) == '\0') goto LAB_00a52bc4;
        param_1[0x80] = (long)&PTR_s_POP3S_016a4340;
        *(undefined1 *)(param_1 + 0x77) = 1;
        break;
      default:
switchD_00a52874_caseD_4:
        *(undefined4 *)(param_1 + 0xd1) = 0;
        return 0;
                    /* try { // try from 00a52da4 to 00b52dcf has its CatchHandler @ 00a52f24 */
      case 5:
        lVar14 = *param_1;
                    /* try { // try from 00a52ab4 to 00b52b63 has its CatchHandler @ 00a52a5c */
        uVar5 = FUN_00a586a0(param_1 + 0xd4,param_1,local_6c,&local_68);
        if ((int)uVar5 != 0) goto LAB_00a52bc0;
        if (local_68 == 0) {
                    /* catch() { ... } // from try @ 00a52bb0 with catch @ 00a52c48 */
          uVar11 = *(uint *)((long)param_1 + 0x6c4) & *(uint *)(param_1 + 0xd8);
          if ((uVar11 >> 1 & 1) != 0) {
            uVar5 = FUN_00a52fc0(param_1);
            iVar4 = (int)uVar5;
            goto joined_r0x00a52b68;
          }
          if ((uVar11 & 1) == 0) {
            FUN_00a38a08(lVar14,"Authentication cancelled");
            return 0x43;
          }
          uVar11 = (uint)*(byte *)(param_1 + 0x78);
          if (*(byte *)(param_1 + 0x78) != 0) {
                    /* try { // try from 00a52d04 to 00b52d33 has its CatchHandler @ 00a52f2c */
            puVar3 = &DAT_013c996e;
            if ((undefined1 *)param_1[0x43] != (undefined1 *)0x0) {
              puVar3 = (undefined1 *)param_1[0x43];
            }
            uVar5 = FUN_00a54d8c(plVar2,"USER %s",puVar3);
            if ((int)uVar5 != 0) goto LAB_00a52bc0;
            uVar11 = 7;
          }
          *(uint *)(param_1 + 0xd1) = uVar11;
        }
        else if (local_68 == 2) goto LAB_00a52b44;
        goto LAB_00a52bc4;
      case 6:
                    /* try { // try from 00a52d80 to 00b52d97 has its CatchHandler @ 00a52f28 */
        if (local_6c == 0x2b) goto switchD_00a52874_caseD_4;
        lVar8 = *param_1;
        pcVar9 = "Authentication failed: %d";
        goto LAB_00a52db4;
      case 7:
        if (local_6c != 0x2b) goto LAB_00a52da8;
        puVar3 = &DAT_013c996e;
        if ((undefined1 *)param_1[0x44] != (undefined1 *)0x0) {
          puVar3 = (undefined1 *)param_1[0x44];
        }
        uVar5 = FUN_00a54d8c(plVar2,"PASS %s",puVar3);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        *(undefined4 *)(param_1 + 0xd1) = 8;
        goto LAB_00a52bd0;
      case 8:
        if (local_6c == 0x2b) goto switchD_00a52874_caseD_4;
LAB_00a52da8:
        lVar8 = *param_1;
        pcVar9 = "Access denied. %c";
LAB_00a52db4:
        FUN_00a38a08(lVar8,pcVar9,local_6c);
        return 0x43;
      case 9:
                    /* catch() { ... } // from try @ 00a52aa0 with catch @ 00a52b28 */
        if (local_6c == 0x2b) {
          lVar14 = *param_1;
          piVar12 = *(int **)(lVar14 + 0x218);
          param_1[0xd3] = 2;
          param_1[0xd2] = 2;
          if (*piVar12 == 0) {
            FUN_00a49fc0(param_1,0,0xffffffffffffffff,0,0,0xffffffff,0);
            lVar13 = param_1[0xc3];
            if (lVar13 != 0) {
              if (*(char *)(lVar14 + 0x620) == '\0') {
                uVar5 = FUN_00a52554(param_1,lVar13,param_1[0xc4]);
                if ((int)uVar5 != 0) {
                  return uVar5;
                }
                lVar13 = param_1[0xc3];
              }
              (*(code *)PTR_free_01769a00)(lVar13);
              uVar5 = 0;
              param_1[0xc3] = 0;
              param_1[0xc4] = 0;
              goto LAB_00a52b64;
            }
          }
LAB_00a52b44:
          uVar5 = 0;
        }
        else {
          uVar5 = 0x38;
        }
LAB_00a52b64:
                    /* try { // try from 00a52b64 to 00b52baf has its CatchHandler @ 00a52b64
                       catch() { ... } // from try @ 00a52b64 with catch @ 00a52b64
                       catch() { ... } // from try @ 00a52bcc with catch @ 00a52b64 */
        *(undefined4 *)(param_1 + 0xd1) = 0;
        iVar4 = (int)uVar5;
joined_r0x00a52b68:
        if (iVar4 != 0) {
          return uVar5;
        }
LAB_00a52bc4:
                    /* try { // try from 00a52bcc to 00b52c7f has its CatchHandler @ 00a52b64 */
        if ((int)param_1[0xd1] == 0) {
          return 0;
        }
        goto LAB_00a52bd0;
      }
      *(undefined4 *)((long)param_1 + 0x6ac) = 0;
      *(undefined4 *)((long)param_1 + 0x6b4) = 0;
      *(undefined1 *)(param_1 + 0xda) = 0;
      uVar5 = FUN_00a54d8c(plVar2,"%s",&DAT_013c8951);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
                    /* try { // try from 00a52aa0 to 00b52ab3 has its CatchHandler @ 00a52b28 */
      uVar10 = 2;
LAB_00a52aa4:
      *(undefined4 *)(param_1 + 0xd1) = uVar10;
LAB_00a52bd0:
      uVar7 = FUN_00a54bc8(plVar2);
    } while ((uVar7 & 1) != 0);
  }
                    /* try { // try from 00a52d64 to 00b52d7b has its CatchHandler @ 00a52f44 */
  return 0;
}

