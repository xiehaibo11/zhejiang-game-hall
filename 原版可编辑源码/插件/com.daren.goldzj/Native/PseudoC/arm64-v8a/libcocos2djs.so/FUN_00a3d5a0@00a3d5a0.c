
/* WARNING: Removing unreachable block (ram,0x00a3d958) */
/* WARNING: Removing unreachable block (ram,0x00a3d98c) */
/* WARNING: Removing unreachable block (ram,0x00a3d9b0) */

undefined8 FUN_00a3d5a0(long *param_1)

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
  
                    /* catch() { ... } // from try @ 00a3d43c with catch @ 00a3d5a0 */
                    /* catch() { ... } // from try @ 00a3d41c with catch @ 00a3d5a4 */
                    /* catch() { ... } // from try @ 00a3d454 with catch @ 00a3d5b4 */
  lVar4 = param_1[0x4c];
  lVar14 = *param_1;
  local_78 = 0;
  plVar2 = param_1 + 0xc3;
  if ((int)param_1[0xd1] == 5) {
    uVar8 = FUN_00a17c8c(param_1,0,(char *)((long)param_1 + 0x68c));
    if ((int)uVar8 == 0) {
      if ((int)param_1[0xd1] != 5) {
        *(undefined4 *)(param_1 + 0xd1) = 5;
      }
                    /* try { // try from 00a3d60c to 00b3d65f has its CatchHandler @ 00a3d60c
                       catch() { ... } // from try @ 00a3d60c with catch @ 00a3d60c
                       catch() { ... } // from try @ 00a3d7c8 with catch @ 00a3d60c */
      if (*(char *)((long)param_1 + 0x68c) == '\0') {
LAB_00a3dd38:
        uVar8 = 0;
      }
      else {
        *(undefined4 *)((long)param_1 + 0x6a4) = 0;
        param_1[0x80] = (long)&PTR_s_SMTPS_01c6dda0;
        *(undefined1 *)(param_1 + 0x77) = 1;
        *(undefined4 *)((long)param_1 + 0x6ac) = 0;
        *(undefined1 *)(param_1 + 0xd7) = 0;
        *(undefined1 *)((long)param_1 + 0x6ba) = 0;
        uVar8 = FUN_00a3e3a4(plVar2,"EHLO %s",param_1[0xd2]);
        if ((int)uVar8 == 0) {
          *(undefined4 *)(param_1 + 0xd1) = 2;
        }
      }
    }
    return uVar8;
  }
                    /* try { // try from 00a3d660 to 00b3d677 has its CatchHandler @ 00a3d844 */
  if (param_1[0xc9] != 0) {
    uVar8 = FUN_00a3e704(plVar2);
    return uVar8;
  }
                    /* try { // try from 00a3d680 to 00b3d68b has its CatchHandler @ 00a3d840 */
  plVar3 = param_1 + 0xd3;
                    /* try { // try from 00a3d68c to 00b3d697 has its CatchHandler @ 00a3d83c */
