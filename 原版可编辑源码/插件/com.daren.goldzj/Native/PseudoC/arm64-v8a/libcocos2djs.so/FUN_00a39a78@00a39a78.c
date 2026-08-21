
/* WARNING: Removing unreachable block (ram,0x00a39f38) */
/* WARNING: Removing unreachable block (ram,0x00a3a748) */
/* WARNING: Removing unreachable block (ram,0x00a39fb0) */
/* WARNING: Removing unreachable block (ram,0x00a39eb8) */
/* WARNING: Removing unreachable block (ram,0x00a3a0e8) */
/* WARNING: Type propagation algorithm not settling */

int FUN_00a39a78(long *param_1)

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
  
                    /* catch() { ... } // from try @ 00a398ac with catch @ 00a39a80 */
                    /* catch() { ... } // from try @ 00a398a0 with catch @ 00a39a84 */
                    /* catch() { ... } // from try @ 00a39880 with catch @ 00a39a88 */
                    /* catch() { ... } // from try @ 00a398b8 with catch @ 00a39a98 */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar5 = param_1[0x4c];
  local_90 = 0;
  if ((int)param_1[0xd1] == 4) {
    iVar7 = FUN_00a17c8c(param_1,0,(char *)((long)param_1 + 0x68c));
    if (iVar7 == 0) {
      if ((int)param_1[0xd1] != 4) {
        *(undefined4 *)(param_1 + 0xd1) = 4;
      }
                    /* try { // try from 00a39af0 to 00b39b3f has its CatchHandler @ 00a39af0
                       catch() { ... } // from try @ 00a39af0 with catch @ 00a39af0
                       catch() { ... } // from try @ 00a39bf8 with catch @ 00a39af0 */
      if (*(char *)((long)param_1 + 0x68c) == '\0') {
LAB_00a3a74c:
        iVar7 = 0;
      }
      else {
        *(undefined4 *)((long)param_1 + 0x69c) = 0;
        *(undefined4 *)((long)param_1 + 0x6a4) = 0;
        param_1[0x80] = (long)&PTR_s_IMAPS_01c6d940;
        *(undefined1 *)(param_1 + 0x77) = 1;
        *(undefined1 *)((long)param_1 + 0x6bd) = 0;
        iVar7 = FUN_00a3ae90(param_1,"CAPABILITY");
        if (iVar7 == 0) {
          *(undefined4 *)(param_1 + 0xd1) = 2;
        }
      }
    }
LAB_00a3a750:
                    /* try { // try from 00a3a758 to 00b3a7ab has its CatchHandler @ 00a3a758
                       catch() { ... } // from try @ 00a3a758 with catch @ 00a3a758
                       catch() { ... } // from try @ 00a3a914 with catch @ 00a3a758 */
    if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return iVar7;
  }
  plVar1 = param_1 + 0xc3;
                    /* try { // try from 00a39b40 to 00b39b57 has its CatchHandler @ 00a39cc0 */
  if (param_1[0xc9] != 0) {
    iVar7 = FUN_00a3e704(plVar1);
    goto LAB_00a3a750;
  }
                    /* try { // try from 00a39b6c to 00b39b7f has its CatchHandler @ 00a39cbc */
