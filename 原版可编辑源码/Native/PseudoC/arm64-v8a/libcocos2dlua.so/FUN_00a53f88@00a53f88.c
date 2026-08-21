
/* WARNING: Removing unreachable block (ram,0x00a54340) */
/* WARNING: Removing unreachable block (ram,0x00a54374) */
/* WARNING: Removing unreachable block (ram,0x00a54398) */

undefined8 FUN_00a53f88(long *param_1)

{
  byte *pbVar1;
  long *plVar2;
  long *plVar3;
  long *__s1;
  long lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  size_t sVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 local_78;
  int local_6c;
  int local_68;
  undefined4 uStack_64;
  
  lVar4 = param_1[0x4c];
  lVar14 = *param_1;
  local_78 = 0;
  plVar2 = param_1 + 0xc3;
  if ((int)param_1[0xd1] == 5) {
    uVar8 = FUN_00a2d674(param_1,0,(char *)((long)param_1 + 0x68c));
    if ((int)uVar8 == 0) {
      if ((int)param_1[0xd1] != 5) {
        *(undefined4 *)(param_1 + 0xd1) = 5;
      }
      if (*(char *)((long)param_1 + 0x68c) == '\0') {
LAB_00a54720:
        uVar8 = 0;
      }
      else {
        *(undefined4 *)((long)param_1 + 0x6a4) = 0;
        param_1[0x80] = (long)&PTR_s_SMTPS_016a4570;
        *(undefined1 *)(param_1 + 0x77) = 1;
        *(undefined4 *)((long)param_1 + 0x6ac) = 0;
        *(undefined1 *)(param_1 + 0xd7) = 0;
        *(undefined1 *)((long)param_1 + 0x6ba) = 0;
        uVar8 = FUN_00a54d8c(plVar2,"EHLO %s",param_1[0xd2]);
        if ((int)uVar8 == 0) {
          *(undefined4 *)(param_1 + 0xd1) = 2;
        }
      }
    }
    return uVar8;
  }
  if (param_1[0xc9] != 0) {
    uVar8 = FUN_00a550ec(plVar2);
    return uVar8;
  }
  plVar3 = param_1 + 0xd3;
LAB_00a54080:
  uVar8 = FUN_00a54e00((int)lVar4,plVar2,&local_6c,&local_78);
  iVar7 = local_6c;
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  lVar11 = param_1[0xd1];
  if (((int)lVar11 != 0xc) && (local_6c != 1)) {
    *(int *)(lVar14 + 0x8d68) = local_6c;
  }
  if (local_6c == 0) goto LAB_00a54720;
  switch((int)lVar11) {
  case 1:
    if (99 < local_6c - 200U) {
      FUN_00a38a08(*param_1,"Got unexpected smtp-server response: %d",local_6c);
      return 8;
    }
    goto LAB_00a54180;
  case 2:
    lVar11 = *param_1;
    if ((local_6c == 1) || (local_6c - 200U < 100)) {
      sVar9 = strlen((char *)(lVar11 + 0xb08));
                    /* try { // try from 00a542a8 to 00b5430b has its CatchHandler @ 00a54108 */
      uVar10 = sVar9 - 4;
      __s1 = (long *)(lVar11 + 0xb0c);
      if (uVar10 < 8) {
        if (3 < uVar10) goto LAB_00a5448c;
      }
      else if (*__s1 == 0x534c545452415453) {
        *(undefined1 *)(param_1 + 0xd7) = 1;
      }
      else {
LAB_00a5448c:
        if (*(int *)__s1 == 0x455a4953) {
          *(undefined1 *)((long)param_1 + 0x6b9) = 1;
        }
        else if ((4 < uVar10) && (iVar5 = memcmp(__s1,"AUTH ",5), iVar5 == 0)) {
          lVar18 = sVar9 - 9;
          *(undefined1 *)((long)param_1 + 0x6ba) = 1;
          if (lVar18 != 0) {
            lVar16 = lVar11 + 0xb11;
            do {
              lVar17 = 0;
              while ((uVar10 = (ulong)*(byte *)(lVar16 + lVar17), *(byte *)(lVar16 + lVar17) < 0x21
                     && ((1L << (uVar10 & 0x3f) & 0x100002600U) != 0))) {
                lVar17 = lVar17 + 1;
                if (lVar18 == lVar17) goto LAB_00a545d8;
              }
              uVar19 = 1;
              while ((0x20 < (uint)uVar10 || ((1L << (uVar10 & 0x3f) & 0x100002600U) == 0))) {
                if ((ulong)(lVar18 - lVar17) <= uVar19) goto LAB_00a5455c;
                pbVar1 = (byte *)(lVar16 + lVar17 + uVar19);
                uVar19 = uVar19 + 1;
                uVar10 = (ulong)*pbVar1;
              }
              uVar19 = uVar19 - 1;
LAB_00a5455c:
              uVar6 = FUN_00a57a80(lVar16 + lVar17,uVar19,&local_68);
              if ((uVar6 != 0) && (CONCAT44(uStack_64,local_68) == uVar19)) {
                *(uint *)((long)param_1 + 0x6a4) = *(uint *)((long)param_1 + 0x6a4) | uVar6;
              }
              lVar18 = (lVar18 - uVar19) - lVar17;
              lVar16 = lVar16 + uVar19 + lVar17;
            } while (lVar18 != 0);
          }
        }
      }
LAB_00a545d8:
      if (iVar7 != 1) {
        if ((*(int *)(lVar11 + 0x630) != 0) && ((char)param_1[0x53] == '\0')) {
          if ((char)param_1[0xd7] != '\0') {
            uVar8 = FUN_00a54d8c(plVar2,"%s","STARTTLS");
            if ((int)uVar8 != 0) {
              return uVar8;
            }
            *(undefined4 *)(param_1 + 0xd1) = 4;
            goto LAB_00a54474;
          }
          if (*(int *)(lVar11 + 0x630) != 1) {
            FUN_00a38a08(lVar11,"STARTTLS not supported.");
            return 0x40;
          }
        }
LAB_00a542f0:
                    /* catch() { ... } // from try @ 00a541f0 with catch @ 00a542f0
                       catch() { ... } // from try @ 00a54294 with catch @ 00a542f0 */
        if ((*(char *)((long)param_1 + 0x6ba) == '\0') ||
           (uVar10 = FUN_00a5823c(plVar3,param_1), (uVar10 & 1) == 0)) {
          *(undefined4 *)(param_1 + 0xd1) = 0;
        }
        else {
          uVar8 = FUN_00a5825c(plVar3,param_1,0,&local_68);
          if ((int)uVar8 != 0) goto LAB_00a54468;
          if (local_68 != 1) {
            FUN_00a38740(*param_1,"No known authentication mechanisms supported!\n");
            return 0x43;
          }
          *(undefined4 *)(param_1 + 0xd1) = 6;
        }
      }
      goto LAB_00a5446c;
    }
                    /* try { // try from 00a54108 to 00b5416b has its CatchHandler @ 00a54108
                       catch() { ... } // from try @ 00a54108 with catch @ 00a54108
                       catch() { ... } // from try @ 00a5417c with catch @ 00a54108
                       catch() { ... } // from try @ 00a5424c with catch @ 00a54108
                       catch() { ... } // from try @ 00a542a8 with catch @ 00a54108 */
    if ((1 < *(uint *)(lVar11 + 0x630)) && ((char)param_1[0x53] == '\0')) goto LAB_00a547e4;
    *(undefined4 *)((long)param_1 + 0x6ac) = 0;
    uVar8 = FUN_00a54d8c(plVar2,"HELO %s",param_1[0xd2]);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    *(undefined4 *)(param_1 + 0xd1) = 3;
    goto LAB_00a54474;
  case 3:
    if (99 < local_6c - 200U) {
      lVar11 = *param_1;
LAB_00a547e4:
      FUN_00a38a08(lVar11,"Remote access denied: %d",local_6c);
      return 9;
    }
    break;
  case 4:
    if (local_6c != 0xdc) {
                    /* catch() { ... } // from try @ 00a5416c with catch @ 00a542e8 */
                    /* catch() { ... } // from try @ 00a541a8 with catch @ 00a542ec
                       catch() { ... } // from try @ 00a5427c with catch @ 00a542ec */
      if (*(int *)(*param_1 + 0x630) != 1) {
        FUN_00a38a08(*param_1,"STARTTLS denied. %c",local_6c);
        return 0x40;
      }
      goto LAB_00a542f0;
    }
    uVar8 = FUN_00a2d674(param_1,0,(char *)((long)param_1 + 0x68c));
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    if ((int)param_1[0xd1] != 5) {
      *(undefined4 *)(param_1 + 0xd1) = 5;
    }
    if (*(char *)((long)param_1 + 0x68c) == '\0') goto LAB_00a5446c;
                    /* try { // try from 00a5416c to 00b5417b has its CatchHandler @ 00a542e8 */
    param_1[0x80] = (long)&PTR_s_SMTPS_016a4570;
                    /* try { // try from 00a5417c to 00b541a7 has its CatchHandler @ 00a54108 */
    *(undefined1 *)(param_1 + 0x77) = 1;
LAB_00a54180:
    *(undefined4 *)((long)param_1 + 0x6a4) = 0;
    *(undefined4 *)((long)param_1 + 0x6ac) = 0;
    *(undefined1 *)(param_1 + 0xd7) = 0;
    *(undefined1 *)((long)param_1 + 0x6ba) = 0;
    uVar8 = FUN_00a54d8c(param_1 + 0xc3,"EHLO %s",param_1[0xd2]);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
                    /* try { // try from 00a541a8 to 00b541e3 has its CatchHandler @ 00a542ec */
    *(undefined4 *)(param_1 + 0xd1) = 2;
LAB_00a54474:
    uVar10 = FUN_00a54bc8(plVar2);
    if ((uVar10 & 1) == 0) goto LAB_00a54720;
    goto LAB_00a54080;
  case 6:
    lVar11 = *param_1;
    uVar8 = FUN_00a586a0(plVar3,param_1,local_6c,&local_68);
    if ((int)uVar8 == 0) {
      if (local_68 != 0) {
        if (local_68 == 2) {
          *(undefined4 *)(param_1 + 0xd1) = 0;
        }
        goto LAB_00a5446c;
      }
      FUN_00a38a08(lVar11,"Authentication cancelled");
      uVar8 = 0x43;
    }
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    goto LAB_00a5446c;
  case 7:
    lVar18 = *param_1;
    lVar11 = *(long *)(lVar18 + 0x218);
    sVar9 = strlen((char *)(lVar18 + 0xb08));
                    /* try { // try from 00a541f0 to 00b5424b has its CatchHandler @ 00a542f0 */
    if ((iVar7 - 200U < 100) || (*(long *)(lVar11 + 0x10) == 0)) {
      if ((iVar7 != 1) && ((99 < iVar7 - 200U && (*(long *)(lVar11 + 0x10) == 0))))
      goto LAB_00a5478c;
    }
    else if ((iVar7 != 1) && (iVar7 != 0x229)) {
LAB_00a5478c:
      FUN_00a38a08(lVar18,"Command failed: %d",iVar7);
      return 0x38;
    }
    if (*(char *)(lVar18 + 0x620) == '\0') {
      *(undefined1 *)(lVar18 + sVar9 + 0xb08) = 10;
      uVar8 = FUN_00a391f0(param_1,1,(char *)(lVar18 + 0xb08),sVar9 + 1);
      *(undefined1 *)(lVar18 + sVar9 + 0xb08) = 0;
    }
    else {
      uVar8 = 0;
    }
    if (iVar7 != 1) {
      if ((*(long *)(lVar11 + 0x10) != 0) &&
         (lVar18 = *(long *)(*(long *)(lVar11 + 0x10) + 8), *(long *)(lVar11 + 0x10) = lVar18,
         lVar18 != 0)) {
        pcVar12 = *(char **)(*(long *)(*param_1 + 0x218) + 8);
        puVar15 = *(undefined8 **)(*(long *)(*param_1 + 0x218) + 0x10);
        if (puVar15 == (undefined8 *)0x0) {
          if (pcVar12 == (char *)0x0) {
            pcVar13 = "HELP";
          }
          else {
            pcVar13 = "HELP";
            if (*pcVar12 != '\0') {
              pcVar13 = pcVar12;
            }
          }
          uVar8 = FUN_00a54d8c(plVar2,"%s",pcVar13);
          iVar7 = (int)uVar8;
        }
        else {
          if (pcVar12 == (char *)0x0) {
            pcVar13 = "VRFY";
          }
          else {
            pcVar13 = "VRFY";
            if (*pcVar12 != '\0') {
              pcVar13 = pcVar12;
            }
          }
          uVar8 = FUN_00a54d8c(plVar2,"%s %s",pcVar13,*puVar15);
          iVar7 = (int)uVar8;
        }
        if (iVar7 != 0) {
          return uVar8;
        }
        *(undefined4 *)(param_1 + 0xd1) = 7;
        goto LAB_00a54474;
      }
      *(undefined4 *)(param_1 + 0xd1) = 0;
    }
LAB_00a54468:
    if ((int)uVar8 != 0) {
      return uVar8;
    }
LAB_00a5446c:
    if ((int)param_1[0xd1] != 0) goto LAB_00a54474;
    goto LAB_00a54720;
  case 8:
    lVar11 = *param_1;
    if (99 < local_6c - 200U) {
      pcVar12 = "MAIL failed: %d";
LAB_00a547b0:
      FUN_00a38a08(lVar11,pcVar12,local_6c);
      return 0x37;
    }
    pcVar12 = (char *)**(undefined8 **)(*(long *)(lVar11 + 0x218) + 0x10);
    goto LAB_00a54274;
  case 9:
    lVar11 = *param_1;
                    /* try { // try from 00a5424c to 00b5427b has its CatchHandler @ 00a54108 */
    if (99 < local_6c - 200U) {
      pcVar12 = "RCPT failed: %d";
      goto LAB_00a547b0;
    }
    puVar15 = *(undefined8 **)(*(long *)(*(long *)(lVar11 + 0x218) + 0x10) + 8);
    *(undefined8 **)(*(long *)(lVar11 + 0x218) + 0x10) = puVar15;
    if (puVar15 == (undefined8 *)0x0) {
      uVar8 = FUN_00a54d8c(plVar2,"%s","DATA");
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      *(undefined4 *)(param_1 + 0xd1) = 10;
      goto LAB_00a54474;
    }
    pcVar12 = (char *)*puVar15;
LAB_00a54274:
                    /* try { // try from 00a5427c to 00b5428f has its CatchHandler @ 00a542ec */
    pcVar13 = "RCPT TO:%s";
    if (*pcVar12 != '<') {
      pcVar13 = "RCPT TO:<%s>";
    }
    uVar8 = FUN_00a54d8c(plVar2,pcVar13);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
                    /* try { // try from 00a54294 to 00b542a7 has its CatchHandler @ 00a542f0 */
    *(undefined4 *)(param_1 + 0xd1) = 9;
    goto LAB_00a54474;
  case 10:
    lVar11 = *param_1;
    if (local_6c != 0x162) {
      pcVar12 = "DATA failed: %d";
      goto LAB_00a547b0;
    }
    FUN_00a30ed8(lVar11,*(undefined8 *)(lVar11 + 0x8cf8));
    FUN_00a49fc0(param_1,0xffffffff,0xffffffffffffffff,0,0,0,0);
    break;
  case 0xb:
    *(undefined4 *)(param_1 + 0xd1) = 0;
    if (local_6c != 0xfa) {
      return 0x38;
    }
    goto LAB_00a54720;
  }
  *(undefined4 *)(param_1 + 0xd1) = 0;
  goto LAB_00a54720;
}

