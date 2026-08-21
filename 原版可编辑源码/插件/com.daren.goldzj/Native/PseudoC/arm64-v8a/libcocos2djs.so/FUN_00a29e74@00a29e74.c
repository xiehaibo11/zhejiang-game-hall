
int FUN_00a29e74(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  long *plVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  size_t sVar15;
  undefined1 *puVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  size_t sVar20;
  size_t sVar21;
  size_t sVar22;
  void *__dest;
  char *pcVar23;
  byte *pbVar24;
  int *piVar25;
  ulong uVar26;
  long lVar27;
  long *plVar28;
  undefined8 uVar29;
  undefined1 uVar30;
  char cVar31;
  uint uVar32;
  undefined4 uVar33;
  long lVar34;
  long *plVar35;
  undefined8 *puVar36;
  int iVar37;
  long *plVar38;
  long **pplVar39;
  long **pplVar40;
  undefined8 *puVar41;
  undefined **ppuVar42;
  char *pcVar43;
  long *plVar44;
  byte *pbVar45;
  byte *pbVar46;
  long *plVar47;
  undefined1 auVar48 [16];
  ulong local_340;
  ulong local_308;
  long *local_2f8;
  ulong *local_2d0;
  byte *local_2a0;
  char *local_290;
  char *local_288;
  char *local_280;
  long local_278;
  char *local_270;
  ulong local_268;
  undefined8 uStack_260;
  undefined1 local_169;
  long *local_168;
  undefined4 local_160;
  undefined1 local_157;
  undefined1 local_69;
  long local_68;
  
                    /* try { // try from 00a29e90 to 00b29ea7 has its CatchHandler @ 00a2a010 */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_290 = (char *)0x0;
  local_288 = (char *)0x0;
  uVar11 = FUN_00a154f0(*(undefined8 *)(param_1 + 0x60));
                    /* try { // try from 00a29ebc to 00b29ecf has its CatchHandler @ 00a2a00c */
  uVar12 = FUN_00a154fc(*(undefined8 *)(param_1 + 0x60));
  *param_3 = 0;
                    /* try { // try from 00a29ed0 to 00b29edf has its CatchHandler @ 00a29fe0 */
  if (*(long *)(param_1 + 0x908) == 0) {
    pcVar19 = (char *)0x0;
    pcVar43 = (char *)0x0;
    pcVar17 = (char *)0x0;
    iVar10 = 3;
    goto LAB_00a2a274;
  }
  plVar13 = (long *)(*(code *)PTR_calloc_01d1b760)(1,0x730);
  if (plVar13 == (long *)0x0) {
LAB_00a2a264:
    pcVar19 = (char *)0x0;
LAB_00a2a268:
    pcVar43 = (char *)0x0;
    goto LAB_00a2a26c;
  }
                    /* try { // try from 00a29ef8 to 00b29eff has its CatchHandler @ 00a29fc4 */
                    /* try { // try from 00a29f00 to 00b29f0f has its CatchHandler @ 00a29ff4 */
                    /* try { // try from 00a29f10 to 00b29f17 has its CatchHandler @ 00a29fdc */
  plVar13[0x80] = (long)&PTR_s_<no_protocol>_01c6d3d8;
  plVar13[10] = -1;
                    /* try { // try from 00a29f18 to 00b29f47 has its CatchHandler @ 00a29fe4 */
  plVar13[0x33] = -1;
  *(undefined4 *)(plVar13 + 0x34) = 0xffffffff;
  plVar13[0x4d] = -1;
  plVar13[0x4c] = -1;
  FUN_00a11300(plVar13,1);
  auVar48 = FUN_00a18e40();
  *(undefined1 (*) [16])(plVar13 + 0x4a) = auVar48;
  *plVar13 = param_1;
  uVar32 = *(uint *)(param_1 + 0x5c0);
  *(undefined4 *)(plVar13 + 0x28) = 4;
                    /* try { // try from 00a29f48 to 00b2a05f has its CatchHandler @ 00a29e40 */
  *(uint *)(plVar13 + 0x30) = uVar32;
  if (*(char **)(param_1 + 0x718) == (char *)0x0) {
    bVar8 = false;
    *(undefined1 *)((long)plVar13 + 0x3bd) = 0;
    bVar7 = false;
  }
  else {
    bVar7 = **(char **)(param_1 + 0x718) != '\0';
    bVar8 = uVar32 < 3 && bVar7;
    *(bool *)((long)plVar13 + 0x3bd) = bVar7;
  }
  *(bool *)((long)plVar13 + 0x3be) = bVar8;
  *(byte *)((long)plVar13 + 0x3bf) = bVar7 & (bVar8 ^ 1U);
  if ((*(char **)(param_1 + 0x720) != (char *)0x0) && (**(char **)(param_1 + 0x720) != '\0')) {
    *(undefined1 *)((long)plVar13 + 0x3bd) = 1;
    *(undefined1 *)((long)plVar13 + 0x3bf) = 1;
  }
                    /* catch() { ... } // from try @ 00a29ef8 with catch @ 00a29fc4 */
  *(bool *)((long)plVar13 + 0x3c1) = *(long *)(param_1 + 2000) != 0;
                    /* catch() { ... } // from try @ 00a29f10 with catch @ 00a29fdc */
  *(undefined1 *)((long)plVar13 + 0x3c9) = *(undefined1 *)(param_1 + 0x612);
                    /* catch() { ... } // from try @ 00a29ed0 with catch @ 00a29fe0 */
                    /* catch() { ... } // from try @ 00a29f18 with catch @ 00a29fe4 */
  *(bool *)(plVar13 + 0x78) = *(long *)(param_1 + 0x7b8) != 0;
                    /* catch() { ... } // from try @ 00a29f00 with catch @ 00a29ff4 */
  *(undefined1 *)((long)plVar13 + 0x3cc) = *(undefined1 *)(param_1 + 0x62c);
  *(undefined1 *)((long)plVar13 + 0x3cd) = *(undefined1 *)(param_1 + 0x62d);
  *(undefined1 *)(plVar13 + 0x68) = *(undefined1 *)(param_1 + 0x448);
                    /* catch() { ... } // from try @ 00a29ebc with catch @ 00a2a00c */
  *(undefined1 *)((long)plVar13 + 0x341) = *(undefined1 *)(param_1 + 0x449);
                    /* catch() { ... } // from try @ 00a29e90 with catch @ 00a2a010 */
  *(undefined1 *)(plVar13 + 0x70) = *(undefined1 *)(param_1 + 0x500);
  *(undefined1 *)((long)plVar13 + 0x381) = *(undefined1 *)(param_1 + 0x501);
  lVar34 = *(long *)(param_1 + 0x5e8);
  *(undefined4 *)(plVar13 + 0x9e) = 0xffffffff;
  plVar13[0x82] = lVar34;
  *(undefined8 *)((long)plVar13 + 0x4fc) = 0;
  *(undefined8 *)((long)plVar13 + 0x4f4) = 0;
  *(undefined4 *)((long)plVar13 + 0x504) = 0;
  uVar14 = FUN_00a12594(*(undefined8 *)(param_1 + 0x60),1);
  if (((uVar14 & 1) != 0) && (plVar13[0x91] == 0)) {
    lVar34 = (*(code *)PTR_calloc_01d1b760)(0x4000,1);
    plVar13[0x91] = lVar34;
                    /* try { // try from 00a2a060 to 00b2a0a3 has its CatchHandler @ 00a2a060
                       catch() { ... } // from try @ 00a2a060 with catch @ 00a2a060
                       catch() { ... } // from try @ 00a2a0bc with catch @ 00a2a060 */
    if (lVar34 != 0) goto LAB_00a2a064;
LAB_00a2a214:
    FUN_00a34128(plVar13[0x8f],0);
    FUN_00a34128(plVar13[0x90],0);
    plVar13[0x90] = 0;
    plVar13[0x8f] = 0;
    (*(code *)PTR_free_01d1b748)(plVar13[0x91]);
    (*(code *)PTR_free_01d1b748)(plVar13[0xe0]);
    (*(code *)PTR_free_01d1b748)(plVar13);
    goto LAB_00a2a264;
  }
LAB_00a2a064:
  lVar34 = FUN_00a33f88(FUN_00a2dec0);
  plVar13[0x8f] = lVar34;
  lVar34 = FUN_00a33f88(FUN_00a2dec0);
  plVar13[0x90] = lVar34;
  if ((lVar34 == 0) || (plVar13[0x8f] == 0)) goto LAB_00a2a214;
  if (*(long *)(param_1 + 0x6b0) != 0) {
                    /* try { // try from 00a2a0a4 to 00b2a0bb has its CatchHandler @ 00a2a0ec */
    lVar34 = (*(code *)PTR_strdup_01d1b758)();
    plVar13[0xe0] = lVar34;
    if (lVar34 == 0) goto LAB_00a2a214;
  }
                    /* try { // try from 00a2a0bc to 00b2a0ff has its CatchHandler @ 00a2a060 */
  *(undefined4 *)((long)plVar13 + 0x70c) = *(undefined4 *)(param_1 + 0x2ac);
  *(undefined2 *)(plVar13 + 0xe1) = *(undefined2 *)(param_1 + 0x2a8);
  lVar34 = *(long *)(param_1 + 0x318);
  plVar13[8] = *(long *)(param_1 + 800);
  plVar13[7] = lVar34;
  *param_2 = plVar13;
  sVar15 = strlen(*(char **)(param_1 + 0x908));
  plVar28 = (long *)(param_1 + 0x8cb8);
                    /* catch() { ... } // from try @ 00a2a0a4 with catch @ 00a2a0ec */
  if (sVar15 < 0x101) {
    sVar15 = 0x100;
  }
                    /* catch() { ... } // from try @ 00a2a168 with catch @ 00a2a100 */
  (*(code *)PTR_free_01d1b748)(*plVar28);
  *(undefined8 *)(param_1 + 0x8cc0) = 0;
  *plVar28 = 0;
  lVar34 = (*(code *)PTR_malloc_01d1b740)(sVar15 + 2);
  *plVar28 = lVar34;
  if (lVar34 == 0) goto LAB_00a2a264;
  plVar44 = (long *)(param_1 + 0x8cc0);
  *plVar44 = lVar34;
  puVar16 = (undefined1 *)(*(code *)PTR_malloc_01d1b740)(sVar15 + 2);
  plVar13[0x16] = (long)puVar16;
  if (puVar16 != (undefined1 *)0x0) {
    plVar47 = plVar13 + 0x18;
                    /* try { // try from 00a2a158 to 00b2a167 has its CatchHandler @ 00a2a2e8 */
    *plVar47 = (long)puVar16;
                    /* try { // try from 00a2a168 to 00b2a303 has its CatchHandler @ 00a2a100 */
    *puVar16 = 0;
    pcVar17 = (char *)(*(code *)PTR_strdup_01d1b758)(&DAT_0189703a);
    local_288 = pcVar17;
    pcVar18 = (char *)(*(code *)PTR_strdup_01d1b758)(&DAT_0189703a);
    local_290 = pcVar18;
    pcVar19 = (char *)(*(code *)PTR_strdup_01d1b758)(&DAT_0189703a);
    pcVar43 = (char *)0x0;
    iVar10 = 0x1b;
    if ((pcVar19 == (char *)0x0) || (pcVar17 == (char *)0x0)) {
LAB_00a2b1a8:
      pcVar43 = (char *)0x0;
      pcVar17 = pcVar43;
      goto LAB_00a2a274;
    }
    pcVar17 = (char *)0x0;
    if (pcVar18 == (char *)0x0) goto LAB_00a2a274;
    pcVar43 = (char *)*plVar44;
    local_268 = 0;
    uStack_260 = 0;
    pcVar18 = *(char **)(param_1 + 0x908);
    pcVar17 = strpbrk(pcVar18,"\r\n");
    if (pcVar17 != (char *)0x0) {
      pcVar43 = "Illegal characters found in URL";
LAB_00a2a1fc:
      FUN_00a23020(param_1,pcVar43);
      iVar10 = 3;
LAB_00a2a208:
      pcVar43 = (char *)0x0;
      pcVar17 = (char *)0x0;
      goto LAB_00a2a274;
    }
    iVar10 = sscanf(pcVar18,"%15[^:]:%[^\n]",&local_268,pcVar43);
    if ((iVar10 == 2) && (iVar10 = FUN_00a33710(&local_268,"file"), iVar10 != 0)) {
      if (*pcVar43 == '/') {
                    /* try { // try from 00a2a358 to 00b2a36f has its CatchHandler @ 00a2a544 */
        if (pcVar43[1] == '/') {
          sVar15 = strlen(pcVar43 + 2);
          memmove(pcVar43,pcVar43 + 2,sVar15 + 1);
                    /* try { // try from 00a2a378 to 00b2a383 has its CatchHandler @ 00a2a540 */
          if (*pcVar43 != '/') goto LAB_00a2a384;
        }
      }
      else {
LAB_00a2a384:
                    /* try { // try from 00a2a384 to 00b2a38f has its CatchHandler @ 00a2a53c */
                    /* try { // try from 00a2a390 to 00b2a4c7 has its CatchHandler @ 00a2a554 */
        iVar10 = FUN_00a33994("localhost/",pcVar43,10);
        if ((iVar10 == 0) && (iVar10 = FUN_00a33994("127.0.0.1/",pcVar43,10), iVar10 == 0)) {
          pcVar43 = "Valid host name with slash missing in URL";
          goto LAB_00a2a1fc;
        }
        pcVar17 = pcVar43 + 10;
        if (pcVar43[10] != '/') {
          pcVar17 = pcVar43 + 9;
        }
        sVar15 = strlen(pcVar17);
        memmove(pcVar43,pcVar17,sVar15 + 1);
      }
      bVar8 = false;
      local_2d0 = (ulong *)0x188fd0d;
      goto LAB_00a2a5d8;
    }
    *pcVar43 = '\0';
    iVar10 = sscanf(*(char **)(param_1 + 0x908),"%15[^\n:]:%3[/]%[^\n/?#]%[^\n]",&local_268,
                    &local_168,*plVar47,pcVar43);
    if (iVar10 == 2) {
      pcVar43 = "Bad URL";
      goto LAB_00a2a1fc;
    }
    if (2 < iVar10) {
      sVar15 = strlen((char *)&local_168);
      if (sVar15 == 2) {
        bVar8 = false;
        local_2d0 = &local_268;
        goto LAB_00a2a5d8;
      }
      pcVar17 = "es";
      if (sVar15 < 2) {
        pcVar17 = "";
      }
                    /* try { // try from 00a2a4c8 to 00b2a5ab has its CatchHandler @ 00a2a304 */
      FUN_00a22d58(param_1,"Unwillingly accepted illegal URL using %d slash%s!\n",sVar15,pcVar17);
      if (*(char *)(param_1 + 0x910) != '\0') {
        (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x908));
      }
      lVar34 = FUN_00a0e870("%s://%s%s",&local_268,*plVar47,pcVar43);
      *(long *)(param_1 + 0x908) = lVar34;
      if (lVar34 != 0) {
        local_2d0 = &local_268;
        bVar8 = false;
        *(undefined1 *)(param_1 + 0x910) = 1;
        goto LAB_00a2a5d8;
      }
LAB_00a2a80c:
      iVar10 = 0x1b;
      goto LAB_00a2a208;
    }
    iVar10 = sscanf(*(char **)(param_1 + 0x908),"%[^\n/?#]%[^\n]",*plVar47,pcVar43);
    if (iVar10 < 1) {
      pcVar43 = "<url> malformed";
      goto LAB_00a2a1fc;
    }
    local_2d0 = *(ulong **)(param_1 + 0x6a8);
    if (*(ulong **)(param_1 + 0x6a8) == (ulong *)0x0) {
      iVar10 = FUN_00a33994(&DAT_01892bd8,*plVar47,4);
      if (iVar10 == 0) {
                    /* catch() { ... } // from try @ 00a2a384 with catch @ 00a2a53c */
                    /* catch() { ... } // from try @ 00a2a378 with catch @ 00a2a540 */
                    /* catch() { ... } // from try @ 00a2a358 with catch @ 00a2a544 */
        iVar10 = FUN_00a33994("DICT.",*plVar47,5);
        if (iVar10 == 0) {
          iVar10 = FUN_00a33994("LDAP.",*plVar47,5);
          if (iVar10 == 0) {
            iVar10 = FUN_00a33994("IMAP.",*plVar47,5);
            if (iVar10 == 0) {
                    /* try { // try from 00a2a5ac to 00b2a5ff has its CatchHandler @ 00a2a5ac
                       catch() { ... } // from try @ 00a2a5ac with catch @ 00a2a5ac
                       catch() { ... } // from try @ 00a2a764 with catch @ 00a2a5ac */
              iVar10 = FUN_00a33994("SMTP.",*plVar47,5);
              if (iVar10 == 0) {
                iVar10 = FUN_00a33994("POP3.",*plVar47,5);
                    /* try { // try from 00a2b050 to 00b2b05b has its CatchHandler @ 00a2b20c */
                    /* try { // try from 00a2b05c to 00b2b067 has its CatchHandler @ 00a2b208 */
                local_2d0 = (ulong *)&DAT_0188ecba;
                if (iVar10 != 0) {
                  local_2d0 = (ulong *)&DAT_0188ecca;
                }
              }
              else {
                local_2d0 = (ulong *)&DAT_0188ece3;
              }
            }
            else {
              local_2d0 = (ulong *)&DAT_01892bf9;
            }
          }
          else {
            local_2d0 = (ulong *)&DAT_01892bee;
          }
        }
        else {
          local_2d0 = (ulong *)&DAT_01892be3;
                    /* catch() { ... } // from try @ 00a2a390 with catch @ 00a2a554 */
        }
      }
      else {
        local_2d0 = (ulong *)&DAT_0188ecf6;
      }
    }
    bVar8 = true;
LAB_00a2a5d8:
    pcVar17 = (char *)*plVar47;
    pcVar18 = strchr(pcVar17,0x40);
    if (pcVar18 != (char *)0x0) {
      pcVar17 = pcVar18 + 1;
    }
    pcVar17 = strchr(pcVar17,0x3f);
    if (pcVar17 == (char *)0x0) {
      if (*pcVar43 == '\0') {
        bVar7 = true;
        pcVar43[0] = '/';
        pcVar43[1] = '\0';
      }
      else {
        bVar7 = false;
        if (*pcVar43 != '/') goto LAB_00a2a670;
      }
LAB_00a2a6a4:
      if (*(char *)(param_1 + 0x8e2) == '\0') {
        pcVar17 = (char *)FUN_00a42128(pcVar43);
        if (pcVar17 == (char *)0x0) goto LAB_00a2a80c;
        iVar10 = strcmp(pcVar17,pcVar43);
        if (iVar10 == 0) {
          (*(code *)PTR_free_01d1b748)(pcVar17);
          if (!bVar7) goto LAB_00a2a7d0;
        }
        else {
          (*(code *)PTR_free_01d1b748)(*plVar28);
          *plVar28 = (long)pcVar17;
          *plVar44 = (long)pcVar17;
          pcVar43 = pcVar17;
        }
        goto LAB_00a2a708;
      }
      if (bVar7) goto LAB_00a2a708;
    }
    else {
                    /* try { // try from 00a2a600 to 00b2a617 has its CatchHandler @ 00a2a7e0 */
      sVar15 = strlen(pcVar17);
      sVar20 = strlen(pcVar43);
                    /* try { // try from 00a2a620 to 00b2a62b has its CatchHandler @ 00a2a7dc */
      memmove(pcVar43 + sVar15 + 1,pcVar43,sVar20 + 1);
                    /* try { // try from 00a2a62c to 00b2a637 has its CatchHandler @ 00a2a7d8 */
                    /* try { // try from 00a2a638 to 00b2a763 has its CatchHandler @ 00a2a7f0 */
      memcpy(pcVar43 + 1,pcVar17,sVar15);
      *pcVar43 = '/';
      *pcVar17 = '\0';
      bVar7 = true;
      if (*pcVar43 == '/') goto LAB_00a2a6a4;
LAB_00a2a670:
      sVar15 = strlen(pcVar43);
      memmove(pcVar43 + 1,pcVar43,sVar15 + 1);
      *pcVar43 = '/';
LAB_00a2a708:
      sVar20 = strlen(pcVar43);
      sVar21 = strlen(*(char **)(param_1 + 0x908));
      sVar15 = strlen((char *)*plVar47);
      if (!bVar8) {
        sVar22 = strlen((char *)local_2d0);
        sVar15 = sVar15 + sVar22 + 3;
      }
      __dest = (void *)(*(code *)PTR_malloc_01d1b740)(sVar21 + 2);
                    /* try { // try from 00a2a764 to 00b2a847 has its CatchHandler @ 00a2a5ac */
      if (__dest == (void *)0x0) goto LAB_00a2a80c;
      memcpy(__dest,*(void **)(param_1 + 0x908),sVar15);
      memcpy((void *)((long)__dest + sVar15),pcVar43,sVar20 + 1);
      if (*(char *)(param_1 + 0x910) != '\0') {
        (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x908));
        *(undefined8 *)(param_1 + 0x908) = 0;
        *(undefined1 *)(param_1 + 0x910) = 0;
      }
      FUN_00a22d58(param_1,"Rebuilt URL to: %s\n",__dest);
      *(void **)(param_1 + 0x908) = __dest;
      *(undefined1 *)(param_1 + 0x910) = 1;
    }