LAB_00a39b80:
                    /* try { // try from 00a39b80 to 00b39b8f has its CatchHandler @ 00a39c90 */
  iVar7 = FUN_00a3e418((int)lVar5,plVar1,&local_84,&local_90);
  uVar13 = local_84;
  if (iVar7 != 0) goto LAB_00a3a750;
  if (local_84 == 0xffffffff) {
LAB_00a3a7c0:
    iVar7 = 8;
    goto LAB_00a3a750;
  }
                    /* try { // try from 00a39ba8 to 00b39baf has its CatchHandler @ 00a39c74 */
  iVar7 = 0;
  if (local_84 == 0) goto LAB_00a3a750;
                    /* try { // try from 00a39bb0 to 00b39bbf has its CatchHandler @ 00a39ca4 */
                    /* try { // try from 00a39bc0 to 00b39bc7 has its CatchHandler @ 00a39c8c */
  switch((int)param_1[0xd1]) {
  case 1:
    if (local_84 == 0x4f) goto LAB_00a39de4;
    FUN_00a23020(*param_1,"Got unexpected imap-server response");
    iVar7 = 8;
    goto LAB_00a3a750;
  case 2:
    lVar19 = *param_1;
    if (local_84 == 0x4f) {
      if ((*(int *)(lVar19 + 0x630) == 0) || ((char)param_1[0x53] != '\0')) goto LAB_00a39f4c;
      if (*(char *)((long)param_1 + 0x6bd) == '\0') {
        if (*(int *)(lVar19 + 0x630) == 1) goto LAB_00a39f4c;
        FUN_00a23020(lVar19,"STARTTLS not supported.");
        iVar7 = 0x40;
      }
      else {
        iVar7 = FUN_00a3ae90(param_1,"STARTTLS");
                    /* try { // try from 00a3a108 to 00b3a1eb has its CatchHandler @ 00a39f28 */
        if (iVar7 == 0) {
          *(undefined4 *)(param_1 + 0xd1) = 3;
          goto LAB_00a39e40;
        }
      }
    }
    else {
      if (local_84 == 0x2a) {
        __s1 = (byte *)(lVar19 + 0xb0a);
LAB_00a39c3c:
        do {
          uVar9 = (ulong)*__s1;
          if (*__s1 < 0x21) {
            if ((1L << (uVar9 & 0x3f) & 0x100002600U) != 0) {
              __s1 = __s1 + 1;
              goto LAB_00a39c3c;
            }
            if (uVar9 == 0) goto LAB_00a39e38;
          }
          uVar20 = 0;
                    /* catch() { ... } // from try @ 00a39ba8 with catch @ 00a39c74 */
          while ((0x20 < (uint)uVar9 || ((1L << (uVar9 & 0x3f) & 0x100002601U) == 0))) {
            lVar19 = uVar20 + 1;
            uVar20 = uVar20 + 1;
            uVar9 = (ulong)__s1[lVar19];
          }
                    /* catch() { ... } // from try @ 00a39bc0 with catch @ 00a39c8c */
          uVar9 = uVar20;
                    /* catch() { ... } // from try @ 00a39b80 with catch @ 00a39c90 */
          if (uVar20 == 7) {
            iVar7 = memcmp(__s1,"SASL-IR",7);
            if (iVar7 != 0) goto LAB_00a39d34;
            __s1 = __s1 + 7;
            *(undefined1 *)((long)param_1 + 0x6bf) = 1;
            goto LAB_00a39c3c;
          }
                    /* catch() { ... } // from try @ 00a39bc8 with catch @ 00a39c94 */
          if (uVar20 != 0xd) {
            if (uVar20 == 8) {
                    /* catch() { ... } // from try @ 00a39bb0 with catch @ 00a39ca4 */
                    /* catch() { ... } // from try @ 00a39b6c with catch @ 00a39cbc */
              if (*(long *)__s1 == 0x534c545452415453) {
                    /* catch() { ... } // from try @ 00a39b40 with catch @ 00a39cc0 */
                __s1 = __s1 + 8;
                *(undefined1 *)((long)param_1 + 0x6bd) = 1;
                goto LAB_00a39c3c;
              }
LAB_00a39d34:
              iVar7 = memcmp(__s1,"AUTH=",5);
              if (iVar7 == 0) {
                __s1 = __s1 + 5;
                uVar9 = uVar20 - 5;
                    /* try { // try from 00a39d54 to 00b39d6b has its CatchHandler @ 00a39d9c */
                uVar13 = FUN_00a41098(__s1,uVar9,&local_80);
                    /* try { // try from 00a39d6c to 00b39daf has its CatchHandler @ 00a39d10 */
                if ((uVar13 != 0) && (CONCAT44(local_80._4_4_,(int)local_80) + 5U == uVar20)) {
                  *(uint *)((long)param_1 + 0x69c) = *(uint *)((long)param_1 + 0x69c) | uVar13;
                }
              }
            }
            else if (5 < uVar20) goto LAB_00a39d34;
            __s1 = __s1 + uVar9;
            goto LAB_00a39c3c;
          }
                    /* try { // try from 00a39d10 to 00b39d53 has its CatchHandler @ 00a39d10
                       catch() { ... } // from try @ 00a39d10 with catch @ 00a39d10
                       catch() { ... } // from try @ 00a39d6c with catch @ 00a39d10 */
          iVar7 = memcmp(__s1,"LOGINDISABLED",0xd);
          if (iVar7 != 0) goto LAB_00a39d34;
          __s1 = __s1 + 0xd;
          *(undefined1 *)((long)param_1 + 0x6be) = 1;
        } while( true );
      }
LAB_00a39f4c:
      iVar7 = FUN_00a3afdc(param_1);
joined_r0x00a3a4c4:
      if (iVar7 == 0) goto LAB_00a39e38;
    }
    goto LAB_00a3a750;
  case 3:
    if (local_84 == 0x4f) {
                    /* catch() { ... } // from try @ 00a39d54 with catch @ 00a39d9c */
      iVar7 = FUN_00a17c8c(param_1,0,(char *)((long)param_1 + 0x68c));
                    /* catch() { ... } // from try @ 00a39e1c with catch @ 00a39db0 */
      if (iVar7 == 0) {
        if ((int)param_1[0xd1] != 4) {
          *(undefined4 *)(param_1 + 0xd1) = 4;
        }
        if (*(char *)((long)param_1 + 0x68c) == '\0') goto LAB_00a39e38;
        param_1[0x80] = (long)&PTR_s_IMAPS_01c6d940;
        *(undefined1 *)(param_1 + 0x77) = 1;
LAB_00a39de4:
        *(undefined4 *)((long)param_1 + 0x69c) = 0;
        *(undefined4 *)((long)param_1 + 0x6a4) = 0;
        *(undefined1 *)((long)param_1 + 0x6bd) = 0;
        iVar7 = FUN_00a3ae90(param_1,"CAPABILITY");
        if (iVar7 == 0) {
                    /* try { // try from 00a39e0c to 00b39e1b has its CatchHandler @ 00a39f0c */
          *(undefined4 *)(param_1 + 0xd1) = 2;
          goto LAB_00a39e40;
        }
      }
    }
    else {
      if (*(int *)(*param_1 + 0x630) == 1) goto LAB_00a39f4c;
      FUN_00a23020(*param_1,"STARTTLS denied. %c",local_84);
      iVar7 = 0x40;
    }
    goto LAB_00a3a750;
  case 5:
    lVar19 = *param_1;
                    /* try { // try from 00a39e1c to 00b39f27 has its CatchHandler @ 00a39db0 */
    iVar7 = FUN_00a41cb8(param_1 + 0xd2,param_1,local_84,&local_80);
    if (iVar7 != 0) goto joined_r0x00a3a330;
    if ((int)local_80 != 0) {
                    /* try { // try from 00a39f28 to 00b39f7b has its CatchHandler @ 00a39f28
                       catch() { ... } // from try @ 00a39f28 with catch @ 00a39f28
                       catch() { ... } // from try @ 00a3a108 with catch @ 00a39f28 */
      if ((int)local_80 == 2) goto LAB_00a39f2c;
      goto LAB_00a39e38;
    }
    if ((*(char *)((long)param_1 + 0x6be) != '\0') || ((*(byte *)(param_1 + 0xd6) & 1) == 0)) {
      pcVar21 = "Authentication cancelled";
      goto LAB_00a3a09c;
    }
    uVar13 = (uint)*(byte *)(param_1 + 0x78);
    if (*(byte *)(param_1 + 0x78) != 0) {
      pcVar21 = (char *)param_1[0x43];
      if (pcVar21 != (char *)0x0) {
        lVar15 = 0;
        lVar19 = 0;
                    /* try { // try from 00a3a240 to 00b3a257 has its CatchHandler @ 00a3a42c */
        bVar6 = false;
        pcVar11 = pcVar21;
        while( true ) {
          while( true ) {
                    /* try { // try from 00a3a260 to 00b3a26b has its CatchHandler @ 00a3a428 */
            for (; cVar17 = *pcVar11, cVar17 == '\"'; pcVar11 = pcVar11 + 1) {
              lVar19 = lVar19 + 1;
            }
                    /* try { // try from 00a3a26c to 00b3a277 has its CatchHandler @ 00a3a424 */
            if (cVar17 != '\\') break;
            lVar15 = lVar15 + 1;
            pcVar11 = pcVar11 + 1;
          }
          if (cVar17 == '\0') break;
                    /* try { // try from 00a3a278 to 00b3a3af has its CatchHandler @ 00a3a43c */
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
              if (bVar6) break;
            } while (cVar18 != '\0');
            pcVar11 = pcVar11 + 1;
          }
        }
        if (!bVar6 && (lVar19 == 0 && lVar15 == 0)) {
                    /* try { // try from 00a3a4e8 to 00b3a4ff has its CatchHandler @ 00a3a6f0 */
          pcVar11 = (char *)(*(code *)PTR_strdup_01d1b758)(pcVar21);
          pcVar21 = (char *)param_1[0x44];
          goto joined_r0x00a3a57c;
        }
        sVar8 = strlen(pcVar21);
                    /* catch() { ... } // from try @ 00a3a26c with catch @ 00a3a424 */
                    /* catch() { ... } // from try @ 00a3a260 with catch @ 00a3a428 */
                    /* catch() { ... } // from try @ 00a3a240 with catch @ 00a3a42c */
        lVar3 = 2;
        if (!bVar6) {
          lVar3 = 0;
        }
                    /* catch() { ... } // from try @ 00a3a278 with catch @ 00a3a43c */
        lVar19 = lVar19 + lVar15 + lVar3 + sVar8;
        pcVar11 = (char *)(*(code *)PTR_malloc_01d1b740)(lVar19 + 1);
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
              pcVar14 = pcVar10 + 1;
              *pcVar10 = '\\';
              cVar17 = *pcVar21;
            }
            else {
                    /* try { // try from 00a3a494 to 00b3a4e7 has its CatchHandler @ 00a3a494
                       catch() { ... } // from try @ 00a3a494 with catch @ 00a3a494
                       catch() { ... } // from try @ 00a3a674 with catch @ 00a3a494 */
              pcVar14 = pcVar10;
              if (cVar17 == '\0') goto LAB_00a3a574;
            }
            *pcVar14 = cVar17;
            pcVar21 = pcVar21 + 1;
            pcVar10 = pcVar14 + 1;
          } while( true );
        }
        goto LAB_00a3a578;
      }
      pcVar11 = (char *)0x0;
      pcVar21 = (char *)param_1[0x44];
      goto joined_r0x00a3a57c;
    }
    goto LAB_00a3a73c;
  case 6:
    if (local_84 != 0x4f) {
                    /* try { // try from 00a3a7ac to 00b3a7c3 has its CatchHandler @ 00a3a990 */
      FUN_00a23020(*param_1,"Access denied. %c",local_84);
      iVar7 = 0x43;
      goto LAB_00a3a750;
    }
    break;
  case 7:
  case 0xd:
                    /* try { // try from 00a39bc8 to 00b39bf7 has its CatchHandler @ 00a39c94 */
    lVar19 = *param_1;
    pcVar21 = (char *)(lVar19 + 0xb08);
    sVar8 = strlen(pcVar21);
    if (uVar13 == 0x2a) {
      lVar19 = lVar19 + sVar8;
                    /* try { // try from 00a39bf8 to 00b39d0f has its CatchHandler @ 00a39af0 */
      *(undefined1 *)(lVar19 + 0xb08) = 10;
      iVar7 = FUN_00a23808(param_1,1,pcVar21,sVar8 + 1);
      *(undefined1 *)(lVar19 + 0xb08) = 0;
      goto joined_r0x00a3a4c4;
    }
    if (uVar13 != 0x4f) {
      iVar7 = 0x15;
      goto LAB_00a3a750;
    }
    break;
  case 8:
    lVar19 = *param_1;
    if (local_84 != 0x4f) {
      if (local_84 == 0x2a) {
        iVar7 = sscanf((char *)(lVar19 + 0xb0a),"OK [UIDVALIDITY %19[0123456789]]",&local_80);
        if (iVar7 == 1) {
          (*(code *)PTR_free_01d1b748)(param_1[0xd9]);
          param_1[0xd9] = 0;
          lVar19 = (*(code *)PTR_strdup_01d1b758)(&local_80);
          param_1[0xd9] = lVar19;
        }
        goto LAB_00a39e38;
      }
                    /* try { // try from 00a39f9c to 00b39fa7 has its CatchHandler @ 00a3a180 */
      pcVar21 = "Select failed";
LAB_00a3a09c:
      FUN_00a23020(lVar19,pcVar21);
      iVar7 = 0x43;
      goto LAB_00a3a750;
    }
    lVar15 = *(long *)(lVar19 + 0x218);
    if (((*(char **)(lVar15 + 0x10) != (char *)0x0) && ((char *)param_1[0xd9] != (char *)0x0)) &&
       (iVar7 = strcmp(*(char **)(lVar15 + 0x10),(char *)param_1[0xd9]), iVar7 != 0)) {
                    /* try { // try from 00a39f7c to 00b39f93 has its CatchHandler @ 00a3a184 */
      FUN_00a23020(lVar19,"Mailbox UIDVALIDITY has changed");
      iVar7 = 0x4e;
      goto LAB_00a3a750;
    }
                    /* try { // try from 00a39fb4 to 00b3a107 has its CatchHandler @ 00a3a194 */
    lVar19 = (*(code *)PTR_strdup_01d1b758)(*(undefined8 *)(lVar15 + 8));
    param_1[0xd8] = lVar19;
    if (*(long *)(lVar15 + 0x38) != 0) {
      lVar19 = *(long *)(*param_1 + 0x218);
      if (*(long *)(lVar19 + 0x38) == 0) {
        pcVar21 = *(char **)(lVar19 + 8);
        if (pcVar21 != (char *)0x0) {
          lVar19 = 0;
          lVar15 = 0;
          pcVar11 = pcVar21;
LAB_00a3a144:
          for (; cVar17 = *pcVar11, cVar17 == '\"'; pcVar11 = pcVar11 + 1) {
            lVar15 = lVar15 + 1;
          }
          if (cVar17 == '\\') {
            lVar19 = lVar19 + 1;
          }
          else if (cVar17 == '\0') goto LAB_00a3a16c;
          pcVar11 = pcVar11 + 1;
          goto LAB_00a3a144;
        }
        pcVar21 = "";
        goto LAB_00a3a2e8;
      }
      puVar2 = &DAT_0189703a;
      if (*(undefined1 **)(lVar19 + 0x40) != (undefined1 *)0x0) {
        puVar2 = *(undefined1 **)(lVar19 + 0x40);
      }
      iVar7 = FUN_00a3ae90(param_1,"%s%s",*(long *)(lVar19 + 0x38),puVar2);
      goto joined_r0x00a3a324;
    }
    lVar19 = *(long *)(*param_1 + 0x218);
    if (*(long *)(lVar15 + 0x30) == 0) {
      lVar15 = *(long *)(lVar19 + 0x18);
      if (lVar15 != 0) {
                    /* try { // try from 00a3a1ec to 00b3a23f has its CatchHandler @ 00a3a1ec
                       catch() { ... } // from try @ 00a3a1ec with catch @ 00a3a1ec
                       catch() { ... } // from try @ 00a3a3b0 with catch @ 00a3a1ec */
        puVar2 = *(undefined1 **)(lVar19 + 0x20);
        if (*(undefined1 **)(lVar19 + 0x20) == (undefined1 *)0x0) {
          puVar2 = &DAT_0189703a;
        }
        if (*(long *)(lVar19 + 0x28) == 0) {
          iVar7 = FUN_00a3ae90(param_1,"FETCH %s BODY[%s]",lVar15,puVar2);
        }
        else {
          iVar7 = FUN_00a3ae90(param_1,"FETCH %s BODY[%s]<%s>",lVar15,puVar2);
        }
        if (iVar7 == 0) {
          *(undefined4 *)(param_1 + 0xd1) = 9;
          goto joined_r0x00a3a4c4;
        }
        goto joined_r0x00a3a330;
      }
      pcVar21 = "Cannot FETCH without a UID.";
LAB_00a3a34c:
      FUN_00a23020(*param_1,pcVar21);
      iVar7 = 3;
      goto LAB_00a3a750;
    }
    if (*(long *)(lVar19 + 0x30) == 0) {
      pcVar21 = "Cannot SEARCH without a query string.";
      goto LAB_00a3a34c;
    }
    iVar7 = FUN_00a3ae90(param_1,"SEARCH %s");
    if (iVar7 == 0) {
      *(undefined4 *)(param_1 + 0xd1) = 0xd;
      goto LAB_00a39e38;
    }
    goto joined_r0x00a3a330;
  case 9:
    lVar19 = *param_1;
    if (local_84 == 0x2a) {
      pcVar21 = (char *)(lVar19 + 0xb08);
      cVar17 = *pcVar21;
      if (cVar17 != '\0') {
        while (cVar17 != '{') {
          pcVar21 = pcVar21 + 1;
          cVar17 = *pcVar21;
          if (cVar17 == '\0') goto LAB_00a3a058;
        }
        uVar9 = strtol(pcVar21 + 1,(char **)&local_80,10);
        pcVar11 = (char *)CONCAT44(local_80._4_4_,(int)local_80);
        if ((((1 < (long)pcVar11 - (long)pcVar21) && (*pcVar11 == '}')) && (pcVar11[1] == '\r')) &&
           (pcVar11[2] == '\0')) {
          FUN_00a22d58(lVar19,"Found %lu bytes to download\n",uVar9);
          FUN_00a1b4c4(lVar19,uVar9);
          if (param_1[0xc3] != 0) {
            uVar20 = uVar9;
            if ((ulong)param_1[0xc4] <= uVar9) {
              uVar20 = param_1[0xc4];
            }
            iVar7 = FUN_00a23808(param_1,1);
            if (iVar7 != 0) goto LAB_00a3a750;
                    /* try { // try from 00a3a3b0 to 00b3a493 has its CatchHandler @ 00a3a1ec */
            *(long *)(lVar19 + 0x98) = *(long *)(lVar19 + 0x98) + uVar20;
            FUN_00a22d58(lVar19,"Written %lu bytes, %lu bytes are left for transfer\n",uVar20,
                         uVar9 - uVar20);
            sVar8 = param_1[0xc4] - uVar20;
            if ((ulong)param_1[0xc4] < uVar20 || sVar8 == 0) {
                    /* try { // try from 00a3a508 to 00b3a513 has its CatchHandler @ 00a3a6ec */
                    /* try { // try from 00a3a514 to 00b3a51f has its CatchHandler @ 00a3a6e8 */
              (*(code *)PTR_free_01d1b748)(param_1[0xc3]);
              lVar15 = 0;
                    /* try { // try from 00a3a520 to 00b3a673 has its CatchHandler @ 00a3a700 */
              param_1[0xc3] = 0;
            }
            else {
              memmove((void *)param_1[0xc3],(void *)(param_1[0xc3] + uVar20),sVar8);
              lVar15 = param_1[0xc4] - uVar20;
            }
            param_1[0xc4] = lVar15;
          }
          if (*(ulong *)(lVar19 + 0x98) == uVar9) {
            uVar12 = 0xffffffff;
            uVar9 = 0xffffffffffffffff;
          }
          else {
            *(ulong *)(lVar19 + 0x88) = uVar9;
            uVar12 = 0;
          }
          FUN_00a335d8(param_1,uVar12,uVar9,0,0,0xffffffff,0);
LAB_00a39f2c:
          *(undefined4 *)(param_1 + 0xd1) = 0;
          goto LAB_00a39e38;
        }
      }
LAB_00a3a058:
      FUN_00a23020(*(undefined8 *)param_1[0xce],"Failed to parse FETCH response.");
      iVar7 = 8;
      *(undefined4 *)(param_1 + 0xd1) = 0;
    }
    else {
      FUN_00a1b4c4(lVar19,0xffffffffffffffff);
                    /* catch() { ... } // from try @ 00a39e0c with catch @ 00a39f0c */
      iVar7 = 0x4e;
      *(undefined4 *)(param_1 + 0xd1) = 0;
    }
    goto LAB_00a3a750;
  case 10:
    if (local_84 != 0x4f) goto LAB_00a3a7c0;
    break;
  case 0xb:
                    /* try { // try from 00a3a7cc to 00b3a7d7 has its CatchHandler @ 00a3a98c */
    if (local_84 != 0x2b) {
LAB_00a3a818:
      iVar7 = 0x19;
      goto LAB_00a3a750;
    }
                    /* try { // try from 00a3a7d8 to 00b3a7e3 has its CatchHandler @ 00a3a988 */
    FUN_00a1b4f0(*param_1,*(undefined8 *)(*param_1 + 0x8cf8));
                    /* try { // try from 00a3a7e4 to 00b3a913 has its CatchHandler @ 00a3a9a0 */
    FUN_00a335d8(param_1,0xffffffff,0xffffffffffffffff,0,0,0,0);
    break;
  case 0xc:
    if (local_84 != 0x4f) goto LAB_00a3a818;
  }
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0;
  goto LAB_00a3a750;
