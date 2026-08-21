
/* WARNING: Removing unreachable block (ram,0x00a50920) */
/* WARNING: Removing unreachable block (ram,0x00a51130) */
/* WARNING: Removing unreachable block (ram,0x00a50998) */
/* WARNING: Removing unreachable block (ram,0x00a508a0) */
/* WARNING: Removing unreachable block (ram,0x00a50ad0) */
/* WARNING: Type propagation algorithm not settling */

int FUN_00a50460(long *param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  size_t sVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  uint uVar13;
  char *pcVar14;
  long lVar15;
  char *pcVar16;
  char cVar17;
  char cVar18;
  long lVar19;
  ulong uVar20;
  char *pcVar21;
  byte *__s1;
  undefined8 local_90;
  uint local_84;
  undefined8 local_80;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar5 = param_1[0x4c];
  local_90 = 0;
  if ((int)param_1[0xd1] == 4) {
    iVar7 = FUN_00a2d674(param_1,0,(char *)((long)param_1 + 0x68c));
    if (iVar7 == 0) {
      if ((int)param_1[0xd1] != 4) {
        *(undefined4 *)(param_1 + 0xd1) = 4;
      }
      if (*(char *)((long)param_1 + 0x68c) == '\0') {
LAB_00a51134:
        iVar7 = 0;
      }
      else {
        *(undefined4 *)((long)param_1 + 0x69c) = 0;
        *(undefined4 *)((long)param_1 + 0x6a4) = 0;
        param_1[0x80] = (long)&PTR_s_IMAPS_016a4110;
        *(undefined1 *)(param_1 + 0x77) = 1;
        *(undefined1 *)((long)param_1 + 0x6bd) = 0;
        iVar7 = FUN_00a51878(param_1,"CAPABILITY");
        if (iVar7 == 0) {
          *(undefined4 *)(param_1 + 0xd1) = 2;
        }
      }
    }
LAB_00a51138:
    if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
                    /* try { // try from 00a5114c to 00b5116f has its CatchHandler @ 00a51398 */
    return iVar7;
  }
  plVar1 = param_1 + 0xc3;
  if (param_1[0xc9] != 0) {
    iVar7 = FUN_00a550ec(plVar1);
    goto LAB_00a51138;
  }
LAB_00a50568:
  iVar7 = FUN_00a54e00((int)lVar5,plVar1,&local_84,&local_90);
  uVar13 = local_84;
  if (iVar7 != 0) goto LAB_00a51138;
  if (local_84 == 0xffffffff) {
LAB_00a511a8:
    iVar7 = 8;
    goto LAB_00a51138;
  }
  iVar7 = 0;
  if (local_84 == 0) goto LAB_00a51138;
  switch((int)param_1[0xd1]) {
  case 1:
    if (local_84 == 0x4f) goto LAB_00a507cc;
                    /* try { // try from 00a51214 to 00b5122b has its CatchHandler @ 00a51394 */
    FUN_00a38a08(*param_1,"Got unexpected imap-server response");
    iVar7 = 8;
    goto LAB_00a51138;
  case 2:
    lVar19 = *param_1;
    if (local_84 == 0x4f) {
      if ((*(int *)(lVar19 + 0x630) == 0) || ((char)param_1[0x53] != '\0')) goto LAB_00a50934;
      if (*(char *)((long)param_1 + 0x6bd) == '\0') {
                    /* catch() { ... } // from try @ 00a50b24 with catch @ 00a50c00 */
                    /* catch() { ... } // from try @ 00a50af0 with catch @ 00a50c04 */
        if (*(int *)(lVar19 + 0x630) == 1) goto LAB_00a50934;
        FUN_00a38a08(lVar19,"STARTTLS not supported.");
        iVar7 = 0x40;
      }
      else {
        iVar7 = FUN_00a51878(param_1,"STARTTLS");
                    /* try { // try from 00a50af0 to 00b50b07 has its CatchHandler @ 00a50c04 */
        if (iVar7 == 0) {
          *(undefined4 *)(param_1 + 0xd1) = 3;
          goto LAB_00a50828;
        }
      }
    }
    else {
      if (local_84 == 0x2a) {
        __s1 = (byte *)(lVar19 + 0xb0a);
LAB_00a50624:
        do {
          uVar9 = (ulong)*__s1;
          if (*__s1 < 0x21) {
            if ((1L << (uVar9 & 0x3f) & 0x100002600U) != 0) {
              __s1 = __s1 + 1;
              goto LAB_00a50624;
            }
            if (uVar9 == 0) goto LAB_00a50820;
          }
          uVar20 = 0;
          while ((0x20 < (uint)uVar9 || ((1L << (uVar9 & 0x3f) & 0x100002601U) == 0))) {
            lVar19 = uVar20 + 1;
            uVar20 = uVar20 + 1;
            uVar9 = (ulong)__s1[lVar19];
          }
          uVar9 = uVar20;
          if (uVar20 == 7) {
            iVar7 = memcmp(__s1,"SASL-IR",7);
            if (iVar7 != 0) goto LAB_00a5071c;
            __s1 = __s1 + 7;
            *(undefined1 *)((long)param_1 + 0x6bf) = 1;
            goto LAB_00a50624;
          }
          if (uVar20 != 0xd) {
            if (uVar20 == 8) {
              if (*(long *)__s1 == 0x534c545452415453) {
                __s1 = __s1 + 8;
                *(undefined1 *)((long)param_1 + 0x6bd) = 1;
                goto LAB_00a50624;
              }
LAB_00a5071c:
              iVar7 = memcmp(__s1,"AUTH=",5);
              if (iVar7 == 0) {
                __s1 = __s1 + 5;
                uVar9 = uVar20 - 5;
                uVar13 = FUN_00a57a80(__s1,uVar9,&local_80);
                if ((uVar13 != 0) && (CONCAT44(local_80._4_4_,(int)local_80) + 5U == uVar20)) {
                  *(uint *)((long)param_1 + 0x69c) = *(uint *)((long)param_1 + 0x69c) | uVar13;
                }
              }
            }
            else if (5 < uVar20) goto LAB_00a5071c;
            __s1 = __s1 + uVar9;
            goto LAB_00a50624;
          }
          iVar7 = memcmp(__s1,"LOGINDISABLED",0xd);
          if (iVar7 != 0) goto LAB_00a5071c;
          __s1 = __s1 + 0xd;
          *(undefined1 *)((long)param_1 + 0x6be) = 1;
        } while( true );
      }
LAB_00a50934:
      iVar7 = FUN_00a519c4(param_1);
joined_r0x00a50eac:
      if (iVar7 == 0) goto LAB_00a50820;
    }
    goto LAB_00a51138;
  case 3:
    if (local_84 == 0x4f) {
      iVar7 = FUN_00a2d674(param_1,0,(char *)((long)param_1 + 0x68c));
      if (iVar7 == 0) {
        if ((int)param_1[0xd1] != 4) {
          *(undefined4 *)(param_1 + 0xd1) = 4;
        }
        if (*(char *)((long)param_1 + 0x68c) == '\0') goto LAB_00a50820;
        param_1[0x80] = (long)&PTR_s_IMAPS_016a4110;
        *(undefined1 *)(param_1 + 0x77) = 1;
LAB_00a507cc:
        *(undefined4 *)((long)param_1 + 0x69c) = 0;
        *(undefined4 *)((long)param_1 + 0x6a4) = 0;
        *(undefined1 *)((long)param_1 + 0x6bd) = 0;
        iVar7 = FUN_00a51878(param_1,"CAPABILITY");
        if (iVar7 == 0) {
          *(undefined4 *)(param_1 + 0xd1) = 2;
          goto LAB_00a50828;
        }
      }
    }
    else {
      if (*(int *)(*param_1 + 0x630) == 1) goto LAB_00a50934;
      FUN_00a38a08(*param_1,"STARTTLS denied. %c",local_84);
                    /* try { // try from 00a51230 to 00b51253 has its CatchHandler @ 00a51390 */
      iVar7 = 0x40;
    }
    goto LAB_00a51138;
  case 5:
    lVar19 = *param_1;
    iVar7 = FUN_00a586a0(param_1 + 0xd2,param_1,local_84,&local_80);
    if (iVar7 != 0) goto joined_r0x00a50d18;
    if ((int)local_80 != 0) {
      if ((int)local_80 == 2) goto LAB_00a50914;
      goto LAB_00a50820;
    }
    if ((*(char *)((long)param_1 + 0x6be) != '\0') || ((*(byte *)(param_1 + 0xd6) & 1) == 0)) {
      pcVar21 = "Authentication cancelled";
      goto LAB_00a50a84;
    }
    uVar13 = (uint)*(byte *)(param_1 + 0x78);
    if (*(byte *)(param_1 + 0x78) != 0) {
      pcVar21 = (char *)param_1[0x43];
      if (pcVar21 != (char *)0x0) {
        lVar15 = 0;
        lVar19 = 0;
        bVar6 = false;
        pcVar11 = pcVar21;
        while( true ) {
          while( true ) {
            for (; cVar17 = *pcVar11, cVar17 == '\"'; pcVar11 = pcVar11 + 1) {
              lVar19 = lVar19 + 1;
            }
            if (cVar17 != '\\') break;
            lVar15 = lVar15 + 1;
            pcVar11 = pcVar11 + 1;
          }
          if (cVar17 == '\0') break;
          if (bVar6) {
            bVar6 = true;
            pcVar11 = pcVar11 + 1;
          }
          else {
            cVar18 = '(';
            pcVar10 = "(){ %*]";
            do {
              pcVar10 = pcVar10 + 1;
              bVar6 = cVar17 == cVar18;
              cVar18 = *pcVar10;
                    /* try { // try from 00a50c8c to 00b50ccf has its CatchHandler @ 00a50c8c
                       catch() { ... } // from try @ 00a50c8c with catch @ 00a50c8c
                       catch() { ... } // from try @ 00a50e9c with catch @ 00a50c8c
                       catch() { ... } // from try @ 00a50f1c with catch @ 00a50c8c */
              if (bVar6) break;
            } while (cVar18 != '\0');
            pcVar11 = pcVar11 + 1;
          }
        }
        if (!bVar6 && (lVar19 == 0 && lVar15 == 0)) {
          pcVar11 = (char *)(*(code *)PTR_strdup_01769a10)(pcVar21);
          pcVar21 = (char *)param_1[0x44];
          goto joined_r0x00a50f64;
        }
        sVar8 = strlen(pcVar21);
        lVar3 = 2;
        if (!bVar6) {
          lVar3 = 0;
        }
        lVar19 = lVar19 + lVar15 + lVar3 + sVar8;
                    /* try { // try from 00a50e34 to 00b50e4b has its CatchHandler @ 00a50f40 */
        pcVar11 = (char *)(*(code *)PTR_malloc_017699f8)(lVar19 + 1);
        if (pcVar11 != (char *)0x0) {
          pcVar10 = pcVar11;
          if (bVar6) {
            pcVar10 = pcVar11 + 1;
            *pcVar11 = '\"';
            pcVar11[lVar19 + -1] = '\"';
          }
          do {
            cVar17 = *pcVar21;
            if ((cVar17 == '\"') || (cVar17 == '\\')) {
                    /* try { // try from 00a50e84 to 00b50e9b has its CatchHandler @ 00a50f3c */
              pcVar14 = pcVar10 + 1;
              *pcVar10 = '\\';
              cVar17 = *pcVar21;
            }
            else {
              pcVar14 = pcVar10;
              if (cVar17 == '\0') goto LAB_00a50f5c;
            }
            *pcVar14 = cVar17;
            pcVar21 = pcVar21 + 1;
            pcVar10 = pcVar14 + 1;
          } while( true );
        }
        goto LAB_00a50f60;
      }
      pcVar11 = (char *)0x0;
      pcVar21 = (char *)param_1[0x44];
      goto joined_r0x00a50f64;
    }
    goto LAB_00a51124;
  case 6:
    if (local_84 != 0x4f) {
                    /* try { // try from 00a51184 to 00b5118b has its CatchHandler @ 00a51398 */
                    /* try { // try from 00a51194 to 00b511a7 has its CatchHandler @ 00a51374 */
      FUN_00a38a08(*param_1,"Access denied. %c",local_84);
      iVar7 = 0x43;
      goto LAB_00a51138;
    }
    break;
  case 7:
  case 0xd:
    lVar19 = *param_1;
    pcVar21 = (char *)(lVar19 + 0xb08);
    sVar8 = strlen(pcVar21);
    if (uVar13 == 0x2a) {
      lVar19 = lVar19 + sVar8;
      *(undefined1 *)(lVar19 + 0xb08) = 10;
      iVar7 = FUN_00a391f0(param_1,1,pcVar21,sVar8 + 1);
      *(undefined1 *)(lVar19 + 0xb08) = 0;
      goto joined_r0x00a50eac;
    }
    if (uVar13 != 0x4f) {
                    /* try { // try from 00a51174 to 00b51183 has its CatchHandler @ 00a51378 */
      iVar7 = 0x15;
      goto LAB_00a51138;
    }
    break;
  case 8:
    lVar19 = *param_1;
    if (local_84 != 0x4f) {
      if (local_84 == 0x2a) {
        iVar7 = sscanf((char *)(lVar19 + 0xb0a),"OK [UIDVALIDITY %19[0123456789]]",&local_80);
        if (iVar7 == 1) {
          (*(code *)PTR_free_01769a00)(param_1[0xd9]);
          param_1[0xd9] = 0;
          lVar19 = (*(code *)PTR_strdup_01769a10)(&local_80);
          param_1[0xd9] = lVar19;
        }
        goto LAB_00a50820;
      }
      pcVar21 = "Select failed";
LAB_00a50a84:
      FUN_00a38a08(lVar19,pcVar21);
      iVar7 = 0x43;
      goto LAB_00a51138;
    }
    lVar15 = *(long *)(lVar19 + 0x218);
    if (((*(char **)(lVar15 + 0x10) != (char *)0x0) && ((char *)param_1[0xd9] != (char *)0x0)) &&
       (iVar7 = strcmp(*(char **)(lVar15 + 0x10),(char *)param_1[0xd9]), iVar7 != 0)) {
      FUN_00a38a08(lVar19,"Mailbox UIDVALIDITY has changed");
      iVar7 = 0x4e;
      goto LAB_00a51138;
    }
    lVar19 = (*(code *)PTR_strdup_01769a10)(*(undefined8 *)(lVar15 + 8));
    param_1[0xd8] = lVar19;
    if (*(long *)(lVar15 + 0x38) != 0) {
      lVar19 = *(long *)(*param_1 + 0x218);
      if (*(long *)(lVar19 + 0x38) == 0) {
        pcVar21 = *(char **)(lVar19 + 8);
        if (pcVar21 != (char *)0x0) {
          lVar19 = 0;
          lVar15 = 0;
          pcVar11 = pcVar21;
LAB_00a50b2c:
          for (; cVar17 = *pcVar11, cVar17 == '\"'; pcVar11 = pcVar11 + 1) {
            lVar15 = lVar15 + 1;
                    /* try { // try from 00a50b50 to 00b50b67 has its CatchHandler @ 00a50bfc */
          }
          if (cVar17 == '\\') {
                    /* try { // try from 00a50b24 to 00b50b37 has its CatchHandler @ 00a50c00 */
            lVar19 = lVar19 + 1;
          }
          else if (cVar17 == '\0') goto LAB_00a50b54;
          pcVar11 = pcVar11 + 1;
          goto LAB_00a50b2c;
        }
        pcVar21 = "";
        goto LAB_00a50cd0;
      }
      puVar2 = &DAT_013c996e;
      if (*(undefined1 **)(lVar19 + 0x40) != (undefined1 *)0x0) {
        puVar2 = *(undefined1 **)(lVar19 + 0x40);
      }
      iVar7 = FUN_00a51878(param_1,"%s%s",*(long *)(lVar19 + 0x38),puVar2);
      goto joined_r0x00a50d0c;
    }
    lVar19 = *(long *)(*param_1 + 0x218);
                    /* try { // try from 00a50aa0 to 00b50aef has its CatchHandler @ 00a50aa0
                       catch() { ... } // from try @ 00a50aa0 with catch @ 00a50aa0
                       catch() { ... } // from try @ 00a50b84 with catch @ 00a50aa0 */
    if (*(long *)(lVar15 + 0x30) == 0) {
      lVar15 = *(long *)(lVar19 + 0x18);
      if (lVar15 != 0) {
        puVar2 = *(undefined1 **)(lVar19 + 0x20);
        if (*(undefined1 **)(lVar19 + 0x20) == (undefined1 *)0x0) {
          puVar2 = &DAT_013c996e;
        }
        if (*(long *)(lVar19 + 0x28) == 0) {
          iVar7 = FUN_00a51878(param_1,"FETCH %s BODY[%s]",lVar15,puVar2);
                    /* try { // try from 00a50e9c to 00b50efb has its CatchHandler @ 00a50c8c */
        }
        else {
          iVar7 = FUN_00a51878(param_1,"FETCH %s BODY[%s]<%s>",lVar15,puVar2);
                    /* catch() { ... } // from try @ 00a50b6c with catch @ 00a50bf8 */
        }
        if (iVar7 == 0) {
          *(undefined4 *)(param_1 + 0xd1) = 9;
          goto joined_r0x00a50eac;
        }
        goto joined_r0x00a50d18;
      }
      pcVar21 = "Cannot FETCH without a UID.";
LAB_00a50d34:
      FUN_00a38a08(*param_1,pcVar21);
      iVar7 = 3;
      goto LAB_00a51138;
    }
    if (*(long *)(lVar19 + 0x30) == 0) {
      pcVar21 = "Cannot SEARCH without a query string.";
      goto LAB_00a50d34;
    }
    iVar7 = FUN_00a51878(param_1,"SEARCH %s");
    if (iVar7 == 0) {
      *(undefined4 *)(param_1 + 0xd1) = 0xd;
      goto LAB_00a50820;
    }
    goto joined_r0x00a50d18;
  case 9:
    lVar19 = *param_1;
    if (local_84 == 0x2a) {
      pcVar21 = (char *)(lVar19 + 0xb08);
      cVar17 = *pcVar21;
      if (cVar17 != '\0') {
        while (cVar17 != '{') {
          pcVar21 = pcVar21 + 1;
          cVar17 = *pcVar21;
          if (cVar17 == '\0') goto LAB_00a50a40;
        }
        uVar9 = strtol(pcVar21 + 1,(char **)&local_80,10);
        pcVar11 = (char *)CONCAT44(local_80._4_4_,(int)local_80);
        if ((((1 < (long)pcVar11 - (long)pcVar21) && (*pcVar11 == '}')) && (pcVar11[1] == '\r')) &&
           (pcVar11[2] == '\0')) {
                    /* try { // try from 00a50d4c to 00b50d63 has its CatchHandler @ 00a50f74 */
          FUN_00a38740(lVar19,"Found %lu bytes to download\n",uVar9);
          FUN_00a30eac(lVar19,uVar9);
          if (param_1[0xc3] != 0) {
                    /* try { // try from 00a50d70 to 00b50d87 has its CatchHandler @ 00a50f50 */
            uVar20 = uVar9;
            if ((ulong)param_1[0xc4] <= uVar9) {
              uVar20 = param_1[0xc4];
            }
            iVar7 = FUN_00a391f0(param_1,1);
                    /* try { // try from 00a50d8c to 00b50da3 has its CatchHandler @ 00a50f34 */
            if (iVar7 != 0) goto LAB_00a51138;
                    /* try { // try from 00a50db0 to 00b50ddb has its CatchHandler @ 00a50f30 */
            *(long *)(lVar19 + 0x98) = *(long *)(lVar19 + 0x98) + uVar20;
            FUN_00a38740(lVar19,"Written %lu bytes, %lu bytes are left for transfer\n",uVar20,
                         uVar9 - uVar20);
            sVar8 = param_1[0xc4] - uVar20;
            if ((ulong)param_1[0xc4] < uVar20 || sVar8 == 0) {
                    /* try { // try from 00a50efc to 00b50f03 has its CatchHandler @ 00a50f38 */
              (*(code *)PTR_free_01769a00)(param_1[0xc3]);
              lVar15 = 0;
              param_1[0xc3] = 0;
            }
            else {
              memmove((void *)param_1[0xc3],(void *)(param_1[0xc3] + uVar20),sVar8);
              lVar15 = param_1[0xc4] - uVar20;
            }
            param_1[0xc4] = lVar15;
          }
                    /* try { // try from 00a50f14 to 00b50f1b has its CatchHandler @ 00a50f30 */
                    /* try { // try from 00a50f1c to 00b50f93 has its CatchHandler @ 00a50c8c */
          if (*(ulong *)(lVar19 + 0x98) == uVar9) {
            uVar12 = 0xffffffff;
            uVar9 = 0xffffffffffffffff;
                    /* catch() { ... } // from try @ 00a50db0 with catch @ 00a50f30
                       catch() { ... } // from try @ 00a50f14 with catch @ 00a50f30 */
          }
          else {
                    /* catch() { ... } // from try @ 00a50d8c with catch @ 00a50f34 */
            *(ulong *)(lVar19 + 0x88) = uVar9;
                    /* catch() { ... } // from try @ 00a50d10 with catch @ 00a50f38
                       catch() { ... } // from try @ 00a50efc with catch @ 00a50f38 */
                    /* catch() { ... } // from try @ 00a50e84 with catch @ 00a50f3c */
                    /* catch() { ... } // from try @ 00a50e34 with catch @ 00a50f40 */
            uVar12 = 0;
          }
                    /* catch() { ... } // from try @ 00a50d70 with catch @ 00a50f50 */
                    /* catch() { ... } // from try @ 00a50cf4 with catch @ 00a50f54 */
          FUN_00a49fc0(param_1,uVar12,uVar9,0,0,0xffffffff,0);
LAB_00a50914:
          *(undefined4 *)(param_1 + 0xd1) = 0;
          goto LAB_00a50820;
        }
      }
LAB_00a50a40:
      FUN_00a38a08(*(undefined8 *)param_1[0xce],"Failed to parse FETCH response.");
      iVar7 = 8;
      *(undefined4 *)(param_1 + 0xd1) = 0;
    }
    else {
      FUN_00a30eac(lVar19,0xffffffffffffffff);
      iVar7 = 0x4e;
      *(undefined4 *)(param_1 + 0xd1) = 0;
    }
    goto LAB_00a51138;
  case 10:
    if (local_84 != 0x4f) goto LAB_00a511a8;
    break;
  case 0xb:
    if (local_84 != 0x2b) {
LAB_00a51200:
      iVar7 = 0x19;
      goto LAB_00a51138;
    }
                    /* try { // try from 00a511c0 to 00b511d7 has its CatchHandler @ 00a513b4 */
    FUN_00a30ed8(*param_1,*(undefined8 *)(*param_1 + 0x8cf8));
    FUN_00a49fc0(param_1,0xffffffff,0xffffffffffffffff,0,0,0,0);
    break;
  case 0xc:
                    /* try { // try from 00a511f0 to 00b51207 has its CatchHandler @ 00a513b0 */
    if (local_84 != 0x4f) goto LAB_00a51200;
  }
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0;
  goto LAB_00a51138;
LAB_00a50b54:
  if (lVar15 != 0 || lVar19 != 0) {
    sVar8 = strlen(pcVar21);
                    /* try { // try from 00a50b6c to 00b50b83 has its CatchHandler @ 00a50bf8 */
    lVar19 = lVar15 + lVar19 + sVar8;
    pcVar10 = (char *)(*(code *)PTR_malloc_017699f8)(lVar19 + 1);
                    /* try { // try from 00a50b84 to 00b50c1f has its CatchHandler @ 00a50aa0 */
    pcVar11 = pcVar10;
    if (pcVar10 != (char *)0x0) {
      do {
        cVar17 = *pcVar21;
        if ((cVar17 == '\"') || (cVar17 == '\\')) {
          pcVar14 = pcVar11 + 1;
          *pcVar11 = '\\';
          cVar17 = *pcVar21;
        }
        else {
          pcVar14 = pcVar11;
          if (cVar17 == '\0') goto LAB_00a50cbc;
        }
        *pcVar14 = cVar17;
        pcVar21 = pcVar21 + 1;
        pcVar11 = pcVar14 + 1;
      } while( true );
    }
LAB_00a50d20:
    iVar7 = 0x1b;
    goto LAB_00a51138;
  }
LAB_00a50cd0:
                    /* try { // try from 00a50cd0 to 00b50ce7 has its CatchHandler @ 00a50f78 */
  pcVar10 = (char *)(*(code *)PTR_strdup_01769a10)(pcVar21);
  if (pcVar10 == (char *)0x0) goto LAB_00a50d20;
  goto LAB_00a50ce0;
LAB_00a50cbc:
  pcVar10[lVar19] = '\0';
LAB_00a50ce0:
  iVar7 = FUN_00a51878(param_1,&DAT_013c86e6,pcVar10);
                    /* try { // try from 00a50cf4 to 00b50d0b has its CatchHandler @ 00a50f54 */
  (*(code *)PTR_free_01769a00)(pcVar10);
joined_r0x00a50d0c:
  if (iVar7 == 0) {
                    /* try { // try from 00a50d10 to 00b50d3f has its CatchHandler @ 00a50f38 */
    *(undefined4 *)(param_1 + 0xd1) = 7;
  }
  goto joined_r0x00a50d18;
LAB_00a50f5c:
  pcVar11[lVar19] = '\0';
LAB_00a50f60:
  pcVar21 = (char *)param_1[0x44];
joined_r0x00a50f64:
  if (pcVar21 == (char *)0x0) {
    pcVar10 = (char *)0x0;
  }
  else {
    lVar15 = 0;
    lVar19 = 0;
                    /* catch() { ... } // from try @ 00a50d4c with catch @ 00a50f74 */
    bVar6 = false;
                    /* catch() { ... } // from try @ 00a50cd0 with catch @ 00a50f78 */
    pcVar10 = pcVar21;
    while( true ) {
      while( true ) {
                    /* try { // try from 00a50f94 to 00b50feb has its CatchHandler @ 00a50f94
                       catch() { ... } // from try @ 00a50f94 with catch @ 00a50f94
                       catch() { ... } // from try @ 00a50ff0 with catch @ 00a50f94 */
        for (; cVar17 = *pcVar10, cVar17 == '\"'; pcVar10 = pcVar10 + 1) {
          lVar19 = lVar19 + 1;
        }
        if (cVar17 != '\\') break;
        lVar15 = lVar15 + 1;
        pcVar10 = pcVar10 + 1;
      }
      if (cVar17 == '\0') break;
      if (bVar6) {
        bVar6 = true;
        pcVar10 = pcVar10 + 1;
      }
      else {
        cVar18 = '(';
        pcVar14 = "(){ %*]";
        do {
          pcVar14 = pcVar14 + 1;
          bVar6 = cVar17 == cVar18;
          cVar18 = *pcVar14;
          if (bVar6) break;
        } while (cVar18 != '\0');
        pcVar10 = pcVar10 + 1;
      }
    }
                    /* try { // try from 00a50fec to 00b50fef has its CatchHandler @ 00a51054 */
                    /* try { // try from 00a50ff0 to 00b5106f has its CatchHandler @ 00a50f94 */
    if (bVar6 || (lVar19 != 0 || lVar15 != 0)) {
      sVar8 = strlen(pcVar21);
      lVar3 = 2;
      if (!bVar6) {
        lVar3 = 0;
      }
      lVar19 = lVar19 + lVar15 + lVar3 + sVar8;
      pcVar10 = (char *)(*(code *)PTR_malloc_017699f8)(lVar19 + 1);
      if (pcVar10 != (char *)0x0) {
        pcVar14 = pcVar10;
        if (bVar6) {
                    /* catch() { ... } // from try @ 00a50fec with catch @ 00a51054 */
          pcVar14 = pcVar10 + 1;
          *pcVar10 = '\"';
          pcVar10[lVar19 + -1] = '\"';
        }
        do {
          cVar17 = *pcVar21;
          if ((cVar17 == '\"') || (cVar17 == '\\')) {
            pcVar16 = pcVar14 + 1;
            *pcVar14 = '\\';
            cVar17 = *pcVar21;
          }
          else {
            pcVar16 = pcVar14;
            if (cVar17 == '\0') goto LAB_00a510bc;
          }
          *pcVar16 = cVar17;
                    /* try { // try from 00a51070 to 00b510bf has its CatchHandler @ 00a51070
                       catch() { ... } // from try @ 00a51070 with catch @ 00a51070
                       catch() { ... } // from try @ 00a510c4 with catch @ 00a51070
                       catch() { ... } // from try @ 00a51290 with catch @ 00a51070 */
          pcVar21 = pcVar21 + 1;
          pcVar14 = pcVar16 + 1;
        } while( true );
      }
    }
    else {
      pcVar10 = (char *)(*(code *)PTR_strdup_01769a10)(pcVar21);
    }
  }
LAB_00a510c0:
                    /* try { // try from 00a510c0 to 00b510c3 has its CatchHandler @ 00a513dc */
                    /* try { // try from 00a510c4 to 00b510f7 has its CatchHandler @ 00a51070 */
  pcVar21 = pcVar11;
  if (pcVar11 == (char *)0x0) {
    pcVar21 = "";
  }
  pcVar14 = pcVar10;
  if (pcVar10 == (char *)0x0) {
    pcVar14 = "";
  }
  iVar7 = FUN_00a51878(param_1,"LOGIN %s %s",pcVar21,pcVar14);
                    /* try { // try from 00a510f8 to 00b5110f has its CatchHandler @ 00a513c8 */
  (*(code *)PTR_free_01769a00)(pcVar11);
  (*(code *)PTR_free_01769a00)(pcVar10);
  if (iVar7 == 0) {
    uVar13 = 6;
LAB_00a51124:
                    /* try { // try from 00a51128 to 00b5113f has its CatchHandler @ 00a513b8 */
    *(uint *)(param_1 + 0xd1) = uVar13;
  }
  else {
joined_r0x00a50d18:
    if (iVar7 != 0) goto LAB_00a51138;
  }
LAB_00a50820:
  if ((int)param_1[0xd1] == 0) goto LAB_00a51134;
LAB_00a50828:
  uVar9 = FUN_00a54bc8(plVar1);
  if ((uVar9 & 1) == 0) goto LAB_00a51134;
  goto LAB_00a50568;
LAB_00a510bc:
  pcVar10[lVar19] = '\0';
  goto LAB_00a510c0;
}