LAB_00a2a7d0:
    local_168 = (long *)0x0;
    local_278 = 0;
    local_270 = (char *)0x0;
                    /* catch() { ... } // from try @ 00a2a62c with catch @ 00a2a7d8 */
    pcVar18 = (char *)*plVar47;
                    /* catch() { ... } // from try @ 00a2a620 with catch @ 00a2a7dc */
                    /* catch() { ... } // from try @ 00a2a600 with catch @ 00a2a7e0 */
    pcVar17 = strchr(pcVar18,0x40);
    if (pcVar17 == (char *)0x0) {
LAB_00a2a800:
      iVar10 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 00a2a638 with catch @ 00a2a7f0 */
      *plVar47 = (long)(pcVar17 + 1);
      if (*(int *)(param_1 + 0x624) == 2) goto LAB_00a2a800;
      iVar10 = FUN_00a2d60c(pcVar18,pcVar17 + 1 + ~(ulong)pcVar18,&local_168,&local_270,&local_278);
      if (iVar10 == 0) {
        if (local_168 != (long *)0x0) {
          *(undefined1 *)(plVar13 + 0x7a) = 1;
          *(undefined1 *)(plVar13 + 0x78) = 1;
          iVar10 = FUN_00a2eb18(param_1,local_168,0,&local_280,0,0);
          if (iVar10 != 0) goto LAB_00a2a83c;
          (*(code *)PTR_free_01d1b748)(local_288);
          local_288 = local_280;
        }
        if (local_270 != (char *)0x0) {
          iVar10 = FUN_00a2eb18(param_1,local_270,0,&local_280,0,0);
          if (iVar10 != 0) goto LAB_00a2a83c;
          (*(code *)PTR_free_01d1b748)(local_290);
          local_290 = local_280;
        }
        if (local_278 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = FUN_00a2eb18(param_1,local_278,0,&local_280,0,0);
          if (iVar10 == 0) {
            (*(code *)PTR_free_01d1b748)(pcVar19);
            pcVar19 = local_280;
          }
        }
      }
    }
LAB_00a2a83c:
                    /* try { // try from 00a2a848 to 00b2a89b has its CatchHandler @ 00a2a848
                       catch() { ... } // from try @ 00a2a848 with catch @ 00a2a848
                       catch() { ... } // from try @ 00a2aa0c with catch @ 00a2a848 */
    (*(code *)PTR_free_01d1b748)(local_168);
    (*(code *)PTR_free_01d1b748)(local_270);
    (*(code *)PTR_free_01d1b748)(local_278);
    if (iVar10 != 0) goto LAB_00a2a208;
    if ((*(char *)*plVar47 == '[') &&
       (pcVar17 = strchr((char *)*plVar47,0x25), pcVar17 != (char *)0x0)) {
                    /* try { // try from 00a2a89c to 00b2a8b3 has its CatchHandler @ 00a2aa88 */
      lVar34 = 3;
      iVar10 = strncmp("%25",pcVar17,3);
      if (iVar10 != 0) {
                    /* try { // try from 00a2a8bc to 00b2a8c7 has its CatchHandler @ 00a2aa84 */
        FUN_00a22d58(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
        lVar34 = 1;
      }
      pcVar18 = pcVar17 + lVar34;
                    /* try { // try from 00a2a8c8 to 00b2a8d3 has its CatchHandler @ 00a2aa80 */
                    /* try { // try from 00a2a8d4 to 00b2aa0b has its CatchHandler @ 00a2aa98 */
      uVar14 = strtoul(pcVar18,&local_270,10);
      pcVar23 = local_270;
      if (*local_270 == ']') {
        sVar15 = strlen(local_270);
        memmove(pcVar17,pcVar23,sVar15 + 1);
        *(int *)(plVar13 + 0x15) = (int)uVar14;
      }
      else {
        strncpy((char *)&local_168,pcVar18,0x12);
        local_157 = 0;
        pcVar23 = strchr((char *)&local_168,0x5d);
        if (pcVar23 != (char *)0x0) {
                    /* try { // try from 00a2aa0c to 00b2aaef has its CatchHandler @ 00a2a848 */
          *pcVar23 = '\0';
          uVar32 = if_nametoindex((char *)&local_168);
          if (uVar32 != 0) {
            sVar15 = strlen((char *)&local_168);
            sVar20 = strlen(pcVar18 + sVar15);
            memmove(pcVar17,pcVar18 + sVar15,sVar20 + 1);
            *(uint *)(plVar13 + 0x15) = uVar32;
            goto LAB_00a2aa8c;
          }
          piVar25 = (int *)__errno();
          pcVar17 = strerror(*piVar25);
          FUN_00a22d58(param_1,"Invalid network interface: %s; %s\n",&local_168,pcVar17);
        }
                    /* catch() { ... } // from try @ 00a2a8c8 with catch @ 00a2aa80 */
                    /* catch() { ... } // from try @ 00a2a8bc with catch @ 00a2aa84 */
        FUN_00a22d58(param_1,"Invalid IPv6 address format\n");
      }
    }
LAB_00a2aa8c:
    if (*(int *)(param_1 + 0x858) != 0) {
      *(int *)(plVar13 + 0x15) = *(int *)(param_1 + 0x858);
    }
                    /* catch() { ... } // from try @ 00a2a8d4 with catch @ 00a2aa98 */
    pcVar43 = strchr(pcVar43,0x23);
    if (pcVar43 != (char *)0x0) {
      *pcVar43 = '\0';
      pcVar43 = strchr(*(char **)(param_1 + 0x908),0x23);
      if (pcVar43 != (char *)0x0) {
        *pcVar43 = '\0';
      }
    }
    ppuVar42 = &PTR_DAT_01c6d2a0;
    pcVar43 = "HTTP";
    iVar10 = FUN_00a33710(&DAT_01866a55,local_2d0);
    if (iVar10 == 0) {
                    /* try { // try from 00a2aaf0 to 00b2ab43 has its CatchHandler @ 00a2aaf0
                       catch() { ... } // from try @ 00a2aaf0 with catch @ 00a2aaf0
                       catch() { ... } // from try @ 00a2ac50 with catch @ 00a2aaf0 */
      ppuVar42 = &PTR_s_HTTPS_01c6d320;
      pcVar43 = "HTTPS";
      iVar10 = FUN_00a33710("HTTPS",local_2d0);
      if (iVar10 != 0) goto LAB_00a2acc4;
      ppuVar42 = &PTR_DAT_01c6e320;
      pcVar43 = "FTP";
      iVar10 = FUN_00a33710(&DAT_01894ab9,local_2d0);
      if (iVar10 != 0) goto LAB_00a2acc4;
      ppuVar42 = &PTR_DAT_01c6e3a0;
      pcVar43 = "FTPS";
      iVar10 = FUN_00a33710(&DAT_01898908,local_2d0);
      if (iVar10 != 0) goto LAB_00a2acc4;
      ppuVar42 = &PTR_s_TELNET_01c6d4d8;
      pcVar43 = "TELNET";
      iVar10 = FUN_00a33710("TELNET",local_2d0);
                    /* try { // try from 00a2ab64 to 00b2ab6f has its CatchHandler @ 00a2acc8 */
      if (iVar10 != 0) goto LAB_00a2acc4;
      ppuVar42 = &PTR_DAT_01c6d458;
                    /* try { // try from 00a2ab70 to 00b2ab7b has its CatchHandler @ 00a2acc4 */
      pcVar43 = "DICT";
                    /* try { // try from 00a2ab7c to 00b2ac4f has its CatchHandler @ 00a2acdc */
      iVar10 = FUN_00a33710(&DAT_01892be3,local_2d0);
      if (iVar10 != 0) goto LAB_00a2acc4;
      ppuVar42 = &PTR_s_FILE_018bce17_4_01c6e240;
      pcVar43 = "FILE";
      iVar10 = FUN_00a33710("FILE",local_2d0);
      if (iVar10 != 0) goto LAB_00a2acc4;
      ppuVar42 = &PTR_DAT_01c6d840;
      pcVar43 = "TFTP";
      iVar10 = FUN_00a33710(&DAT_01894ab8,local_2d0);
      if (iVar10 != 0) goto LAB_00a2acc4;
      ppuVar42 = &PTR_DAT_01c6d8c0;
      pcVar43 = "IMAP";
      iVar10 = FUN_00a33710(&DAT_01892bf9,local_2d0);
      if (iVar10 != 0) goto LAB_00a2acc4;
      ppuVar42 = &PTR_s_IMAPS_01c6d940;
      pcVar43 = "IMAPS";
      iVar10 = FUN_00a33710("IMAPS",local_2d0);
      if (iVar10 != 0) goto LAB_00a2acc4;
      ppuVar42 = &PTR_DAT_01c6daf0;
      pcVar43 = "POP3";
      iVar10 = FUN_00a33710(&DAT_01896010,local_2d0);
      if (iVar10 != 0) goto LAB_00a2acc4;
      ppuVar42 = &PTR_s_POP3S_01c6db70;
      pcVar43 = "POP3S";
      iVar10 = FUN_00a33710("POP3S",local_2d0);
      if (iVar10 != 0) goto LAB_00a2acc4;
      ppuVar42 = &PTR_DAT_01c6e140;
      pcVar43 = "SMB";
      iVar10 = FUN_00a33710(&DAT_01896bc4,local_2d0);
      if (iVar10 != 0) goto LAB_00a2acc4;
      ppuVar42 = &PTR_DAT_01c6e1c0;
                    /* try { // try from 00a2ac50 to 00b2ad33 has its CatchHandler @ 00a2aaf0 */
      pcVar43 = "SMBS";
      iVar10 = FUN_00a33710(&DAT_01896bc8,local_2d0);
      if (iVar10 != 0) goto LAB_00a2acc4;
      ppuVar42 = &PTR_DAT_01c6dd20;
      pcVar43 = "SMTP";
      iVar10 = FUN_00a33710(&DAT_018960f8,local_2d0);
      if (iVar10 != 0) goto LAB_00a2acc4;
      ppuVar42 = &PTR_s_SMTPS_01c6dda0;
      pcVar43 = "SMTPS";
      iVar10 = FUN_00a33710("SMTPS",local_2d0);
      if (iVar10 != 0) goto LAB_00a2acc4;
      ppuVar42 = &PTR_DAT_01c6df50;
      pcVar43 = "RTSP";
      iVar10 = FUN_00a33710(&DAT_018962cc,local_2d0);
      if (iVar10 != 0) goto LAB_00a2acc4;
      ppuVar42 = &PTR_s_GOPHER_01c6dfd0;
      pcVar43 = "GOPHER";
      iVar10 = FUN_00a33710("GOPHER",local_2d0);
                    /* try { // try from 00a2d520 to 00b2d60f has its CatchHandler @ 00a2d2e0 */
      if (iVar10 != 0) goto LAB_00a2acc4;
LAB_00a2d524:
      FUN_00a23020(param_1,"Protocol \"%s\" not supported or disabled in libcurl",local_2d0);
      iVar10 = 1;
      goto LAB_00a2a208;
    }
LAB_00a2acc4:
                    /* catch() { ... } // from try @ 00a2ab70 with catch @ 00a2acc4 */
                    /* catch() { ... } // from try @ 00a2ab64 with catch @ 00a2acc8 */
                    /* catch() { ... } // from try @ 00a2ab44 with catch @ 00a2accc */
                    /* catch() { ... } // from try @ 00a2ab7c with catch @ 00a2acdc */
    if (((*(ulong *)(param_1 + 0x860) & (ulong)*(uint *)(ppuVar42 + 0xf)) == 0) ||
       ((*(char *)(param_1 + 0x8b18) != '\0' &&
        ((*(ulong *)(param_1 + 0x868) & (ulong)*(uint *)(ppuVar42 + 0xf)) == 0))))
    goto LAB_00a2d524;
    plVar13[0x81] = (long)ppuVar42;
    plVar13[0x80] = (long)ppuVar42;
    if (bVar8) {
      pbVar24 = (byte *)FUN_00a0e870("%s://%s",pcVar43,*(undefined8 *)(param_1 + 0x908));
      pcVar43 = (char *)0x0;
      if (pbVar24 != (byte *)0x0) {
        uVar32 = (uint)*pbVar24;
        pbVar46 = pbVar24;
        if (*pbVar24 != 0x3a) {
          do {
                    /* try { // try from 00a2ad34 to 00b2ad87 has its CatchHandler @ 00a2ad34
                       catch() { ... } // from try @ 00a2ad34 with catch @ 00a2ad34
                       catch() { ... } // from try @ 00a2aef8 with catch @ 00a2ad34 */
            iVar10 = tolower(uVar32);
            uVar32 = (uint)pbVar46[1];
            *pbVar46 = (byte)iVar10;
            pbVar46 = pbVar46 + 1;
          } while (uVar32 != 0x3a);
        }
        if (*(char *)(param_1 + 0x910) != '\0') {
          (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x908));
          *(undefined8 *)(param_1 + 0x908) = 0;
          *(undefined1 *)(param_1 + 0x910) = 0;
        }
        *(byte **)(param_1 + 0x908) = pbVar24;
        *(undefined1 *)(param_1 + 0x910) = 1;
        ppuVar42 = (undefined **)plVar13[0x81];
        goto LAB_00a2ad78;
      }
      goto LAB_00a2a26c;
    }