LAB_00a3a16c:
  if (lVar15 != 0 || lVar19 != 0) {
    sVar8 = strlen(pcVar21);
                    /* catch() { ... } // from try @ 00a39fa8 with catch @ 00a3a17c */
                    /* catch() { ... } // from try @ 00a39f9c with catch @ 00a3a180 */
                    /* catch() { ... } // from try @ 00a39f7c with catch @ 00a3a184 */
    lVar19 = lVar15 + lVar19 + sVar8;
                    /* catch() { ... } // from try @ 00a39fb4 with catch @ 00a3a194 */
    pcVar10 = (char *)(*(code *)PTR_malloc_01d1b740)(lVar19 + 1);
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
          if (cVar17 == '\0') goto LAB_00a3a2d4;
        }
        *pcVar14 = cVar17;
        pcVar21 = pcVar21 + 1;
        pcVar11 = pcVar14 + 1;
      } while( true );
    }
LAB_00a3a338:
    iVar7 = 0x1b;
    goto LAB_00a3a750;
  }
LAB_00a3a2e8:
  pcVar10 = (char *)(*(code *)PTR_strdup_01d1b758)(pcVar21);
  if (pcVar10 == (char *)0x0) goto LAB_00a3a338;
  goto LAB_00a3a2f8;
LAB_00a3a2d4:
  pcVar10[lVar19] = '\0';