LAB_00a3d698:
                    /* try { // try from 00a3d698 to 00b3d7c7 has its CatchHandler @ 00a3d854 */
  uVar8 = FUN_00a3e418((int)lVar4,plVar2,&local_6c,&local_78);
  iVar7 = local_6c;
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  lVar11 = param_1[0xd1];
  if (((int)lVar11 != 0xc) && (local_6c != 1)) {
    *(int *)(lVar14 + 0x8d68) = local_6c;
  }
  if (local_6c == 0) goto LAB_00a3dd38;
  switch((int)lVar11) {
  case 1:
    if (99 < local_6c - 200U) {
                    /* catch() { ... } // from try @ 00a3dbd0 with catch @ 00a3dd7c */
                    /* catch() { ... } // from try @ 00a3dbc4 with catch @ 00a3dd80 */
      FUN_00a23020(*param_1,"Got unexpected smtp-server response: %d",local_6c);
      return 8;
                    /* catch() { ... } // from try @ 00a3dba4 with catch @ 00a3dd84 */
    }
    goto LAB_00a3d798;
  case 2:
    lVar11 = *param_1;
    if ((local_6c == 1) || (local_6c - 200U < 100)) {
      sVar9 = strlen((char *)(lVar11 + 0xb08));
      uVar10 = sVar9 - 4;
      __s1 = (long *)(lVar11 + 0xb0c);
      if (uVar10 < 8) {
        if (3 < uVar10) goto LAB_00a3daa4;
      }
      else if (*__s1 == 0x534c545452415453) {
        *(undefined1 *)(param_1 + 0xd7) = 1;
      }
      else {
LAB_00a3daa4:
        if (*(int *)__s1 == 0x455a4953) {
          *(undefined1 *)((long)param_1 + 0x6b9) = 1;
        }
        else if ((4 < uVar10) && (iVar5 = memcmp(__s1,"AUTH ",5), iVar5 == 0)) {
                    /* catch() { ... } // from try @ 00a3d92c with catch @ 00a3dae0 */
          lVar18 = sVar9 - 9;
                    /* catch() { ... } // from try @ 00a3d920 with catch @ 00a3dae4 */
                    /* catch() { ... } // from try @ 00a3d900 with catch @ 00a3dae8 */
          *(undefined1 *)((long)param_1 + 0x6ba) = 1;
          if (lVar18 != 0) {
            lVar16 = lVar11 + 0xb11;
            do {
                    /* catch() { ... } // from try @ 00a3d938 with catch @ 00a3daf8 */
              lVar17 = 0;
              while ((uVar10 = (ulong)*(byte *)(lVar16 + lVar17), *(byte *)(lVar16 + lVar17) < 0x21
                     && ((1L << (uVar10 & 0x3f) & 0x100002600U) != 0))) {
                lVar17 = lVar17 + 1;
                if (lVar18 == lVar17) goto LAB_00a3dbf0;
              }
              uVar19 = 1;
                    /* try { // try from 00a3db50 to 00b3dba3 has its CatchHandler @ 00a3db50
                       catch() { ... } // from try @ 00a3db50 with catch @ 00a3db50
                       catch() { ... } // from try @ 00a3dd08 with catch @ 00a3db50 */
              while ((0x20 < (uint)uVar10 || ((1L << (uVar10 & 0x3f) & 0x100002600U) == 0))) {
                if ((ulong)(lVar18 - lVar17) <= uVar19) goto LAB_00a3db74;
                pbVar1 = (byte *)(lVar16 + lVar17 + uVar19);
                uVar19 = uVar19 + 1;
                uVar10 = (ulong)*pbVar1;
              }
              uVar19 = uVar19 - 1;
LAB_00a3db74:
              uVar6 = FUN_00a41098(lVar16 + lVar17,uVar19,&local_68);
              if ((uVar6 != 0) && (CONCAT44(uStack_64,local_68) == uVar19)) {
                *(uint *)((long)param_1 + 0x6a4) = *(uint *)((long)param_1 + 0x6a4) | uVar6;
              }
                    /* try { // try from 00a3dba4 to 00b3dbbb has its CatchHandler @ 00a3dd84 */
              lVar18 = (lVar18 - uVar19) - lVar17;
              lVar16 = lVar16 + uVar19 + lVar17;
            } while (lVar18 != 0);
          }
        }
      }
LAB_00a3dbf0:
      if (iVar7 != 1) {
        if ((*(int *)(lVar11 + 0x630) != 0) && ((char)param_1[0x53] == '\0')) {
          if ((char)param_1[0xd7] != '\0') {
            uVar8 = FUN_00a3e3a4(plVar2,"%s","STARTTLS");
            if ((int)uVar8 != 0) {
              return uVar8;
            }
            *(undefined4 *)(param_1 + 0xd1) = 4;
            goto LAB_00a3da8c;
          }
          if (*(int *)(lVar11 + 0x630) != 1) {
            FUN_00a23020(lVar11,"STARTTLS not supported.");
            return 0x40;
          }
        }
LAB_00a3d908:
                    /* try { // try from 00a3d920 to 00b3d92b has its CatchHandler @ 00a3dae4 */
        if ((*(char *)((long)param_1 + 0x6ba) == '\0') ||
           (uVar10 = FUN_00a41854(plVar3,param_1), (uVar10 & 1) == 0)) {
          *(undefined4 *)(param_1 + 0xd1) = 0;
        }
        else {
                    /* try { // try from 00a3d92c to 00b3d937 has its CatchHandler @ 00a3dae0 */
          uVar8 = FUN_00a41874(plVar3,param_1,0,&local_68);
                    /* try { // try from 00a3d938 to 00b3da6b has its CatchHandler @ 00a3daf8 */
          if ((int)uVar8 != 0) goto LAB_00a3da80;
          if (local_68 != 1) {
            FUN_00a22d58(*param_1,"No known authentication mechanisms supported!\n");
            return 0x43;
          }
          *(undefined4 *)(param_1 + 0xd1) = 6;
        }
      }
      goto LAB_00a3da84;
    }
    if ((1 < *(uint *)(lVar11 + 0x630)) && ((char)param_1[0x53] == '\0')) goto LAB_00a3ddfc;
    *(undefined4 *)((long)param_1 + 0x6ac) = 0;
    uVar8 = FUN_00a3e3a4(plVar2,"HELO %s",param_1[0xd2]);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    *(undefined4 *)(param_1 + 0xd1) = 3;
    goto LAB_00a3da8c;
  case 3:
    if (99 < local_6c - 200U) {
      lVar11 = *param_1;
LAB_00a3ddfc:
      FUN_00a23020(lVar11,"Remote access denied: %d",local_6c);
      return 9;
    }
    break;
  case 4:
    if (local_6c != 0xdc) {
                    /* try { // try from 00a3d900 to 00b3d917 has its CatchHandler @ 00a3dae8 */
      if (*(int *)(*param_1 + 0x630) != 1) {
        FUN_00a23020(*param_1,"STARTTLS denied. %c",local_6c);
        return 0x40;
                    /* try { // try from 00a3ddec to 00b3de3f has its CatchHandler @ 00a3ddec
                       catch() { ... } // from try @ 00a3ddec with catch @ 00a3ddec
                       catch() { ... } // from try @ 00a3e05c with catch @ 00a3ddec */
      }
      goto LAB_00a3d908;
    }
    uVar8 = FUN_00a17c8c(param_1,0,(char *)((long)param_1 + 0x68c));
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    if ((int)param_1[0xd1] != 5) {
      *(undefined4 *)(param_1 + 0xd1) = 5;
    }
    if (*(char *)((long)param_1 + 0x68c) == '\0') goto LAB_00a3da84;
    param_1[0x80] = (long)&PTR_s_SMTPS_01c6dda0;
    *(undefined1 *)(param_1 + 0x77) = 1;
LAB_00a3d798:
    *(undefined4 *)((long)param_1 + 0x6a4) = 0;
    *(undefined4 *)((long)param_1 + 0x6ac) = 0;
    *(undefined1 *)(param_1 + 0xd7) = 0;
    *(undefined1 *)((long)param_1 + 0x6ba) = 0;
    uVar8 = FUN_00a3e3a4(param_1 + 0xc3,"EHLO %s",param_1[0xd2]);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    *(undefined4 *)(param_1 + 0xd1) = 2;
LAB_00a3da8c:
    uVar10 = FUN_00a3e1e0(plVar2);
    if ((uVar10 & 1) == 0) goto LAB_00a3dd38;
    goto LAB_00a3d698;
  case 6:
                    /* try { // try from 00a3d7c8 to 00b3d8ab has its CatchHandler @ 00a3d60c */
    lVar11 = *param_1;
    uVar8 = FUN_00a41cb8(plVar3,param_1,local_6c,&local_68);
    if ((int)uVar8 == 0) {
      if (local_68 != 0) {
        if (local_68 == 2) {
          *(undefined4 *)(param_1 + 0xd1) = 0;
        }
        goto LAB_00a3da84;
      }
                    /* try { // try from 00a3dbd0 to 00b3dbdb has its CatchHandler @ 00a3dd7c */
      FUN_00a23020(lVar11,"Authentication cancelled");
                    /* try { // try from 00a3dbdc to 00b3dd07 has its CatchHandler @ 00a3dd94 */
      uVar8 = 0x43;
    }
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    goto LAB_00a3da84;
  case 7:
    lVar18 = *param_1;
    lVar11 = *(long *)(lVar18 + 0x218);
    sVar9 = strlen((char *)(lVar18 + 0xb08));
    if ((iVar7 - 200U < 100) || (*(long *)(lVar11 + 0x10) == 0)) {
      if ((iVar7 != 1) && ((99 < iVar7 - 200U && (*(long *)(lVar11 + 0x10) == 0))))
      goto LAB_00a3dda4;
    }
    else if ((iVar7 != 1) && (iVar7 != 0x229)) {
LAB_00a3dda4:
      FUN_00a23020(lVar18,"Command failed: %d",iVar7);
      return 0x38;
    }
    if (*(char *)(lVar18 + 0x620) == '\0') {
      *(undefined1 *)(lVar18 + sVar9 + 0xb08) = 10;
      uVar8 = FUN_00a23808(param_1,1,(char *)(lVar18 + 0xb08),sVar9 + 1);
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
          uVar8 = FUN_00a3e3a4(plVar2,"%s",pcVar13);
          iVar7 = (int)uVar8;
        }
        else {
          if (pcVar12 == (char *)0x0) {
            pcVar13 = "VRFY";
          }
          else {
            pcVar13 = "VRFY";
                    /* try { // try from 00a3da6c to 00b3db4f has its CatchHandler @ 00a3d8ac */
            if (*pcVar12 != '\0') {
              pcVar13 = pcVar12;
            }
          }
          uVar8 = FUN_00a3e3a4(plVar2,"%s %s",pcVar13,*puVar15);
          iVar7 = (int)uVar8;
        }
        if (iVar7 != 0) {
          return uVar8;
        }
        *(undefined4 *)(param_1 + 0xd1) = 7;
        goto LAB_00a3da8c;
      }
      *(undefined4 *)(param_1 + 0xd1) = 0;
    }