LAB_00a2ad78:
                    /* try { // try from 00a2ad88 to 00b2ad9f has its CatchHandler @ 00a2af74 */
    if (((*(byte *)((long)ppuVar42 + 0x7c) >> 6 & 1) != 0) &&
       (pcVar43 = strchr(*(char **)(*plVar13 + 0x8cc0),0x3f), pcVar43 != (char *)0x0)) {
      *pcVar43 = '\0';
    }
    if (*(long *)(param_1 + 0x838) != 0) {
                    /* try { // try from 00a2ada8 to 00b2adb3 has its CatchHandler @ 00a2af70 */
      lVar34 = (*(code *)PTR_strdup_01d1b758)();
                    /* try { // try from 00a2adb4 to 00b2adbf has its CatchHandler @ 00a2af6c */
      plVar13[0x46] = lVar34;
      if (lVar34 != 0) goto LAB_00a2adbc;
      goto LAB_00a2a268;
    }
LAB_00a2adbc:
                    /* try { // try from 00a2adc0 to 00b2aef7 has its CatchHandler @ 00a2af84 */
    if (*(char *)((long)plVar13 + 0x3c1) != '\0') {
      memset(&local_168,0,0x100);
      memset(&local_268,0,0x100);
      if (*(char **)(param_1 + 2000) != (char *)0x0) {
        strncpy((char *)&local_168,*(char **)(param_1 + 2000),0x100);
        local_69 = 0;
      }
      if (*(char **)(param_1 + 0x7d8) != (char *)0x0) {
        strncpy((char *)&local_268,*(char **)(param_1 + 0x7d8),0x100);
        local_169 = 0;
      }
      iVar10 = FUN_00a2eb18(param_1,&local_168,0,plVar13 + 0x31,0,0);
      if ((iVar10 != 0) ||
         (iVar10 = FUN_00a2eb18(param_1,&local_268,0,plVar13 + 0x32,0,0), iVar10 != 0))
      goto LAB_00a2a208;
    }
    if (*(long *)(param_1 + 0x718) == 0) {
      pcVar17 = (char *)0x0;
    }
    else {
      pcVar17 = (char *)(*(code *)PTR_strdup_01d1b758)();
      if (pcVar17 == (char *)0x0) {
        FUN_00a23020(param_1,"memory shortage");
        pcVar43 = (char *)0x0;
        goto LAB_00a2a270;
      }
    }
    if (*(long *)(param_1 + 0x720) == 0) {
      pcVar43 = (char *)0x0;
    }
    else {
      pcVar43 = (char *)(*(code *)PTR_strdup_01d1b758)();
      if (pcVar43 == (char *)0x0) {
        FUN_00a23020(param_1,"memory shortage");
        goto LAB_00a2a270;
      }
    }
    if ((*(long *)(param_1 + 0x7e0) != 0) && (uVar14 = FUN_00a2d8a0(*plVar47), (uVar14 & 1) != 0)) {
                    /* try { // try from 00a2aef8 to 00b2afdb has its CatchHandler @ 00a2ad34 */
      (*(code *)PTR_free_01d1b748)(pcVar17);
      (*(code *)PTR_free_01d1b748)(pcVar43);
      pcVar43 = (char *)0x0;
      pcVar17 = (char *)0x0;
      lVar34 = *(long *)(param_1 + 0x840);
      if (lVar34 != 0) goto LAB_00a2b0a8;
LAB_00a2af1c:
      if ((pcVar17 == (char *)0x0) ||
         ((*pcVar17 != '\0' && ((*(byte *)(plVar13[0x80] + 0x7c) >> 4 & 1) == 0))))
      goto LAB_00a2b0e0;
      (*(code *)PTR_free_01d1b748)(pcVar17);
      pcVar17 = (char *)0x0;
      if (pcVar43 != (char *)0x0) goto LAB_00a2b0e4;
LAB_00a2b118:
      if (pcVar17 == (char *)0x0) {
        uVar30 = 0;
        pcVar43 = (char *)0x0;
        lVar34 = 0x3be;
        *(undefined1 *)((long)plVar13 + 0x3bf) = 0;
        goto LAB_00a2b20c;
      }
      pcVar43 = (char *)0x0;
      bVar8 = false;
LAB_00a2b124:
      iVar10 = FUN_00a2da18(param_1,plVar13,pcVar17,(int)plVar13[0x30]);
      (*(code *)PTR_free_01d1b748)(pcVar17);
      if (iVar10 == 0) {
        if (bVar8) goto LAB_00a2b174;
        goto LAB_00a2b1b0;
      }
LAB_00a2b154:
      pcVar17 = (char *)0x0;
      goto LAB_00a2a274;
    }
    if (pcVar17 == (char *)0x0 && pcVar43 == (char *)0x0) {
      lVar34 = FUN_00a2e7c4("no_proxy");
                    /* catch() { ... } // from try @ 00a2adb4 with catch @ 00a2af6c */
      if (lVar34 == 0) {
                    /* catch() { ... } // from try @ 00a2ada8 with catch @ 00a2af70 */
                    /* catch() { ... } // from try @ 00a2ad88 with catch @ 00a2af74 */
        lVar34 = FUN_00a2e7c4("NO_PROXY");
      }
                    /* catch() { ... } // from try @ 00a2adc0 with catch @ 00a2af84 */
      uVar14 = FUN_00a2d8a0(*plVar47,lVar34);
      if ((uVar14 & 1) == 0) {
        pbVar24 = *(byte **)plVar13[0x80];
        uVar32 = (uint)*pbVar24;
        if (*pbVar24 == 0) {
          pplVar40 = &local_168;
        }
        else {
          pplVar39 = &local_168;
          do {
            pbVar24 = pbVar24 + 1;
            iVar10 = tolower(uVar32);
            pplVar40 = (long **)((long)pplVar39 + 1);
            *(char *)pplVar39 = (char)iVar10;
            uVar32 = (uint)*pbVar24;
            pplVar39 = pplVar40;
          } while (uVar32 != 0);
        }
                    /* try { // try from 00a2afdc to 00b2b02f has its CatchHandler @ 00a2afdc
                       catch() { ... } // from try @ 00a2afdc with catch @ 00a2afdc
                       catch() { ... } // from try @ 00a2b194 with catch @ 00a2afdc */
        *(undefined1 *)((long)pplVar40 + 6) = 0;
        *(undefined2 *)((long)pplVar40 + 4) = 0x7978;
        *(undefined4 *)pplVar40 = 0x6f72705f;
        pcVar17 = (char *)FUN_00a2e7c4(&local_168);
        if (pcVar17 == (char *)0x0) {
          iVar10 = FUN_00a33710("http_proxy",&local_168);
          if (iVar10 == 0) {
                    /* try { // try from 00a2b068 to 00b2b193 has its CatchHandler @ 00a2b220 */
            FUN_00a338d4(&local_168,&local_168,0x80);
            pcVar17 = (char *)FUN_00a2e7c4(&local_168);
            if (pcVar17 != (char *)0x0) goto LAB_00a2b088;
          }
          pcVar17 = (char *)FUN_00a2e7c4("all_proxy");
          if (pcVar17 == (char *)0x0) {
            pcVar17 = (char *)FUN_00a2e7c4("ALL_PROXY");
                    /* try { // try from 00a2b030 to 00b2b047 has its CatchHandler @ 00a2b210 */
          }
        }
      }
      else {
        pcVar17 = (char *)0x0;
      }
LAB_00a2b088:
      (*(code *)PTR_free_01d1b748)(lVar34);
      pcVar43 = (char *)0x0;
    }
    lVar34 = *(long *)(param_1 + 0x840);
    if (lVar34 == 0) goto LAB_00a2af1c;
LAB_00a2b0a8:
    if (pcVar17 != (char *)0x0) {
      (*(code *)PTR_free_01d1b748)(pcVar17);
      lVar34 = *(long *)(param_1 + 0x840);
    }
    lVar34 = (*(code *)PTR_strdup_01d1b758)(lVar34);
    pcVar17 = (char *)0x0;
    plVar13[0xe5] = lVar34;
    if (lVar34 == 0) goto LAB_00a2a270;
LAB_00a2b0e0:
    if (pcVar43 == (char *)0x0) goto LAB_00a2b118;
LAB_00a2b0e4:
    if ((*pcVar43 == '\0') || ((*(byte *)(plVar13[0x80] + 0x7c) >> 4 & 1) != 0)) {
      (*(code *)PTR_free_01d1b748)(pcVar43);
      goto LAB_00a2b118;
    }
    if (pcVar17 != (char *)0x0) {
      bVar8 = true;
      goto LAB_00a2b124;
    }
LAB_00a2b174:
    iVar10 = FUN_00a2da18(param_1,plVar13,pcVar43,(int)plVar13[0x28]);
                    /* try { // try from 00a2b194 to 00b2b277 has its CatchHandler @ 00a2afdc */
    (*(code *)PTR_free_01d1b748)(pcVar43);
    pcVar43 = (char *)0x0;
    if (iVar10 != 0) goto LAB_00a2b1a8;
LAB_00a2b1b0:
    if (plVar13[0x2b] == 0) {
      lVar34 = 0x3c9;
      *(undefined1 *)((long)plVar13 + 0x3be) = 0;
      uVar30 = 0;
    }
    else {
      if (((*(byte *)(plVar13[0x80] + 0x78) & 3) == 0) && (*(char *)((long)plVar13 + 0x3c9) == '\0')
         ) {
        plVar13[0x80] = (long)&PTR_DAT_01c6d2a0;
      }
      uVar30 = 1;
      lVar34 = 0x3be;
    }
    *(undefined1 *)((long)plVar13 + lVar34) = uVar30;
    uVar30 = 0;
    if (plVar13[0x23] != 0) {
      if ((plVar13[0x2b] == 0) && (plVar13[0x29] == 0)) {
        lVar34 = plVar13[0x31];
                    /* try { // try from 00a2ba44 to 00b2bbeb has its CatchHandler @ 00a2bc84 */
        plVar13[0x31] = 0;
        plVar13[0x29] = lVar34;
        (*(code *)PTR_free_01d1b748)(plVar13[0x2a]);
        lVar34 = plVar13[0x32];
        plVar13[0x32] = 0;
        uVar30 = 1;
        plVar13[0x2a] = lVar34;
      }
      else {
        uVar30 = 1;
      }
    }
                    /* catch() { ... } // from try @ 00a2b05c with catch @ 00a2b208 */
    lVar34 = 0x3bf;
LAB_00a2b20c:
                    /* catch() { ... } // from try @ 00a2b050 with catch @ 00a2b20c */
    *(undefined1 *)((long)plVar13 + lVar34) = uVar30;
                    /* catch() { ... } // from try @ 00a2b030 with catch @ 00a2b210 */
    if (*(char *)((long)plVar13 + 0x3be) == '\0') {
      *(char *)((long)plVar13 + 0x3bd) = *(char *)((long)plVar13 + 0x3bf);
      if (*(char *)((long)plVar13 + 0x3bf) == '\0') {
        *(undefined2 *)((long)plVar13 + 0x3bd) = 0;
        lVar34 = 0x3c9;
        *(undefined1 *)((long)plVar13 + 0x3bf) = 0;
        *(undefined1 *)((long)plVar13 + 0x3c1) = 0;
        uVar30 = 0;
        goto LAB_00a2b220;
      }
    }
    else {
      uVar30 = 1;
      lVar34 = 0x3bd;
LAB_00a2b220:
                    /* catch() { ... } // from try @ 00a2b068 with catch @ 00a2b220 */
      *(undefined1 *)((long)plVar13 + lVar34) = uVar30;
    }
    if (((*(byte *)(plVar13[0x81] + 0x7c) & 1) != 0) && (*(char *)((long)plVar13 + 0x3be) != '\0'))
    {
      *(undefined1 *)((long)plVar13 + 0x3c9) = 1;
    }
    iVar10 = sscanf((char *)*plVar47,"[%*45[0123456789abcdefABCDEF:.]%c",&local_268);
                    /* try { // try from 00a2b278 to 00b2b2cb has its CatchHandler @ 00a2b278
                       catch() { ... } // from try @ 00a2b278 with catch @ 00a2b278
                       catch() { ... } // from try @ 00a2b430 with catch @ 00a2b278 */
    if ((iVar10 != 1) || ((char)local_268 != ']')) {
      iVar10 = inet_pton(10,(char *)*plVar47,&local_168);
                    /* try { // try from 00a2b2cc to 00b2b2e3 has its CatchHandler @ 00a2b4ac */
      if (iVar10 < 1) {
                    /* try { // try from 00a2b2ec to 00b2b2f7 has its CatchHandler @ 00a2b4a8 */
        pcVar17 = strrchr((char *)*plVar47,0x3a);
        lVar34 = *(long *)(param_1 + 0x260);
        goto joined_r0x00a2b2f8;
      }
      pcVar17 = "IPv6 numerical address used in URL without brackets";
      goto LAB_00a2b378;
    }
    lVar34 = plVar13[0x18];
    *(undefined1 *)((long)plVar13 + 0x3c2) = 1;
    plVar13[0x18] = lVar34 + 1;
    pcVar17 = strchr((char *)(lVar34 + 1),0x5d);
    if (pcVar17 == (char *)0x0) {
      pcVar17 = (char *)0x0;
                    /* try { // try from 00a2b304 to 00b2b42f has its CatchHandler @ 00a2b4bc */
      lVar34 = *(long *)(param_1 + 0x260);
joined_r0x00a2b2f8:
                    /* try { // try from 00a2b2f8 to 00b2b303 has its CatchHandler @ 00a2b4a4 */
      if (lVar34 != 0) goto LAB_00a2b30c;
LAB_00a2b350:
      if (pcVar17 == (char *)0x0) goto LAB_00a2b4b0;
      plVar28 = (long *)(pcVar17 + 1);
      uVar14 = strtol((char *)plVar28,(char **)&local_168,10);
      if (0xffff < uVar14) {
        pcVar17 = "Port number out of range";
LAB_00a2b378:
        FUN_00a23020(param_1,pcVar17);
        iVar10 = 3;
        pcVar17 = (char *)0x0;
        goto LAB_00a2a274;
      }
      if (local_168 == plVar28) {
        if ((char)*plVar28 != '\0') {
          pcVar17 = "Illegal port number";
          goto LAB_00a2b378;
        }
        *pcVar17 = '\0';
        iVar10 = (int)plVar13[0x34];
      }
      else {
        *pcVar17 = '\0';
        uVar32 = FUN_00a16cd4();
        *(uint *)(plVar13 + 0x34) = uVar32 & 0xffff;
        iVar10 = (int)plVar13[0x34];
      }
    }
    else {
      *pcVar17 = '\0';
      pcVar17 = pcVar17 + 1;
      if (*pcVar17 != ':') {
        pcVar17 = (char *)0x0;
      }
      lVar34 = *(long *)(param_1 + 0x260);
      if (lVar34 == 0) goto LAB_00a2b350;
LAB_00a2b30c:
      if (*(char *)(param_1 + 0x8b70) == '\0') goto LAB_00a2b350;
      *(uint *)(plVar13 + 0x34) = (uint)lVar34 & 0xffff;
      if (pcVar17 != (char *)0x0) {
        *pcVar17 = '\0';
      }
      if (*(char *)((long)plVar13 + 0x3be) != '\0') {
        local_160 = 0;
        local_168 = (long *)0x0;
        if (*(char *)((long)plVar13 + 0x3d4) != '\0') {
          if (*(char *)(param_1 + 0x613) == '\0') {
            uVar33 = 0x44;
            if (*(char *)(param_1 + 0x615) == '\0') {
              uVar33 = 0x49;
            }
          }
          else {
            uVar33 = 0x41;
          }
          FUN_00a0e7c4(&local_168,0xc,";type=%c",uVar33);
        }
                    /* try { // try from 00a2b430 to 00b2b513 has its CatchHandler @ 00a2b278 */
        pcVar17 = "";
        pcVar18 = "]";
        pcVar23 = "[";
        if (*(char *)((long)plVar13 + 0x3c2) == '\0') {
          pcVar18 = pcVar17;
          pcVar23 = pcVar17;
        }
        pcVar2 = "/";
        if (*(char *)(param_1 + 0x8cc8) == '\0') {
          pcVar2 = pcVar17;
        }
        lVar34 = FUN_00a0e870("%s://%s%s%s:%hu%s%s%s",*(undefined8 *)plVar13[0x81],pcVar23,
                              plVar13[0x18],pcVar18,(int)plVar13[0x34],pcVar2,*plVar44,&local_168);
        if (lVar34 == 0) {
          iVar10 = 0x1b;
          pcVar17 = (char *)0x0;
          goto LAB_00a2a274;
        }
        if (*(char *)(param_1 + 0x910) != '\0') {
          (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x908));
          *(undefined8 *)(param_1 + 0x908) = 0;
          *(undefined1 *)(param_1 + 0x910) = 0;
        }
                    /* catch() { ... } // from try @ 00a2b2f8 with catch @ 00a2b4a4 */
                    /* catch() { ... } // from try @ 00a2b2ec with catch @ 00a2b4a8 */
        *(long *)(param_1 + 0x908) = lVar34;
                    /* catch() { ... } // from try @ 00a2b2cc with catch @ 00a2b4ac */
        *(undefined1 *)(param_1 + 0x910) = 1;
      }
