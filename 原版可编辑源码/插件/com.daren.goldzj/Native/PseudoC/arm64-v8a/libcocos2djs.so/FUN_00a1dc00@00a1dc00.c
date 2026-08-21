
/* WARNING: Type propagation algorithm not settling */

int FUN_00a1dc00(long *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  char cVar10;
  long lVar11;
  undefined *puVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  char *pcVar21;
  char *pcVar22;
  size_t __n;
  size_t sVar23;
  char *pcVar24;
  size_t sVar25;
  char *pcVar26;
  long *plVar27;
  void *pvVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 uVar31;
  undefined4 uVar32;
  long *plVar33;
  char *pcVar34;
  long lVar35;
  ulong uVar36;
  long *plVar37;
  ulong uVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  long lVar41;
  uint uVar42;
  long *plVar43;
  long *plVar44;
  size_t __n_00;
  undefined1 *puVar45;
  long lVar46;
  long *plVar47;
  long *plVar48;
  undefined8 *puVar49;
  ulong uVar50;
  undefined1 *puVar51;
  char *pcVar52;
  char *pcVar53;
  long local_a8;
  ulong local_80;
  undefined8 local_78;
  undefined1 local_70;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
                    /* try { // try from 00a1dc34 to 00b1dc5b has its CatchHandler @ 00a1dc34
                       catch() { ... } // from try @ 00a1dc34 with catch @ 00a1dc34
                       catch() { ... } // from try @ 00a1dd20 with catch @ 00a1dc34 */
  lVar41 = *param_1;
  puVar1 = (undefined8 *)(lVar41 + 0x8cc0);
  pcVar52 = (char *)*puVar1;
  local_70 = 0;
  local_78 = 0;
  lVar46 = param_1[0x18];
  uVar42 = *(uint *)(lVar41 + 0x430);
  *param_2 = 1;
                    /* try { // try from 00a1dc5c to 00b1dc67 has its CatchHandler @ 00a1dd94 */
  iVar16 = 1;
  if (0x13 < (int)param_1[0x47]) goto LAB_00a1e9fc;
  if ((int)param_1[0xe4] == 3) {
    *(undefined4 *)(param_1 + 0x47) = 0x14;
    iVar16 = 1;
    goto LAB_00a1e9fc;
  }
  pcVar26 = (char *)(lVar41 + 0x8b18);
  plVar47 = *(long **)(lVar41 + 0x218);
  if (*pcVar26 == '\0') {
                    /* try { // try from 00a1dca0 to 00b1dd1f has its CatchHandler @ 00a1dd64 */
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar41 + 0x8b20));
    lVar20 = (*(code *)PTR_strdup_01d1b758)(param_1[0x18]);
    *(long *)(lVar41 + 0x8b20) = lVar20;
    if (lVar20 != 0) {
      *(int *)(lVar41 + 0x8b28) = (int)param_1[0x34];
      goto LAB_00a1dcd4;
    }
  }
  else {
LAB_00a1dcd4:
    plVar37 = plVar47 + 5;
    *plVar37 = 0;
    plVar33 = plVar47 + 6;
    *plVar33 = 0;
    if (((*(byte *)(param_1[0x80] + 0x78) & 7) != 0) && (*(char *)(lVar41 + 0x621) != '\0')) {
      uVar42 = 4;
    }
    pcVar53 = *(char **)(lVar41 + 0x6a0);
    if (pcVar53 == (char *)0x0) {
      if (*(char *)(lVar41 + 0x620) == '\0') {
        if (uVar42 - 2 < 4) {
          pcVar53 = (&PTR_s_POST_0188fca5_0x20_01c6d3a0)[(int)(uVar42 - 2)];
        }
        else {
          pcVar53 = "GET";
        }
      }
      else {
                    /* try { // try from 00a1dd20 to 00b1ddaf has its CatchHandler @ 00a1dc34 */
        pcVar53 = "HEAD";
      }
    }
    for (plVar48 = *(long **)(*param_1 + 0x3b8); plVar48 != (long *)0x0;
        plVar48 = (long *)plVar48[1]) {
                    /* catch() { ... } // from try @ 00a1dca0 with catch @ 00a1dd64 */
      iVar16 = FUN_00a33838(*plVar48,"User-Agent:",0xb);
      if (iVar16 != 0) {
        if (*plVar48 != 0) {
                    /* catch() { ... } // from try @ 00a1dc5c with catch @ 00a1dd94 */
          (*(code *)PTR_free_01d1b748)(param_1[0x85]);
          param_1[0x85] = 0;
        }
        break;
      }
    }
                    /* try { // try from 00a1ddb0 to 00b1dde7 has its CatchHandler @ 00a1ddb0
                       catch() { ... } // from try @ 00a1ddb0 with catch @ 00a1ddb0
                       catch() { ... } // from try @ 00a1de5c with catch @ 00a1ddb0
                       catch() { ... } // from try @ 00a1debc with catch @ 00a1ddb0 */
    iVar16 = FUN_00a20988(param_1,pcVar53,pcVar52,0);
    if (iVar16 != 0) goto LAB_00a1e9fc;
    if (((*(char *)(lVar41 + 0x8c11) == '\0') && (*(char *)(lVar41 + 0x8c31) == '\0')) ||
       ((uVar42 | 4) == 5)) {
      uVar31 = 0;
                    /* try { // try from 00a1dde8 to 00b1de5b has its CatchHandler @ 00a1debc */
    }
    else {
      uVar31 = 1;
    }
    *(undefined1 *)((long)param_1 + 0x3ca) = uVar31;
    (*(code *)PTR_free_01d1b748)(param_1[0x89]);
    param_1[0x89] = 0;
    if (*(long *)(lVar41 + 0x918) == 0) {
LAB_00a1de50:
      param_1[0x89] = 0;
      if (*(long *)(lVar41 + 0x690) == 0) goto LAB_00a1debc;
LAB_00a1de80:
      for (plVar48 = *(long **)(*param_1 + 0x3b8); plVar48 != (long *)0x0;
          plVar48 = (long *)plVar48[1]) {
        iVar16 = FUN_00a33838(*plVar48,"Cookie:",7);
        if (iVar16 != 0) {
                    /* try { // try from 00a1deb4 to 00b1debb has its CatchHandler @ 00a1debc */
          if (*plVar48 != 0) goto LAB_00a1debc;
          break;
        }
      }
      local_a8 = *(long *)(lVar41 + 0x690);
    }
    else {
      for (plVar48 = *(long **)(*param_1 + 0x3b8); plVar48 != (long *)0x0;
          plVar48 = (long *)plVar48[1]) {
        iVar16 = FUN_00a33838(*plVar48,"Referer:",8);
        if (iVar16 != 0) {
          if (*plVar48 != 0) goto LAB_00a1de50;
          break;
        }
      }
      lVar20 = FUN_00a0e870("Referer: %s\r\n",*(undefined8 *)(lVar41 + 0x918));
      param_1[0x89] = lVar20;
      if (lVar20 == 0) goto LAB_00a1e9f8;
      if (*(long *)(lVar41 + 0x690) != 0) goto LAB_00a1de80;
LAB_00a1debc:
                    /* catch() { ... } // from try @ 00a1dde8 with catch @ 00a1debc
                       catch() { ... } // from try @ 00a1deb4 with catch @ 00a1debc
                       try { // try from 00a1debc to 00b1decf has its CatchHandler @ 00a1ddb0 */
      local_a8 = 0;
    }
                    /* try { // try from 00a1ded0 to 00b1df07 has its CatchHandler @ 00a1ded0
                       catch() { ... } // from try @ 00a1ded0 with catch @ 00a1ded0
                       catch() { ... } // from try @ 00a1df7c with catch @ 00a1ded0
                       catch() { ... } // from try @ 00a1dfdc with catch @ 00a1ded0 */
    for (plVar48 = *(long **)(*param_1 + 0x3b8); plVar48 != (long *)0x0;
        plVar48 = (long *)plVar48[1]) {
      iVar16 = FUN_00a33838(*plVar48,"Accept-Encoding:",0x10);
      if (iVar16 != 0) {
        if (*plVar48 != 0) goto LAB_00a1df44;
        break;
      }
    }
                    /* try { // try from 00a1df08 to 00b1df7b has its CatchHandler @ 00a1dfdc */
    if (*(long *)(lVar41 + 0x6b8) == 0) {
LAB_00a1df44:
      (*(code *)PTR_free_01d1b748)(param_1[0x86]);
      param_1[0x86] = 0;
    }
    else {
      (*(code *)PTR_free_01d1b748)(param_1[0x86]);
      param_1[0x86] = 0;
      lVar20 = FUN_00a0e870("Accept-Encoding: %s\r\n",*(undefined8 *)(lVar41 + 0x6b8));
      param_1[0x86] = lVar20;
      if (lVar20 == 0) goto LAB_00a1e9f8;
    }
    for (plVar48 = *(long **)(*param_1 + 0x3b8); plVar48 != (long *)0x0;
        plVar48 = (long *)plVar48[1]) {
                    /* try { // try from 00a1df7c to 00b1dfd3 has its CatchHandler @ 00a1ded0 */
      iVar16 = FUN_00a33838(*plVar48,&DAT_01891352,3);
      if (iVar16 != 0) {
        if (*plVar48 != 0) goto LAB_00a1e034;
        break;
      }
    }
    if (*(char *)(lVar41 + 0x61b) != '\0') {
      for (plVar48 = *(long **)(*param_1 + 0x3b8); plVar48 != (long *)0x0;
          plVar48 = (long *)plVar48[1]) {
        iVar16 = FUN_00a33838(*plVar48,"Connection:",0xb);
        if (iVar16 != 0) {
          lVar20 = *plVar48;
          goto LAB_00a1dfdc;
        }
      }
      lVar20 = 0;
                    /* try { // try from 00a1dfd4 to 00b1dfdb has its CatchHandler @ 00a1dfdc */
LAB_00a1dfdc:
                    /* catch() { ... } // from try @ 00a1df08 with catch @ 00a1dfdc
                       catch() { ... } // from try @ 00a1dfd4 with catch @ 00a1dfdc
                       try { // try from 00a1dfdc to 00b1dfef has its CatchHandler @ 00a1ded0 */
      (*(code *)PTR_free_01d1b748)(param_1[0x8d]);
                    /* try { // try from 00a1dff0 to 00b1e017 has its CatchHandler @ 00a1dff0
                       catch() { ... } // from try @ 00a1dff0 with catch @ 00a1dff0
                       catch() { ... } // from try @ 00a1e06c with catch @ 00a1dff0 */
      param_1[0x8d] = 0;
      if (lVar20 == 0) {
                    /* try { // try from 00a1e018 to 00b1e023 has its CatchHandler @ 00a1e0e0 */
        lVar20 = (*(code *)PTR_strdup_01d1b758)("Connection: TE\r\nTE: gzip\r\n");
        param_1[0x8d] = lVar20;
      }
      else {
        lVar20 = FUN_00a0e870("%s, TE\r\nTE: gzip\r\n",lVar20);
        param_1[0x8d] = lVar20;
      }
      if (lVar20 == 0) goto LAB_00a1e9f8;
    }
LAB_00a1e034:
    for (plVar48 = *(long **)(*param_1 + 0x3b8); plVar48 != (long *)0x0;
        plVar48 = (long *)plVar48[1]) {
      iVar16 = FUN_00a33838(*plVar48,"Transfer-Encoding:",0x12);
      if (iVar16 != 0) {
                    /* try { // try from 00a1e06c to 00b1e0fb has its CatchHandler @ 00a1dff0 */
        if (*plVar48 != 0) {
          bVar15 = FUN_00a21648(*plVar48,"Transfer-Encoding:","chunked");
          *(byte *)(lVar41 + 0x211) = bVar15 & 1;
          pcVar34 = "";
          goto LAB_00a1e0e0;
        }
        break;
      }
                    /* try { // try from 00a1e05c to 00b1e06b has its CatchHandler @ 00a1e0b0 */
    }
    bVar15 = *(byte *)(param_1[0x80] + 0x78) & 3;
    if (((*(byte *)(param_1[0x80] + 0x78) & 3) == 0) ||
       (bVar15 = 0, *(char *)(lVar41 + 0x621) == '\0')) {
LAB_00a1e0c4:
      *(byte *)(lVar41 + 0x211) = bVar15;
    }
    else {
                    /* catch() { ... } // from try @ 00a1e05c with catch @ 00a1e0b0 */
      if (*(long *)(lVar41 + 0x8cf8) != -1) {
        bVar15 = 0;
        goto LAB_00a1e0c4;
      }
      if (*(char *)((long)param_1 + 0x3ca) == '\0') {
                    /* try { // try from 00a1e638 to 00b1e63f has its CatchHandler @ 00a1e6a4 */
                    /* try { // try from 00a1e640 to 00b1e687 has its CatchHandler @ 00a1e524 */
        if ((((*(int *)(lVar41 + 0x8ca4) == 10) || ((int)param_1[0x47] == 10)) ||
            ((lVar20 = *(long *)(lVar41 + 0x438), (int)param_1[0x47] < 0xb && (lVar20 == 1)))) ||
           ((bVar15 = 1, lVar20 != 0 && (lVar20 < 2)))) {
          FUN_00a23020(lVar41,"Chunky upload is not supported by HTTP 1.0");
          iVar16 = 0x19;
          goto LAB_00a1e9fc;
        }
        goto LAB_00a1e0c4;
      }
      bVar15 = *(byte *)(lVar41 + 0x211);
    }
    pcVar34 = "";
    if (bVar15 != 0) {
      pcVar34 = "Transfer-Encoding: chunked\r\n";
    }
LAB_00a1e0e0:
                    /* catch() { ... } // from try @ 00a1e018 with catch @ 00a1e0e0 */
    (*(code *)PTR_free_01d1b748)(param_1[0x8a]);
                    /* try { // try from 00a1e0fc to 00b1e1a7 has its CatchHandler @ 00a1e0fc
                       catch() { ... } // from try @ 00a1e0fc with catch @ 00a1e0fc
                       catch() { ... } // from try @ 00a1e1ec with catch @ 00a1e0fc */
    param_1[0x8a] = 0;
    for (puVar49 = *(undefined8 **)(*param_1 + 0x3b8); puVar49 != (undefined8 *)0x0;
        puVar49 = (undefined8 *)puVar49[1]) {
      iVar16 = FUN_00a33838(*puVar49,"Host:",5);
      if (iVar16 != 0) {
        pcVar24 = (char *)*puVar49;
        if ((pcVar24 != (char *)0x0) &&
           ((*pcVar26 == '\0' ||
            (iVar16 = FUN_00a33710(*(undefined8 *)(lVar41 + 0x8b20),param_1[0x18]), iVar16 != 0))))
        {
          pcVar21 = (char *)FUN_00a20424(pcVar24);
          if (pcVar21 == (char *)0x0) goto LAB_00a1e9f8;
          if (*pcVar21 == '[') {
            sVar25 = strlen(pcVar21);
            memmove(pcVar21,pcVar21 + 1,sVar25 - 1);
                    /* try { // try from 00a1e7fc to 00b1e807 has its CatchHandler @ 00a1e8f8 */
            iVar16 = 0x5d;
LAB_00a1e808:
            pcVar22 = strchr(pcVar21,iVar16);
            if (pcVar22 != (char *)0x0) {
                    /* try { // try from 00a1e814 to 00b1e853 has its CatchHandler @ 00a1e8fc */
              *pcVar22 = '\0';
            }
            (*(code *)PTR_free_01d1b748)(param_1[0x8b]);
            param_1[0x8b] = (long)pcVar21;
          }
          else {
            if (*pcVar21 != '\0') {
              iVar16 = 0x3a;
              goto LAB_00a1e808;
            }
            (*(code *)PTR_free_01d1b748)(pcVar21);
          }
          iVar16 = strcmp("Host:",pcVar24);
          if (iVar16 != 0) {
            lVar20 = FUN_00a0e870("%s\r\n",pcVar24);
            param_1[0x8a] = lVar20;
            goto joined_r0x00a1e858;
          }
          param_1[0x8a] = 0;
          cVar10 = *(char *)((long)param_1 + 0x3be);
          goto joined_r0x00a1e868;
        }
        break;
      }
    }
                    /* try { // try from 00a1e1a8 to 00b1e1eb has its CatchHandler @ 00a1e228 */
    if ((((*(uint *)(param_1[0x81] + 0x78) >> 1 & 1) == 0) || ((int)param_1[0x34] != 0x1bb)) &&
       (((*(uint *)(param_1[0x81] + 0x78) & 1) == 0 || ((int)param_1[0x34] != 0x50)))) {
      puVar4 = &DAT_01890f88;
      puVar12 = &DAT_019af7d9;
      if (*(char *)((long)param_1 + 0x3c2) == '\0') {
        puVar4 = &DAT_0189703a;
        puVar12 = &DAT_0189703a;
      }
                    /* catch() { ... } // from try @ 00a1e1a8 with catch @ 00a1e228 */
      lVar20 = FUN_00a0e870("Host: %s%s%s:%hu\r\n",puVar12,lVar46,puVar4);
      param_1[0x8a] = lVar20;
    }
    else {
      puVar4 = &DAT_01890f88;
      puVar12 = &DAT_019af7d9;
      if (*(char *)((long)param_1 + 0x3c2) == '\0') {
        puVar4 = &DAT_0189703a;
        puVar12 = &DAT_0189703a;
      }
                    /* try { // try from 00a1e1ec to 00b1e243 has its CatchHandler @ 00a1e0fc */
      lVar20 = FUN_00a0e870("Host: %s%s%s\r\n",puVar12,lVar46,puVar4);
      param_1[0x8a] = lVar20;
    }
joined_r0x00a1e858:
    if (lVar20 != 0) {
      cVar10 = *(char *)((long)param_1 + 0x3be);
joined_r0x00a1e868:
      if ((cVar10 == '\0') || (*(char *)((long)param_1 + 0x3c9) != '\0')) {
LAB_00a1e24c:
        bVar14 = false;
      }
      else {
        pcVar24 = (char *)param_1[0x18];
        pcVar21 = (char *)param_1[0x19];
        pcVar52 = *(char **)(lVar41 + 0x908);
        if ((pcVar21 != pcVar24) && (pcVar22 = strstr(pcVar52,pcVar21), pcVar22 != (char *)0x0)) {
          sVar25 = strlen(pcVar21);
          __n = strlen(pcVar24);
          sVar23 = strlen(pcVar52);
          pcVar24 = (char *)(*(code *)PTR_malloc_01d1b740)((1 - sVar25) + __n + sVar23);
          if (pcVar24 == (char *)0x0) goto LAB_00a1e9f8;
          __n_00 = (long)pcVar22 - (long)pcVar52;
          memcpy(pcVar24,pcVar52,__n_00);
          memcpy(pcVar24 + __n_00,(void *)param_1[0x18],__n);
                    /* try { // try from 00a1e34c to 00b1e373 has its CatchHandler @ 00a1e384 */
          memcpy(pcVar24 + __n_00 + __n,pcVar22 + sVar25,((1 - __n_00) - sVar25) + sVar23);
          if (*(char *)(lVar41 + 0x910) != '\0') {
            (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar41 + 0x908));
            *(undefined8 *)(lVar41 + 0x908) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1e34c with catch @ 00a1e384
                        */
            *(undefined1 *)(lVar41 + 0x910) = 0;
          }
          *(char **)(lVar41 + 0x908) = pcVar24;
          *(undefined1 *)(lVar41 + 0x910) = 1;
          pcVar52 = pcVar24;
        }
        iVar16 = FUN_00a33994("ftp://",pcVar52,6);
        if (iVar16 == 0) goto LAB_00a1e24c;
        if (*(char *)(lVar41 + 0x668) != '\0') {
          pcVar24 = strstr(pcVar52,";type=");
          if (pcVar24 == (char *)0x0) {
LAB_00a1e5a0:
            if (*(char *)*puVar1 == '\0') {
                    /* try { // try from 00a1eaf0 to 00b1eafb has its CatchHandler @ 00a1eb38 */
              puVar49 = &local_78;
              sVar25 = strlen(pcVar52);
                    /* try { // try from 00a1eafc to 00b1ebb3 has its CatchHandler @ 00a1e970 */
              if (pcVar52[sVar25 - 1] != '/') {
                puVar49 = (undefined8 *)((ulong)puVar49 | 1);
                local_78 = CONCAT71(local_78._1_7_,0x2f);
              }
            }
            else {
              puVar49 = &local_78;
            }
            uVar32 = 0x61;
            if (*(char *)(lVar41 + 0x613) == '\0') {
              uVar32 = 0x69;
            }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1eaf0 with catch @ 00a1eb38
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1eae4 with catch @ 00a1eb3c
                        */
            FUN_00a0e7c4(puVar49,8,";type=%c",uVar32);
          }
          else if ((pcVar24[6] != '\0') && (pcVar24[7] == '\0')) {
            uVar17 = FUN_00a336f8();
            uVar17 = (uVar17 & 0xff) - 0x41;
            if ((8 < uVar17) || ((1 << (ulong)(uVar17 & 0x1f) & 0x109U) == 0)) goto LAB_00a1e5a0;
          }
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1ea20 with catch @ 00a1eb40
                        */
        if ((char)param_1[0x78] == '\0') goto LAB_00a1e24c;
        bVar14 = (char)param_1[0x7a] == '\0';
      }
      if (uVar42 == 3) {
        uVar29 = *(undefined8 *)(lVar41 + 0x3c8);
        puVar49 = *(undefined8 **)(*param_1 + 0x3b8);
        if (puVar49 == (undefined8 *)0x0) {
          uVar30 = 0;
        }
        else {
          do {
            iVar16 = FUN_00a33838(*puVar49,"Content-Type:",0xd);
            if (iVar16 != 0) {
              uVar30 = *puVar49;
              goto LAB_00a1e3b4;
            }
            puVar49 = (undefined8 *)puVar49[1];
          } while (puVar49 != (undefined8 *)0x0);
          uVar30 = 0;
        }
LAB_00a1e3b4:
        iVar16 = FUN_00a4c1d8(lVar41,plVar47,uVar29,uVar30,plVar47 + 1);
                    /* try { // try from 00a1e3c4 to 00b1e3eb has its CatchHandler @ 00a1e404 */
        if (iVar16 != 0) goto LAB_00a1e9fc;
      }
      for (plVar48 = *(long **)(*param_1 + 0x3b8); plVar48 != (long *)0x0;
          plVar48 = (long *)plVar48[1]) {
        iVar16 = FUN_00a33838(*plVar48,"Accept:",7);
        if (iVar16 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1e3c4 with catch @ 00a1e404
                        */
          lVar20 = *plVar48;
          goto LAB_00a1e408;
        }
      }
      lVar20 = 0;
LAB_00a1e408:
      pcVar24 = (char *)0x0;
      if (lVar20 == 0) {
        pcVar24 = "Accept: */*\r\n";
      }
      plVar47[4] = (long)pcVar24;
      if (uVar42 - 2 < 3) {
        plVar48 = (long *)(lVar41 + 0x8cd8);
        lVar20 = *plVar48;
        if (lVar20 != 0) {
          if (lVar20 < 0) {
            *plVar48 = 0;
          }
          else if (*pcVar26 == '\0') {
            if (((code *)param_1[0x94] != (code *)0x0) &&
               (iVar16 = (*(code *)param_1[0x94])(param_1[0x95],lVar20,0), iVar16 != 0)) {
              if (iVar16 != 2) {
                FUN_00a23020(lVar41,"Could not seek stream");
                iVar16 = 0x1a;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1e9e4 with catch @ 00a1eb78
                        */
                goto LAB_00a1e9fc;
              }
              lVar35 = *plVar48;
              lVar20 = 0;
              do {
                if (lVar35 - lVar20 < 0x4001) {
                  uVar50 = FUN_00a16d14();
                }
                else {
                  uVar50 = 0x4000;
                }
                lVar35 = (**(code **)(lVar41 + 0x8d10))
                                   (lVar41 + 0xb08,1,uVar50,*(undefined8 *)(lVar41 + 0x8d18));
                lVar20 = lVar35 + lVar20;
                if (uVar50 <= lVar35 - 1U) {
                  FUN_00a23020(lVar41,"Could only read %ld bytes from the input",lVar20);
                  iVar16 = 0x1a;
                  goto LAB_00a1e9fc;
                }
                lVar35 = *plVar48;
              } while (lVar20 < lVar35);
            }
            lVar20 = *(long *)(lVar41 + 0x8cf8);
            if ((0 < lVar20) &&
               (lVar20 = lVar20 - *plVar48, *(long *)(lVar41 + 0x8cf8) = lVar20, lVar20 < 1)) {
              FUN_00a23020(lVar41,"File already completely uploaded");
                    /* try { // try from 00a1e524 to 00b1e5c3 has its CatchHandler @ 00a1e524
                       catch(type#1 @ 00000000) { ... } // from try @ 00a1e524 with catch @ 00a1e524
                       catch(type#1 @ 00000000) { ... } // from try @ 00a1e5cc with catch @ 00a1e524
                       catch(type#1 @ 00000000) { ... } // from try @ 00a1e640 with catch @ 00a1e524
                       catch(type#1 @ 00000000) { ... } // from try @ 00a1e690 with catch @ 00a1e524
                        */
              iVar16 = 0x12;
              goto LAB_00a1e9fc;
            }
          }
        }
      }
                    /* try { // try from 00a1e5c4 to 00b1e5cb has its CatchHandler @ 00a1e690 */
      if (*(char *)(lVar41 + 0x8cc9) != '\0') {
                    /* try { // try from 00a1e5cc to 00b1e637 has its CatchHandler @ 00a1e524 */
        if ((uVar42 | 4) == 5) {
          for (plVar48 = *(long **)(*param_1 + 0x3b8); plVar48 != (long *)0x0;
              plVar48 = (long *)plVar48[1]) {
            iVar16 = FUN_00a33838(*plVar48,"Range:",6);
            if (iVar16 != 0) {
              if (*plVar48 != 0) goto LAB_00a1e668;
              break;
            }
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1e638 with catch @ 00a1e6a4
                        */
                    /* try { // try from 00a1e6a8 to 00b1e753 has its CatchHandler @ 00a1e6a8
                       catch(type#1 @ 00000000) { ... } // from try @ 00a1e6a8 with catch @ 00a1e6a8
                       catch(type#1 @ 00000000) { ... } // from try @ 00a1e75c with catch @ 00a1e6a8
                       catch(type#1 @ 00000000) { ... } // from try @ 00a1e89c with catch @ 00a1e6a8
                       catch(type#1 @ 00000000) { ... } // from try @ 00a1e8ec with catch @ 00a1e6a8
                        */
          (*(code *)PTR_free_01d1b748)(param_1[0x88]);
          lVar20 = FUN_00a0e870("Range: bytes=%s\r\n",*(undefined8 *)(lVar41 + 0x8cd0));
          param_1[0x88] = lVar20;
        }
        else {
LAB_00a1e668:
          if (uVar42 != 1) {
            for (plVar48 = *(long **)(*param_1 + 0x3b8); plVar48 != (long *)0x0;
                plVar48 = (long *)plVar48[1]) {
                    /* try { // try from 00a1e688 to 00b1e68f has its CatchHandler @ 00a1e690 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1e5c4 with catch @ 00a1e690
                       catch(type#1 @ 00000000) { ... } // from try @ 00a1e688 with catch @ 00a1e690
                       try { // try from 00a1e690 to 00b1e6a7 has its CatchHandler @ 00a1e524 */
              iVar16 = FUN_00a33838(*plVar48,"Content-Range:",0xe);
              if (iVar16 != 0) {
                if (*plVar48 != 0) goto LAB_00a1e6d0;
                break;
              }
            }
            (*(code *)PTR_free_01d1b748)(param_1[0x88]);
            if (*(long *)(lVar41 + 0x3b0) < 0) {
              lVar35 = *(long *)(lVar41 + 0x8cf8);
              pcVar26 = "Content-Range: bytes 0-%ld/%ld\r\n";
              lVar20 = lVar35 + -1;
                    /* try { // try from 00a1e8e4 to 00b1e8eb has its CatchHandler @ 00a1e8ec */
LAB_00a1e9ec:
              lVar20 = FUN_00a0e870(pcVar26,lVar20,lVar35);
              param_1[0x88] = lVar20;
            }
            else {
                    /* try { // try from 00a1e894 to 00b1e89b has its CatchHandler @ 00a1e8f8 */
                    /* try { // try from 00a1e89c to 00b1e8e3 has its CatchHandler @ 00a1e6a8 */
              if (*(long *)(lVar41 + 0x8cd8) == 0) {
                lVar20 = *(long *)(lVar41 + 0x8cd0);
                lVar35 = *(long *)(lVar41 + 0x8cf8);
                    /* try { // try from 00a1e9e4 to 00b1e9ef has its CatchHandler @ 00a1eb78 */
                pcVar26 = "Content-Range: bytes %s/%ld\r\n";
                goto LAB_00a1e9ec;
              }
              lVar20 = FUN_00a0e870("Content-Range: bytes %s%ld/%ld\r\n",
                                    *(undefined8 *)(lVar41 + 0x8cd0),
                                    *(long *)(lVar41 + 0x8cf8) + *(long *)(lVar41 + 0x8cd8) + -1);
              param_1[0x88] = lVar20;
            }
            if (lVar20 == 0) goto LAB_00a1e9f8;
          }
        }
      }
LAB_00a1e6d0:
      piVar2 = (int *)(lVar41 + 0x8ca4);
      if ((*piVar2 == 10) || ((int)param_1[0x47] == 10)) {
        pcVar26 = "1.0";
      }
      else {
        lVar20 = *(long *)(lVar41 + 0x438);
        if (((10 < (int)param_1[0x47]) || (pcVar26 = "1.0", lVar20 != 1)) &&
           (pcVar26 = "1.1", lVar20 < 2 && lVar20 != 0)) {
          pcVar26 = "1.0";
        }
      }
      plVar48 = (long *)(*(code *)PTR_calloc_01d1b760)(1,0x18);
      if (plVar48 != (long *)0x0) {
        iVar16 = FUN_00a21380(plVar48,"%s ",pcVar53);
        if (iVar16 != 0) goto LAB_00a1e9fc;
        if (!bVar14) {
          sVar25 = strlen(pcVar52);
          uVar50 = plVar48[2];
          if (uVar50 <= ~sVar25) {
            lVar20 = *plVar48;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1e754 with catch @ 00a1e8ec
                       catch(type#1 @ 00000000) { ... } // from try @ 00a1e8e4 with catch @ 00a1e8ec
                       try { // try from 00a1e8ec to 00b1e96f has its CatchHandler @ 00a1e6a8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1e7d8 with catch @ 00a1e8f4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1e7fc with catch @ 00a1e8f8
                       catch(type#1 @ 00000000) { ... } // from try @ 00a1e894 with catch @ 00a1e8f8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1e814 with catch @ 00a1e8fc
                        */
            if ((lVar20 == 0) || (plVar48[1] - 1U < uVar50 + sVar25)) {
              lVar35 = -1;
              if ((-1 < (long)(uVar50 | sVar25)) &&
                 (uVar36 = sVar25 << 1 ^ 0xffffffffffffffff,
                 uVar50 * 2 < uVar36 || uVar50 * 2 - uVar36 == 0)) {
                lVar35 = (uVar50 + sVar25) * 2;
              }
              if (lVar20 == 0) {
                lVar20 = (*(code *)PTR_malloc_01d1b740)(lVar35);
              }
              else {
                lVar20 = FUN_00a379b0(lVar20,lVar35);
              }
              if (lVar20 == 0) goto LAB_00a1eba4;
              uVar50 = plVar48[2];
              *plVar48 = lVar20;
              plVar48[1] = lVar35;
            }
            memcpy((void *)(lVar20 + uVar50),pcVar52,sVar25);
            plVar48[2] = plVar48[2] + sVar25;
            goto LAB_00a1e95c;
          }
          (*(code *)PTR_free_01d1b748)(*plVar48);
          *plVar48 = 0;
                    /* try { // try from 00a1e7d8 to 00b1e7df has its CatchHandler @ 00a1e8f4 */
          goto LAB_00a1eba4;
        }
                    /* try { // try from 00a1e754 to 00b1e75b has its CatchHandler @ 00a1e8ec */
        iVar16 = FUN_00a21380(plVar48,"ftp://%s:%s@%s",param_1[0x43],param_1[0x44],pcVar52 + 6);
                    /* try { // try from 00a1e75c to 00b1e7d7 has its CatchHandler @ 00a1e6a8 */
        if (iVar16 != 0) goto LAB_00a1e9fc;
LAB_00a1e95c:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1eafc with catch @ 00a1e970
                        */
        puVar5 = &DAT_0189703a;
        if ((undefined1 *)param_1[0x8a] != (undefined1 *)0x0) {
          puVar5 = (undefined1 *)param_1[0x8a];
        }
        puVar6 = &DAT_0189703a;
        if ((undefined1 *)param_1[0x84] != (undefined1 *)0x0) {
          puVar6 = (undefined1 *)param_1[0x84];
        }
        puVar7 = &DAT_0189703a;
        if ((undefined1 *)param_1[0x87] != (undefined1 *)0x0) {
          puVar7 = (undefined1 *)param_1[0x87];
        }
        puVar45 = &DAT_0189703a;
        if ((*(char *)(lVar41 + 0x8cc9) != '\0') &&
           ((undefined1 *)param_1[0x88] != (undefined1 *)0x0)) {
          puVar45 = (undefined1 *)param_1[0x88];
        }
        if (*(char **)(lVar41 + 0x790) == (char *)0x0) {
          puVar39 = &DAT_0189703a;
        }
        else {
                    /* try { // try from 00a1e9bc to 00b1e9c7 has its CatchHandler @ 00a1eb98 */
          puVar39 = &DAT_0189703a;
          if ((**(char **)(lVar41 + 0x790) != '\0') &&
             ((undefined1 *)param_1[0x85] != (undefined1 *)0x0)) {
            puVar39 = (undefined1 *)param_1[0x85];
          }
        }
        puVar8 = &DAT_0189703a;
        if ((undefined1 *)plVar47[4] != (undefined1 *)0x0) {
          puVar8 = (undefined1 *)plVar47[4];
        }
        puVar9 = &DAT_0189703a;
        if ((undefined1 *)param_1[0x8d] != (undefined1 *)0x0) {
          puVar9 = (undefined1 *)param_1[0x8d];
        }
        puVar51 = &DAT_0189703a;
        if (((*(char **)(lVar41 + 0x6b8) != (char *)0x0) &&
            (puVar51 = &DAT_0189703a, **(char **)(lVar41 + 0x6b8) != '\0')) &&
           ((undefined1 *)param_1[0x86] != (undefined1 *)0x0)) {
          puVar51 = (undefined1 *)param_1[0x86];
        }
        puVar40 = &DAT_0189703a;
        if ((*(long *)(lVar41 + 0x918) != 0) && ((undefined1 *)param_1[0x89] != (undefined1 *)0x0))
        {
          puVar40 = (undefined1 *)param_1[0x89];
        }
        pcVar52 = "";
        if (*(char *)((long)param_1 + 0x3be) != '\0') {
          if (*(char *)((long)param_1 + 0x3c9) == '\0') {
            lVar20 = *param_1;
            if ((*(char *)((long)param_1 + 0x3bd) == '\0') || (*(char *)(lVar20 + 0x3d0) == '\0')) {
              plVar27 = *(long **)(lVar20 + 0x3b8);
            }
            else {
                    /* try { // try from 00a1eae4 to 00b1eaeb has its CatchHandler @ 00a1eb3c */
              plVar27 = *(long **)(lVar20 + 0x3c0);
            }
            for (; plVar27 != (long *)0x0; plVar27 = (long *)plVar27[1]) {
              iVar16 = FUN_00a33838(*plVar27,"Proxy-Connection:",0x11);
              if (iVar16 != 0) {
                if (*plVar27 != 0) {
                  pcVar52 = "";
                  goto LAB_00a1ec30;
                }
                break;
              }
            }
            pcVar52 = "Proxy-Connection: Keep-Alive\r\n";
          }
          else {
            pcVar52 = "";
          }
        }
LAB_00a1ec30:
        iVar16 = FUN_00a21380(plVar48,"%s HTTP/%s\r\n%s%s%s%s%s%s%s%s%s%s%s",&local_78,pcVar26,
                              puVar5,puVar6,puVar7,puVar45,puVar39,puVar8,puVar9,puVar51,puVar40,
                              pcVar52,pcVar34);
        (*(code *)PTR_free_01d1b748)(param_1[0x87]);
        param_1[0x87] = 0;
        if ((*(ulong *)(lVar41 + 0x8c20) < 0x21) &&
           ((1L << (*(ulong *)(lVar41 + 0x8c20) & 0x3f) & 0x100000110U) != 0)) {
          (*(code *)PTR_free_01d1b748)(param_1[0x84]);
          param_1[0x84] = 0;
        }
        if (iVar16 != 0) goto LAB_00a1e9fc;
        if ((((*(byte *)(param_1[0x80] + 0x7c) & 1) == 0) && ((int)param_1[0x47] != 0x14)) &&
           (*(long *)(lVar41 + 0x438) == 3)) {
          iVar16 = 1;
          goto LAB_00a1e9fc;
        }
        if ((local_a8 != 0) || (*(long *)(lVar41 + 0x938) != 0)) {
          if (*(long *)(lVar41 + 0x938) == 0) {
LAB_00a1ee88:
            iVar19 = 0;
            iVar16 = 0;
            if (local_a8 == 0) goto LAB_00a1eed4;
LAB_00a1ee98:
            if (iVar16 != 0) goto LAB_00a1eed4;
            if ((iVar19 != 0) || (iVar18 = FUN_00a21380(plVar48,"Cookie: "), iVar18 == 0)) {
              pcVar52 = "; ";
              if (iVar19 == 0) {
                pcVar52 = "";
              }
              iVar16 = FUN_00a21380(plVar48,"%s%s",pcVar52,local_a8);
              iVar19 = iVar19 + 1;
              goto LAB_00a1eed4;
            }
          }
          else {
            FUN_00a3557c(lVar41,2,2);
            if (param_1[0x8b] != 0) {
              lVar46 = param_1[0x8b];
            }
            plVar27 = (long *)FUN_00a1cd54(*(undefined8 *)(lVar41 + 0x938),lVar46,*puVar1,
                                           *(uint *)(param_1[0x80] + 0x78) >> 1 & 1);
            FUN_00a355d4(lVar41,2);
            if (plVar27 == (long *)0x0) goto LAB_00a1ee88;
            iVar19 = 0;
            plVar43 = plVar27;
            do {
              lVar46 = plVar43[2];
              if (lVar46 != 0) {
                if (iVar19 == 0) {
                  iVar16 = FUN_00a21380(plVar48,"Cookie: ");
                  if (iVar16 != 0) {
                    iVar19 = 0;
                    goto LAB_00a1ee74;
                  }
                  lVar46 = plVar43[2];
                }
                pcVar52 = "; ";
                if (iVar19 == 0) {
                  pcVar52 = "";
                }
                iVar16 = FUN_00a21380(plVar48,"%s%s=%s",pcVar52,plVar43[1],lVar46);
                if (iVar16 != 0) goto LAB_00a1ee74;
                iVar19 = iVar19 + 1;
              }
              plVar43 = (long *)*plVar43;
            } while (plVar43 != (long *)0x0);
            iVar16 = 0;
LAB_00a1ee74:
            FUN_00a1d354(plVar27);
            if (local_a8 != 0) goto LAB_00a1ee98;
LAB_00a1eed4:
            if ((iVar19 == 0) || (iVar16 != 0)) {
              if (iVar16 != 0) goto LAB_00a1e9fc;
              goto LAB_00a1ecfc;
            }
            uVar50 = plVar48[2];
            if (uVar50 < 0xfffffffffffffffe) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1ef5c with catch @ 00a1ef1c
                        */
              lVar46 = *plVar48;
              if (lVar46 == 0) {
                lVar20 = uVar50 * 2 + 4;
                if (0xfffffffffffffffb < uVar50 * 2 || (long)uVar50 < 0) {
                  lVar20 = -1;
                }
                lVar46 = (*(code *)PTR_malloc_01d1b740)(lVar20);
joined_r0x00a1efc4:
                if (lVar46 == 0) goto LAB_00a1ef6c;
                uVar50 = plVar48[2];
                *plVar48 = lVar46;
                plVar48[1] = lVar20;
              }
              else if (plVar48[1] - 1U < uVar50 + 2) {
                lVar20 = uVar50 * 2 + 4;
                if (0xfffffffffffffffb < uVar50 * 2 || (long)uVar50 < 0) {
                  lVar20 = -1;
                }
                    /* try { // try from 00a1ef54 to 00b1ef5b has its CatchHandler @ 00a1f020 */
                lVar46 = FUN_00a379b0(lVar46,lVar20);
                goto joined_r0x00a1efc4;
              }
              *(undefined2 *)(lVar46 + uVar50) = 0xa0d;
              plVar48[2] = plVar48[2] + 2;
              goto LAB_00a1ecfc;
            }
            (*(code *)PTR_free_01d1b748)(*plVar48);
            *plVar48 = 0;
LAB_00a1ef6c:
            (*(code *)PTR_free_01d1b748)(plVar48);
            iVar18 = 0x1b;
          }
          iVar16 = 0x1b;
          if (iVar18 != 0) {
            iVar16 = iVar18;
          }
          goto LAB_00a1e9fc;
        }
LAB_00a1ecfc:
        iVar16 = FUN_00a2193c(lVar41,plVar48);
        if ((iVar16 != 0) || (iVar16 = FUN_00a21728(param_1,0,plVar48), iVar16 != 0))
        goto LAB_00a1e9fc;
        plVar27 = plVar47 + 2;
        *plVar27 = 0;
        FUN_00a1b4f0(lVar41,0xffffffffffffffff);
        if (uVar42 == 2) {
          if (*(char *)((long)param_1 + 0x3ca) == '\0') {
            uVar50 = *(size_t *)(lVar41 + 0x8cf8);
            if (uVar50 == 0xffffffffffffffff) {
                    /* try { // try from 00a1f3a8 to 00b1f42b has its CatchHandler @ 00a1f188 */
              if (*(char **)(lVar41 + 0x290) == (char *)0x0) {
                uVar50 = 0xffffffffffffffff;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1f6e8 with catch @ 00a1f670
                       catch(type#1 @ 00000000) { ... } // from try @ 00a1f774 with catch @ 00a1f670
                        */
              }
              else {
                uVar50 = strlen(*(char **)(lVar41 + 0x290));
                if (uVar50 != 0xffffffffffffffff) goto LAB_00a1f090;
              }
            }
            else {
LAB_00a1f090:
              if (*(char *)(lVar41 + 0x211) == '\0') goto LAB_00a1f12c;
            }
          }
          else {
            uVar50 = 0;
            if (*(char *)(lVar41 + 0x211) != '\0') goto LAB_00a1f098;
LAB_00a1f12c:
            for (plVar43 = *(long **)(*param_1 + 0x3b8); plVar43 != (long *)0x0;
                plVar43 = (long *)plVar43[1]) {
              iVar16 = FUN_00a33838(*plVar43,"Content-Length:",0xf);
              if (iVar16 != 0) {
                if (*plVar43 != 0) goto LAB_00a1f098;
                break;
              }
            }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1f534 with catch @ 00a1f4ec
                        */
            iVar16 = FUN_00a21380(plVar48,"Content-Length: %ld\r\n",uVar50);
            if (iVar16 != 0) goto LAB_00a1e9fc;
          }
LAB_00a1f098:
          for (plVar43 = *(long **)(*param_1 + 0x3b8); plVar43 != (long *)0x0;
              plVar43 = (long *)plVar43[1]) {
            iVar16 = FUN_00a33838(*plVar43,"Content-Type:",0xd);
            if (iVar16 != 0) {
              if (*plVar43 != 0) goto LAB_00a1f1b4;
              break;
            }
          }
          iVar16 = FUN_00a21380(plVar48,"Content-Type: application/x-www-form-urlencoded\r\n");
          if (iVar16 != 0) goto LAB_00a1e9fc;
LAB_00a1f1b4:
          for (plVar43 = *(long **)(*param_1 + 0x3b8); plVar43 != (long *)0x0;
              plVar43 = (long *)plVar43[1]) {
            iVar16 = FUN_00a33838(*plVar43,"Expect:",7);
            if (iVar16 != 0) {
              if (*plVar43 != 0) {
                    /* catch() { ... } // from try @ 00a1f398 with catch @ 00a1f3f4 */
                bVar15 = FUN_00a21648(*plVar43,"Expect:","100-continue");
                bVar15 = bVar15 & 1;
                    /* catch() { ... } // from try @ 00a1f390 with catch @ 00a1f40c */
                *(byte *)(lVar41 + 0x8ca8) = bVar15;
                    /* catch() { ... } // from try @ 00a1f368 with catch @ 00a1f410 */
                lVar46 = *(long *)(lVar41 + 0x290);
                goto joined_r0x00a1f414;
              }
              break;
            }
          }
          bVar15 = 0;
          *(byte *)(lVar41 + 0x8ca8) = 0;
          if (0x400 < uVar50) {
            if (((*piVar2 != 10) && (iVar16 = (int)param_1[0x47], iVar16 != 10)) &&
               ((lVar46 = *(long *)(lVar41 + 0x438), 10 < iVar16 || (lVar46 != 1)))) {
              bVar15 = 0;
              if ((iVar16 != 0x14) && ((lVar46 == 0) == lVar46 < 2)) {
                for (plVar43 = *(long **)(*param_1 + 0x3b8); plVar43 != (long *)0x0;
                    plVar43 = (long *)plVar43[1]) {
                  iVar16 = FUN_00a33838(*plVar43,"Expect:",7);
                  if (iVar16 != 0) {
                    if (*plVar43 != 0) {
                      bVar15 = FUN_00a21648(*plVar43,"Expect:","100-continue");
                      bVar15 = bVar15 & 1;
                      goto LAB_00a1f908;
                    }
                    break;
                  }
                }
                iVar16 = FUN_00a21380(plVar48,"Expect: 100-continue\r\n");
                if (iVar16 != 0) goto LAB_00a1e9fc;
                bVar15 = 1;
LAB_00a1f908:
                *(byte *)(lVar41 + 0x8ca8) = bVar15;
              }
              goto LAB_00a1f90c;
            }
            bVar15 = 0;
            lVar46 = *(long *)(lVar41 + 0x290);
joined_r0x00a1f414:
            if (lVar46 != 0) goto LAB_00a1f914;
LAB_00a1f470:
            uVar36 = plVar48[2];
            if (0xfffffffffffffffd < uVar36) goto LAB_00a1f1fc;
            lVar46 = *plVar48;
            if (lVar46 != 0) {
              if (plVar48[1] - 1U < uVar36 + 2) {
                lVar20 = uVar36 * 2 + 4;
                if (0xfffffffffffffffb < uVar36 * 2 || (long)uVar36 < 0) {
                  lVar20 = -1;
                }
                lVar46 = FUN_00a379b0(lVar46,lVar20);
                goto joined_r0x00a1f6d0;
              }
LAB_00a1f6e0:
              *(undefined2 *)(lVar46 + uVar36) = 0xa0d;
                    /* try { // try from 00a1f6e8 to 00b1f767 has its CatchHandler @ 00a1f670 */
              lVar46 = plVar48[2];
              uVar36 = lVar46 + 2;
              plVar48[2] = uVar36;
              if ((*(char *)(lVar41 + 0x211) == '\0') || (*(char *)((long)param_1 + 0x3ca) == '\0'))
              {
                if (*(long *)(lVar41 + 0x8cf8) != 0) {
                  uVar36 = uVar50;
                    /* try { // try from 00a1f768 to 00b1f76b has its CatchHandler @ 00a1f76c */
                  if (uVar50 == 0) {
                    uVar36 = 0xffffffffffffffff;
                  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1f768 with catch @ 00a1f76c
                        */
                    /* try { // try from 00a1f770 to 00b1f773 has its CatchHandler @ 00a1f77c */
                  FUN_00a1b4f0(lVar41,uVar36);
                    /* try { // try from 00a1f774 to 00b1f77f has its CatchHandler @ 00a1f670 */
                  if (*(char *)((long)param_1 + 0x3ca) == '\0') {
                    uVar38 = 0;
                    plVar47[1] = uVar50;
                    plVar47[2] = (long)plVar27;
                    goto LAB_00a1fa64;
                  }
                }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1f770 with catch @ 00a1f77c
                        */
                uVar38 = 0;
                goto LAB_00a1fa64;
              }
              if (0xfffffffffffffffa < uVar36) goto LAB_00a1f1fc;
              lVar20 = *plVar48;
              if (lVar20 == 0) {
                lVar46 = uVar36 * 2 + 10;
                if (0xfffffffffffffff5 < uVar36 * 2 || (long)uVar36 < 0) {
                  lVar46 = -1;
                }
                lVar20 = (*(code *)PTR_malloc_01d1b740)(lVar46);
joined_r0x00a1f88c:
                if (lVar20 == 0) goto LAB_00a1eba4;
                uVar36 = plVar48[2];
                *plVar48 = lVar20;
                plVar48[1] = lVar46;
              }
              else if (plVar48[1] - 1U < lVar46 + 7U) {
                lVar46 = uVar36 * 2 + 10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1f6dc with catch @ 00a1f744
                        */
                if (0xfffffffffffffff5 < uVar36 * 2 || (long)uVar36 < 0) {
                  lVar46 = -1;
                }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1f6d4 with catch @ 00a1f748
                        */
                lVar20 = FUN_00a379b0(lVar20,lVar46);
                goto joined_r0x00a1f88c;
              }
              *(undefined1 *)((undefined4 *)(lVar20 + uVar36) + 1) = 10;
              *(undefined4 *)(lVar20 + uVar36) = 0xd0a0d30;
              lVar46 = plVar48[2] + 5;
LAB_00a1fa60:
              uVar38 = 0;
              plVar48[2] = lVar46;
              goto LAB_00a1fa64;
            }
            lVar20 = uVar36 * 2 + 4;
            if (0xfffffffffffffffb < uVar36 * 2 || (long)uVar36 < 0) {
              lVar20 = -1;
            }
            lVar46 = (*(code *)PTR_malloc_01d1b740)(lVar20);
joined_r0x00a1f6d0:
            if (lVar46 != 0) {
                    /* try { // try from 00a1f6d4 to 00b1f6d7 has its CatchHandler @ 00a1f748 */
              uVar36 = plVar48[2];
                    /* try { // try from 00a1f6dc to 00b1f6e7 has its CatchHandler @ 00a1f744 */
              *plVar48 = lVar46;
              plVar48[1] = lVar20;
              goto LAB_00a1f6e0;
            }
            goto LAB_00a1eba4;
          }
LAB_00a1f90c:
          lVar46 = *(long *)(lVar41 + 0x290);
          if (lVar46 == 0) goto LAB_00a1f470;
LAB_00a1f914:
          if ((((int)param_1[0x47] == 0x14) || (0xffff < (long)uVar50)) || (bVar15 != 0)) {
            plVar47[1] = uVar50;
            plVar47[2] = lVar46;
            *(undefined4 *)(plVar47 + 0xf) = 2;
            *(code **)(lVar41 + 0x8d10) = FUN_00a212bc;
            *(long **)(lVar41 + 0x8d18) = param_1;
            FUN_00a1b4f0(lVar41,uVar50);
            uVar36 = plVar48[2];
            if (0xfffffffffffffffd < uVar36) goto LAB_00a1f1fc;
            lVar46 = *plVar48;
            if (lVar46 == 0) {
                    /* try { // try from 00a1fa14 to 00b1fa1f has its CatchHandler @ 00a1fa54 */
                    /* try { // try from 00a1fa28 to 00b1fa33 has its CatchHandler @ 00a1fa44 */
              lVar20 = uVar36 * 2 + 4;
              if (0xfffffffffffffffb < uVar36 * 2 || (long)uVar36 < 0) {
                lVar20 = -1;
              }
                    /* try { // try from 00a1fa34 to 00b1fa67 has its CatchHandler @ 00a1f9e4 */
              lVar46 = (*(code *)PTR_malloc_01d1b740)(lVar20);
joined_r0x00a1fa38:
              if (lVar46 == 0) goto LAB_00a1eba4;
              uVar36 = plVar48[2];
                    /* catch() { ... } // from try @ 00a1fa28 with catch @ 00a1fa44 */
              *plVar48 = lVar46;
              plVar48[1] = lVar20;
            }
            else {
                    /* try { // try from 00a1f9e4 to 00b1fa13 has its CatchHandler @ 00a1f9e4
                       catch() { ... } // from try @ 00a1f9e4 with catch @ 00a1f9e4
                       catch() { ... } // from try @ 00a1fa34 with catch @ 00a1f9e4 */
              if (plVar48[1] - 1U < uVar36 + 2) {
                lVar20 = uVar36 * 2 + 4;
                if (0xfffffffffffffffb < uVar36 * 2 || (long)uVar36 < 0) {
                  lVar20 = -1;
                }
                lVar46 = FUN_00a379b0(lVar46,lVar20);
                goto joined_r0x00a1fa38;
              }
            }
            *(undefined2 *)(lVar46 + uVar36) = 0xa0d;
                    /* catch() { ... } // from try @ 00a1fa14 with catch @ 00a1fa54 */
            lVar46 = plVar48[2] + 2;
            goto LAB_00a1fa60;
          }
          uVar36 = plVar48[2];
          if (0xfffffffffffffffd < uVar36) goto LAB_00a1f1fc;
          lVar46 = *plVar48;
          if (lVar46 == 0) {
            lVar20 = uVar36 * 2 + 4;
            if (0xfffffffffffffffb < uVar36 * 2 || (long)uVar36 < 0) {
              lVar20 = -1;
            }
            lVar46 = (*(code *)PTR_malloc_01d1b740)(lVar20);
joined_r0x00a1fb74:
            if (lVar46 == 0) goto LAB_00a1eba4;
            uVar36 = plVar48[2];
            *plVar48 = lVar46;
            plVar48[1] = lVar20;
          }
          else if (plVar48[1] - 1U < uVar36 + 2) {
            lVar20 = uVar36 * 2 + 4;
            if (0xfffffffffffffffb < uVar36 * 2 || (long)uVar36 < 0) {
              lVar20 = -1;
            }
            lVar46 = FUN_00a379b0(lVar46,lVar20);
            goto joined_r0x00a1fb74;
          }
          *(undefined2 *)(lVar46 + uVar36) = 0xa0d;
          uVar36 = plVar48[2] + 2;
          plVar48[2] = uVar36;
          if (*(char *)(lVar41 + 0x211) != '\0') {
            if (uVar50 == 0) {
              uVar38 = 5;
joined_r0x00a1fcac:
              if (uVar36 < 0xfffffffffffffffb) {
                lVar46 = *plVar48;
                if (lVar46 == 0) {
                  lVar20 = uVar36 * 2 + 10;
                  if (0xfffffffffffffff5 < uVar36 * 2 || (long)uVar36 < 0) {
                    lVar20 = -1;
                  }
                  lVar46 = (*(code *)PTR_malloc_01d1b740)(lVar20);
joined_r0x00a1ff8c:
                  if (lVar46 == 0) goto LAB_00a1eba4;
                  uVar36 = plVar48[2];
                  *plVar48 = lVar46;
                  plVar48[1] = lVar20;
                }
                else if (plVar48[1] - 1U < uVar36 + 5) {
                  lVar20 = uVar36 * 2 + 10;
                  if (0xfffffffffffffff5 < uVar36 * 2 || (long)uVar36 < 0) {
                    lVar20 = -1;
                  }
                  lVar46 = FUN_00a379b0(lVar46,lVar20);
                  goto joined_r0x00a1ff8c;
                }
                *(undefined1 *)((undefined4 *)(lVar46 + uVar36) + 1) = 10;
                *(undefined4 *)(lVar46 + uVar36) = 0xd0a0d30;
                uVar36 = 5;
                goto LAB_00a1ffb8;
              }
            }
            else {
              iVar16 = FUN_00a21380(plVar48,&DAT_01891674,uVar50 & 0xffffffff);
              if (iVar16 != 0) goto LAB_00a1e9fc;
              uVar36 = plVar48[2];
              if (uVar36 <= ~uVar50) {
                pvVar28 = *(void **)(lVar41 + 0x290);
                lVar46 = *plVar48;
                if ((lVar46 == 0) || (plVar48[1] - 1U < uVar36 + uVar50)) {
                  lVar20 = -1;
                  if ((-1 < (long)(uVar36 | uVar50)) &&
                     (uVar38 = uVar50 << 1 ^ 0xffffffffffffffff,
                     uVar36 * 2 < uVar38 || uVar36 * 2 - uVar38 == 0)) {
                    lVar20 = (uVar36 + uVar50) * 2;
                  }
                  if (lVar46 == 0) {
                    lVar46 = (*(code *)PTR_malloc_01d1b740)(lVar20);
                  }
                  else {
                    lVar46 = FUN_00a379b0(lVar46,lVar20);
                  }
                  if (lVar46 == 0) goto LAB_00a1eba4;
                  uVar36 = plVar48[2];
                  *plVar48 = lVar46;
                  plVar48[1] = lVar20;
                }
                memcpy((void *)(lVar46 + uVar36),pvVar28,uVar50);
                uVar36 = plVar48[2] + uVar50;
                plVar48[2] = uVar36;
                if (uVar36 < 0xfffffffffffffffe) {
                  lVar46 = *plVar48;
                  if (lVar46 == 0) {
                    lVar20 = uVar36 * 2 + 4;
                    if (0xfffffffffffffffb < uVar36 * 2 || (long)uVar36 < 0) {
                      lVar20 = -1;
                    }
                    lVar46 = (*(code *)PTR_malloc_01d1b740)(lVar20);
joined_r0x00a200a4:
                    if (lVar46 == 0) goto LAB_00a1eba4;
                    uVar36 = plVar48[2];
                    *plVar48 = lVar46;
                    plVar48[1] = lVar20;
                  }
                  else if (plVar48[1] - 1U < uVar36 + 2) {
                    lVar20 = uVar36 * 2 + 4;
                    if (0xfffffffffffffffb < uVar36 * 2 || (long)uVar36 < 0) {
                      lVar20 = -1;
                    }
                    lVar46 = FUN_00a379b0(lVar46,lVar20);
                    goto joined_r0x00a200a4;
                  }
                  *(undefined2 *)(lVar46 + uVar36) = 0xa0d;
                  uVar38 = uVar50 + 7;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a20170 with catch @ 00a200c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00a203cc with catch @ 00a200c4
                        */
                  uVar36 = plVar48[2] + 2;
                  plVar48[2] = uVar36;
                  goto joined_r0x00a1fcac;
                }
              }
            }
            goto LAB_00a1f1fc;
          }
          if (~uVar50 < uVar36) goto LAB_00a1f1fc;
          pvVar28 = *(void **)(lVar41 + 0x290);
          lVar46 = *plVar48;
          if ((lVar46 == 0) || (plVar48[1] - 1U < uVar36 + uVar50)) {
            lVar20 = -1;
            if ((-1 < (long)(uVar36 | uVar50)) &&
               (uVar38 = uVar50 << 1 ^ 0xffffffffffffffff,
               uVar36 * 2 < uVar38 || uVar36 * 2 - uVar38 == 0)) {
              lVar20 = (uVar36 + uVar50) * 2;
            }
            if (lVar46 == 0) {
              lVar46 = (*(code *)PTR_malloc_01d1b740)(lVar20);
            }
            else {
              lVar46 = FUN_00a379b0(lVar46,lVar20);
            }
            if (lVar46 != 0) {
              uVar36 = plVar48[2];
              *plVar48 = lVar46;
              plVar48[1] = lVar20;
              goto LAB_00a1ff48;
            }
            goto LAB_00a1eba4;
          }
LAB_00a1ff48:
          memcpy((void *)(lVar46 + uVar36),pvVar28,uVar50);
          uVar36 = uVar50;
          uVar38 = uVar50;
LAB_00a1ffb8:
          plVar48[2] = plVar48[2] + uVar36;
          FUN_00a1b4f0(lVar41,uVar50);
LAB_00a1fa64:
          iVar16 = FUN_00a210d0(plVar48,param_1,lVar41 + 0x8d90,uVar38,0);
          if (iVar16 != 0) {
            pcVar52 = "Failed sending HTTP POST request";
            goto LAB_00a1fa90;
          }
          bVar14 = *plVar27 == 0;
          bVar15 = bVar14;
LAB_00a1faa8:
          plVar47 = plVar33;
          if (bVar14) {
            plVar47 = (long *)0x0;
          }
          FUN_00a335d8(param_1,0,0xffffffffffffffff,1,plVar37,-(uint)bVar15,plVar47);
        }
        else {
          if (uVar42 == 4) {
            if (*(char *)((long)param_1 + 0x3ca) == '\0') {
              uVar50 = *(ulong *)(lVar41 + 0x8cf8);
              if (uVar50 != 0xffffffffffffffff) {
                cVar10 = *(char *)(lVar41 + 0x211);
                goto joined_r0x00a1f0e0;
              }
LAB_00a1f0e8:
              pbVar3 = (byte *)(lVar41 + 0x8ca8);
              *pbVar3 = 0;
              if (((*piVar2 == 10) || (iVar16 = (int)param_1[0x47], iVar16 == 10)) ||
                 ((lVar46 = *(long *)(lVar41 + 0x438), iVar16 < 0xb && (lVar46 == 1)))) {
LAB_00a1f124:
                bVar13 = true;
              }
              else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1f5d4 with catch @ 00a1f614
                        */
                bVar13 = true;
                if ((iVar16 != 0x14) && ((lVar46 == 0) == lVar46 < 2)) {
                  for (plVar47 = *(long **)(*param_1 + 0x3b8); plVar47 != (long *)0x0;
                      plVar47 = (long *)plVar47[1]) {
                    iVar16 = FUN_00a33838(*plVar47,"Expect:",7);
                    if (iVar16 != 0) {
                      if (*plVar47 != 0) {
                        bVar15 = FUN_00a21648(*plVar47,"Expect:","100-continue");
                        *pbVar3 = bVar15 & 1;
                        goto LAB_00a1f124;
                      }
                      break;
                    }
                  }
                  iVar16 = FUN_00a21380(plVar48,"Expect: 100-continue\r\n");
                  if (iVar16 != 0) goto LAB_00a1e9fc;
                  bVar13 = true;
                  *pbVar3 = 1;
                }
              }
            }
            else {
              uVar50 = 0;
              cVar10 = *(char *)(lVar41 + 0x211);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1ef54 with catch @ 00a1f020
                        */
joined_r0x00a1f0e0:
              if (cVar10 == '\0') {
                for (plVar47 = *(long **)(*param_1 + 0x3b8); plVar47 != (long *)0x0;
                    plVar47 = (long *)plVar47[1]) {
                  iVar16 = FUN_00a33838(*plVar47,"Content-Length:",0xf);
                  if (iVar16 != 0) {
                    /* try { // try from 00a1f52c to 00b1f533 has its CatchHandler @ 00a1f590 */
                    if (*plVar47 != 0) goto LAB_00a1f0e4;
                    break;
                  }
                    /* try { // try from 00a1f188 to 00b1f367 has its CatchHandler @ 00a1f188
                       catch() { ... } // from try @ 00a1f188 with catch @ 00a1f188
                       catch() { ... } // from try @ 00a1f3a8 with catch @ 00a1f188 */
                }
                    /* try { // try from 00a1f534 to 00b1f593 has its CatchHandler @ 00a1f4ec */
                iVar16 = FUN_00a21380(plVar48,"Content-Length: %ld\r\n",uVar50);
                if (iVar16 != 0) goto LAB_00a1e9fc;
              }
LAB_00a1f0e4:
              if (uVar50 != 0) goto LAB_00a1f0e8;
              bVar13 = false;
            }
            uVar36 = plVar48[2];
            if (0xfffffffffffffffd < uVar36) {
LAB_00a1f1fc:
              (*(code *)PTR_free_01d1b748)(*plVar48);
              *plVar48 = 0;
LAB_00a1eba4:
              (*(code *)PTR_free_01d1b748)(plVar48);
              iVar16 = 0x1b;
              goto LAB_00a1e9fc;
            }
            lVar46 = *plVar48;
            if (lVar46 == 0) {
              lVar20 = uVar36 * 2 + 4;
              if (0xfffffffffffffffb < uVar36 * 2 || (long)uVar36 < 0) {
                lVar20 = -1;
              }
              lVar46 = (*(code *)PTR_malloc_01d1b740)(lVar20);
joined_r0x00a1f340:
              if (lVar46 == 0) goto LAB_00a1eba4;
              uVar36 = plVar48[2];
              *plVar48 = lVar46;
              plVar48[1] = lVar20;
            }
            else if (plVar48[1] - 1U < uVar36 + 2) {
              lVar20 = uVar36 * 2 + 4;
              if (0xfffffffffffffffb < uVar36 * 2 || (long)uVar36 < 0) {
                lVar20 = -1;
              }
              lVar46 = FUN_00a379b0(lVar46,lVar20);
              goto joined_r0x00a1f340;
            }
            *(undefined2 *)(lVar46 + uVar36) = 0xa0d;
                    /* try { // try from 00a1f368 to 00b1f36f has its CatchHandler @ 00a1f410 */
            plVar48[2] = plVar48[2] + 2;
            FUN_00a1b4f0(lVar41,uVar50);
            iVar16 = FUN_00a210d0(plVar48,param_1,lVar41 + 0x8d90,0,0);
                    /* try { // try from 00a1f390 to 00b1f397 has its CatchHandler @ 00a1f40c */
            if (iVar16 != 0) {
                    /* try { // try from 00a1f398 to 00b1f3a7 has its CatchHandler @ 00a1f3f4 */
              pcVar52 = "Failed sending PUT request";
              goto LAB_00a1fa90;
            }
            bVar14 = !bVar13;
            bVar15 = ~bVar13;
            goto LAB_00a1faa8;
          }
          plVar43 = plVar33;
          if (uVar42 == 3) {
            if ((*plVar47 == 0) || (*(char *)((long)param_1 + 0x3ca) != '\0')) {
              iVar16 = FUN_00a21380(plVar48,"Content-Length: 0\r\n\r\n");
              if (iVar16 != 0) goto LAB_00a1e9fc;
              iVar16 = FUN_00a210d0(plVar48,param_1,lVar41 + 0x8d90,0,0);
              if (iVar16 != 0) {
                pcVar52 = "Failed sending POST request";
                goto LAB_00a1fa90;
              }
              iVar16 = -1;
              plVar43 = (long *)0x0;
              goto LAB_00a1f51c;
            }
            plVar27 = plVar47 + 7;
            iVar16 = FUN_00a4c814(plVar27);
            if (iVar16 != 0) {
              pcVar52 = "Internal HTTP POST error!";
LAB_00a1f28c:
              FUN_00a23020(lVar41,pcVar52);
              iVar16 = 0x22;
              goto LAB_00a1e9fc;
            }
            plVar47[10] = *(long *)(lVar41 + 0x8d10);
            *(code **)(lVar41 + 0x8d10) = FUN_00a4cce0;
            *(long **)(lVar41 + 0x8d18) = plVar27;
            *(undefined4 *)(plVar47 + 0xf) = 2;
            if (*(char *)(lVar41 + 0x211) == '\0') {
              for (plVar44 = *(long **)(*param_1 + 0x3b8); plVar44 != (long *)0x0;
                  plVar44 = (long *)plVar44[1]) {
                iVar16 = FUN_00a33838(*plVar44,"Content-Length:",0xf);
                if (iVar16 != 0) {
                  if (*plVar44 != 0) goto LAB_00a1f588;
                  break;
                }
              }
              iVar16 = FUN_00a21380(plVar48,"Content-Length: %ld\r\n",plVar47[1]);
              if (iVar16 != 0) goto LAB_00a1e9fc;
            }
LAB_00a1f588:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1f52c with catch @ 00a1f590
                        */
            *(byte *)(lVar41 + 0x8ca8) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1f5e0 with catch @ 00a1f594
                        */
            if (((*piVar2 != 10) && (iVar16 = (int)param_1[0x47], iVar16 != 10)) &&
               ((lVar46 = *(long *)(lVar41 + 0x438), 10 < iVar16 || (lVar46 != 1)))) {
                    /* try { // try from 00a1f5d4 to 00b1f5df has its CatchHandler @ 00a1f614 */
              if ((iVar16 != 0x14) && ((lVar46 == 0) == lVar46 < 2)) {
                    /* try { // try from 00a1f5e0 to 00b1f617 has its CatchHandler @ 00a1f594 */
                for (plVar44 = *(long **)(*param_1 + 0x3b8); plVar44 != (long *)0x0;
                    plVar44 = (long *)plVar44[1]) {
                  iVar16 = FUN_00a33838(*plVar44,"Expect:",7);
                  if (iVar16 != 0) {
                    if (*plVar44 != 0) {
                      bVar15 = FUN_00a21648(*plVar44,"Expect:","100-continue");
                      bVar15 = bVar15 & 1;
                      goto LAB_00a1fd38;
                    }
                    break;
                  }
                }
                iVar16 = FUN_00a21380(plVar48,"Expect: 100-continue\r\n");
                if (iVar16 != 0) goto LAB_00a1e9fc;
                bVar15 = 1;
LAB_00a1fd38:
                *(byte *)(lVar41 + 0x8ca8) = bVar15;
              }
            }
            local_80 = 0;
            pvVar28 = (void *)FUN_00a4ce3c(plVar27,&local_80);
            uVar50 = local_80;
            if (pvVar28 == (void *)0x0) {
              pcVar52 = "Could not get Content-Type header line!";
              goto LAB_00a1f28c;
            }
                    /* try { // try from 00a1fd54 to 00b1fde7 has its CatchHandler @ 00a1fd54
                       catch() { ... } // from try @ 00a1fd54 with catch @ 00a1fd54
                       catch() { ... } // from try @ 00a1fdf0 with catch @ 00a1fd54
                       catch() { ... } // from try @ 00a1fe48 with catch @ 00a1fd54 */
            uVar36 = plVar48[2];
            if (uVar36 <= ~local_80) {
              lVar46 = *plVar48;
              if ((lVar46 == 0) || (plVar48[1] - 1U < uVar36 + local_80)) {
                lVar20 = -1;
                if ((-1 < (long)(uVar36 | local_80)) &&
                   (uVar38 = local_80 << 1 ^ 0xffffffffffffffff,
                   uVar36 * 2 < uVar38 || uVar36 * 2 - uVar38 == 0)) {
                  lVar20 = (uVar36 + local_80) * 2;
                }
                if (lVar46 == 0) {
                  lVar46 = (*(code *)PTR_malloc_01d1b740)(lVar20);
                }
                else {
                  lVar46 = FUN_00a379b0(lVar46,lVar20);
                }
                    /* try { // try from 00a1fde8 to 00b1fdef has its CatchHandler @ 00a1fe48 */
                if (lVar46 == 0) goto LAB_00a1eba4;
                    /* try { // try from 00a1fdf0 to 00b1fe1b has its CatchHandler @ 00a1fd54 */
                uVar36 = plVar48[2];
                *plVar48 = lVar46;
                plVar48[1] = lVar20;
              }
              memcpy((void *)(lVar46 + uVar36),pvVar28,uVar50);
              uVar50 = plVar48[2] + uVar50;
              plVar48[2] = uVar50;
                    /* try { // try from 00a1fe1c to 00b1fe1f has its CatchHandler @ 00a1fe50 */
              if (uVar50 < 0xfffffffffffffffe) {
                lVar46 = *plVar48;
                if (lVar46 == 0) {
                  lVar20 = uVar50 * 2 + 4;
                  if (0xfffffffffffffffb < uVar50 * 2 || (long)uVar50 < 0) {
                    lVar20 = -1;
                  }
                  lVar46 = (*(code *)PTR_malloc_01d1b740)(lVar20);
joined_r0x00a1fe90:
                  if (lVar46 == 0) goto LAB_00a1eba4;
                  uVar50 = plVar48[2];
                  *plVar48 = lVar46;
                  plVar48[1] = lVar20;
                }
                else {
                    /* try { // try from 00a1fe40 to 00b1fe47 has its CatchHandler @ 00a1fe48 */
                  if (plVar48[1] - 1U < uVar50 + 2) {
                    /* catch() { ... } // from try @ 00a1fde8 with catch @ 00a1fe48
                       catch() { ... } // from try @ 00a1fe40 with catch @ 00a1fe48
                       try { // try from 00a1fe48 to 00b1fe9f has its CatchHandler @ 00a1fd54 */
                    /* catch() { ... } // from try @ 00a1fe1c with catch @ 00a1fe50 */
                    lVar20 = uVar50 * 2 + 4;
                    if (0xfffffffffffffffb < uVar50 * 2 || (long)uVar50 < 0) {
                      lVar20 = -1;
                    }
                    lVar46 = FUN_00a379b0(lVar46,lVar20);
                    goto joined_r0x00a1fe90;
                  }
                }
                *(undefined2 *)(lVar46 + uVar50) = 0xa0d;
                plVar48[2] = plVar48[2] + 2;
                FUN_00a1b4f0(lVar41,plVar47[1]);
                iVar16 = FUN_00a210d0(plVar48,param_1,lVar41 + 0x8d90,0,0);
                if (iVar16 != 0) {
                  FUN_00a23020(lVar41,"Failed sending POST request");
                  FUN_00a4bf28(plVar47);
                  goto LAB_00a1e9fc;
                }
                iVar16 = 0;
                goto LAB_00a1f51c;
              }
            }
            goto LAB_00a1f1fc;
          }
          uVar50 = plVar48[2];
          if (0xfffffffffffffffd < uVar50) goto LAB_00a1f1fc;
          lVar46 = *plVar48;
          if (lVar46 == 0) {
            lVar20 = uVar50 * 2 + 4;
            if (0xfffffffffffffffb < uVar50 * 2 || (long)uVar50 < 0) {
              lVar20 = -1;
            }
            lVar46 = (*(code *)PTR_malloc_01d1b740)(lVar20);
joined_r0x00a1f2c4:
            if (lVar46 == 0) goto LAB_00a1eba4;
            uVar50 = plVar48[2];
            *plVar48 = lVar46;
            plVar48[1] = lVar20;
          }
          else if (plVar48[1] - 1U < uVar50 + 2) {
            lVar20 = uVar50 * 2 + 4;
            if (0xfffffffffffffffb < uVar50 * 2 || (long)uVar50 < 0) {
              lVar20 = -1;
            }
            lVar46 = FUN_00a379b0(lVar46,lVar20);
            goto joined_r0x00a1f2c4;
          }
          *(undefined2 *)(lVar46 + uVar50) = 0xa0d;
          plVar48[2] = plVar48[2] + 2;
          iVar16 = FUN_00a210d0(plVar48,param_1,lVar41 + 0x8d90,0,0);
          if (iVar16 != 0) {
            pcVar52 = "Failed sending HTTP request";
LAB_00a1fa90:
            FUN_00a23020(lVar41,pcVar52);
            goto LAB_00a1e9fc;
          }
          iVar16 = -(uint)(*plVar27 == 0);
          if (*plVar27 == 0) {
            plVar43 = (long *)0x0;
          }
LAB_00a1f51c:
          FUN_00a335d8(param_1,0,0xffffffffffffffff,1,plVar37,iVar16,plVar43);
          uVar50 = 0;
        }
        if (*plVar33 == 0) {
          iVar16 = 0;
        }
        else {
          FUN_00a1b744(lVar41);
          iVar19 = FUN_00a1ace8(param_1);
          iVar16 = 0;
          if (iVar19 != 0) {
            iVar16 = 0x2a;
          }
          if ((long)uVar50 <= *plVar33) {
            FUN_00a22d58(lVar41,"upload completely sent off: %ld out of %ld bytes\n",*plVar33,uVar50
                        );
            *(undefined1 *)(lVar41 + 0x1e8) = 1;
            *(undefined4 *)(lVar41 + 0x140) = 0;
            *(uint *)(lVar41 + 0x1e4) = *(uint *)(lVar41 + 0x1e4) & 0xfffffffd;
          }
        }
        if (((int)param_1[0x47] == 0x14) && (*(char *)(lVar41 + 0x211) != '\0')) {
          *(undefined1 *)(lVar41 + 0x211) = 0;
        }
        goto LAB_00a1e9fc;
      }
    }
  }
LAB_00a1e9f8:
  iVar16 = 0x1b;
LAB_00a1e9fc:
  if (*(long *)(lVar11 + 0x28) == local_68) {
                    /* try { // try from 00a1ea20 to 00b1ea27 has its CatchHandler @ 00a1eb40 */
    return iVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