LAB_00a3da80:
    if ((int)uVar8 != 0) {
      return uVar8;
    }
LAB_00a3da84:
    if ((int)param_1[0xd1] != 0) goto LAB_00a3da8c;
    goto LAB_00a3dd38;
  case 8:
    lVar11 = *param_1;
    if (99 < local_6c - 200U) {
      pcVar12 = "MAIL failed: %d";
                    /* catch() { ... } // from try @ 00a3dbdc with catch @ 00a3dd94 */
LAB_00a3ddc8:
      FUN_00a23020(lVar11,pcVar12,local_6c);
      return 0x37;
    }
                    /* catch() { ... } // from try @ 00a3d68c with catch @ 00a3d83c */
                    /* catch() { ... } // from try @ 00a3d680 with catch @ 00a3d840 */
                    /* catch() { ... } // from try @ 00a3d660 with catch @ 00a3d844 */
    pcVar12 = (char *)**(undefined8 **)(*(long *)(lVar11 + 0x218) + 0x10);
                    /* catch() { ... } // from try @ 00a3d698 with catch @ 00a3d854 */
    goto LAB_00a3d88c;
  case 9:
    lVar11 = *param_1;
    if (99 < local_6c - 200U) {
      pcVar12 = "RCPT failed: %d";
      goto LAB_00a3ddc8;
    }
    puVar15 = *(undefined8 **)(*(long *)(*(long *)(lVar11 + 0x218) + 0x10) + 8);
    *(undefined8 **)(*(long *)(lVar11 + 0x218) + 0x10) = puVar15;
    if (puVar15 == (undefined8 *)0x0) {
      uVar8 = FUN_00a3e3a4(plVar2,"%s","DATA");
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      *(undefined4 *)(param_1 + 0xd1) = 10;
      goto LAB_00a3da8c;
    }
    pcVar12 = (char *)*puVar15;