LAB_00a2b4b0:
      iVar10 = (int)plVar13[0x34];
    }
    if (iVar10 < 0) {
                    /* catch() { ... } // from try @ 00a2b304 with catch @ 00a2b4bc */
      *(uint *)(plVar13 + 0x34) = (uint)*(ushort *)(plVar13[0x81] + 0x70);
    }
    if (*(long *)(param_1 + 0x7b8) != 0) {
      (*(code *)PTR_free_01d1b748)(local_288);
      local_288 = (char *)(*(code *)PTR_strdup_01d1b758)(*(undefined8 *)(param_1 + 0x7b8));
      if (local_288 == (char *)0x0) goto LAB_00a2a26c;
    }
    if (*(long *)(param_1 + 0x7c0) != 0) {
                    /* try { // try from 00a2b514 to 00b2b563 has its CatchHandler @ 00a2b514
                       catch() { ... } // from try @ 00a2b514 with catch @ 00a2b514
                       catch() { ... } // from try @ 00a2b61c with catch @ 00a2b514 */
      (*(code *)PTR_free_01d1b748)(local_290);
      local_290 = (char *)(*(code *)PTR_strdup_01d1b758)(*(undefined8 *)(param_1 + 0x7c0));
      if (local_290 == (char *)0x0) goto LAB_00a2a26c;
    }
    if (*(long *)(param_1 + 0x7c8) != 0) {
      (*(code *)PTR_free_01d1b748)(pcVar19);
      pcVar19 = (char *)(*(code *)PTR_strdup_01d1b758)(*(undefined8 *)(param_1 + 0x7c8));
                    /* try { // try from 00a2b564 to 00b2b57b has its CatchHandler @ 00a2b6e4 */
      if (pcVar19 == (char *)0x0) goto LAB_00a2a26c;
    }
    *(undefined1 *)((long)plVar13 + 0x3cf) = 0;
    if (*(int *)(param_1 + 0x624) != 0) {
      iVar10 = FUN_00a30d40(*plVar47,&local_288,&local_290,*(undefined8 *)(param_1 + 0x710));
                    /* try { // try from 00a2b590 to 00b2b5a3 has its CatchHandler @ 00a2b6e0 */
      if (iVar10 < 1) {
        if (iVar10 < 0) goto LAB_00a2a26c;
        *(undefined1 *)((long)plVar13 + 0x3cf) = 1;
                    /* try { // try from 00a2b5cc to 00b2b5d3 has its CatchHandler @ 00a2b698 */
        *(undefined1 *)(plVar13 + 0x78) = 1;
      }
      else {
                    /* try { // try from 00a2b5a4 to 00b2b5b3 has its CatchHandler @ 00a2b6b4 */
        FUN_00a22d58(param_1,"Couldn\'t find host %s in the .netrc file; using defaults\n",*plVar47)
        ;
      }
    }
    pcVar17 = local_290;
                    /* try { // try from 00a2b5d4 to 00b2b5e3 has its CatchHandler @ 00a2b6c8 */
                    /* try { // try from 00a2b5e4 to 00b2b5eb has its CatchHandler @ 00a2b6b0 */
    if (((*(byte *)(plVar13[0x80] + 0x7c) >> 5 & 1) == 0) || ((char)plVar13[0x78] != '\0')) {
                    /* try { // try from 00a2b5ec to 00b2b61b has its CatchHandler @ 00a2b6b8 */
      lVar34 = (*(code *)PTR_strdup_01d1b758)(local_288);
      plVar13[0x43] = lVar34;
      if (lVar34 == 0) goto LAB_00a2ba34;
    }
    else {
                    /* try { // try from 00a2ba0c to 00b2ba23 has its CatchHandler @ 00a2bc74 */
      lVar34 = (*(code *)PTR_strdup_01d1b758)("anonymous");
      plVar13[0x43] = lVar34;
      if (lVar34 == 0) {
LAB_00a2ba34:
        pcVar17 = (char *)0x0;
                    /* try { // try from 00a2ba38 to 00b2ba43 has its CatchHandler @ 00a2bc6c */
        plVar13[0x44] = 0;
        goto LAB_00a2a270;
      }
                    /* try { // try from 00a2ba2c to 00b2ba37 has its CatchHandler @ 00a2bc70 */
      pcVar17 = "ftp@example.com";
    }
    lVar34 = (*(code *)PTR_strdup_01d1b758)(pcVar17);
    pcVar17 = (char *)0x0;
    iVar10 = 0x1b;
                    /* try { // try from 00a2b61c to 00b2b733 has its CatchHandler @ 00a2b514 */
    plVar13[0x44] = lVar34;
    if ((lVar34 == 0) || (plVar13[0x43] == 0)) goto LAB_00a2a274;
    if (*pcVar19 != '\0') {
      lVar34 = (*(code *)PTR_strdup_01d1b758)(pcVar19);
      plVar13[0x45] = lVar34;
      if (lVar34 == 0) goto LAB_00a2a26c;
    }
    puVar41 = *(undefined8 **)(param_1 + 0x418);
    if (puVar41 != (undefined8 *)0x0) {
LAB_00a2b9ac:
                    /* try { // try from 00a2b9ac to 00b2ba0b has its CatchHandler @ 00a2b9ac
                       catch() { ... } // from try @ 00a2b9ac with catch @ 00a2b9ac
                       catch() { ... } // from try @ 00a2bbec with catch @ 00a2b9ac */
      pcVar17 = (char *)*puVar41;
      if (*pcVar17 == ':') {
LAB_00a2b6a4:
        pcVar18 = pcVar17 + 1;
                    /* catch() { ... } // from try @ 00a2b5e4 with catch @ 00a2b6b0 */
        if (*pcVar18 != ':') {
                    /* try { // try from 00a2b790 to 00b2b7d3 has its CatchHandler @ 00a2b734 */
          plVar28 = (long *)strchr(pcVar18,0x3a);
          if (plVar28 != (long *)0x0) {
            local_168 = (long *)0x0;
            lVar34 = strtol(pcVar18,(char **)&local_168,10);
                    /* catch() { ... } // from try @ 00a2b778 with catch @ 00a2b7c0 */
                    /* catch() { ... } // from try @ 00a2b840 with catch @ 00a2b7d4 */
            if (((local_168 == plVar28) && (lVar34 == (int)plVar13[0x34])) &&
               (*(char *)((long)plVar28 + 1) != '\0')) goto LAB_00a2b6c0;
          }
          goto LAB_00a2b7e0;
        }
                    /* catch() { ... } // from try @ 00a2b5a4 with catch @ 00a2b6b4 */
                    /* catch() { ... } // from try @ 00a2b5ec with catch @ 00a2b6b8 */
        if (pcVar17[2] == '\0') goto LAB_00a2b7e0;
LAB_00a2b6c0:
                    /* catch() { ... } // from try @ 00a2b5d4 with catch @ 00a2b6c8 */
        pbVar24 = (byte *)(*(code *)PTR_strdup_01d1b758)();
        if (pbVar24 != (byte *)0x0) {
                    /* catch() { ... } // from try @ 00a2b590 with catch @ 00a2b6e0 */
                    /* catch() { ... } // from try @ 00a2b564 with catch @ 00a2b6e4 */
          pbVar46 = pbVar24;
          local_2a0 = pbVar24;
          if (*pbVar24 == 0x5b) {
            local_2a0 = pbVar24 + 1;
            uVar32 = (uint)*local_2a0;
            pbVar45 = local_2a0;
            if (*local_2a0 != 0) {
              pbVar46 = pbVar24 + 2;
              do {
                pbVar45 = pbVar46;
                iVar10 = isxdigit(uVar32);
                if (((iVar10 == 0) && (uVar32 != 0x2e)) && (uVar32 != 0x3a)) {
                  if (uVar32 != 0x25) {
                    pbVar45 = pbVar45 + -1;
                    goto LAB_00a2b998;
                  }
                  iVar10 = strncmp("%25",(char *)(pbVar45 + -1),3);
                  if (iVar10 != 0) {
                    FUN_00a22d58(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
                  }
                  uVar32 = (uint)*pbVar45;
                  if (uVar32 != 0) goto LAB_00a2b950;
                  break;
                }
                uVar32 = (uint)*pbVar45;
                pbVar46 = pbVar45 + 1;
              } while (uVar32 != 0);
            }
            goto LAB_00a2b72c;
          }
          goto LAB_00a2b73c;
        }
      }
      else {
        bVar8 = *(char *)((long)plVar13 + 0x3c2) == '\0';
        puVar3 = &DAT_019af7d9;
        if (bVar8) {
          puVar3 = &DAT_0189703a;
        }
        puVar4 = &DAT_01890f88;
        if (bVar8) {
          puVar4 = &DAT_0189703a;
        }
        pcVar18 = (char *)FUN_00a0e870("%s%s%s",puVar3,plVar13[0x18],puVar4);
        if (pcVar18 != (char *)0x0) {
          sVar15 = strlen(pcVar18);
          iVar10 = FUN_00a33838(pcVar17,pcVar18,sVar15);
          (*(code *)PTR_free_01d1b748)(pcVar18);
                    /* catch() { ... } // from try @ 00a2b5cc with catch @ 00a2b698 */
          if ((iVar10 != 0) && (pcVar17 = pcVar17 + sVar15, *pcVar17 == ':')) goto LAB_00a2b6a4;
LAB_00a2b7e0:
          pcVar17 = (char *)0x0;
          uVar14 = 0xffffffff;
          goto LAB_00a2b7e4;
        }
      }
      goto LAB_00a2a26c;
    }
LAB_00a2ba74:
    pcVar17 = (char *)plVar13[0x18];
    lVar34 = *plVar13;
    plVar13[0x19] = (long)pcVar17;
    sVar15 = strlen(pcVar17);
    if ((sVar15 != 0) && (pcVar17[sVar15 - 1] == '.')) {
      pcVar17[sVar15 - 1] = '\0';
      pcVar17 = (char *)*plVar47;
    }
    do {
      cVar31 = *pcVar17;
      if (cVar31 == '\0') goto LAB_00a2bad0;
      pcVar17 = pcVar17 + 1;
    } while (-1 < cVar31);
    FUN_00a22d58(lVar34,"IDN support not present, can\'t parse Unicode domains\n");
LAB_00a2bad0:
    if (*(char *)((long)plVar13 + 0x3bb) != '\0') {
      pcVar17 = (char *)plVar13[0x1d];
      lVar34 = *plVar13;
      plVar13[0x1e] = (long)pcVar17;
      sVar15 = strlen(pcVar17);
      if ((sVar15 != 0) && (pcVar17[sVar15 - 1] == '.')) {
        pcVar17[sVar15 - 1] = '\0';
        pcVar17 = (char *)plVar13[0x1d];
      }
      do {
        cVar31 = *pcVar17;
        if (cVar31 == '\0') goto LAB_00a2bb28;
        pcVar17 = pcVar17 + 1;
      } while (-1 < cVar31);
      FUN_00a22d58(lVar34,"IDN support not present, can\'t parse Unicode domains\n");
    }
LAB_00a2bb28:
    pcVar17 = (char *)plVar13[0x21];
    if ((pcVar17 != (char *)0x0) && (*pcVar17 != '\0')) {
      lVar34 = *plVar13;
      plVar13[0x22] = (long)pcVar17;
      sVar15 = strlen(pcVar17);
      if ((sVar15 != 0) && (pcVar17[sVar15 - 1] == '.')) {
        pcVar17[sVar15 - 1] = '\0';
        pcVar17 = (char *)plVar13[0x21];
      }
      do {
        cVar31 = *pcVar17;
        if (cVar31 == '\0') goto LAB_00a2bb84;
        pcVar17 = pcVar17 + 1;
      } while (-1 < cVar31);
      FUN_00a22d58(lVar34,"IDN support not present, can\'t parse Unicode domains\n");
    }
LAB_00a2bb84:
    if ((*(char *)((long)plVar13 + 0x3bb) != '\0') &&
       (iVar10 = FUN_00a33710(plVar13[0x1d],plVar13[0x18]), iVar10 != 0)) {
      *(undefined1 *)((long)plVar13 + 0x3bb) = 0;
    }
    if (*(char *)((long)plVar13 + 0x3bc) == '\0') {
LAB_00a2bbbc:
      bVar8 = true;
      if (*(char *)((long)plVar13 + 0x3bb) != '\0') goto LAB_00a2bbf0;
LAB_00a2bbec:
                    /* try { // try from 00a2bbec to 00b2bcdb has its CatchHandler @ 00a2b9ac */
      if (!bVar8) goto LAB_00a2bbf0;
    }
    else {
      if (*(int *)((long)plVar13 + 0x1a4) == (int)plVar13[0x34]) {
        *(undefined1 *)((long)plVar13 + 0x3bc) = 0;
        goto LAB_00a2bbbc;
      }
      bVar8 = false;
      if (*(char *)((long)plVar13 + 0x3bb) == '\0') goto LAB_00a2bbec;
LAB_00a2bbf0:
      if (*(char *)((long)plVar13 + 0x3be) != '\0') {
        *(undefined1 *)((long)plVar13 + 0x3c9) = 1;
      }
    }
    lVar34 = *plVar13;
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar34 + 0x218));
    *(undefined8 *)(lVar34 + 0x218) = 0;
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar34 + 0x1f8));
    memset((void *)(lVar34 + 0x78),0,0x1a8);
    *(undefined8 *)(lVar34 + 0x88) = 0xffffffffffffffff;
    lVar34 = plVar13[0x80];
    *(undefined4 *)((long)plVar13 + 0xac) = 1;
    if (*(code **)(lVar34 + 8) != (code *)0x0) {
      iVar10 = (**(code **)(lVar34 + 8))(plVar13);
      if (iVar10 != 0) goto LAB_00a2b154;
                    /* catch() { ... } // from try @ 00a2ba38 with catch @ 00a2bc6c */
      lVar34 = plVar13[0x80];
    }
                    /* catch() { ... } // from try @ 00a2ba2c with catch @ 00a2bc70 */
                    /* catch() { ... } // from try @ 00a2ba0c with catch @ 00a2bc74 */
    if (plVar13[0x33] < 0) {
      plVar13[0x33] = *(long *)(lVar34 + 0x70);
    }
                    /* catch() { ... } // from try @ 00a2ba44 with catch @ 00a2bc84 */
    plVar13[0x50] = (long)FUN_00a23474;
    plVar13[0x4f] = (long)FUN_00a23474;
    plVar13[0x52] = (long)FUN_00a23358;
    plVar13[0x51] = (long)FUN_00a23358;
    *(undefined1 *)((long)plVar13 + 0x3d6) = *(undefined1 *)(param_1 + 0x8d0);
    if ((*(byte *)(lVar34 + 0x7c) >> 4 & 1) != 0) {
      iVar10 = (**(code **)(lVar34 + 0x28))(plVar13,&local_168);
      if (iVar10 == 0) {
        *plVar13 = param_1;
        *(undefined1 *)((long)plVar13 + 0x3c5) = 1;
        FUN_00a16e5c(*(undefined8 *)(param_1 + 0xad0),plVar13);
                    /* catch() { ... } // from try @ 00a2bd5c with catch @ 00a2beb0 */
        lVar34 = *(long *)(param_1 + 0x3b0);
                    /* catch() { ... } // from try @ 00a2bd50 with catch @ 00a2beb4 */
                    /* catch() { ... } // from try @ 00a2bd30 with catch @ 00a2beb8 */
        *(long *)(param_1 + 0x8cd8) = lVar34;
                    /* catch() { ... } // from try @ 00a2bd68 with catch @ 00a2bec8 */
        if ((lVar34 != 0) || (uVar30 = 0, *(long *)(param_1 + 0x728) != 0)) {
          if (*(char *)(param_1 + 0x8cca) != '\0') {
            (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x8cd0));
            lVar34 = *(long *)(param_1 + 0x8cd8);
          }
          if (lVar34 == 0) {
            lVar34 = (*(code *)PTR_strdup_01d1b758)(*(undefined8 *)(param_1 + 0x728));
          }
          else {
            lVar34 = FUN_00a0e870(&DAT_01892f2e);
          }
                    /* try { // try from 00a2bf74 to 00b2bf8b has its CatchHandler @ 00a2c164 */
          *(long *)(param_1 + 0x8cd0) = lVar34;
          *(char *)(param_1 + 0x8cca) = lVar34 != 0;
          if (lVar34 == 0) {
            iVar10 = 0x1b;
            (**(code **)(plVar13[0x80] + 0x18))(plVar13,0x1b,0);
            pcVar17 = (char *)0x0;
            goto LAB_00a2a274;
          }
          uVar30 = 1;
        }
                    /* try { // try from 00a2bf94 to 00b2bf9f has its CatchHandler @ 00a2c160 */
                    /* try { // try from 00a2bfa0 to 00b2bfab has its CatchHandler @ 00a2c15c */
                    /* try { // try from 00a2bfac to 00b2c0e7 has its CatchHandler @ 00a2c174 */
        *(undefined1 *)(param_1 + 0x8cc9) = uVar30;
        FUN_00a335d8(plVar13,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
        iVar10 = 0;
      }
      *(undefined1 *)((long)plVar13 + 0x3c4) = 0;
      *(undefined1 *)(param_1 + 0x8d08) = 0;
      *(undefined1 *)(param_1 + 0x8ca8) = 0;
      if (*(char *)(param_1 + 0x620) == '\0') {
        if (*(int *)(param_1 + 0x430) == 5) {
          uVar33 = 1;
          goto LAB_00a2bfec;
        }
      }
      else {
        uVar33 = 5;
LAB_00a2bfec:
        *(undefined4 *)(param_1 + 0x430) = uVar33;
      }
      auVar48 = FUN_00a18e40();
      *(undefined1 (*) [16])(param_1 + 0xb8) = auVar48;
      *(undefined1 *)(param_1 + 0xd8) = 1;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(long *)(param_1 + 0x1d0) = param_1 + 0xb08;
      *(long *)(param_1 + 0x1d8) = param_1 + 0x4b09;
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xaf8);
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xc0);
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xb8);
      *(undefined1 *)(param_1 + 0x1e9) = 0;
      FUN_00a2e6ec(param_1);
      FUN_00a1b744(param_1,0);
      FUN_00a1b6ac(param_1,0);
      pcVar17 = (char *)0x0;
      goto LAB_00a2a274;
    }
    *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(param_1 + 0x748);
    *(undefined8 *)(param_1 + 0x458) = *(undefined8 *)(param_1 + 0x750);
    *(undefined8 *)(param_1 + 0x510) = *(undefined8 *)(param_1 + 0x758);
                    /* try { // try from 00a2bcdc to 00b2bd2f has its CatchHandler @ 00a2bcdc
                       catch() { ... } // from try @ 00a2bcdc with catch @ 00a2bcdc
                       catch() { ... } // from try @ 00a2be3c with catch @ 00a2bcdc */
    *(undefined8 *)(param_1 + 0x470) = *(undefined8 *)(param_1 + 0x780);
    *(undefined8 *)(param_1 + 0x528) = *(undefined8 *)(param_1 + 0x780);
    *(undefined8 *)(param_1 + 0x478) = *(undefined8 *)(param_1 + 0x770);
    *(undefined8 *)(param_1 + 0x530) = *(undefined8 *)(param_1 + 0x778);
    *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(param_1 + 0x740);
    *(undefined8 *)(param_1 + 0x548) = *(undefined8 *)(param_1 + 0x7a0);
    *(undefined8 *)(param_1 + 0x498) = *(undefined8 *)(param_1 + 0x7a8);
    *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(param_1 + 0x7b0);
    *(undefined8 *)(param_1 + 0x468) = *(undefined8 *)(param_1 + 0x788);
    *(undefined8 *)(param_1 + 0x520) = *(undefined8 *)(param_1 + 0x788);
    *(undefined8 *)(param_1 + 0x4c0) = *(undefined8 *)(param_1 + 0x680);
                    /* try { // try from 00a2bd30 to 00b2bd47 has its CatchHandler @ 00a2beb8 */
    *(undefined8 *)(param_1 + 0x578) = *(undefined8 *)(param_1 + 0x688);
    *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)(param_1 + 0x6d8);
    *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)(param_1 + 0x798);
    *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(param_1 + 0x6e0);
                    /* try { // try from 00a2bd50 to 00b2bd5b has its CatchHandler @ 00a2beb4 */
    *(undefined8 *)(param_1 + 0x4d0) = *(undefined8 *)(param_1 + 0x6f8);
    *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(param_1 + 0x700);
                    /* try { // try from 00a2bd5c to 00b2bd67 has its CatchHandler @ 00a2beb0 */
    *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(param_1 + 0x6e8);
                    /* try { // try from 00a2bd68 to 00b2be3b has its CatchHandler @ 00a2bec8 */
    *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_1 + 0x6f0);
    *(undefined8 *)(param_1 + 0x4b8) = *(undefined8 *)(param_1 + 0x670);
    *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_1 + 0x670);
    *(undefined8 *)(param_1 + 0x570) = *(undefined8 *)(param_1 + 0x678);
    *(undefined8 *)(param_1 + 0x518) = *(undefined8 *)(param_1 + 0x678);
    plVar28 = plVar13 + 0x67;
    *(undefined8 *)(param_1 + 0x4e0) = *(undefined8 *)(param_1 + 0x818);
    *(undefined8 *)(param_1 + 0x598) = *(undefined8 *)(param_1 + 0x820);
    *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(param_1 + 0x828);
    *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x830);
    uVar14 = FUN_00a1798c(param_1 + 0x440);
    if ((uVar14 & 1) != 0) {
      uVar14 = FUN_00a1798c(param_1 + 0x4f8);
      if ((uVar14 & 1) != 0) {
        auVar48 = FUN_00a18e40();
        lVar34 = FUN_00a18ea0(auVar48._0_8_,auVar48._8_8_,
                              *(undefined8 *)(*(long *)(param_1 + 0xad0) + 0x40),
                              *(undefined8 *)(*(long *)(param_1 + 0xad0) + 0x48));
        if (999 < lVar34) {
          FUN_00a17198(*(undefined8 *)(param_1 + 0xad0),param_1,FUN_00a2dec4);
          *(undefined1 (*) [16])(*(long *)(param_1 + 0xad0) + 0x40) = auVar48;
        }
        if ((*(char *)(param_1 + 0x62b) != '\0') &&
           (bVar8 = false, *(char *)(param_1 + 0x8b18) == '\0')) goto LAB_00a2cf98;
                    /* try { // try from 00a2be3c to 00b2bf1f has its CatchHandler @ 00a2bcdc */
        if ((((*(byte *)(plVar13[0x80] + 0x78) & 3) == 0) ||
            ((*(char *)((long)plVar13 + 0x3c7) != '\0' && (*(char *)((long)plVar13 + 0x3b9) != '\0')
             ))) || (((uVar14 = FUN_00a12594(*(undefined8 *)(param_1 + 0x60),1), (uVar14 & 1) == 0
                      || ((*(long *)(param_1 + 0x438) == 1 ||
                          ((*(uint *)(param_1 + 0x430) | 4) != 5)))) &&
                     ((uVar14 = FUN_00a12594(*(undefined8 *)(param_1 + 0x60),2), (uVar14 & 1) == 0
                      || (*(long *)(param_1 + 0x438) < 3)))))) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if ((*(byte *)(param_1 + 0x8bf8) & 0x28) == 0) {
          bVar7 = false;
          if (*(char *)((long)plVar13 + 0x3c1) != '\0') goto LAB_00a2c080;
LAB_00a2c0b4:
          bVar9 = false;
          if (bVar8) goto LAB_00a2c0bc;
LAB_00a2c0ac:
          uVar32 = 0;
        }
        else {
          bVar7 = (*(byte *)(plVar13[0x80] + 0x78) & 3) != 0;
          if (*(char *)((long)plVar13 + 0x3c1) == '\0') goto LAB_00a2c0b4;
LAB_00a2c080:
          if ((*(byte *)(param_1 + 0x8c18) & 0x28) == 0) goto LAB_00a2c0b4;
          bVar9 = (*(byte *)(plVar13[0x80] + 0x78) & 3) != 0;
          if (!bVar8) goto LAB_00a2c0ac;
LAB_00a2c0bc:
          uVar32 = FUN_00a17428(param_1,plVar13);
          uVar32 = uVar32 ^ 1;
        }
        piVar25 = (int *)FUN_00a16db0(plVar13,*(undefined8 *)(param_1 + 0xad0));
        if (piVar25 == (int *)0x0) goto LAB_00a2cf94;
        iVar10 = *piVar25;
                    /* try { // try from 00a2c0e8 to 00b2c1cb has its CatchHandler @ 00a2bf20 */
        if ((iVar10 == 2) || (*(long *)(param_1 + 0x60) == 0)) {
          local_308 = 0;
        }
        else {
          local_308 = *(ulong *)(*(long *)(param_1 + 0x60) + 0x138);
        }
        plVar44 = plVar47;
        if (*(char *)((long)plVar13 + 0x3bb) != '\0') {
          plVar44 = plVar13 + 0x1d;
        }
        pcVar17 = "can multiplex";
        if (iVar10 != 2) {
          pcVar17 = "serially";
        }
        pcVar18 = "can pipeline";
        if (iVar10 != 1) {
          pcVar18 = pcVar17;
        }
        FUN_00a22d58(param_1,"Found bundle for host %s: %p [%s]\n",*plVar44,piVar25,pcVar18);
                    /* catch() { ... } // from try @ 00a2bfa0 with catch @ 00a2c15c */
        if ((uVar32 & 1) == 0) {
LAB_00a2c1ec:
          bVar8 = false;
        }
        else {
                    /* catch() { ... } // from try @ 00a2bf94 with catch @ 00a2c160 */
          iVar10 = *piVar25;
                    /* catch() { ... } // from try @ 00a2bf74 with catch @ 00a2c164 */
          if (0 < iVar10) {
            bVar8 = true;
                    /* catch() { ... } // from try @ 00a2bfac with catch @ 00a2c174 */
            if (iVar10 != 1) goto LAB_00a2c1b8;
LAB_00a2c1a4:
            uVar14 = FUN_00a12594(*(undefined8 *)(param_1 + 0x60),1);
            if ((uVar14 & 1) != 0) {
              iVar10 = *piVar25;
              goto LAB_00a2c1b8;
            }
            pcVar17 = "Could pipeline, but not asked to!\n";
LAB_00a2c1e4:
            FUN_00a22d58(param_1,pcVar17);
            goto LAB_00a2c1ec;
          }
          if ((iVar10 == 0) && (*(char *)(param_1 + 0x8e3) != '\0')) {
            pcVar17 = "Server doesn\'t support multi-use yet, wait\n";
            goto LAB_00a2d3e8;
          }
          FUN_00a22d58(param_1,"Server doesn\'t support multi-use (yet)\n");
          iVar10 = *piVar25;
          bVar8 = false;
          if (iVar10 == 1) goto LAB_00a2c1a4;
LAB_00a2c1b8:
                    /* try { // try from 00a2c1cc to 00b2c223 has its CatchHandler @ 00a2c1cc
                       catch() { ... } // from try @ 00a2c1cc with catch @ 00a2c1cc
                       catch() { ... } // from try @ 00a2c3bc with catch @ 00a2c1cc */
          if ((iVar10 == 2) &&
             (uVar14 = FUN_00a12594(*(undefined8 *)(param_1 + 0x60),2), (uVar14 & 1) == 0)) {
            pcVar17 = "Could multiplex, but not asked to!\n";
            goto LAB_00a2c1e4;
          }
        }
        puVar41 = (undefined8 *)**(undefined8 **)(piVar25 + 4);
        if (puVar41 != (undefined8 *)0x0) {
          plVar44 = plVar13 + 0x43;
          plVar1 = plVar13 + 0x31;
          bVar6 = false;
          local_2f8 = (long *)0x0;
                    /* try { // try from 00a2c224 to 00b2c23b has its CatchHandler @ 00a2c43c */
                    /* try { // try from 00a2c244 to 00b2c24f has its CatchHandler @ 00a2c438 */
          local_340 = local_308;
LAB_00a2c248:
          plVar35 = (long *)*puVar41;
          puVar41 = (undefined8 *)puVar41[2];
                    /* try { // try from 00a2c250 to 00b2c25b has its CatchHandler @ 00a2c434 */
                    /* try { // try from 00a2c25c to 00b2c3bb has its CatchHandler @ 00a2c44c */
          if ((*(long *)(plVar35[0x8f] + 0x18) + *(long *)(plVar35[0x90] + 0x18) == 0) &&
             ((char)plVar35[9] == '\0')) {
            if ((*(byte *)(plVar35[0x80] + 0x7a) >> 2 & 1) != 0) {
              uVar14 = FUN_00a3f3a0(plVar35);
              if ((uVar14 & 1) != 0) goto LAB_00a2c3dc;
              goto LAB_00a2c274;
            }
            iVar10 = FUN_00a159e8((int)plVar35[0x4c],0xffffffff,0xffffffff,0);
            if (iVar10 == 0) goto LAB_00a2c274;
LAB_00a2c3dc:
            *plVar35 = param_1;
            FUN_00a22d58(param_1,"Connection %ld seems to be dead!\n",plVar35[10]);
            FUN_00a293a8(plVar35,1);
          }
          else {
LAB_00a2c274:
            puVar36 = (undefined8 *)plVar35[0x90];
            uVar14 = puVar36[3] + ((undefined8 *)plVar35[0x8f])[3];
            if (!bVar8) {
              if (uVar14 == 0) {
                cVar31 = *(char *)((long)plVar35 + 0x3b9);
                if ((int)plVar35[0x4c] != -1) {
                  if (cVar31 == '\0') goto LAB_00a2c2b0;
                  cVar31 = '\x01';
                }
                if (cVar31 == '\0') {
                  bVar6 = true;
                }
                FUN_00a22d58(param_1,"Connection #%ld isn\'t open enough, can\'t reuse\n",
                             plVar35[10]);
              }
              goto joined_r0x00a2c344;
            }
            cVar31 = *(char *)((long)plVar35 + 0x3c7);
            if ((cVar31 != '\0') && (*(char *)((long)plVar35 + 0x3b9) != '\0'))
            goto joined_r0x00a2c344;
            if (*(char *)((long)plVar35 + 0x3d5) == '\0') {
              plVar38 = *(long **)plVar35[0x8f];
              if (plVar38 == (long *)0x0) {
                lVar34 = 0;
                plVar38 = (long *)*puVar36;
                if (plVar38 != (long *)0x0) goto LAB_00a2c360;
LAB_00a2c470:
                lVar27 = 0;
              }
              else {
                lVar34 = *plVar38;
                plVar38 = (long *)*puVar36;
                if (plVar38 == (long *)0x0) goto LAB_00a2c470;
LAB_00a2c360:
                lVar27 = *plVar38;
              }
              if (lVar34 == 0) {
                if (lVar27 == 0) goto LAB_00a2c2b0;
                if (((*(byte *)(plVar35[0x80] + 0x78) & 3) != 0) &&
                   ((cVar31 == '\0' || (*(char *)((long)plVar35 + 0x3b9) == '\0')))) {
                  uVar26 = FUN_00a12594(*(undefined8 *)(lVar27 + 0x60),1);
                    /* try { // try from 00a2c4a4 to 00b2c4f7 has its CatchHandler @ 00a2c4a4
                       catch() { ... } // from try @ 00a2c4a4 with catch @ 00a2c4a4
                       catch() { ... } // from try @ 00a2c684 with catch @ 00a2c4a4 */
                  if (((uVar26 & 1) != 0) &&
                     ((*(long *)(lVar27 + 0x438) != 1 && ((*(uint *)(lVar27 + 0x430) | 4) == 5))))
                  goto LAB_00a2c2b0;
                  uVar26 = FUN_00a12594(*(undefined8 *)(lVar27 + 0x60),2);
                  if ((uVar26 & 1) != 0) {
                    lVar34 = *(long *)(lVar27 + 0x438);
                    goto joined_r0x00a2c3c8;
                  }
                }
              }
              else if (((*(byte *)(plVar35[0x80] + 0x78) & 3) != 0) &&
                      ((cVar31 == '\0' || (*(char *)((long)plVar35 + 0x3b9) == '\0')))) {
                uVar26 = FUN_00a12594(*(undefined8 *)(lVar34 + 0x60),1);
                if (((uVar26 & 1) != 0) &&
                   ((*(long *)(lVar34 + 0x438) != 1 && ((*(uint *)(lVar34 + 0x430) | 4) == 5))))
                goto LAB_00a2c2b0;
                uVar26 = FUN_00a12594(*(undefined8 *)(lVar34 + 0x60),2);
                    /* try { // try from 00a2c3bc to 00b2c4a3 has its CatchHandler @ 00a2c1cc */
                if ((uVar26 & 1) != 0) {
                  lVar34 = *(long *)(lVar34 + 0x438);
joined_r0x00a2c3c8:
                  if (2 < lVar34) goto LAB_00a2c2b0;
                }
              }
              goto joined_r0x00a2c344;
            }
LAB_00a2c2b0:
            pcVar17 = (char *)plVar35[0xe5];
            if ((char *)plVar13[0xe5] == (char *)0x0) {
              if (pcVar17 == (char *)0x0) goto LAB_00a2c40c;
              goto joined_r0x00a2c344;
            }
            if ((pcVar17 == (char *)0x0) ||
               (iVar10 = strcmp((char *)plVar13[0xe5],pcVar17), iVar10 != 0))
            goto joined_r0x00a2c344;
LAB_00a2c40c:
            if (((*(uint *)(plVar35[0x80] + 0x7c) ^ *(uint *)(plVar13[0x80] + 0x7c)) & 1) != 0) {
              iVar10 = *(int *)(plVar35[0x80] + 0x78);
              iVar37 = iVar10;
              if (iVar10 < 0x4000) {
                    /* catch() { ... } // from try @ 00a2c250 with catch @ 00a2c434 */
                if (iVar10 < 0x80) {
                    /* catch() { ... } // from try @ 00a2c244 with catch @ 00a2c438 */
                    /* catch() { ... } // from try @ 00a2c224 with catch @ 00a2c43c */
                    /* catch() { ... } // from try @ 00a2c25c with catch @ 00a2c44c */
                  iVar37 = 1;
                  switch(iVar10) {
                  case 1:
                  case 2:
                    break;
                  default:
                    goto switchD_00a2c458_caseD_3;
                  case 4:
                  case 8:
                    iVar37 = 4;
                    break;
                  case 0x10:
                  case 0x20:
                  case 0x40:
switchD_00a2c458_caseD_10:
                    iVar37 = iVar10;
                  }
                }
                else {
                    /* try { // try from 00a2c518 to 00b2c523 has its CatchHandler @ 00a2c6fc */
                  if (iVar10 < 0x400) {
                    if ((iVar10 == 0x80) || (iVar10 == 0x100)) {
                      iVar37 = 0x80;
                    }
                    else if (iVar10 != 0x200) goto switchD_00a2c458_caseD_3;
                  }
                  else if (iVar10 < 0x1000) {
                    /* try { // try from 00a2c524 to 00b2c52f has its CatchHandler @ 00a2c6f8 */
                    if (iVar10 == 0x400) goto switchD_00a2c458_caseD_10;
                    /* try { // try from 00a2c530 to 00b2c683 has its CatchHandler @ 00a2c710 */
                    if (iVar10 != 0x800) goto switchD_00a2c458_caseD_3;
                  }
                  else {
                    if ((iVar10 != 0x1000) && (iVar10 != 0x2000)) goto switchD_00a2c458_caseD_3;
                    iVar37 = 0x1000;
                  }
                }
              }
              else if (iVar10 < 0x200000) {
                if (iVar10 < 0x20000) {
                  if ((iVar10 == 0x4000) || (iVar10 == 0x8000)) {
                    iVar37 = 0x4000;
                  }
                  else {
                    if (iVar10 == 0x10000) goto LAB_00a2c58c;
switchD_00a2c458_caseD_3:
                    iVar37 = 0;
                  }
                }
                else {
                    /* try { // try from 00a2c4f8 to 00b2c50f has its CatchHandler @ 00a2c700 */
                  if (iVar10 < 0x80000) {
                    if (iVar10 == 0x20000) {
LAB_00a2c58c:
                      iVar37 = 0x10000;
                    }
                    else if (iVar10 != 0x40000) goto switchD_00a2c458_caseD_3;
                  }
                  else {
                    if (iVar10 != 0x80000) {
                      if (iVar10 == 0x100000) goto LAB_00a2c5e8;
                      goto switchD_00a2c458_caseD_3;
                    }
LAB_00a2c638:
                    iVar37 = 0x80000;
                  }
                }
              }
              else if (iVar10 < 0x1000000) {
                if (iVar10 == 0x200000) goto switchD_00a2c458_caseD_10;
                if (iVar10 != 0x400000) {
                  if (iVar10 == 0x800000) goto LAB_00a2c638;
                  goto switchD_00a2c458_caseD_3;
                }
              }
              else if (iVar10 < 0x4000000) {
                if (iVar10 == 0x1000000) {
LAB_00a2c5e8:
                  iVar37 = 0x100000;
                }
                else if (iVar10 != 0x2000000) goto switchD_00a2c458_caseD_3;
              }
              else {
                if ((iVar10 != 0x4000000) && (iVar10 != 0x8000000)) goto switchD_00a2c458_caseD_3;
                iVar37 = 0x4000000;
              }
              if ((iVar37 != *(int *)(plVar13[0x80] + 0x78)) || ((char)plVar35[0x77] == '\0'))
              goto joined_r0x00a2c344;
            }
                    /* try { // try from 00a2c684 to 00b2c767 has its CatchHandler @ 00a2c4a4 */
            if ((((*(char *)((long)plVar13 + 0x3be) != *(char *)((long)plVar35 + 0x3be)) ||
                 (*(char *)((long)plVar13 + 0x3bf) != *(char *)((long)plVar35 + 0x3bf))) ||
                ((*(char *)((long)plVar13 + 0x3bf) != '\0' &&
                 (((((int)plVar13[0x28] != (int)plVar35[0x28] || (plVar13[0x27] != plVar35[0x27]))
                   || (iVar10 = FUN_00a33798(plVar13[0x25],plVar35[0x25]), iVar10 == 0)) ||
                  ((iVar10 = FUN_00a33798(plVar13[0x29],plVar35[0x29]), iVar10 == 0 ||
                   (iVar10 = FUN_00a33798(plVar13[0x2a],plVar35[0x2a]), iVar10 == 0)))))))) ||
               ((*(char *)((long)plVar13 + 0x3bb) != *(char *)((long)plVar35 + 0x3bb) ||
                (*(char *)((long)plVar13 + 0x3bc) != *(char *)((long)plVar35 + 0x3bc)))))
            goto joined_r0x00a2c344;
            if (*(char *)((long)plVar13 + 0x3be) != '\0') {
                    /* catch() { ... } // from try @ 00a2c524 with catch @ 00a2c6f8 */
                    /* catch() { ... } // from try @ 00a2c518 with catch @ 00a2c6fc */
                    /* catch() { ... } // from try @ 00a2c4f8 with catch @ 00a2c700 */
                    /* catch() { ... } // from try @ 00a2c530 with catch @ 00a2c710 */
              if ((((int)plVar13[0x30] == (int)plVar35[0x30]) && (plVar13[0x2f] == plVar35[0x2f]))
                 && ((iVar10 = FUN_00a33798(plVar13[0x2d],plVar35[0x2d]), iVar10 != 0 &&
                     (((iVar10 = FUN_00a33798(*plVar1,plVar35[0x31]), iVar10 != 0 &&
                       (iVar10 = FUN_00a33798(plVar13[0x32],plVar35[0x32]), iVar10 != 0)) &&
                      (*(char *)((long)plVar13 + 0x3c9) == *(char *)((long)plVar35 + 0x3c9))))))) {
                if ((int)plVar13[0x30] != 2) goto LAB_00a2c7b0;
                    /* try { // try from 00a2c768 to 00b2c7bb has its CatchHandler @ 00a2c768
                       catch() { ... } // from try @ 00a2c768 with catch @ 00a2c768
                       catch() { ... } // from try @ 00a2c948 with catch @ 00a2c768 */
                if ((*(byte *)(plVar13[0x80] + 0x7c) & 1) == 0) {
                  uVar26 = FUN_00a178f0(plVar28,plVar35 + 0x67);
                  if ((uVar26 & 1) != 0) {
                    iVar10 = *(int *)((long)plVar35 + 0x29c);
joined_r0x00a2c7ac:
                    if (iVar10 == 2) goto LAB_00a2c7b0;
                  }
                }
                else {
                  uVar26 = FUN_00a178f0(plVar13 + 0x6f,plVar35 + 0x6f);
                  if ((uVar26 & 1) != 0) {
                    iVar10 = *(int *)((long)plVar35 + 0x2ec);
                    goto joined_r0x00a2c7ac;
                  }
                }
              }
              goto joined_r0x00a2c344;
            }
LAB_00a2c7b0:
                    /* try { // try from 00a2c7bc to 00b2c7d3 has its CatchHandler @ 00a2c9c4 */
            if ((!bVar8) && ((char)plVar35[9] != '\0')) goto joined_r0x00a2c344;
            pcVar17 = (char *)plVar13[0xe0];
            if (((pcVar17 != (char *)0x0) || ((short)plVar13[0xe1] != 0)) &&
               ((((short)plVar35[0xe1] != (short)plVar13[0xe1] ||
                 (*(int *)((long)plVar35 + 0x70c) != *(int *)((long)plVar13 + 0x70c))) ||
                ((pcVar17 != (char *)0x0 &&
                 (((char *)plVar35[0xe0] == (char *)0x0 ||
                  (iVar10 = strcmp((char *)plVar35[0xe0],pcVar17), iVar10 != 0))))))))
            goto joined_r0x00a2c344;
            puVar36 = (undefined8 *)plVar13[0x80];
            uVar32 = *(uint *)((long)puVar36 + 0x7c);
                    /* try { // try from 00a2c7dc to 00b2c7e7 has its CatchHandler @ 00a2c9c0 */
                    /* try { // try from 00a2c7e8 to 00b2c7f3 has its CatchHandler @ 00a2c9bc */
                    /* try { // try from 00a2c7f4 to 00b2c947 has its CatchHandler @ 00a2c9d4 */
            if (((uVar32 >> 7 & 1) == 0) &&
               ((iVar10 = strcmp((char *)*plVar44,(char *)plVar35[0x43]), iVar10 != 0 ||
                (iVar10 = strcmp((char *)plVar13[0x44],(char *)plVar35[0x44]), iVar10 != 0))))
            goto joined_r0x00a2c344;
            if (((uVar32 & 1) != 0) ||
               ((*(char *)((long)plVar13 + 0x3be) == '\0' ||
                (*(char *)((long)plVar13 + 0x3c9) != '\0')))) {
              iVar10 = FUN_00a33710(*puVar36,*(undefined8 *)plVar35[0x80]);
              if (iVar10 == 0) {
                iVar10 = *(int *)(plVar35[0x80] + 0x78);
                iVar37 = iVar10;
                if (iVar10 < 0x4000) {
                  if (iVar10 < 0x80) {
                    iVar37 = 1;
                    switch(iVar10) {
                    case 1:
                    case 2:
                      break;
                    default:
                      goto switchD_00a2c944_caseD_3;
                    case 4:
                    case 8:
                    /* try { // try from 00a2c948 to 00b2ca2b has its CatchHandler @ 00a2c768 */
                      iVar37 = 4;
                      break;
                    case 0x10:
                    case 0x20:
                    case 0x40:
switchD_00a2c944_caseD_10:
                      iVar37 = iVar10;
                    }
                  }
                  else {
                    /* catch() { ... } // from try @ 00a2c7bc with catch @ 00a2c9c4 */
                    if (iVar10 < 0x400) {
                      if ((iVar10 == 0x80) || (iVar10 == 0x100)) {
                        iVar37 = 0x80;
                      }
                      else if (iVar10 != 0x200) goto switchD_00a2c944_caseD_3;
                    }
                    else if (iVar10 < 0x1000) {
                    /* catch() { ... } // from try @ 00a2c7f4 with catch @ 00a2c9d4 */
                      if (iVar10 == 0x400) goto switchD_00a2c944_caseD_10;
                      if (iVar10 != 0x800) goto switchD_00a2c944_caseD_3;
                    }
                    else {
                      if ((iVar10 != 0x1000) && (iVar10 != 0x2000)) goto switchD_00a2c944_caseD_3;
                      iVar37 = 0x1000;
                    }
                  }
                }
                else if (iVar10 < 0x200000) {
                  if (iVar10 < 0x20000) {
                    /* try { // try from 00a2ca2c to 00b2ca7f has its CatchHandler @ 00a2ca2c
                       catch() { ... } // from try @ 00a2ca2c with catch @ 00a2ca2c
                       catch() { ... } // from try @ 00a2cc0c with catch @ 00a2ca2c */
                    if ((iVar10 == 0x4000) || (iVar10 == 0x8000)) {
                      iVar37 = 0x4000;
                    }
                    else {
                      if (iVar10 == 0x10000) goto LAB_00a2ca3c;
switchD_00a2c944_caseD_3:
                      iVar37 = 0;
                    }
                  }
                  else if (iVar10 < 0x80000) {
                    if (iVar10 == 0x20000) {
LAB_00a2ca3c:
                      iVar37 = 0x10000;
                    }
                    else if (iVar10 != 0x40000) goto switchD_00a2c944_caseD_3;
                  }
                  else {
                    if (iVar10 != 0x80000) {
                      if (iVar10 == 0x100000) goto LAB_00a2cad4;
                      goto switchD_00a2c944_caseD_3;
                    }
LAB_00a2cb24:
                    iVar37 = 0x80000;
                  }
                }
                else if (iVar10 < 0x1000000) {
                  if (iVar10 == 0x200000) goto switchD_00a2c944_caseD_10;
                  if (iVar10 != 0x400000) {
                    if (iVar10 == 0x800000) goto LAB_00a2cb24;
                    goto switchD_00a2c944_caseD_3;
                  }
                }
                else if (iVar10 < 0x4000000) {
                  if (iVar10 == 0x1000000) {
LAB_00a2cad4:
                    iVar37 = 0x100000;
                  }
                  else if (iVar10 != 0x2000000) goto switchD_00a2c944_caseD_3;
                }
                else {
                  if ((iVar10 != 0x4000000) && (iVar10 != 0x8000000)) goto switchD_00a2c944_caseD_3;
                  iVar37 = 0x4000000;
                }
                if ((iVar37 != *(int *)(plVar13[0x80] + 0x78)) || ((char)plVar35[0x77] == '\0'))
                goto joined_r0x00a2c344;
              }
              if (((*(char *)((long)plVar13 + 0x3bb) == '\0') ||
                  (iVar10 = FUN_00a33710(plVar13[0x1d],plVar35[0x1d]), iVar10 != 0)) &&
                 ((((*(char *)((long)plVar13 + 0x3bc) == '\0' ||
                    (*(int *)((long)plVar13 + 0x1a4) == *(int *)((long)plVar35 + 0x1a4))) &&
                   (iVar10 = FUN_00a33710(*plVar47,plVar35[0x18]), iVar10 != 0)) &&
                  ((int)plVar13[0x34] == (int)plVar35[0x34])))) {
                if ((*(byte *)(plVar13[0x80] + 0x7c) & 1) == 0) goto LAB_00a2c8a8;
                uVar26 = FUN_00a178f0(plVar28,plVar35 + 0x67);
                if ((uVar26 & 1) == 0) goto joined_r0x00a2c344;
                if (*(int *)((long)plVar35 + 0x29c) == 2) goto LAB_00a2c8a8;
                bVar6 = true;
                uVar14 = local_340;
                plVar35 = local_2f8;
                goto joined_r0x00a2cbc8;
              }
              goto joined_r0x00a2c344;
            }
LAB_00a2c8a8:
            if (bVar7) {
              iVar10 = strcmp((char *)*plVar44,(char *)plVar35[0x43]);
              if (iVar10 != 0) goto joined_r0x00a2c344;
              iVar10 = strcmp((char *)plVar13[0x44],(char *)plVar35[0x44]);
            }
            else {
              iVar10 = (int)plVar35[0x96];
            }
            if (iVar10 != 0) goto joined_r0x00a2c344;
            if (!bVar9) {
              if ((int)plVar35[0x9a] != 0) goto joined_r0x00a2c344;
              if (bVar7) goto LAB_00a2ca9c;
              if (uVar14 == 0 || (bool)(bVar8 ^ 1)) goto LAB_00a2cc00;
              if (uVar14 < local_308 || local_308 == 0) {
                uVar26 = FUN_00a17260(param_1,plVar35);
                if ((uVar26 & 1) == 0) {
                  if (local_308 == 0) {
                    FUN_00a22d58(param_1,"Multiplexed connection found!\n");
                    goto LAB_00a2cc00;
                  }
                  if (local_340 <= uVar14) goto joined_r0x00a2c344;
                }
                else {
                  FUN_00a22d58(param_1,"Penalized, skip\n");
                  uVar14 = local_340;
                  plVar35 = local_2f8;
                }
              }
              else {
                FUN_00a22d58(param_1,"Pipe is full, skip (%zu)\n",uVar14);
                uVar14 = local_340;
                plVar35 = local_2f8;
              }
              goto joined_r0x00a2cbc8;
            }
                    /* catch() { ... } // from try @ 00a2c7e8 with catch @ 00a2c9bc */
            if ((((char *)plVar35[0x31] != (char *)0x0) &&
                (pcVar17 = (char *)plVar35[0x32], pcVar17 != (char *)0x0)) &&
               ((iVar10 = strcmp((char *)*plVar1,(char *)plVar35[0x31]), iVar10 == 0 &&
                (iVar10 = strcmp((char *)plVar13[0x32],pcVar17), iVar10 == 0)))) {
LAB_00a2ca9c:
              local_2f8 = plVar35;
                    /* try { // try from 00a2caa0 to 00b2caab has its CatchHandler @ 00a2cc84 */
              if ((!bVar7) || ((int)plVar35[0x96] == 0)) {
                uVar14 = local_340;
                    /* try { // try from 00a2caac to 00b2cab7 has its CatchHandler @ 00a2cc80 */
                if (!bVar9) goto joined_r0x00a2cbc8;
                    /* try { // try from 00a2cab8 to 00b2cc0b has its CatchHandler @ 00a2cc98 */
                if ((int)plVar35[0x9a] == 0) goto joined_r0x00a2c344;
              }
              goto LAB_00a2ccec;
            }
          }
joined_r0x00a2c344:
          uVar14 = local_340;
          plVar35 = local_2f8;
joined_r0x00a2cbc8:
          local_2f8 = plVar35;
          local_340 = uVar14;
          if (puVar41 == (undefined8 *)0x0) goto LAB_00a2cbf8;
          goto LAB_00a2c248;
        }
        goto LAB_00a2cf94;
      }
    }
    goto LAB_00a2a26c;
  }
  (*(code *)PTR_free_01d1b748)(*plVar28);
  pcVar19 = (char *)0x0;
  pcVar43 = (char *)0x0;
  pcVar17 = (char *)0x0;
                    /* try { // try from 00a2a304 to 00b2a357 has its CatchHandler @ 00a2a304
                       catch() { ... } // from try @ 00a2a304 with catch @ 00a2a304
                       catch() { ... } // from try @ 00a2a4c8 with catch @ 00a2a304 */
  *plVar28 = 0;
  *(undefined8 *)(param_1 + 0x8cc0) = 0;