LAB_00a3a2f8:
  iVar7 = FUN_00a3ae90(param_1,&DAT_01895dba,pcVar10);
  (*(code *)PTR_free_01d1b748)(pcVar10);
joined_r0x00a3a324:
  if (iVar7 == 0) {
    *(undefined4 *)(param_1 + 0xd1) = 7;
  }
  goto joined_r0x00a3a330;
LAB_00a3a574:
  pcVar11[lVar19] = '\0';
LAB_00a3a578:
  pcVar21 = (char *)param_1[0x44];
joined_r0x00a3a57c:
  if (pcVar21 == (char *)0x0) {
    pcVar10 = (char *)0x0;
  }
  else {
    lVar15 = 0;
    lVar19 = 0;
    bVar6 = false;
    pcVar10 = pcVar21;
    while( true ) {
      while( true ) {
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
    if (bVar6 || (lVar19 != 0 || lVar15 != 0)) {
      sVar8 = strlen(pcVar21);
      lVar3 = 2;
      if (!bVar6) {
        lVar3 = 0;
      }
      lVar19 = lVar19 + lVar15 + lVar3 + sVar8;
      pcVar10 = (char *)(*(code *)PTR_malloc_01d1b740)(lVar19 + 1);
      if (pcVar10 != (char *)0x0) {
        pcVar14 = pcVar10;
        if (bVar6) {
                    /* try { // try from 00a3a674 to 00b3a757 has its CatchHandler @ 00a3a494 */
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
            if (cVar17 == '\0') goto LAB_00a3a6d4;
          }
          *pcVar16 = cVar17;
          pcVar21 = pcVar21 + 1;
          pcVar14 = pcVar16 + 1;
        } while( true );
      }
    }
    else {
      pcVar10 = (char *)(*(code *)PTR_strdup_01d1b758)(pcVar21);
    }
  }
LAB_00a3a6d8:
  pcVar21 = pcVar11;
  if (pcVar11 == (char *)0x0) {
    pcVar21 = "";
  }
                    /* catch() { ... } // from try @ 00a3a514 with catch @ 00a3a6e8 */
  pcVar14 = pcVar10;
                    /* catch() { ... } // from try @ 00a3a508 with catch @ 00a3a6ec */
                    /* catch() { ... } // from try @ 00a3a4e8 with catch @ 00a3a6f0 */
  if (pcVar10 == (char *)0x0) {
    pcVar14 = "";
  }
                    /* catch() { ... } // from try @ 00a3a520 with catch @ 00a3a700 */
  iVar7 = FUN_00a3ae90(param_1,"LOGIN %s %s",pcVar21,pcVar14);
  (*(code *)PTR_free_01d1b748)(pcVar11);
  (*(code *)PTR_free_01d1b748)(pcVar10);
  if (iVar7 == 0) {
    uVar13 = 6;
LAB_00a3a73c:
    *(uint *)(param_1 + 0xd1) = uVar13;
  }
  else {
joined_r0x00a3a330:
    if (iVar7 != 0) goto LAB_00a3a750;
  }
LAB_00a39e38:
  if ((int)param_1[0xd1] == 0) goto LAB_00a3a74c;
LAB_00a39e40:
  uVar9 = FUN_00a3e1e0(plVar1);
  if ((uVar9 & 1) == 0) goto LAB_00a3a74c;
  goto LAB_00a39b80;
LAB_00a3a6d4:
  pcVar10[lVar19] = '\0';
  goto LAB_00a3a6d8;
}