LAB_00a3d88c:
    pcVar13 = "RCPT TO:%s";
    if (*pcVar12 != '<') {
      pcVar13 = "RCPT TO:<%s>";
    }
    uVar8 = FUN_00a3e3a4(plVar2,pcVar13);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
                    /* try { // try from 00a3d8ac to 00b3d8ff has its CatchHandler @ 00a3d8ac
                       catch() { ... } // from try @ 00a3d8ac with catch @ 00a3d8ac
                       catch() { ... } // from try @ 00a3da6c with catch @ 00a3d8ac */
    *(undefined4 *)(param_1 + 0xd1) = 9;
    goto LAB_00a3da8c;
  case 10:
    lVar11 = *param_1;
    if (local_6c != 0x162) {
      pcVar12 = "DATA failed: %d";
      goto LAB_00a3ddc8;
    }
                    /* try { // try from 00a3dd08 to 00b3ddeb has its CatchHandler @ 00a3db50 */
    FUN_00a1b4f0(lVar11,*(undefined8 *)(lVar11 + 0x8cf8));
    FUN_00a335d8(param_1,0xffffffff,0xffffffffffffffff,0,0,0,0);
    break;
  case 0xb:
    *(undefined4 *)(param_1 + 0xd1) = 0;
    if (local_6c != 0xfa) {
      return 0x38;
    }
    goto LAB_00a3dd38;
  }
  *(undefined4 *)(param_1 + 0xd1) = 0;
  goto LAB_00a3dd38;
}