LAB_00a2a270:
  iVar10 = 0x1b;
  goto LAB_00a2a274;
  while( true ) {
    pbVar45 = pbVar45 + 1;
    uVar32 = (uint)*pbVar45;
    if (uVar32 == 0) break;
LAB_00a2b950:
    iVar10 = isalpha(uVar32);
    if (((iVar10 == 0) && (iVar10 = isxdigit(uVar32), iVar10 == 0)) &&
       ((1 < uVar32 - 0x2d && ((uVar32 != 0x5f && (uVar32 != 0x7e)))))) goto LAB_00a2b998;
  }
LAB_00a2b72c:
                    /* try { // try from 00a2b734 to 00b2b777 has its CatchHandler @ 00a2b734
                       catch() { ... } // from try @ 00a2b734 with catch @ 00a2b734
                       catch() { ... } // from try @ 00a2b790 with catch @ 00a2b734 */
  FUN_00a22d58(param_1,"Invalid IPv6 address format\n");
  pbVar46 = pbVar45;
LAB_00a2b73c:
  pcVar17 = strchr((char *)pbVar46,0x3a);
  if (pcVar17 != (char *)0x0) {
    local_168 = (long *)0x0;
    *pcVar17 = '\0';
    pcVar17 = pcVar17 + 1;
    if (*pcVar17 != '\0') {
      uVar14 = strtol(pcVar17,(char **)&local_168,10);
                    /* try { // try from 00a2b778 to 00b2b78f has its CatchHandler @ 00a2b7c0 */
      if (local_168 == (long *)0x0) {
                    /* try { // try from 00a2b830 to 00b2b83f has its CatchHandler @ 00a2b990 */
        if (uVar14 < 0x10000) goto LAB_00a2b854;
      }
      else if ((uVar14 >> 0x10 == 0) && ((char)*local_168 == '\0')) goto LAB_00a2b854;
                    /* try { // try from 00a2b840 to 00b2b9ab has its CatchHandler @ 00a2b7d4 */
      FUN_00a22d58(param_1,"No valid port number in connect to host string (%s)\n",pcVar17);
      local_2a0 = (byte *)0x0;
    }
  }
  uVar14 = 0xffffffff;
