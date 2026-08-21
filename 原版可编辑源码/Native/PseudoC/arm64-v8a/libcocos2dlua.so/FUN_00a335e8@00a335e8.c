
/* WARNING: Type propagation algorithm not settling */

int FUN_00a335e8(long *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  char cVar10;
  long lVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  char *pcVar20;
  char *pcVar21;
  size_t __n;
  size_t sVar22;
  char *pcVar23;
  size_t sVar24;
  char *pcVar25;
  long *plVar26;
  void *pvVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 uVar30;
  undefined4 uVar31;
  long *plVar32;
  char *pcVar33;
  long lVar34;
  ulong uVar35;
  long *plVar36;
  ulong uVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  long lVar40;
  uint uVar41;
  long *plVar42;
  long *plVar43;
  size_t __n_00;
  undefined1 *puVar44;
  long lVar45;
  long *plVar46;
  long *plVar47;
  undefined8 *puVar48;
  ulong uVar49;
  undefined1 *puVar50;
  char *pcVar51;
  char *pcVar52;
  long local_a8;
  ulong local_80;
  undefined8 local_78;
  undefined1 local_70;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  lVar40 = *param_1;
  puVar1 = (undefined8 *)(lVar40 + 0x8cc0);
  pcVar51 = (char *)*puVar1;
  local_70 = 0;
  local_78 = 0;
  lVar45 = param_1[0x18];
  uVar41 = *(uint *)(lVar40 + 0x430);
  *param_2 = 1;
  iVar15 = 1;
  if (0x13 < (int)param_1[0x47]) goto LAB_00a343e4;
                    /* try { // try from 00a3364c to 00b3368b has its CatchHandler @ 00a3364c
                       catch() { ... } // from try @ 00a3364c with catch @ 00a3364c
                       catch() { ... } // from try @ 00a336d0 with catch @ 00a3364c
                       catch() { ... } // from try @ 00a3377c with catch @ 00a3364c */
  if ((int)param_1[0xe4] == 3) {
    *(undefined4 *)(param_1 + 0x47) = 0x14;
    iVar15 = 1;
    goto LAB_00a343e4;
  }
  pcVar25 = (char *)(lVar40 + 0x8b18);
  plVar46 = *(long **)(lVar40 + 0x218);
  if (*pcVar25 == '\0') {
                    /* try { // try from 00a3368c to 00b336a3 has its CatchHandler @ 00a33788 */
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar40 + 0x8b20));
    lVar19 = (*(code *)PTR_strdup_01769a10)(param_1[0x18]);
                    /* try { // try from 00a336a8 to 00b336cf has its CatchHandler @ 00a33784 */
    *(long *)(lVar40 + 0x8b20) = lVar19;
    if (lVar19 != 0) {
      *(int *)(lVar40 + 0x8b28) = (int)param_1[0x34];
      goto LAB_00a336bc;
    }
  }
  else {
LAB_00a336bc:
    plVar36 = plVar46 + 5;
    *plVar36 = 0;
    plVar32 = plVar46 + 6;
    *plVar32 = 0;
                    /* try { // try from 00a336d0 to 00b33773 has its CatchHandler @ 00a3364c */
    if (((*(byte *)(param_1[0x80] + 0x78) & 7) != 0) && (*(char *)(lVar40 + 0x621) != '\0')) {
      uVar41 = 4;
    }
    pcVar52 = *(char **)(lVar40 + 0x6a0);
    if (pcVar52 == (char *)0x0) {
      if (*(char *)(lVar40 + 0x620) == '\0') {
        if (uVar41 - 2 < 4) {
          pcVar52 = (&PTR_s_POST_013c2597_0x20_016a3b70)[(int)(uVar41 - 2)];
        }
        else {
          pcVar52 = "GET";
        }
      }
      else {
        pcVar52 = "HEAD";
      }
    }
    for (plVar47 = *(long **)(*param_1 + 0x3b8); plVar47 != (long *)0x0;
        plVar47 = (long *)plVar47[1]) {
      iVar15 = FUN_00a4a220(*plVar47,"User-Agent:",0xb);
      if (iVar15 != 0) {
        if (*plVar47 != 0) {
                    /* try { // try from 00a33774 to 00b3377b has its CatchHandler @ 00a33784 */
                    /* try { // try from 00a3377c to 00b337a3 has its CatchHandler @ 00a3364c */
                    /* catch() { ... } // from try @ 00a336a8 with catch @ 00a33784
                       catch() { ... } // from try @ 00a33774 with catch @ 00a33784 */
          (*(code *)PTR_free_01769a00)(param_1[0x85]);
                    /* catch() { ... } // from try @ 00a3368c with catch @ 00a33788 */
          param_1[0x85] = 0;
        }
        break;
      }
    }
    iVar15 = FUN_00a36370(param_1,pcVar52,pcVar51,0);
                    /* try { // try from 00a337a4 to 00b337ef has its CatchHandler @ 00a337a4
                       catch() { ... } // from try @ 00a337a4 with catch @ 00a337a4
                       catch() { ... } // from try @ 00a337f4 with catch @ 00a337a4 */
    if (iVar15 != 0) goto LAB_00a343e4;
    if (((*(char *)(lVar40 + 0x8c11) == '\0') && (*(char *)(lVar40 + 0x8c31) == '\0')) ||
       ((uVar41 | 4) == 5)) {
      uVar30 = 0;
    }
    else {
      uVar30 = 1;
    }
    *(undefined1 *)((long)param_1 + 0x3ca) = uVar30;
    (*(code *)PTR_free_01769a00)(param_1[0x89]);
                    /* try { // try from 00a337f0 to 00b337f3 has its CatchHandler @ 00a33828 */
    param_1[0x89] = 0;
                    /* try { // try from 00a337f4 to 00b3383b has its CatchHandler @ 00a337a4 */
    if (*(long *)(lVar40 + 0x918) == 0) {
LAB_00a33838:
      param_1[0x89] = 0;
                    /* try { // try from 00a3383c to 00b33c0b has its CatchHandler @ 00a3383c
                       catch() { ... } // from try @ 00a3383c with catch @ 00a3383c
                       catch() { ... } // from try @ 00a33c8c with catch @ 00a3383c */
      if (*(long *)(lVar40 + 0x690) == 0) goto LAB_00a338a4;
LAB_00a33868:
      for (plVar47 = *(long **)(*param_1 + 0x3b8); plVar47 != (long *)0x0;
          plVar47 = (long *)plVar47[1]) {
        iVar15 = FUN_00a4a220(*plVar47,"Cookie:",7);
        if (iVar15 != 0) {
          if (*plVar47 != 0) goto LAB_00a338a4;
          break;
        }
      }
      local_a8 = *(long *)(lVar40 + 0x690);
    }
    else {
      for (plVar47 = *(long **)(*param_1 + 0x3b8); plVar47 != (long *)0x0;
          plVar47 = (long *)plVar47[1]) {
        iVar15 = FUN_00a4a220(*plVar47,"Referer:",8);
        if (iVar15 != 0) {
          if (*plVar47 != 0) goto LAB_00a33838;
          break;
        }
                    /* catch() { ... } // from try @ 00a337f0 with catch @ 00a33828 */
      }
      lVar19 = FUN_00a24258("Referer: %s\r\n",*(undefined8 *)(lVar40 + 0x918));
      param_1[0x89] = lVar19;
      if (lVar19 == 0) goto LAB_00a343e0;
      if (*(long *)(lVar40 + 0x690) != 0) goto LAB_00a33868;
LAB_00a338a4:
      local_a8 = 0;
    }
    for (plVar47 = *(long **)(*param_1 + 0x3b8); plVar47 != (long *)0x0;
        plVar47 = (long *)plVar47[1]) {
      iVar15 = FUN_00a4a220(*plVar47,"Accept-Encoding:",0x10);
      if (iVar15 != 0) {
        if (*plVar47 != 0) goto LAB_00a3392c;
        break;
      }
    }
    if (*(long *)(lVar40 + 0x6b8) == 0) {
LAB_00a3392c:
      (*(code *)PTR_free_01769a00)(param_1[0x86]);
      param_1[0x86] = 0;
    }
    else {
      (*(code *)PTR_free_01769a00)(param_1[0x86]);
      param_1[0x86] = 0;
      lVar19 = FUN_00a24258("Accept-Encoding: %s\r\n",*(undefined8 *)(lVar40 + 0x6b8));
      param_1[0x86] = lVar19;
      if (lVar19 == 0) goto LAB_00a343e0;
    }
    for (plVar47 = *(long **)(*param_1 + 0x3b8); plVar47 != (long *)0x0;
        plVar47 = (long *)plVar47[1]) {
      iVar15 = FUN_00a4a220(*plVar47,&DAT_013c3c81,3);
      if (iVar15 != 0) {
        if (*plVar47 != 0) goto LAB_00a33a1c;
        break;
      }
    }
    if (*(char *)(lVar40 + 0x61b) != '\0') {
      for (plVar47 = *(long **)(*param_1 + 0x3b8); plVar47 != (long *)0x0;
          plVar47 = (long *)plVar47[1]) {
        iVar15 = FUN_00a4a220(*plVar47,"Connection:",0xb);
        if (iVar15 != 0) {
          lVar19 = *plVar47;
          goto LAB_00a339c4;
        }
      }
      lVar19 = 0;
LAB_00a339c4:
      (*(code *)PTR_free_01769a00)(param_1[0x8d]);
      param_1[0x8d] = 0;
      if (lVar19 == 0) {
        lVar19 = (*(code *)PTR_strdup_01769a10)("Connection: TE\r\nTE: gzip\r\n");
        param_1[0x8d] = lVar19;
      }
      else {
        lVar19 = FUN_00a24258("%s, TE\r\nTE: gzip\r\n",lVar19);
        param_1[0x8d] = lVar19;
      }
      if (lVar19 == 0) goto LAB_00a343e0;
    }
LAB_00a33a1c:
    for (plVar47 = *(long **)(*param_1 + 0x3b8); plVar47 != (long *)0x0;
        plVar47 = (long *)plVar47[1]) {
      iVar15 = FUN_00a4a220(*plVar47,"Transfer-Encoding:",0x12);
      if (iVar15 != 0) {
        if (*plVar47 != 0) {
          bVar14 = FUN_00a37030(*plVar47,"Transfer-Encoding:","chunked");
          *(byte *)(lVar40 + 0x211) = bVar14 & 1;
          pcVar33 = "";
          goto LAB_00a33ac8;
        }
        break;
      }
    }
    bVar14 = *(byte *)(param_1[0x80] + 0x78) & 3;
    if (((*(byte *)(param_1[0x80] + 0x78) & 3) == 0) ||
       (bVar14 = 0, *(char *)(lVar40 + 0x621) == '\0')) {
LAB_00a33aac:
      *(byte *)(lVar40 + 0x211) = bVar14;
    }
    else {
      if (*(long *)(lVar40 + 0x8cf8) != -1) {
        bVar14 = 0;
        goto LAB_00a33aac;
      }
      if (*(char *)((long)param_1 + 0x3ca) == '\0') {
        if ((((*(int *)(lVar40 + 0x8ca4) == 10) || ((int)param_1[0x47] == 10)) ||
            ((lVar19 = *(long *)(lVar40 + 0x438), (int)param_1[0x47] < 0xb && (lVar19 == 1)))) ||
           ((bVar14 = 1, lVar19 != 0 && (lVar19 < 2)))) {
          FUN_00a38a08(lVar40,"Chunky upload is not supported by HTTP 1.0");
          iVar15 = 0x19;
                    /* try { // try from 00a34044 to 00b3408b has its CatchHandler @ 00a3424c */
          goto LAB_00a343e4;
        }
        goto LAB_00a33aac;
      }
      bVar14 = *(byte *)(lVar40 + 0x211);
    }
    pcVar33 = "";
    if (bVar14 != 0) {
      pcVar33 = "Transfer-Encoding: chunked\r\n";
    }
LAB_00a33ac8:
    (*(code *)PTR_free_01769a00)(param_1[0x8a]);
    param_1[0x8a] = 0;
    for (puVar48 = *(undefined8 **)(*param_1 + 0x3b8); puVar48 != (undefined8 *)0x0;
        puVar48 = (undefined8 *)puVar48[1]) {
      iVar15 = FUN_00a4a220(*puVar48,"Host:",5);
      if (iVar15 != 0) {
        pcVar23 = (char *)*puVar48;
        if ((pcVar23 != (char *)0x0) &&
           ((*pcVar25 == '\0' ||
            (iVar15 = FUN_00a4a0f8(*(undefined8 *)(lVar40 + 0x8b20),param_1[0x18]), iVar15 != 0))))
        {
          pcVar20 = (char *)FUN_00a35e0c(pcVar23);
          if (pcVar20 == (char *)0x0) goto LAB_00a343e0;
          if (*pcVar20 == '[') {
                    /* try { // try from 00a341c4 to 00b341d7 has its CatchHandler @ 00a3424c */
            sVar24 = strlen(pcVar20);
                    /* try { // try from 00a341dc to 00b341ef has its CatchHandler @ 00a34250 */
            memmove(pcVar20,pcVar20 + 1,sVar24 - 1);
            iVar15 = 0x5d;
LAB_00a341f0:
                    /* try { // try from 00a341f4 to 00b34207 has its CatchHandler @ 00a34254 */
            pcVar21 = strchr(pcVar20,iVar15);
            if (pcVar21 != (char *)0x0) {
              *pcVar21 = '\0';
            }
                    /* try { // try from 00a34208 to 00b3426f has its CatchHandler @ 00a33fe4 */
            (*(code *)PTR_free_01769a00)(param_1[0x8b]);
            param_1[0x8b] = (long)pcVar20;
          }
          else {
            if (*pcVar20 != '\0') {
              iVar15 = 0x3a;
              goto LAB_00a341f0;
            }
            (*(code *)PTR_free_01769a00)(pcVar20);
          }
          iVar15 = strcmp("Host:",pcVar23);
          if (iVar15 != 0) {
            lVar19 = FUN_00a24258("%s\r\n",pcVar23);
            param_1[0x8a] = lVar19;
            goto joined_r0x00a34240;
          }
          param_1[0x8a] = 0;
                    /* catch() { ... } // from try @ 00a34044 with catch @ 00a3424c
                       catch() { ... } // from try @ 00a341c4 with catch @ 00a3424c */
          cVar10 = *(char *)((long)param_1 + 0x3be);
          goto joined_r0x00a34250;
        }
        break;
      }
    }
    if ((((*(uint *)(param_1[0x81] + 0x78) >> 1 & 1) == 0) || ((int)param_1[0x34] != 0x1bb)) &&
       (((*(uint *)(param_1[0x81] + 0x78) & 1) == 0 || ((int)param_1[0x34] != 0x50)))) {
      pcVar23 = "]";
      pcVar20 = "[";
      if (*(char *)((long)param_1 + 0x3c2) == '\0') {
        pcVar23 = "";
        pcVar20 = "";
      }
                    /* try { // try from 00a33c0c to 00b33c3f has its CatchHandler @ 00a33d0c */
      lVar19 = FUN_00a24258("Host: %s%s%s:%hu\r\n",pcVar20,lVar45,pcVar23);
      param_1[0x8a] = lVar19;
    }
    else {
      pcVar23 = "]";
      pcVar20 = "[";
      if (*(char *)((long)param_1 + 0x3c2) == '\0') {
        pcVar23 = "";
        pcVar20 = "";
      }
      lVar19 = FUN_00a24258("Host: %s%s%s\r\n",pcVar20,lVar45,pcVar23);
      param_1[0x8a] = lVar19;
    }
joined_r0x00a34240:
    if (lVar19 != 0) {
      cVar10 = *(char *)((long)param_1 + 0x3be);
joined_r0x00a34250:
                    /* catch() { ... } // from try @ 00a34098 with catch @ 00a34250
                       catch() { ... } // from try @ 00a341dc with catch @ 00a34250 */
      if ((cVar10 == '\0') || (*(char *)((long)param_1 + 0x3c9) != '\0')) {
LAB_00a33c34:
        bVar13 = false;
      }
      else {
        pcVar23 = (char *)param_1[0x18];
        pcVar20 = (char *)param_1[0x19];
        pcVar51 = *(char **)(lVar40 + 0x908);
                    /* try { // try from 00a33c8c to 00b33d27 has its CatchHandler @ 00a3383c */
        if ((pcVar20 != pcVar23) && (pcVar21 = strstr(pcVar51,pcVar20), pcVar21 != (char *)0x0)) {
          sVar24 = strlen(pcVar20);
          __n = strlen(pcVar23);
          sVar22 = strlen(pcVar51);
                    /* catch() { ... } // from try @ 00a33c40 with catch @ 00a33cd8 */
                    /* catch() { ... } // from try @ 00a33c58 with catch @ 00a33cdc */
          pcVar23 = (char *)(*(code *)PTR_malloc_017699f8)((1 - sVar24) + __n + sVar22);
          if (pcVar23 == (char *)0x0) goto LAB_00a343e0;
          __n_00 = (long)pcVar21 - (long)pcVar51;
          memcpy(pcVar23,pcVar51,__n_00);
                    /* catch() { ... } // from try @ 00a33c0c with catch @ 00a33d0c */
          memcpy(pcVar23 + __n_00,(void *)param_1[0x18],__n);
          memcpy(pcVar23 + __n_00 + __n,pcVar21 + sVar24,((1 - __n_00) - sVar24) + sVar22);
          if (*(char *)(lVar40 + 0x910) != '\0') {
            (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar40 + 0x908));
            *(undefined8 *)(lVar40 + 0x908) = 0;
            *(undefined1 *)(lVar40 + 0x910) = 0;
          }
          *(char **)(lVar40 + 0x908) = pcVar23;
          *(undefined1 *)(lVar40 + 0x910) = 1;
          pcVar51 = pcVar23;
        }
                    /* catch() { ... } // from try @ 00a33e94 with catch @ 00a33f18 */
        iVar15 = FUN_00a4a37c("ftp://",pcVar51,6);
        if (iVar15 == 0) goto LAB_00a33c34;
        if (*(char *)(lVar40 + 0x668) != '\0') {
          pcVar23 = strstr(pcVar51,";type=");
                    /* catch() { ... } // from try @ 00a33e48 with catch @ 00a33f48 */
          if (pcVar23 == (char *)0x0) {
LAB_00a33f88:
            if (*(char *)*puVar1 == '\0') {
              puVar48 = &local_78;
              sVar24 = strlen(pcVar51);
              if (pcVar51[sVar24 - 1] != '/') {
                puVar48 = (undefined8 *)((ulong)puVar48 | 1);
                local_78 = CONCAT71(local_78._1_7_,0x2f);
              }
            }
            else {
              puVar48 = &local_78;
            }
                    /* try { // try from 00a34510 to 00b34543 has its CatchHandler @ 00a34360 */
            uVar31 = 0x61;
            if (*(char *)(lVar40 + 0x613) == '\0') {
              uVar31 = 0x69;
            }
            FUN_00a241ac(puVar48,8,";type=%c",uVar31);
          }
          else if ((pcVar23[6] != '\0') && (pcVar23[7] == '\0')) {
            uVar16 = FUN_00a4a0e0();
            uVar16 = (uVar16 & 0xff) - 0x41;
            if ((8 < uVar16) || ((1 << (ulong)(uVar16 & 0x1f) & 0x109U) == 0)) goto LAB_00a33f88;
          }
        }
        if ((char)param_1[0x78] == '\0') goto LAB_00a33c34;
        bVar13 = (char)param_1[0x7a] == '\0';
                    /* try { // try from 00a34544 to 00b34557 has its CatchHandler @ 00a345cc */
      }
      if (uVar41 == 3) {
                    /* try { // try from 00a33c40 to 00b33c53 has its CatchHandler @ 00a33cd8 */
        uVar28 = *(undefined8 *)(lVar40 + 0x3c8);
        puVar48 = *(undefined8 **)(*param_1 + 0x3b8);
        if (puVar48 == (undefined8 *)0x0) {
          uVar29 = 0;
        }
        else {
          do {
            iVar15 = FUN_00a4a220(*puVar48,"Content-Type:",0xd);
            if (iVar15 != 0) {
              uVar29 = *puVar48;
              goto LAB_00a33d9c;
            }
            puVar48 = (undefined8 *)puVar48[1];
          } while (puVar48 != (undefined8 *)0x0);
          uVar29 = 0;
        }
LAB_00a33d9c:
                    /* try { // try from 00a33da8 to 00b33e47 has its CatchHandler @ 00a33da8
                       catch() { ... } // from try @ 00a33da8 with catch @ 00a33da8
                       catch() { ... } // from try @ 00a33ec8 with catch @ 00a33da8 */
        iVar15 = FUN_00a62bc0(lVar40,plVar46,uVar28,uVar29,plVar46 + 1);
        if (iVar15 != 0) goto LAB_00a343e4;
      }
      for (plVar47 = *(long **)(*param_1 + 0x3b8); plVar47 != (long *)0x0;
          plVar47 = (long *)plVar47[1]) {
        iVar15 = FUN_00a4a220(*plVar47,"Accept:",7);
        if (iVar15 != 0) {
          lVar19 = *plVar47;
          goto LAB_00a33df0;
        }
      }
      lVar19 = 0;
LAB_00a33df0:
      pcVar23 = (char *)0x0;
      if (lVar19 == 0) {
        pcVar23 = "Accept: */*\r\n";
      }
      plVar46[4] = (long)pcVar23;
      if (uVar41 - 2 < 3) {
        plVar47 = (long *)(lVar40 + 0x8cd8);
        lVar19 = *plVar47;
        if (lVar19 != 0) {
          if (lVar19 < 0) {
            *plVar47 = 0;
          }
          else if (*pcVar25 == '\0') {
                    /* try { // try from 00a33e48 to 00b33e7b has its CatchHandler @ 00a33f48 */
            if (((code *)param_1[0x94] != (code *)0x0) &&
               (iVar15 = (*(code *)param_1[0x94])(param_1[0x95],lVar19,0), iVar15 != 0)) {
              if (iVar15 != 2) {
                FUN_00a38a08(lVar40,"Could not seek stream");
                    /* try { // try from 00a3455c to 00b3456f has its CatchHandler @ 00a345d0 */
                iVar15 = 0x1a;
                goto LAB_00a343e4;
              }
              lVar34 = *plVar47;
              lVar19 = 0;
              do {
                    /* try { // try from 00a33e7c to 00b33e8f has its CatchHandler @ 00a33f14 */
                if (lVar34 - lVar19 < 0x4001) {
                  uVar49 = FUN_00a2c6fc();
                    /* try { // try from 00a33e94 to 00b33ec7 has its CatchHandler @ 00a33f18 */
                }
                else {
                  uVar49 = 0x4000;
                }
                lVar34 = (**(code **)(lVar40 + 0x8d10))
                                   (lVar40 + 0xb08,1,uVar49,*(undefined8 *)(lVar40 + 0x8d18));
                lVar19 = lVar34 + lVar19;
                if (uVar49 <= lVar34 - 1U) {
                    /* catch() { ... } // from try @ 00a343c0 with catch @ 00a345cc
                       catch() { ... } // from try @ 00a34544 with catch @ 00a345cc */
                    /* catch() { ... } // from try @ 00a34414 with catch @ 00a345d0
                       catch() { ... } // from try @ 00a3455c with catch @ 00a345d0 */
                    /* catch() { ... } // from try @ 00a34488 with catch @ 00a345d4
                       catch() { ... } // from try @ 00a34574 with catch @ 00a345d4 */
                  FUN_00a38a08(lVar40,"Could only read %ld bytes from the input",lVar19);
                  iVar15 = 0x1a;
                  goto LAB_00a343e4;
                }
                    /* try { // try from 00a33ec8 to 00b33f63 has its CatchHandler @ 00a33da8 */
                lVar34 = *plVar47;
              } while (lVar19 < lVar34);
            }
            lVar19 = *(long *)(lVar40 + 0x8cf8);
            if ((0 < lVar19) &&
               (lVar19 = lVar19 - *plVar47, *(long *)(lVar40 + 0x8cf8) = lVar19, lVar19 < 1)) {
              FUN_00a38a08(lVar40,"File already completely uploaded");
              iVar15 = 0x12;
              goto LAB_00a343e4;
            }
          }
        }
      }
      if (*(char *)(lVar40 + 0x8cc9) != '\0') {
        if ((uVar41 | 4) == 5) {
          for (plVar47 = *(long **)(*param_1 + 0x3b8); plVar47 != (long *)0x0;
              plVar47 = (long *)plVar47[1]) {
            iVar15 = FUN_00a4a220(*plVar47,"Range:",6);
                    /* try { // try from 00a33fe4 to 00b34043 has its CatchHandler @ 00a33fe4
                       catch() { ... } // from try @ 00a33fe4 with catch @ 00a33fe4
                       catch() { ... } // from try @ 00a34190 with catch @ 00a33fe4
                       catch() { ... } // from try @ 00a34208 with catch @ 00a33fe4 */
            if (iVar15 != 0) {
              if (*plVar47 != 0) goto LAB_00a34050;
              break;
            }
          }
                    /* try { // try from 00a34098 to 00b340ff has its CatchHandler @ 00a34250 */
          (*(code *)PTR_free_01769a00)(param_1[0x88]);
          lVar19 = FUN_00a24258("Range: bytes=%s\r\n",*(undefined8 *)(lVar40 + 0x8cd0));
          param_1[0x88] = lVar19;
        }
        else {
LAB_00a34050:
          if (uVar41 != 1) {
            for (plVar47 = *(long **)(*param_1 + 0x3b8); plVar47 != (long *)0x0;
                plVar47 = (long *)plVar47[1]) {
              iVar15 = FUN_00a4a220(*plVar47,"Content-Range:",0xe);
              if (iVar15 != 0) {
                if (*plVar47 != 0) goto LAB_00a340b8;
                break;
              }
            }
            (*(code *)PTR_free_01769a00)(param_1[0x88]);
            if (*(long *)(lVar40 + 0x3b0) < 0) {
              lVar34 = *(long *)(lVar40 + 0x8cf8);
              pcVar25 = "Content-Range: bytes 0-%ld/%ld\r\n";
              lVar19 = lVar34 + -1;
LAB_00a343d4:
              lVar19 = FUN_00a24258(pcVar25,lVar19,lVar34);
              param_1[0x88] = lVar19;
            }
            else {
              if (*(long *)(lVar40 + 0x8cd8) == 0) {
                    /* try { // try from 00a343c0 to 00b34407 has its CatchHandler @ 00a345cc */
                lVar19 = *(long *)(lVar40 + 0x8cd0);
                lVar34 = *(long *)(lVar40 + 0x8cf8);
                pcVar25 = "Content-Range: bytes %s/%ld\r\n";
                goto LAB_00a343d4;
              }
              lVar19 = FUN_00a24258("Content-Range: bytes %s%ld/%ld\r\n",
                                    *(undefined8 *)(lVar40 + 0x8cd0),
                                    *(long *)(lVar40 + 0x8cf8) + *(long *)(lVar40 + 0x8cd8) + -1);
              param_1[0x88] = lVar19;
            }
            if (lVar19 == 0) goto LAB_00a343e0;
          }
        }
      }
LAB_00a340b8:
      piVar2 = (int *)(lVar40 + 0x8ca4);
      if ((*piVar2 == 10) || ((int)param_1[0x47] == 10)) {
        pcVar25 = "1.0";
      }
      else {
        lVar19 = *(long *)(lVar40 + 0x438);
        if (((10 < (int)param_1[0x47]) || (pcVar25 = "1.0", lVar19 != 1)) &&
           (pcVar25 = "1.1", lVar19 < 2 && lVar19 != 0)) {
          pcVar25 = "1.0";
        }
      }
      plVar47 = (long *)(*(code *)PTR_calloc_01769a18)(1,0x18);
      if (plVar47 != (long *)0x0) {
                    /* try { // try from 00a3410c to 00b3418f has its CatchHandler @ 00a34254 */
        iVar15 = FUN_00a36d68(plVar47,"%s ",pcVar52);
        if (iVar15 != 0) goto LAB_00a343e4;
        if (!bVar13) {
          sVar24 = strlen(pcVar51);
                    /* try { // try from 00a34190 to 00b341c3 has its CatchHandler @ 00a33fe4 */
          uVar49 = plVar47[2];
          if (uVar49 <= ~sVar24) {
            lVar19 = *plVar47;
            if ((lVar19 == 0) || (plVar47[1] - 1U < uVar49 + sVar24)) {
              lVar34 = -1;
              if ((-1 < (long)(uVar49 | sVar24)) &&
                 (uVar35 = sVar24 << 1 ^ 0xffffffffffffffff,
                 uVar49 * 2 < uVar35 || uVar49 * 2 - uVar35 == 0)) {
                lVar34 = (uVar49 + sVar24) * 2;
              }
              if (lVar19 == 0) {
                    /* try { // try from 00a34574 to 00b34587 has its CatchHandler @ 00a345d4 */
                lVar19 = (*(code *)PTR_malloc_017699f8)(lVar34);
              }
              else {
                lVar19 = FUN_00a4e398(lVar19,lVar34);
              }
              if (lVar19 == 0) goto LAB_00a3458c;
              uVar49 = plVar47[2];
              *plVar47 = lVar19;
              plVar47[1] = lVar34;
            }
            memcpy((void *)(lVar19 + uVar49),pcVar51,sVar24);
            plVar47[2] = plVar47[2] + sVar24;
            goto LAB_00a34344;
          }
          (*(code *)PTR_free_01769a00)(*plVar47);
          *plVar47 = 0;
          goto LAB_00a3458c;
        }
        iVar15 = FUN_00a36d68(plVar47,"ftp://%s:%s@%s",param_1[0x43],param_1[0x44],pcVar51 + 6);
        if (iVar15 != 0) goto LAB_00a343e4;
LAB_00a34344:
                    /* try { // try from 00a34360 to 00b343bf has its CatchHandler @ 00a34360
                       catch() { ... } // from try @ 00a34360 with catch @ 00a34360
                       catch() { ... } // from try @ 00a34510 with catch @ 00a34360
                       catch() { ... } // from try @ 00a34588 with catch @ 00a34360 */
        puVar4 = &DAT_013c996e;
        if ((undefined1 *)param_1[0x8a] != (undefined1 *)0x0) {
          puVar4 = (undefined1 *)param_1[0x8a];
        }
        puVar5 = &DAT_013c996e;
        if ((undefined1 *)param_1[0x84] != (undefined1 *)0x0) {
          puVar5 = (undefined1 *)param_1[0x84];
        }
        puVar6 = &DAT_013c996e;
        if ((undefined1 *)param_1[0x87] != (undefined1 *)0x0) {
          puVar6 = (undefined1 *)param_1[0x87];
        }
        puVar44 = &DAT_013c996e;
        if ((*(char *)(lVar40 + 0x8cc9) != '\0') &&
           ((undefined1 *)param_1[0x88] != (undefined1 *)0x0)) {
          puVar44 = (undefined1 *)param_1[0x88];
        }
        if (*(char **)(lVar40 + 0x790) == (char *)0x0) {
          puVar38 = &DAT_013c996e;
        }
        else {
          puVar38 = &DAT_013c996e;
          if ((**(char **)(lVar40 + 0x790) != '\0') &&
             ((undefined1 *)param_1[0x85] != (undefined1 *)0x0)) {
            puVar38 = (undefined1 *)param_1[0x85];
          }
        }
        puVar7 = &DAT_013c996e;
        if ((undefined1 *)plVar46[4] != (undefined1 *)0x0) {
          puVar7 = (undefined1 *)plVar46[4];
        }
        puVar8 = &DAT_013c996e;
        if ((undefined1 *)param_1[0x8d] != (undefined1 *)0x0) {
          puVar8 = (undefined1 *)param_1[0x8d];
        }
        puVar50 = &DAT_013c996e;
        if (((*(char **)(lVar40 + 0x6b8) != (char *)0x0) &&
            (puVar50 = &DAT_013c996e, **(char **)(lVar40 + 0x6b8) != '\0')) &&
           ((undefined1 *)param_1[0x86] != (undefined1 *)0x0)) {
          puVar50 = (undefined1 *)param_1[0x86];
        }
        puVar39 = &DAT_013c996e;
        if ((*(long *)(lVar40 + 0x918) != 0) && ((undefined1 *)param_1[0x89] != (undefined1 *)0x0))
        {
          puVar39 = (undefined1 *)param_1[0x89];
        }
        pcVar51 = "";
        if (*(char *)((long)param_1 + 0x3be) != '\0') {
                    /* try { // try from 00a34488 to 00b3450f has its CatchHandler @ 00a345d4 */
          if (*(char *)((long)param_1 + 0x3c9) == '\0') {
            lVar19 = *param_1;
            if ((*(char *)((long)param_1 + 0x3bd) == '\0') || (*(char *)(lVar19 + 0x3d0) == '\0')) {
              plVar26 = *(long **)(lVar19 + 0x3b8);
            }
            else {
              plVar26 = *(long **)(lVar19 + 0x3c0);
            }
            for (; plVar26 != (long *)0x0; plVar26 = (long *)plVar26[1]) {
              iVar15 = FUN_00a4a220(*plVar26,"Proxy-Connection:",0x11);
              if (iVar15 != 0) {
                if (*plVar26 != 0) {
                  pcVar51 = "";
                  goto LAB_00a34618;
                }
                break;
              }
            }
            pcVar51 = "Proxy-Connection: Keep-Alive\r\n";
          }
          else {
            pcVar51 = "";
          }
        }
LAB_00a34618:
        iVar15 = FUN_00a36d68(plVar47,"%s HTTP/%s\r\n%s%s%s%s%s%s%s%s%s%s%s",&local_78,pcVar25,
                              puVar4,puVar5,puVar6,puVar44,puVar38,puVar7,puVar8,puVar50,puVar39,
                              pcVar51,pcVar33);
        (*(code *)PTR_free_01769a00)(param_1[0x87]);
        param_1[0x87] = 0;
        if ((*(ulong *)(lVar40 + 0x8c20) < 0x21) &&
           ((1L << (*(ulong *)(lVar40 + 0x8c20) & 0x3f) & 0x100000110U) != 0)) {
          (*(code *)PTR_free_01769a00)(param_1[0x84]);
          param_1[0x84] = 0;
        }
        if (iVar15 != 0) goto LAB_00a343e4;
        if ((((*(byte *)(param_1[0x80] + 0x7c) & 1) == 0) && ((int)param_1[0x47] != 0x14)) &&
           (*(long *)(lVar40 + 0x438) == 3)) {
          iVar15 = 1;
          goto LAB_00a343e4;
        }
        if ((local_a8 != 0) || (*(long *)(lVar40 + 0x938) != 0)) {
          if (*(long *)(lVar40 + 0x938) == 0) {
LAB_00a34870:
            iVar18 = 0;
            iVar15 = 0;
            if (local_a8 == 0) goto LAB_00a348bc;
LAB_00a34880:
            if (iVar15 != 0) goto LAB_00a348bc;
            if ((iVar18 != 0) || (iVar17 = FUN_00a36d68(plVar47,"Cookie: "), iVar17 == 0)) {
              puVar9 = &DAT_013c3ea7;
              if (iVar18 == 0) {
                puVar9 = &DAT_013c996e;
              }
              iVar15 = FUN_00a36d68(plVar47,"%s%s",puVar9,local_a8);
              iVar18 = iVar18 + 1;
              goto LAB_00a348bc;
            }
          }
          else {
            FUN_00a4bf64(lVar40,2,2);
            if (param_1[0x8b] != 0) {
              lVar45 = param_1[0x8b];
            }
            plVar26 = (long *)FUN_00a3273c(*(undefined8 *)(lVar40 + 0x938),lVar45,*puVar1,
                                           *(uint *)(param_1[0x80] + 0x78) >> 1 & 1);
            FUN_00a4bfbc(lVar40,2);
            if (plVar26 == (long *)0x0) goto LAB_00a34870;
            iVar18 = 0;
            plVar42 = plVar26;
            do {
              lVar45 = plVar42[2];
              if (lVar45 != 0) {
                if (iVar18 == 0) {
                  iVar15 = FUN_00a36d68(plVar47,"Cookie: ");
                  if (iVar15 != 0) {
                    iVar18 = 0;
                    goto LAB_00a3485c;
                  }
                  lVar45 = plVar42[2];
                }
                puVar9 = &DAT_013c3ea7;
                if (iVar18 == 0) {
                  puVar9 = &DAT_013c996e;
                }
                iVar15 = FUN_00a36d68(plVar47,"%s%s=%s",puVar9,plVar42[1],lVar45);
                if (iVar15 != 0) goto LAB_00a3485c;
                iVar18 = iVar18 + 1;
              }
              plVar42 = (long *)*plVar42;
            } while (plVar42 != (long *)0x0);
            iVar15 = 0;
LAB_00a3485c:
            FUN_00a32d3c(plVar26);
            if (local_a8 != 0) goto LAB_00a34880;
LAB_00a348bc:
            if ((iVar18 == 0) || (iVar15 != 0)) {
              if (iVar15 != 0) goto LAB_00a343e4;
              goto LAB_00a346e4;
            }
            uVar49 = plVar47[2];
            if (uVar49 < 0xfffffffffffffffe) {
              lVar45 = *plVar47;
              if (lVar45 == 0) {
                lVar19 = uVar49 * 2 + 4;
                if (0xfffffffffffffffb < uVar49 * 2 || (long)uVar49 < 0) {
                  lVar19 = -1;
                }
                lVar45 = (*(code *)PTR_malloc_017699f8)(lVar19);
joined_r0x00a349ac:
                if (lVar45 == 0) goto LAB_00a34954;
                uVar49 = plVar47[2];
                *plVar47 = lVar45;
                plVar47[1] = lVar19;
              }
              else if (plVar47[1] - 1U < uVar49 + 2) {
                lVar19 = uVar49 * 2 + 4;
                if (0xfffffffffffffffb < uVar49 * 2 || (long)uVar49 < 0) {
                  lVar19 = -1;
                }
                lVar45 = FUN_00a4e398(lVar45,lVar19);
                goto joined_r0x00a349ac;
              }
              *(undefined2 *)(lVar45 + uVar49) = 0xa0d;
              plVar47[2] = plVar47[2] + 2;
              goto LAB_00a346e4;
            }
            (*(code *)PTR_free_01769a00)(*plVar47);
            *plVar47 = 0;
LAB_00a34954:
            (*(code *)PTR_free_01769a00)(plVar47);
            iVar17 = 0x1b;
          }
          iVar15 = 0x1b;
          if (iVar17 != 0) {
            iVar15 = iVar17;
          }
          goto LAB_00a343e4;
        }
LAB_00a346e4:
        iVar15 = FUN_00a37324(lVar40,plVar47);
        if ((iVar15 != 0) || (iVar15 = FUN_00a37110(param_1,0,plVar47), iVar15 != 0))
        goto LAB_00a343e4;
        plVar26 = plVar46 + 2;
        *plVar26 = 0;
        FUN_00a30ed8(lVar40,0xffffffffffffffff);
        if (uVar41 == 2) {
          if (*(char *)((long)param_1 + 0x3ca) == '\0') {
            uVar49 = *(size_t *)(lVar40 + 0x8cf8);
            if (uVar49 == 0xffffffffffffffff) {
              if (*(char **)(lVar40 + 0x290) == (char *)0x0) {
                uVar49 = 0xffffffffffffffff;
              }
              else {
                uVar49 = strlen(*(char **)(lVar40 + 0x290));
                if (uVar49 != 0xffffffffffffffff) goto LAB_00a34a78;
              }
            }
            else {
LAB_00a34a78:
              if (*(char *)(lVar40 + 0x211) == '\0') goto LAB_00a34b14;
            }
          }
          else {
            uVar49 = 0;
            if (*(char *)(lVar40 + 0x211) != '\0') goto LAB_00a34a80;
LAB_00a34b14:
            for (plVar42 = *(long **)(*param_1 + 0x3b8); plVar42 != (long *)0x0;
                plVar42 = (long *)plVar42[1]) {
              iVar15 = FUN_00a4a220(*plVar42,"Content-Length:",0xf);
              if (iVar15 != 0) {
                if (*plVar42 != 0) goto LAB_00a34a80;
                break;
              }
            }
            iVar15 = FUN_00a36d68(plVar47,"Content-Length: %ld\r\n",uVar49);
            if (iVar15 != 0) goto LAB_00a343e4;
          }
LAB_00a34a80:
          for (plVar42 = *(long **)(*param_1 + 0x3b8); plVar42 != (long *)0x0;
              plVar42 = (long *)plVar42[1]) {
                    /* try { // try from 00a34a9c to 00b34ae3 has its CatchHandler @ 00a34d7c */
            iVar15 = FUN_00a4a220(*plVar42,"Content-Type:",0xd);
            if (iVar15 != 0) {
              if (*plVar42 != 0) goto LAB_00a34b9c;
              break;
            }
          }
          iVar15 = FUN_00a36d68(plVar47,"Content-Type: application/x-www-form-urlencoded\r\n");
          if (iVar15 != 0) goto LAB_00a343e4;
LAB_00a34b9c:
          for (plVar42 = *(long **)(*param_1 + 0x3b8); plVar42 != (long *)0x0;
              plVar42 = (long *)plVar42[1]) {
            iVar15 = FUN_00a4a220(*plVar42,"Expect:",7);
            if (iVar15 != 0) {
              if (*plVar42 != 0) {
                bVar14 = FUN_00a37030(*plVar42,"Expect:","100-continue");
                bVar14 = bVar14 & 1;
                *(byte *)(lVar40 + 0x8ca8) = bVar14;
                lVar45 = *(long *)(lVar40 + 0x290);
                goto joined_r0x00a34dfc;
              }
              break;
            }
          }
                    /* catch() { ... } // from try @ 00a34b74 with catch @ 00a34e04
                       catch() { ... } // from try @ 00a34ce0 with catch @ 00a34e04 */
          bVar14 = 0;
          *(byte *)(lVar40 + 0x8ca8) = 0;
          if (0x400 < uVar49) {
            if (((*piVar2 != 10) && (iVar15 = (int)param_1[0x47], iVar15 != 10)) &&
               ((lVar45 = *(long *)(lVar40 + 0x438), 10 < iVar15 || (lVar45 != 1)))) {
                    /* catch() { ... } // from try @ 00a35134 with catch @ 00a35178 */
              bVar14 = 0;
              if ((iVar15 != 0x14) && ((lVar45 == 0) == lVar45 < 2)) {
                for (plVar42 = *(long **)(*param_1 + 0x3b8); plVar42 != (long *)0x0;
                    plVar42 = (long *)plVar42[1]) {
                  iVar15 = FUN_00a4a220(*plVar42,"Expect:",7);
                  if (iVar15 != 0) {
                    if (*plVar42 != 0) {
                    /* try { // try from 00a352c0 to 00b352c3 has its CatchHandler @ 00a352f8 */
                    /* try { // try from 00a352c4 to 00b3530b has its CatchHandler @ 00a35274 */
                      bVar14 = FUN_00a37030(*plVar42,"Expect:","100-continue");
                      bVar14 = bVar14 & 1;
                      goto LAB_00a352f0;
                    }
                    break;
                  }
                }
                iVar15 = FUN_00a36d68(plVar47,"Expect: 100-continue\r\n");
                if (iVar15 != 0) goto LAB_00a343e4;
                bVar14 = 1;
LAB_00a352f0:
                *(byte *)(lVar40 + 0x8ca8) = bVar14;
              }
              goto LAB_00a352f4;
            }
            bVar14 = 0;
            lVar45 = *(long *)(lVar40 + 0x290);
joined_r0x00a34dfc:
            if (lVar45 != 0) goto LAB_00a352fc;
LAB_00a34e58:
            uVar35 = plVar47[2];
            if (0xfffffffffffffffd < uVar35) goto LAB_00a34be4;
            lVar45 = *plVar47;
            if (lVar45 != 0) {
              if (plVar47[1] - 1U < uVar35 + 2) {
                lVar19 = uVar35 * 2 + 4;
                if (0xfffffffffffffffb < uVar35 * 2 || (long)uVar35 < 0) {
                  lVar19 = -1;
                }
                lVar45 = FUN_00a4e398(lVar45,lVar19);
                goto joined_r0x00a350b8;
              }
LAB_00a350c8:
              *(undefined2 *)(lVar45 + uVar35) = 0xa0d;
              lVar45 = plVar47[2];
              uVar35 = lVar45 + 2;
              plVar47[2] = uVar35;
              if ((*(char *)(lVar40 + 0x211) == '\0') || (*(char *)((long)param_1 + 0x3ca) == '\0'))
              {
                if (*(long *)(lVar40 + 0x8cf8) != 0) {
                  uVar35 = uVar49;
                  if (uVar49 == 0) {
                    uVar35 = 0xffffffffffffffff;
                  }
                  FUN_00a30ed8(lVar40,uVar35);
                  if (*(char *)((long)param_1 + 0x3ca) == '\0') {
                    uVar37 = 0;
                    plVar46[1] = uVar49;
                    plVar46[2] = (long)plVar26;
                    goto LAB_00a3544c;
                  }
                }
                uVar37 = 0;
                goto LAB_00a3544c;
              }
              if (0xfffffffffffffffa < uVar35) goto LAB_00a34be4;
              lVar19 = *plVar47;
              if (lVar19 == 0) {
                lVar45 = uVar35 * 2 + 10;
                if (0xfffffffffffffff5 < uVar35 * 2 || (long)uVar35 < 0) {
                  lVar45 = -1;
                }
                lVar19 = (*(code *)PTR_malloc_017699f8)(lVar45);
joined_r0x00a35274:
                    /* try { // try from 00a35274 to 00b352bf has its CatchHandler @ 00a35274
                       catch() { ... } // from try @ 00a35274 with catch @ 00a35274
                       catch() { ... } // from try @ 00a352c4 with catch @ 00a35274 */
                if (lVar19 == 0) goto LAB_00a3458c;
                uVar35 = plVar47[2];
                *plVar47 = lVar19;
                plVar47[1] = lVar45;
              }
              else if (plVar47[1] - 1U < lVar45 + 7U) {
                lVar45 = uVar35 * 2 + 10;
                if (0xfffffffffffffff5 < uVar35 * 2 || (long)uVar35 < 0) {
                  lVar45 = -1;
                }
                    /* try { // try from 00a35134 to 00b3513b has its CatchHandler @ 00a35178 */
                lVar19 = FUN_00a4e398(lVar19,lVar45);
                goto joined_r0x00a35274;
              }
              *(undefined1 *)((undefined4 *)(lVar19 + uVar35) + 1) = 10;
              *(undefined4 *)(lVar19 + uVar35) = 0xd0a0d30;
              lVar45 = plVar47[2] + 5;
LAB_00a35448:
              uVar37 = 0;
              plVar47[2] = lVar45;
              goto LAB_00a3544c;
            }
                    /* try { // try from 00a350a0 to 00b35133 has its CatchHandler @ 00a350a0
                       catch() { ... } // from try @ 00a350a0 with catch @ 00a350a0
                       catch() { ... } // from try @ 00a3513c with catch @ 00a350a0 */
            lVar19 = uVar35 * 2 + 4;
            if (0xfffffffffffffffb < uVar35 * 2 || (long)uVar35 < 0) {
              lVar19 = -1;
            }
            lVar45 = (*(code *)PTR_malloc_017699f8)(lVar19);
joined_r0x00a350b8:
            if (lVar45 != 0) {
              uVar35 = plVar47[2];
              *plVar47 = lVar45;
              plVar47[1] = lVar19;
              goto LAB_00a350c8;
            }
            goto LAB_00a3458c;
          }
LAB_00a352f4:
          lVar45 = *(long *)(lVar40 + 0x290);
                    /* catch() { ... } // from try @ 00a352c0 with catch @ 00a352f8 */
          if (lVar45 == 0) goto LAB_00a34e58;
LAB_00a352fc:
                    /* try { // try from 00a3530c to 00b354fb has its CatchHandler @ 00a3530c
                       catch() { ... } // from try @ 00a3530c with catch @ 00a3530c
                       catch() { ... } // from try @ 00a3557c with catch @ 00a3530c */
          if ((((int)param_1[0x47] == 0x14) || (0xffff < (long)uVar49)) || (bVar14 != 0)) {
            plVar46[1] = uVar49;
            plVar46[2] = lVar45;
            *(undefined4 *)(plVar46 + 0xf) = 2;
            *(code **)(lVar40 + 0x8d10) = FUN_00a36ca4;
            *(long **)(lVar40 + 0x8d18) = param_1;
            FUN_00a30ed8(lVar40,uVar49);
            uVar35 = plVar47[2];
            if (0xfffffffffffffffd < uVar35) goto LAB_00a34be4;
            lVar45 = *plVar47;
            if (lVar45 == 0) {
              lVar19 = uVar35 * 2 + 4;
              if (0xfffffffffffffffb < uVar35 * 2 || (long)uVar35 < 0) {
                lVar19 = -1;
              }
              lVar45 = (*(code *)PTR_malloc_017699f8)(lVar19);
joined_r0x00a35420:
              if (lVar45 == 0) goto LAB_00a3458c;
              uVar35 = plVar47[2];
              *plVar47 = lVar45;
              plVar47[1] = lVar19;
            }
            else if (plVar47[1] - 1U < uVar35 + 2) {
              lVar19 = uVar35 * 2 + 4;
              if (0xfffffffffffffffb < uVar35 * 2 || (long)uVar35 < 0) {
                lVar19 = -1;
              }
              lVar45 = FUN_00a4e398(lVar45,lVar19);
              goto joined_r0x00a35420;
            }
            *(undefined2 *)(lVar45 + uVar35) = 0xa0d;
            lVar45 = plVar47[2] + 2;
            goto LAB_00a35448;
          }
          uVar35 = plVar47[2];
          if (0xfffffffffffffffd < uVar35) goto LAB_00a34be4;
          lVar45 = *plVar47;
          if (lVar45 == 0) {
                    /* try { // try from 00a35548 to 00b3557b has its CatchHandler @ 00a355cc */
            lVar19 = uVar35 * 2 + 4;
            if (0xfffffffffffffffb < uVar35 * 2 || (long)uVar35 < 0) {
              lVar19 = -1;
            }
            lVar45 = (*(code *)PTR_malloc_017699f8)(lVar19);
joined_r0x00a3555c:
            if (lVar45 == 0) goto LAB_00a3458c;
            uVar35 = plVar47[2];
            *plVar47 = lVar45;
            plVar47[1] = lVar19;
          }
          else if (plVar47[1] - 1U < uVar35 + 2) {
            lVar19 = uVar35 * 2 + 4;
            if (0xfffffffffffffffb < uVar35 * 2 || (long)uVar35 < 0) {
              lVar19 = -1;
            }
            lVar45 = FUN_00a4e398(lVar45,lVar19);
            goto joined_r0x00a3555c;
          }
          *(undefined2 *)(lVar45 + uVar35) = 0xa0d;
                    /* try { // try from 00a3557c to 00b35617 has its CatchHandler @ 00a3530c */
          uVar35 = plVar47[2] + 2;
          plVar47[2] = uVar35;
          if (*(char *)(lVar40 + 0x211) != '\0') {
            if (uVar49 == 0) {
              uVar37 = 5;
                    /* try { // try from 00a35690 to 00b35713 has its CatchHandler @ 00a35690
                       catch() { ... } // from try @ 00a35690 with catch @ 00a35690
                       catch() { ... } // from try @ 00a35780 with catch @ 00a35690 */
joined_r0x00a35694:
              if (uVar35 < 0xfffffffffffffffb) {
                lVar45 = *plVar47;
                if (lVar45 == 0) {
                    /* try { // try from 00a3594c to 00b359a3 has its CatchHandler @ 00a3594c
                       catch() { ... } // from try @ 00a3594c with catch @ 00a3594c
                       catch() { ... } // from try @ 00a35ab8 with catch @ 00a3594c
                       catch() { ... } // from try @ 00a35bbc with catch @ 00a3594c */
                  lVar19 = uVar35 * 2 + 10;
                  if (0xfffffffffffffff5 < uVar35 * 2 || (long)uVar35 < 0) {
                    lVar19 = -1;
                  }
                  lVar45 = (*(code *)PTR_malloc_017699f8)(lVar19);
joined_r0x00a35974:
                  if (lVar45 == 0) goto LAB_00a3458c;
                  uVar35 = plVar47[2];
                  *plVar47 = lVar45;
                  plVar47[1] = lVar19;
                }
                else if (plVar47[1] - 1U < uVar35 + 5) {
                  lVar19 = uVar35 * 2 + 10;
                  if (0xfffffffffffffff5 < uVar35 * 2 || (long)uVar35 < 0) {
                    lVar19 = -1;
                  }
                  lVar45 = FUN_00a4e398(lVar45,lVar19);
                  goto joined_r0x00a35974;
                }
                *(undefined1 *)((undefined4 *)(lVar45 + uVar35) + 1) = 10;
                *(undefined4 *)(lVar45 + uVar35) = 0xd0a0d30;
                uVar35 = 5;
                goto LAB_00a359a0;
              }
            }
            else {
              iVar15 = FUN_00a36d68(plVar47,&DAT_013c3fa6,uVar49 & 0xffffffff);
              if (iVar15 != 0) goto LAB_00a343e4;
              uVar35 = plVar47[2];
              if (uVar35 <= ~uVar49) {
                pvVar27 = *(void **)(lVar40 + 0x290);
                    /* catch() { ... } // from try @ 00a35530 with catch @ 00a355c8 */
                lVar45 = *plVar47;
                    /* catch() { ... } // from try @ 00a35548 with catch @ 00a355cc */
                if ((lVar45 == 0) || (plVar47[1] - 1U < uVar35 + uVar49)) {
                  lVar19 = -1;
                    /* catch() { ... } // from try @ 00a354fc with catch @ 00a355fc */
                  if ((-1 < (long)(uVar35 | uVar49)) &&
                     (uVar37 = uVar49 << 1 ^ 0xffffffffffffffff,
                     uVar35 * 2 < uVar37 || uVar35 * 2 - uVar37 == 0)) {
                    lVar19 = (uVar35 + uVar49) * 2;
                  }
                  if (lVar45 == 0) {
                    lVar45 = (*(code *)PTR_malloc_017699f8)(lVar19);
                  }
                  else {
                    lVar45 = FUN_00a4e398(lVar45,lVar19);
                  }
                  if (lVar45 == 0) goto LAB_00a3458c;
                  uVar35 = plVar47[2];
                  *plVar47 = lVar45;
                  plVar47[1] = lVar19;
                }
                memcpy((void *)(lVar45 + uVar35),pvVar27,uVar49);
                uVar35 = plVar47[2] + uVar49;
                plVar47[2] = uVar35;
                    /* try { // try from 00a35a08 to 00b35a17 has its CatchHandler @ 00a35bd4 */
                if (uVar35 < 0xfffffffffffffffe) {
                  lVar45 = *plVar47;
                  if (lVar45 == 0) {
                    lVar19 = uVar35 * 2 + 4;
                    if (0xfffffffffffffffb < uVar35 * 2 || (long)uVar35 < 0) {
                      lVar19 = -1;
                    }
                    lVar45 = (*(code *)PTR_malloc_017699f8)(lVar19);
joined_r0x00a35a8c:
                    if (lVar45 == 0) goto LAB_00a3458c;
                    uVar35 = plVar47[2];
                    *plVar47 = lVar45;
                    plVar47[1] = lVar19;
                  }
                  else {
                    /* try { // try from 00a35a18 to 00b35a2b has its CatchHandler @ 00a35bd0 */
                    if (plVar47[1] - 1U < uVar35 + 2) {
                      lVar19 = uVar35 * 2 + 4;
                    /* try { // try from 00a35a40 to 00b35a4b has its CatchHandler @ 00a35bd8 */
                      if (0xfffffffffffffffb < uVar35 * 2 || (long)uVar35 < 0) {
                        lVar19 = -1;
                      }
                      lVar45 = FUN_00a4e398(lVar45,lVar19);
                      goto joined_r0x00a35a8c;
                    }
                  }
                  *(undefined2 *)(lVar45 + uVar35) = 0xa0d;
                  uVar37 = uVar49 + 7;
                  uVar35 = plVar47[2] + 2;
                  plVar47[2] = uVar35;
                    /* try { // try from 00a35ab8 to 00b35aeb has its CatchHandler @ 00a3594c */
                  goto joined_r0x00a35694;
                }
              }
            }
            goto LAB_00a34be4;
          }
          if (~uVar49 < uVar35) goto LAB_00a34be4;
          pvVar27 = *(void **)(lVar40 + 0x290);
          lVar45 = *plVar47;
          if ((lVar45 == 0) || (plVar47[1] - 1U < uVar35 + uVar49)) {
            lVar19 = -1;
            if ((-1 < (long)(uVar35 | uVar49)) &&
               (uVar37 = uVar49 << 1 ^ 0xffffffffffffffff,
               uVar35 * 2 < uVar37 || uVar35 * 2 - uVar37 == 0)) {
              lVar19 = (uVar35 + uVar49) * 2;
            }
            if (lVar45 == 0) {
              lVar45 = (*(code *)PTR_malloc_017699f8)(lVar19);
            }
            else {
              lVar45 = FUN_00a4e398(lVar45,lVar19);
            }
            if (lVar45 != 0) {
              uVar35 = plVar47[2];
              *plVar47 = lVar45;
              plVar47[1] = lVar19;
              goto LAB_00a35930;
            }
            goto LAB_00a3458c;
          }
LAB_00a35930:
                    /* catch() { ... } // from try @ 00a35874 with catch @ 00a35930
                       catch() { ... } // from try @ 00a358dc with catch @ 00a35930 */
          memcpy((void *)(lVar45 + uVar35),pvVar27,uVar49);
          uVar35 = uVar49;
          uVar37 = uVar49;
LAB_00a359a0:
                    /* try { // try from 00a359a4 to 00b359ff has its CatchHandler @ 00a35bd8 */
          plVar47[2] = plVar47[2] + uVar35;
          FUN_00a30ed8(lVar40,uVar49);
LAB_00a3544c:
          iVar15 = FUN_00a36ab8(plVar47,param_1,lVar40 + 0x8d90,uVar37,0);
          if (iVar15 != 0) {
            pcVar51 = "Failed sending HTTP POST request";
            goto LAB_00a35478;
          }
          bVar13 = *plVar26 == 0;
          bVar14 = bVar13;
LAB_00a35490:
          plVar46 = plVar32;
          if (bVar13) {
            plVar46 = (long *)0x0;
          }
          FUN_00a49fc0(param_1,0,0xffffffffffffffff,1,plVar36,-(uint)bVar14,plVar46);
        }
        else {
          if (uVar41 == 4) {
            if (*(char *)((long)param_1 + 0x3ca) == '\0') {
              uVar49 = *(ulong *)(lVar40 + 0x8cf8);
              if (uVar49 != 0xffffffffffffffff) {
                cVar10 = *(char *)(lVar40 + 0x211);
                goto joined_r0x00a34ac8;
              }
LAB_00a34ad0:
              pbVar3 = (byte *)(lVar40 + 0x8ca8);
              *pbVar3 = 0;
                    /* try { // try from 00a34af8 to 00b34b5f has its CatchHandler @ 00a34dc0 */
              if (((*piVar2 == 10) || (iVar15 = (int)param_1[0x47], iVar15 == 10)) ||
                 ((lVar45 = *(long *)(lVar40 + 0x438), iVar15 < 0xb && (lVar45 == 1)))) {
LAB_00a34b0c:
                bVar12 = true;
              }
              else {
                bVar12 = true;
                if ((iVar15 != 0x14) && ((lVar45 == 0) == lVar45 < 2)) {
                  for (plVar46 = *(long **)(*param_1 + 0x3b8); plVar46 != (long *)0x0;
                      plVar46 = (long *)plVar46[1]) {
                    iVar15 = FUN_00a4a220(*plVar46,"Expect:",7);
                    if (iVar15 != 0) {
                      if (*plVar46 != 0) {
                        bVar14 = FUN_00a37030(*plVar46,"Expect:","100-continue");
                        *pbVar3 = bVar14 & 1;
                        goto LAB_00a34b0c;
                      }
                      break;
                    }
                  }
                  iVar15 = FUN_00a36d68(plVar47,"Expect: 100-continue\r\n");
                  if (iVar15 != 0) goto LAB_00a343e4;
                  bVar12 = true;
                  *pbVar3 = 1;
                }
              }
            }
            else {
              uVar49 = 0;
              cVar10 = *(char *)(lVar40 + 0x211);
joined_r0x00a34ac8:
              if (cVar10 == '\0') {
                for (plVar46 = *(long **)(*param_1 + 0x3b8); plVar46 != (long *)0x0;
                    plVar46 = (long *)plVar46[1]) {
                  iVar15 = FUN_00a4a220(*plVar46,"Content-Length:",0xf);
                  if (iVar15 != 0) {
                    if (*plVar46 != 0) goto LAB_00a34acc;
                    break;
                  }
                    /* try { // try from 00a34b74 to 00b34bfb has its CatchHandler @ 00a34e04 */
                }
                iVar15 = FUN_00a36d68(plVar47,"Content-Length: %ld\r\n",uVar49);
                if (iVar15 != 0) goto LAB_00a343e4;
              }
LAB_00a34acc:
              if (uVar49 != 0) goto LAB_00a34ad0;
              bVar12 = false;
            }
            uVar35 = plVar47[2];
            if (0xfffffffffffffffd < uVar35) {
LAB_00a34be4:
                    /* try { // try from 00a34bfc to 00b34c2f has its CatchHandler @ 00a34a3c */
              (*(code *)PTR_free_01769a00)(*plVar47);
              *plVar47 = 0;
LAB_00a3458c:
              (*(code *)PTR_free_01769a00)(plVar47);
              iVar15 = 0x1b;
              goto LAB_00a343e4;
            }
            lVar45 = *plVar47;
            if (lVar45 == 0) {
              lVar19 = uVar35 * 2 + 4;
              if (0xfffffffffffffffb < uVar35 * 2 || (long)uVar35 < 0) {
                lVar19 = -1;
              }
              lVar45 = (*(code *)PTR_malloc_017699f8)(lVar19);
joined_r0x00a34d28:
              if (lVar45 == 0) goto LAB_00a3458c;
              uVar35 = plVar47[2];
              *plVar47 = lVar45;
              plVar47[1] = lVar19;
            }
            else {
                    /* try { // try from 00a34c30 to 00b34c43 has its CatchHandler @ 00a34d7c */
              if (plVar47[1] - 1U < uVar35 + 2) {
                lVar19 = uVar35 * 2 + 4;
                if (0xfffffffffffffffb < uVar35 * 2 || (long)uVar35 < 0) {
                  lVar19 = -1;
                }
                lVar45 = FUN_00a4e398(lVar45,lVar19);
                goto joined_r0x00a34d28;
              }
            }
            *(undefined2 *)(lVar45 + uVar35) = 0xa0d;
            plVar47[2] = plVar47[2] + 2;
            FUN_00a30ed8(lVar40,uVar49);
            iVar15 = FUN_00a36ab8(plVar47,param_1,lVar40 + 0x8d90,0,0);
                    /* catch() { ... } // from try @ 00a34a9c with catch @ 00a34d7c
                       catch() { ... } // from try @ 00a34c30 with catch @ 00a34d7c */
            if (iVar15 != 0) {
              pcVar51 = "Failed sending PUT request";
              goto LAB_00a35478;
            }
            bVar13 = !bVar12;
            bVar14 = ~bVar12;
            goto LAB_00a35490;
          }
          plVar42 = plVar32;
          if (uVar41 == 3) {
            if ((*plVar46 == 0) || (*(char *)((long)param_1 + 0x3ca) != '\0')) {
              iVar15 = FUN_00a36d68(plVar47,"Content-Length: 0\r\n\r\n");
              if (iVar15 != 0) goto LAB_00a343e4;
              iVar15 = FUN_00a36ab8(plVar47,param_1,lVar40 + 0x8d90,0,0);
              if (iVar15 != 0) {
                pcVar51 = "Failed sending POST request";
                goto LAB_00a35478;
              }
              iVar15 = -1;
              plVar42 = (long *)0x0;
              goto LAB_00a34f04;
            }
            plVar26 = plVar46 + 7;
            iVar15 = FUN_00a631fc(plVar26);
            if (iVar15 != 0) {
              pcVar51 = "Internal HTTP POST error!";
LAB_00a34c74:
              FUN_00a38a08(lVar40,pcVar51);
              iVar15 = 0x22;
              goto LAB_00a343e4;
            }
            plVar46[10] = *(long *)(lVar40 + 0x8d10);
            *(code **)(lVar40 + 0x8d10) = FUN_00a636c8;
            *(long **)(lVar40 + 0x8d18) = plVar26;
            *(undefined4 *)(plVar46 + 0xf) = 2;
            if (*(char *)(lVar40 + 0x211) == '\0') {
              for (plVar43 = *(long **)(*param_1 + 0x3b8); plVar43 != (long *)0x0;
                  plVar43 = (long *)plVar43[1]) {
                iVar15 = FUN_00a4a220(*plVar43,"Content-Length:",0xf);
                if (iVar15 != 0) {
                  if (*plVar43 != 0) goto LAB_00a34f70;
                  break;
                }
              }
              iVar15 = FUN_00a36d68(plVar47,"Content-Length: %ld\r\n",plVar46[1]);
              if (iVar15 != 0) goto LAB_00a343e4;
            }
LAB_00a34f70:
            *(byte *)(lVar40 + 0x8ca8) = 0;
            if (((*piVar2 != 10) && (iVar15 = (int)param_1[0x47], iVar15 != 10)) &&
               ((lVar45 = *(long *)(lVar40 + 0x438), 10 < iVar15 || (lVar45 != 1)))) {
              if ((iVar15 != 0x14) && ((lVar45 == 0) == lVar45 < 2)) {
                for (plVar43 = *(long **)(*param_1 + 0x3b8); plVar43 != (long *)0x0;
                    plVar43 = (long *)plVar43[1]) {
                  iVar15 = FUN_00a4a220(*plVar43,"Expect:",7);
                  if (iVar15 != 0) {
                    if (*plVar43 != 0) {
                      bVar14 = FUN_00a37030(*plVar43,"Expect:","100-continue");
                      bVar14 = bVar14 & 1;
                      goto LAB_00a35720;
                    }
                    break;
                  }
                }
                iVar15 = FUN_00a36d68(plVar47,"Expect: 100-continue\r\n");
                    /* try { // try from 00a35714 to 00b3571b has its CatchHandler @ 00a357d4 */
                if (iVar15 != 0) goto LAB_00a343e4;
                    /* try { // try from 00a3571c to 00b35747 has its CatchHandler @ 00a357e8 */
                bVar14 = 1;
LAB_00a35720:
                *(byte *)(lVar40 + 0x8ca8) = bVar14;
              }
            }
            local_80 = 0;
            pvVar27 = (void *)FUN_00a63824(plVar26,&local_80);
            uVar49 = local_80;
            if (pvVar27 == (void *)0x0) {
              pcVar51 = "Could not get Content-Type header line!";
              goto LAB_00a34c74;
            }
            uVar35 = plVar47[2];
            if (uVar35 <= ~local_80) {
              lVar45 = *plVar47;
                    /* try { // try from 00a35768 to 00b3577f has its CatchHandler @ 00a357e4 */
              if ((lVar45 == 0) || (plVar47[1] - 1U < uVar35 + local_80)) {
                lVar19 = -1;
                    /* try { // try from 00a35780 to 00b35823 has its CatchHandler @ 00a35690 */
                if ((-1 < (long)(uVar35 | local_80)) &&
                   (uVar37 = local_80 << 1 ^ 0xffffffffffffffff,
                   uVar35 * 2 < uVar37 || uVar35 * 2 - uVar37 == 0)) {
                  lVar19 = (uVar35 + local_80) * 2;
                }
                if (lVar45 == 0) {
                  lVar45 = (*(code *)PTR_malloc_017699f8)(lVar19);
                }
                else {
                  lVar45 = FUN_00a4e398(lVar45,lVar19);
                }
                if (lVar45 == 0) goto LAB_00a3458c;
                    /* catch() { ... } // from try @ 00a35714 with catch @ 00a357d4 */
                uVar35 = plVar47[2];
                *plVar47 = lVar45;
                plVar47[1] = lVar19;
              }
                    /* catch() { ... } // from try @ 00a35768 with catch @ 00a357e4 */
                    /* catch() { ... } // from try @ 00a3571c with catch @ 00a357e8 */
              memcpy((void *)(lVar45 + uVar35),pvVar27,uVar49);
              uVar49 = plVar47[2] + uVar49;
              plVar47[2] = uVar49;
              if (uVar49 < 0xfffffffffffffffe) {
                lVar45 = *plVar47;
                if (lVar45 == 0) {
                  lVar19 = uVar49 * 2 + 4;
                  if (0xfffffffffffffffb < uVar49 * 2 || (long)uVar49 < 0) {
                    lVar19 = -1;
                  }
                    /* try { // try from 00a35874 to 00b358ab has its CatchHandler @ 00a35930 */
                  lVar45 = (*(code *)PTR_malloc_017699f8)(lVar19);
joined_r0x00a35878:
                  if (lVar45 == 0) goto LAB_00a3458c;
                  uVar49 = plVar47[2];
                  *plVar47 = lVar45;
                  plVar47[1] = lVar19;
                }
                else {
                    /* try { // try from 00a35824 to 00b35873 has its CatchHandler @ 00a35824
                       catch() { ... } // from try @ 00a35824 with catch @ 00a35824
                       catch() { ... } // from try @ 00a358ac with catch @ 00a35824
                       catch() { ... } // from try @ 00a358f0 with catch @ 00a35824 */
                  if (plVar47[1] - 1U < uVar49 + 2) {
                    lVar19 = uVar49 * 2 + 4;
                    if (0xfffffffffffffffb < uVar49 * 2 || (long)uVar49 < 0) {
                      lVar19 = -1;
                    }
                    lVar45 = FUN_00a4e398(lVar45,lVar19);
                    goto joined_r0x00a35878;
                  }
                }
                *(undefined2 *)(lVar45 + uVar49) = 0xa0d;
                plVar47[2] = plVar47[2] + 2;
                    /* try { // try from 00a358ac to 00b358db has its CatchHandler @ 00a35824 */
                FUN_00a30ed8(lVar40,plVar46[1]);
                iVar15 = FUN_00a36ab8(plVar47,param_1,lVar40 + 0x8d90,0,0);
                if (iVar15 != 0) {
                    /* try { // try from 00a358dc to 00b358ef has its CatchHandler @ 00a35930 */
                  FUN_00a38a08(lVar40,"Failed sending POST request");
                  FUN_00a62910(plVar46);
                  goto LAB_00a343e4;
                }
                    /* try { // try from 00a358f0 to 00b3594b has its CatchHandler @ 00a35824 */
                iVar15 = 0;
                goto LAB_00a34f04;
              }
            }
            goto LAB_00a34be4;
          }
          uVar49 = plVar47[2];
          if (0xfffffffffffffffd < uVar49) goto LAB_00a34be4;
          lVar45 = *plVar47;
          if (lVar45 == 0) {
                    /* try { // try from 00a34c88 to 00b34c9b has its CatchHandler @ 00a34dc0 */
            lVar19 = uVar49 * 2 + 4;
            if (0xfffffffffffffffb < uVar49 * 2 || (long)uVar49 < 0) {
              lVar19 = -1;
            }
            lVar45 = (*(code *)PTR_malloc_017699f8)(lVar19);
joined_r0x00a34cac:
            if (lVar45 == 0) goto LAB_00a3458c;
            uVar49 = plVar47[2];
            *plVar47 = lVar45;
            plVar47[1] = lVar19;
          }
          else {
                    /* try { // try from 00a34a3c to 00b34a9b has its CatchHandler @ 00a34a3c
                       catch() { ... } // from try @ 00a34a3c with catch @ 00a34a3c
                       catch() { ... } // from try @ 00a34bfc with catch @ 00a34a3c
                       catch() { ... } // from try @ 00a34cf4 with catch @ 00a34a3c */
            if (plVar47[1] - 1U < uVar49 + 2) {
              lVar19 = uVar49 * 2 + 4;
              if (0xfffffffffffffffb < uVar49 * 2 || (long)uVar49 < 0) {
                lVar19 = -1;
              }
              lVar45 = FUN_00a4e398(lVar45,lVar19);
              goto joined_r0x00a34cac;
            }
          }
          *(undefined2 *)(lVar45 + uVar49) = 0xa0d;
                    /* try { // try from 00a34ce0 to 00b34cf3 has its CatchHandler @ 00a34e04 */
          plVar47[2] = plVar47[2] + 2;
          iVar15 = FUN_00a36ab8(plVar47,param_1,lVar40 + 0x8d90,0,0);
          if (iVar15 != 0) {
                    /* try { // try from 00a34cf4 to 00b34e63 has its CatchHandler @ 00a34a3c */
            pcVar51 = "Failed sending HTTP request";
LAB_00a35478:
            FUN_00a38a08(lVar40,pcVar51);
            goto LAB_00a343e4;
          }
                    /* catch() { ... } // from try @ 00a34af8 with catch @ 00a34dc0
                       catch() { ... } // from try @ 00a34c88 with catch @ 00a34dc0 */
          iVar15 = -(uint)(*plVar26 == 0);
          if (*plVar26 == 0) {
            plVar42 = (long *)0x0;
          }
LAB_00a34f04:
          FUN_00a49fc0(param_1,0,0xffffffffffffffff,1,plVar36,iVar15,plVar42);
          uVar49 = 0;
        }
        if (*plVar32 == 0) {
          iVar15 = 0;
        }
        else {
          FUN_00a3112c(lVar40);
          iVar18 = FUN_00a306d0(param_1);
          iVar15 = 0;
          if (iVar18 != 0) {
            iVar15 = 0x2a;
          }
          if ((long)uVar49 <= *plVar32) {
            FUN_00a38740(lVar40,"upload completely sent off: %ld out of %ld bytes\n",*plVar32,uVar49
                        );
                    /* try { // try from 00a354fc to 00b3552f has its CatchHandler @ 00a355fc */
            *(undefined1 *)(lVar40 + 0x1e8) = 1;
            *(undefined4 *)(lVar40 + 0x140) = 0;
            *(uint *)(lVar40 + 0x1e4) = *(uint *)(lVar40 + 0x1e4) & 0xfffffffd;
          }
        }
        if (((int)param_1[0x47] == 0x14) && (*(char *)(lVar40 + 0x211) != '\0')) {
          *(undefined1 *)(lVar40 + 0x211) = 0;
                    /* try { // try from 00a35530 to 00b35543 has its CatchHandler @ 00a355c8 */
        }
        goto LAB_00a343e4;
      }
    }
  }
LAB_00a343e0:
  iVar15 = 0x1b;
LAB_00a343e4:
  if (*(long *)(lVar11 + 0x28) == local_68) {
                    /* try { // try from 00a34414 to 00b3447b has its CatchHandler @ 00a345d0 */
    return iVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