LAB_00a2b854:
  if (local_2a0 == (byte *)0x0) {
    pcVar17 = (char *)0x0;
  }
  else {
    pcVar17 = (char *)(*(code *)PTR_strdup_01d1b758)(local_2a0);
    if (pcVar17 == (char *)0x0) {
      (*(code *)PTR_free_01d1b748)(pbVar24);
                    /* try { // try from 00a2bf20 to 00b2bf73 has its CatchHandler @ 00a2bf20
                       catch() { ... } // from try @ 00a2bf20 with catch @ 00a2bf20
                       catch() { ... } // from try @ 00a2c0e8 with catch @ 00a2bf20 */
      goto LAB_00a2a26c;
    }
  }
  (*(code *)PTR_free_01d1b748)(pbVar24);
  if ((pcVar17 == (char *)0x0) || (*pcVar17 == '\0')) {
LAB_00a2b7e4:
    *(undefined1 *)((long)plVar13 + 0x3bb) = 0;
    (*(code *)PTR_free_01d1b748)(pcVar17);
    pcVar17 = (char *)0x0;
    iVar10 = (int)uVar14;
  }
  else {
    plVar13[0x1b] = (long)pcVar17;
    plVar13[0x1d] = (long)pcVar17;
    *(undefined1 *)((long)plVar13 + 0x3bb) = 1;
    pcVar18 = strchr(pcVar17,0x3a);
    puVar3 = &DAT_019af7d9;
    if (pcVar18 == (char *)0x0) {
      puVar3 = &DAT_0189703a;
    }
    puVar4 = &DAT_01890f88;
    if (pcVar18 == (char *)0x0) {
      puVar4 = &DAT_0189703a;
    }
    FUN_00a22d58(param_1,"Connecting to hostname: %s%s%s\n",puVar3,pcVar17,puVar4);
    iVar10 = (int)uVar14;
  }
  if (iVar10 < 0) {
    *(undefined1 *)((long)plVar13 + 0x3bc) = 0;
  }
  else {
    *(int *)((long)plVar13 + 0x1a4) = (int)uVar14;
    *(undefined1 *)((long)plVar13 + 0x3bc) = 1;
    FUN_00a22d58(param_1,"Connecting to port: %d\n",uVar14 & 0xffffffff);
    if ((int)uVar14 != -1) goto LAB_00a2ba74;
  }
  if ((pcVar17 != (char *)0x0) || (puVar41 = (undefined8 *)puVar41[1], puVar41 == (undefined8 *)0x0)
     ) goto LAB_00a2ba74;
  goto LAB_00a2b9ac;
LAB_00a2b998:
  if (uVar32 != 0x5d) goto LAB_00a2b72c;
  pbVar46 = pbVar45 + 1;
  *pbVar45 = 0;
  goto LAB_00a2b73c;
LAB_00a2cbf8:
  plVar35 = local_2f8;
  if (local_2f8 == (long *)0x0) {
    if (!bVar6) goto LAB_00a2cf94;
    bVar8 = false;
    if (*(char *)(param_1 + 0x8e3) != '\0') {
      pcVar17 = "Found pending candidate for reuse and CURLOPT_PIPEWAIT is set\n";
LAB_00a2d3e8:
      FUN_00a22d58(param_1,pcVar17);
      bVar8 = true;
    }
LAB_00a2cf98:
                    /* catch() { ... } // from try @ 00a2cd84 with catch @ 00a2cf98 */
    if ((*(byte *)(plVar13[0x80] + 0x7d) & 1) != 0) {
      if (*(char *)(param_1 + 0x8e1) != '\0') {
        *(undefined1 *)(plVar13 + 0x7b) = 1;
      }
      if (*(char *)(param_1 + 0x8e0) != '\0') {
        *(undefined1 *)((long)plVar13 + 0x3d7) = 1;
      }
    }
    if (!bVar8) {
      lVar34 = FUN_00a16db0(plVar13,*(undefined8 *)(param_1 + 0xad0));
      if (((uVar11 == 0) || (lVar34 == 0)) || (*(ulong *)(lVar34 + 8) < uVar11)) {
LAB_00a2d088:
        if ((uVar12 != 0) && (uVar12 <= *(ulong *)(*(long *)(param_1 + 0xad0) + 0x30))) {
          plVar28 = (long *)FUN_00a298e8(param_1);
          if (plVar28 == (long *)0x0) {
            FUN_00a22d58(param_1,"No connections available in cache\n");
            goto LAB_00a2cfc8;
          }
          *plVar28 = param_1;
          FUN_00a293a8(plVar28,0);
        }
        FUN_00a16e5c(*(undefined8 *)(param_1 + 0xad0),plVar13);
        pbVar24 = (byte *)(param_1 + 0x8c00);
        if (((*pbVar24 & 0x28) != 0) && (*(char *)(param_1 + 0x8c10) != '\0')) {
          FUN_00a22d58(param_1,"NTLM picked AND auth done set, clear picked!\n");
          pbVar24[0] = 0;
          pbVar24[1] = 0;
          pbVar24[2] = 0;
          pbVar24[3] = 0;
          pbVar24[4] = 0;
          pbVar24[5] = 0;
          pbVar24[6] = 0;
          pbVar24[7] = 0;
          *(char *)(param_1 + 0x8c10) = '\0';
        }
        pbVar24 = (byte *)(param_1 + 0x8c20);
        if (((*pbVar24 & 0x28) != 0) && (*(char *)(param_1 + 0x8c30) != '\0')) {
          FUN_00a22d58(param_1,"NTLM-proxy picked AND auth done set, clear picked!\n");
          pbVar24[0] = 0;
          pbVar24[1] = 0;
          pbVar24[2] = 0;
          pbVar24[3] = 0;
          pbVar24[4] = 0;
          pbVar24[5] = 0;
          pbVar24[6] = 0;
          pbVar24[7] = 0;
          *(char *)(param_1 + 0x8c30) = '\0';
        }
        plVar47 = plVar13 + 9;
        local_2f8 = plVar13;
        goto LAB_00a2d178;
      }
      auVar48 = FUN_00a18e40();
      puVar41 = (undefined8 *)**(undefined8 **)(lVar34 + 0x10);
      if (puVar41 != (undefined8 *)0x0) {
        lVar34 = -1;
        plVar28 = (long *)0x0;
        do {
          plVar47 = (long *)*puVar41;
                    /* try { // try from 00a2d048 to 00b2d05f has its CatchHandler @ 00a2d278 */
          lVar27 = lVar34;
          plVar44 = plVar28;
          if (((char)plVar47[9] == '\0') &&
             (lVar27 = FUN_00a18ea0(auVar48._0_8_,auVar48._8_8_,plVar47[0x48],plVar47[0x49]),
             plVar44 = plVar47, lVar27 <= lVar34)) {
                    /* try { // try from 00a2d068 to 00b2d073 has its CatchHandler @ 00a2d274 */
            lVar27 = lVar34;
            plVar44 = plVar28;
          }
          puVar41 = (undefined8 *)puVar41[2];
          lVar34 = lVar27;
          plVar28 = plVar44;
        } while (puVar41 != (undefined8 *)0x0);
                    /* try { // try from 00a2d074 to 00b2d07f has its CatchHandler @ 00a2d270 */
        if (plVar44 != (long *)0x0) {
                    /* try { // try from 00a2d080 to 00b2d1f7 has its CatchHandler @ 00a2d288 */
          *plVar44 = param_1;
          FUN_00a293a8(plVar44,0);
          goto LAB_00a2d088;
        }
      }
                    /* try { // try from 00a2d360 to 00b2d36b has its CatchHandler @ 00a2d5a4 */
                    /* try { // try from 00a2d36c to 00b2d377 has its CatchHandler @ 00a2d5a0 */
      FUN_00a22d58(param_1,"No more connections allowed to host: %d\n",uVar11);
    }
LAB_00a2cfc8:
    FUN_00a22d58(param_1,"No connections available.\n");
    FUN_00a29508(plVar13);
    pcVar17 = (char *)0x0;
    iVar10 = 0x59;
    *param_2 = 0;
                    /* try { // try from 00a2cff0 to 00b2d047 has its CatchHandler @ 00a2cff0
                       catch() { ... } // from try @ 00a2cff0 with catch @ 00a2cff0
                       catch() { ... } // from try @ 00a2d1f8 with catch @ 00a2cff0 */
    goto LAB_00a2a274;
  }
LAB_00a2cc00:
  local_2f8 = plVar35;
                    /* try { // try from 00a2cc0c to 00b2ccef has its CatchHandler @ 00a2ca2c */
                    /* catch() { ... } // from try @ 00a2caac with catch @ 00a2cc80 */
                    /* catch() { ... } // from try @ 00a2caa0 with catch @ 00a2cc84 */
                    /* catch() { ... } // from try @ 00a2ca80 with catch @ 00a2cc88 */
                    /* catch() { ... } // from try @ 00a2cab8 with catch @ 00a2cc98 */
  if ((((*(byte *)(local_2f8[0x80] + 0x78) & 3) != 0) &&
      ((*(char *)((long)local_2f8 + 0x3c7) == '\0' || (*(char *)((long)local_2f8 + 0x3b9) == '\0')))
      ) && ((((uVar14 = FUN_00a12594(*(undefined8 *)(param_1 + 0x60),1), (uVar14 & 1) != 0 &&
              ((*(long *)(param_1 + 0x438) != 1 && ((*(uint *)(param_1 + 0x430) | 4) == 5)))) ||
             ((uVar14 = FUN_00a12594(*(undefined8 *)(param_1 + 0x60),2), (uVar14 & 1) != 0 &&
              (2 < *(long *)(param_1 + 0x438))))) &&
            (((*(long *)(local_2f8[0x90] + 0x18) + *(long *)(local_2f8[0x8f] + 0x18) != 0 &&
              (FUN_00a22d58(param_1,"Found connection %ld, with requests in the pipe (%zu)\n",
                            local_2f8[10]), *(ulong *)(local_2f8[0xe3] + 8) < uVar11)) &&
             (*(ulong *)(*(long *)(param_1 + 0xad0) + 0x30) < uVar12)))))) {
    FUN_00a22d58(param_1,"We can reuse, but we want a new connection anyway\n");
LAB_00a2cf94:
    bVar8 = false;
    goto LAB_00a2cf98;
  }
LAB_00a2ccec:
  plVar47 = local_2f8 + 9;
                    /* try { // try from 00a2ccf0 to 00b2cd4b has its CatchHandler @ 00a2ccf0
                       catch() { ... } // from try @ 00a2ccf0 with catch @ 00a2ccf0
                       catch() { ... } // from try @ 00a2cf04 with catch @ 00a2ccf0 */
  *(undefined1 *)plVar47 = 1;
  (*(code *)PTR_free_01d1b748)(plVar13[0x2b]);
  (*(code *)PTR_free_01d1b748)(plVar13[0x23]);
  (*(code *)PTR_free_01d1b748)(plVar13[0x1f]);
  FUN_00a17acc(plVar28);
  FUN_00a17acc(plVar13 + 0x6f);
  *local_2f8 = *plVar13;
  lVar34 = plVar13[0x78];
  *(char *)(local_2f8 + 0x78) = (char)lVar34;
                    /* try { // try from 00a2cd4c to 00b2cd63 has its CatchHandler @ 00a2cf88 */
  if ((char)lVar34 != '\0') {
                    /* try { // try from 00a2cd6c to 00b2cd77 has its CatchHandler @ 00a2cf84 */
    (*(code *)PTR_free_01d1b748)(local_2f8[0x43]);
    local_2f8[0x43] = 0;
                    /* try { // try from 00a2cd78 to 00b2cd83 has its CatchHandler @ 00a2cf80 */
    (*(code *)PTR_free_01d1b748)(local_2f8[0x44]);
    local_2f8[0x44] = 0;
                    /* try { // try from 00a2cd84 to 00b2cf03 has its CatchHandler @ 00a2cf98 */
    lVar34 = *plVar44;
    local_2f8[0x44] = plVar13[0x44];
    local_2f8[0x43] = lVar34;
    *plVar44 = 0;
    plVar13[0x44] = 0;
  }
  cVar31 = *(char *)((long)plVar13 + 0x3c1);
  *(char *)((long)local_2f8 + 0x3c1) = cVar31;
  if (cVar31 != '\0') {
    (*(code *)PTR_free_01d1b748)(local_2f8[0x31]);
    local_2f8[0x31] = 0;
    (*(code *)PTR_free_01d1b748)(local_2f8[0x29]);
    local_2f8[0x29] = 0;
    (*(code *)PTR_free_01d1b748)(local_2f8[0x32]);
    local_2f8[0x32] = 0;
    (*(code *)PTR_free_01d1b748)(local_2f8[0x2a]);
    local_2f8[0x2a] = 0;
    local_2f8[0x29] = plVar13[0x29];
    lVar34 = *plVar1;
    local_2f8[0x32] = plVar13[0x32];
    local_2f8[0x31] = lVar34;
    local_2f8[0x2a] = plVar13[0x2a];
    plVar13[0x29] = 0;
    plVar13[0x2a] = 0;
    *plVar1 = 0;
    plVar13[0x32] = 0;
  }
  plVar28 = local_2f8 + 0x16;
  (*(code *)PTR_free_01d1b748)(*plVar28);
  *plVar28 = 0;
  (*(code *)PTR_free_01d1b748)(local_2f8[0x1b]);
  local_2f8[0x1b] = 0;
  lVar34 = plVar13[0x18];
  local_2f8[0x19] = plVar13[0x19];
  local_2f8[0x18] = lVar34;
  lVar34 = plVar13[0x16];
  local_2f8[0x17] = plVar13[0x17];
  *plVar28 = lVar34;
  *(undefined1 *)((long)local_2f8 + 0x3bb) = *(undefined1 *)((long)plVar13 + 0x3bb);
  lVar34 = plVar13[0x1d];
  local_2f8[0x1e] = plVar13[0x1e];
  local_2f8[0x1d] = lVar34;
  lVar34 = plVar13[0x1b];
  local_2f8[0x1c] = plVar13[0x1c];
  local_2f8[0x1b] = lVar34;
  *(undefined1 *)((long)local_2f8 + 0x3bc) = *(undefined1 *)((long)plVar13 + 0x3bc);
  *(undefined4 *)((long)local_2f8 + 0x1a4) = *(undefined4 *)((long)plVar13 + 0x1a4);
  FUN_00a0f918(local_2f8);
  *(undefined1 *)((long)local_2f8 + 0x3ba) = 1;
  (*(code *)PTR_free_01d1b748)(plVar13[0x43]);
  plVar13[0x43] = 0;
  (*(code *)PTR_free_01d1b748)(plVar13[0x44]);
  plVar13[0x44] = 0;
  (*(code *)PTR_free_01d1b748)(plVar13[0x31]);
  plVar13[0x31] = 0;
  (*(code *)PTR_free_01d1b748)(plVar13[0x29]);
  plVar13[0x29] = 0;
  (*(code *)PTR_free_01d1b748)(plVar13[0x32]);
  plVar13[0x32] = 0;
  (*(code *)PTR_free_01d1b748)(plVar13[0x2a]);
  plVar13[0x2a] = 0;
  (*(code *)PTR_free_01d1b748)(plVar13[0xe0]);
                    /* try { // try from 00a2cf04 to 00b2cfef has its CatchHandler @ 00a2ccf0 */
  plVar13[0xe0] = 0;
  FUN_00a34128(plVar13[0x8f],0);
  FUN_00a34128(plVar13[0x90],0);
  plVar13[0x8f] = 0;
  plVar13[0x90] = 0;
  (*(code *)PTR_free_01d1b748)(plVar13[0x91]);
  plVar13[0x91] = 0;
  (*(code *)PTR_free_01d1b748)(plVar13[0xe5]);
  plVar13[0xe5] = 0;
  (*(code *)PTR_free_01d1b748)(plVar13);
  *param_2 = local_2f8;
  pcVar17 = "proxy";
  if (*(char *)((long)local_2f8 + 0x3bd) == '\0') {
    pcVar17 = "host";
  }
                    /* catch() { ... } // from try @ 00a2cd78 with catch @ 00a2cf80 */
  if (local_2f8[0x25] == 0) {
    plVar13 = local_2f8 + 0x2b;
    if (local_2f8[0x2d] == 0) {
      plVar13 = plVar28;
    }
  }
  else {
                    /* catch() { ... } // from try @ 00a2cd6c with catch @ 00a2cf84 */
    plVar13 = local_2f8 + 0x23;
                    /* catch() { ... } // from try @ 00a2cd4c with catch @ 00a2cf88 */
  }
  FUN_00a22d58(param_1,"Re-using existing connection! (#%ld) with %s %s\n",local_2f8[10],pcVar17,
               plVar13[3]);
LAB_00a2d178:
  *(undefined1 *)plVar47 = 1;
  *(undefined1 *)((long)local_2f8 + 0x3c4) = 0;
  *(undefined1 *)(param_1 + 0x8d08) = 0;
  *(undefined1 *)(param_1 + 0x8ca8) = 0;
  if (*(char *)(param_1 + 0x620) == '\0') {
    if (*(int *)(param_1 + 0x430) == 5) {
      uVar33 = 1;
      goto LAB_00a2d1b4;
    }
  }
  else {
    uVar33 = 5;
LAB_00a2d1b4:
    *(undefined4 *)(param_1 + 0x430) = uVar33;
  }
  auVar48 = FUN_00a18e40();
  *(undefined1 (*) [16])(param_1 + 0xb8) = auVar48;
  *(undefined1 *)(param_1 + 0xd8) = 1;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(long *)(param_1 + 0x1d0) = param_1 + 0xb08;
  *(long *)(param_1 + 0x1d8) = param_1 + 0x4b09;
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xaf8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined1 *)(param_1 + 0x1e9) = 0;
  FUN_00a2e6ec(param_1);
                    /* try { // try from 00a2d1f8 to 00b2d2df has its CatchHandler @ 00a2cff0 */
  FUN_00a1b744(param_1,0);
  FUN_00a1b6ac(param_1,0);
  lVar34 = *(long *)(param_1 + 0x3b0);
  *(long *)(param_1 + 0x8cd8) = lVar34;
  if ((lVar34 != 0) || (uVar30 = 0, *(long *)(param_1 + 0x728) != 0)) {
    if (*(char *)(param_1 + 0x8cca) != '\0') {
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x8cd0));
      lVar34 = *(long *)(param_1 + 0x8cd8);
    }
    if (lVar34 == 0) {
                    /* catch() { ... } // from try @ 00a2d074 with catch @ 00a2d270 */
                    /* catch() { ... } // from try @ 00a2d068 with catch @ 00a2d274 */
                    /* catch() { ... } // from try @ 00a2d048 with catch @ 00a2d278 */
      lVar34 = (*(code *)PTR_strdup_01d1b758)(*(undefined8 *)(param_1 + 0x728));
    }
    else {
      lVar34 = FUN_00a0e870(&DAT_01892f2e);
    }
                    /* catch() { ... } // from try @ 00a2d080 with catch @ 00a2d288 */
    *(long *)(param_1 + 0x8cd0) = lVar34;
    *(char *)(param_1 + 0x8cca) = lVar34 != 0;
    if (lVar34 == 0) {
LAB_00a2a26c:
      pcVar17 = (char *)0x0;
      goto LAB_00a2a270;
    }
    uVar30 = 1;
  }
  *(undefined1 *)(param_1 + 0x8cc9) = uVar30;
  local_2f8[0x94] = *(long *)(param_1 + 0x298);
  local_2f8[0x95] = *(long *)(param_1 + 0x328);
  uVar29 = FUN_00a0f850(param_1,0,1);
  if (*(char *)((long)local_2f8 + 0x3ba) != '\0') {
    pcVar17 = (char *)0x0;
    iVar10 = 0;
                    /* try { // try from 00a2d2e0 to 00b2d33f has its CatchHandler @ 00a2d2e0
                       catch() { ... } // from try @ 00a2d2e0 with catch @ 00a2d2e0
                       catch() { ... } // from try @ 00a2d520 with catch @ 00a2d2e0 */
    *param_3 = 0;
    goto LAB_00a2a274;
  }
  lVar34 = local_2f8[0xe5];
  if (lVar34 == 0) {
                    /* try { // try from 00a2d378 to 00b2d51f has its CatchHandler @ 00a2d5b8 */
    if (*(char *)((long)local_2f8 + 0x3bd) == '\0') {
      plVar13 = local_2f8 + 0x16;
      if (*(char *)((long)local_2f8 + 0x3bb) != '\0') {
        plVar13 = local_2f8 + 0x1b;
      }
      plVar28 = local_2f8 + 0x34;
      if (*(char *)((long)local_2f8 + 0x3bc) != '\0') {
        plVar28 = (long *)((long)local_2f8 + 0x1a4);
      }
      lVar34 = *plVar28;
      local_2f8[0x33] = (long)(int)lVar34;
      iVar10 = FUN_00a1a5c0(local_2f8,plVar13[2],(long)(int)lVar34,&local_168,uVar29);
      if (iVar10 == -2) goto LAB_00a2d4a0;
      if (iVar10 == 1) goto LAB_00a2d48c;
      if (local_168 != (long *)0x0) goto LAB_00a2d4cc;
      FUN_00a23020(param_1,"Couldn\'t resolve host \'%s\'",plVar13[3]);
      iVar10 = 6;
    }
    else {
      plVar13 = local_2f8 + 0x23;
      if (*(char *)((long)local_2f8 + 0x3bf) == '\0') {
        plVar13 = local_2f8 + 0x2b;
      }
      iVar10 = FUN_00a1a5c0(local_2f8,plVar13[2],(int)local_2f8[0x33],&local_168,uVar29);
      if (iVar10 == -2) {
LAB_00a2d4a0:
        iVar10 = 0x1c;
      }
      else if (iVar10 == 1) {
LAB_00a2d48c:
        iVar10 = 0;
        *param_3 = 1;
      }
      else if (local_168 == (long *)0x0) {
        FUN_00a23020(param_1,"Couldn\'t resolve proxy \'%s\'",plVar13[3]);
        iVar10 = 5;
      }
      else {
LAB_00a2d4cc:
        iVar10 = 0;
      }
    }
  }
  else {
    local_168 = (long *)(*(code *)PTR_calloc_01d1b760)(1,0x18);
    if (local_168 == (long *)0x0) {
      iVar10 = 0x1b;
    }
    else {
      local_268 = local_268 & 0xffffffff00000000;
      lVar27 = FUN_00a16968(lVar34,&local_268);
      *local_168 = lVar27;
      if (*local_168 == 0) {
        if ((int)local_268 == 0) {
          iVar10 = 0x1b;
        }
        else {
          FUN_00a23020(param_1,"Unix socket path too long: \'%s\'",lVar34);
          iVar10 = 6;
        }
        (*(code *)PTR_free_01d1b748)(local_168);
        local_168 = (long *)0x0;
      }
      else {
        iVar10 = 0;
                    /* try { // try from 00a2d340 to 00b2d357 has its CatchHandler @ 00a2d5a8 */
        local_168[2] = local_168[2] + 1;
      }
    }
  }
  pcVar17 = (char *)0x0;
  local_2f8[0xb] = (long)local_168;
LAB_00a2a274:
  (*(code *)PTR_free_01d1b748)(pcVar19);
  (*(code *)PTR_free_01d1b748)(local_290);
  (*(code *)PTR_free_01d1b748)(local_288);
  (*(code *)PTR_free_01d1b748)(pcVar43);
  (*(code *)PTR_free_01d1b748)(pcVar17);
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00a2a158 with catch @ 00a2a2e8 */
  return iVar10;
}

