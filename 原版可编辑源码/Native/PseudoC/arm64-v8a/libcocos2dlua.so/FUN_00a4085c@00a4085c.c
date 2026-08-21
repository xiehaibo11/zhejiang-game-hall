
int FUN_00a4085c(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  size_t sVar13;
  undefined1 *puVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  size_t sVar18;
  size_t sVar19;
  size_t sVar20;
  void *__dest;
  byte *pbVar21;
  char *pcVar22;
  int *piVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  undefined8 uVar27;
  undefined1 uVar28;
  char cVar29;
  uint uVar30;
  undefined4 uVar31;
  long lVar32;
  long *plVar33;
  undefined8 *puVar34;
  int iVar35;
  long *plVar36;
  long **pplVar37;
  long **pplVar38;
  undefined8 *puVar39;
  undefined **ppuVar40;
  char *pcVar41;
  long *plVar42;
  byte *pbVar43;
  byte *pbVar44;
  long *plVar45;
  undefined1 auVar46 [16];
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
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00a407f4 with catch @ 00a4088c */
                    /* catch() { ... } // from try @ 00a4080c with catch @ 00a40890 */
  local_290 = (char *)0x0;
  local_288 = (char *)0x0;
  uVar9 = FUN_00a2aed8(*(undefined8 *)(param_1 + 0x60));
  uVar10 = FUN_00a2aee4(*(undefined8 *)(param_1 + 0x60));
  *param_3 = 0;
  if (*(long *)(param_1 + 0x908) == 0) {
    pcVar17 = (char *)0x0;
    pcVar41 = (char *)0x0;
    pcVar15 = (char *)0x0;
    iVar8 = 3;
    goto LAB_00a40c5c;
  }
                    /* catch() { ... } // from try @ 00a407c0 with catch @ 00a408c0 */
  plVar11 = (long *)(*(code *)PTR_calloc_01769a18)(1,0x730);
                    /* try { // try from 00a408dc to 00b4096f has its CatchHandler @ 00a408dc
                       catch() { ... } // from try @ 00a408dc with catch @ 00a408dc
                       catch() { ... } // from try @ 00a40978 with catch @ 00a408dc */
  if (plVar11 == (long *)0x0) {
LAB_00a40c4c:
    pcVar17 = (char *)0x0;
LAB_00a40c50:
    pcVar41 = (char *)0x0;
    goto LAB_00a40c54;
  }
  plVar11[0x80] = (long)&PTR_s_<no_protocol>_016a3ba8;
  plVar11[10] = -1;
  plVar11[0x33] = -1;
  *(undefined4 *)(plVar11 + 0x34) = 0xffffffff;
  plVar11[0x4d] = -1;
  plVar11[0x4c] = -1;
  FUN_00a26ce8(plVar11,1);
  auVar46 = FUN_00a2e828();
  *(undefined1 (*) [16])(plVar11 + 0x4a) = auVar46;
  *plVar11 = param_1;
  uVar30 = *(uint *)(param_1 + 0x5c0);
  *(undefined4 *)(plVar11 + 0x28) = 4;
  *(uint *)(plVar11 + 0x30) = uVar30;
  if (*(char **)(param_1 + 0x718) == (char *)0x0) {
                    /* try { // try from 00a40970 to 00b40977 has its CatchHandler @ 00a409b4 */
    bVar6 = false;
    *(undefined1 *)((long)plVar11 + 0x3bd) = 0;
    bVar5 = false;
  }
  else {
    bVar5 = **(char **)(param_1 + 0x718) != '\0';
    bVar6 = uVar30 < 3 && bVar5;
    *(bool *)((long)plVar11 + 0x3bd) = bVar5;
  }
                    /* try { // try from 00a40978 to 00b409cf has its CatchHandler @ 00a408dc */
  *(bool *)((long)plVar11 + 0x3be) = bVar6;
  *(byte *)((long)plVar11 + 0x3bf) = bVar5 & (bVar6 ^ 1U);
  if ((*(char **)(param_1 + 0x720) != (char *)0x0) && (**(char **)(param_1 + 0x720) != '\0')) {
    *(undefined1 *)((long)plVar11 + 0x3bd) = 1;
    *(undefined1 *)((long)plVar11 + 0x3bf) = 1;
  }
                    /* catch() { ... } // from try @ 00a40970 with catch @ 00a409b4 */
  *(bool *)((long)plVar11 + 0x3c1) = *(long *)(param_1 + 2000) != 0;
  *(undefined1 *)((long)plVar11 + 0x3c9) = *(undefined1 *)(param_1 + 0x612);
                    /* try { // try from 00a409d0 to 00b40a27 has its CatchHandler @ 00a409d0
                       catch() { ... } // from try @ 00a409d0 with catch @ 00a409d0
                       catch() { ... } // from try @ 00a40a40 with catch @ 00a409d0
                       catch() { ... } // from try @ 00a40af0 with catch @ 00a409d0
                       catch() { ... } // from try @ 00a40b64 with catch @ 00a409d0
                       catch() { ... } // from try @ 00a40bb0 with catch @ 00a409d0 */
  *(bool *)(plVar11 + 0x78) = *(long *)(param_1 + 0x7b8) != 0;
  *(undefined1 *)((long)plVar11 + 0x3cc) = *(undefined1 *)(param_1 + 0x62c);
  *(undefined1 *)((long)plVar11 + 0x3cd) = *(undefined1 *)(param_1 + 0x62d);
  *(undefined1 *)(plVar11 + 0x68) = *(undefined1 *)(param_1 + 0x448);
  *(undefined1 *)((long)plVar11 + 0x341) = *(undefined1 *)(param_1 + 0x449);
  *(undefined1 *)(plVar11 + 0x70) = *(undefined1 *)(param_1 + 0x500);
  *(undefined1 *)((long)plVar11 + 0x381) = *(undefined1 *)(param_1 + 0x501);
  lVar32 = *(long *)(param_1 + 0x5e8);
  *(undefined4 *)(plVar11 + 0x9e) = 0xffffffff;
  plVar11[0x82] = lVar32;
  *(undefined8 *)((long)plVar11 + 0x4fc) = 0;
  *(undefined8 *)((long)plVar11 + 0x4f4) = 0;
  *(undefined4 *)((long)plVar11 + 0x504) = 0;
  uVar12 = FUN_00a27f7c(*(undefined8 *)(param_1 + 0x60),1);
                    /* try { // try from 00a40a28 to 00b40a3f has its CatchHandler @ 00a40be0 */
  if (((uVar12 & 1) != 0) && (plVar11[0x91] == 0)) {
                    /* try { // try from 00a40a40 to 00b40a8b has its CatchHandler @ 00a409d0 */
    lVar32 = (*(code *)PTR_calloc_01769a18)(0x4000,1);
    plVar11[0x91] = lVar32;
    if (lVar32 != 0) goto LAB_00a40a4c;
LAB_00a40bfc:
    FUN_00a4ab10(plVar11[0x8f],0);
    FUN_00a4ab10(plVar11[0x90],0);
    plVar11[0x90] = 0;
    plVar11[0x8f] = 0;
    (*(code *)PTR_free_01769a00)(plVar11[0x91]);
    (*(code *)PTR_free_01769a00)(plVar11[0xe0]);
    (*(code *)PTR_free_01769a00)(plVar11);
    goto LAB_00a40c4c;
  }
LAB_00a40a4c:
  lVar32 = FUN_00a4a970(FUN_00a448a8);
  plVar11[0x8f] = lVar32;
  lVar32 = FUN_00a4a970(FUN_00a448a8);
  plVar11[0x90] = lVar32;
  if ((lVar32 == 0) || (plVar11[0x8f] == 0)) goto LAB_00a40bfc;
  if (*(long *)(param_1 + 0x6b0) != 0) {
                    /* try { // try from 00a40a8c to 00b40aef has its CatchHandler @ 00a40be0 */
    lVar32 = (*(code *)PTR_strdup_01769a10)();
    plVar11[0xe0] = lVar32;
    if (lVar32 == 0) goto LAB_00a40bfc;
  }
  *(undefined4 *)((long)plVar11 + 0x70c) = *(undefined4 *)(param_1 + 0x2ac);
  *(undefined2 *)(plVar11 + 0xe1) = *(undefined2 *)(param_1 + 0x2a8);
  lVar32 = *(long *)(param_1 + 0x318);
  plVar11[8] = *(long *)(param_1 + 800);
  plVar11[7] = lVar32;
  *param_2 = plVar11;
  sVar13 = strlen(*(char **)(param_1 + 0x908));
  plVar26 = (long *)(param_1 + 0x8cb8);
  if (sVar13 < 0x101) {
    sVar13 = 0x100;
  }
  (*(code *)PTR_free_01769a00)(*plVar26);
                    /* try { // try from 00a40af0 to 00b40b3f has its CatchHandler @ 00a409d0 */
  *(undefined8 *)(param_1 + 0x8cc0) = 0;
  *plVar26 = 0;
  lVar32 = (*(code *)PTR_malloc_017699f8)(sVar13 + 2);
  *plVar26 = lVar32;
  if (lVar32 == 0) goto LAB_00a40c4c;
  plVar42 = (long *)(param_1 + 0x8cc0);
  *plVar42 = lVar32;
  puVar14 = (undefined1 *)(*(code *)PTR_malloc_017699f8)(sVar13 + 2);
  plVar11[0x16] = (long)puVar14;
  if (puVar14 != (undefined1 *)0x0) {
    plVar45 = plVar11 + 0x18;
                    /* try { // try from 00a40b40 to 00b40b43 has its CatchHandler @ 00a40bb0 */
    *plVar45 = (long)puVar14;
    *puVar14 = 0;
                    /* try { // try from 00a40b58 to 00b40b63 has its CatchHandler @ 00a40be0 */
                    /* try { // try from 00a40b64 to 00b40ba7 has its CatchHandler @ 00a409d0 */
    pcVar15 = (char *)(*(code *)PTR_strdup_01769a10)(&DAT_013c996e);
    local_288 = pcVar15;
    pcVar16 = (char *)(*(code *)PTR_strdup_01769a10)(&DAT_013c996e);
    local_290 = pcVar16;
    pcVar17 = (char *)(*(code *)PTR_strdup_01769a10)(&DAT_013c996e);
    pcVar41 = (char *)0x0;
    iVar8 = 0x1b;
                    /* try { // try from 00a40ba8 to 00b40baf has its CatchHandler @ 00a40be0 */
    if ((pcVar17 == (char *)0x0) || (pcVar15 == (char *)0x0)) {
LAB_00a41b90:
      pcVar41 = (char *)0x0;
      pcVar15 = pcVar41;
      goto LAB_00a40c5c;
    }
                    /* catch() { ... } // from try @ 00a40b40 with catch @ 00a40bb0
                       try { // try from 00a40bb0 to 00b40bfb has its CatchHandler @ 00a409d0 */
    pcVar15 = (char *)0x0;
    if (pcVar16 == (char *)0x0) goto LAB_00a40c5c;
    pcVar41 = (char *)*plVar42;
    local_268 = 0;
    uStack_260 = 0;
    pcVar16 = *(char **)(param_1 + 0x908);
    pcVar15 = strpbrk(pcVar16,"\r\n");
    if (pcVar15 != (char *)0x0) {
                    /* catch() { ... } // from try @ 00a40a28 with catch @ 00a40be0
                       catch() { ... } // from try @ 00a40a8c with catch @ 00a40be0
                       catch() { ... } // from try @ 00a40b58 with catch @ 00a40be0
                       catch() { ... } // from try @ 00a40ba8 with catch @ 00a40be0 */
      pcVar41 = "Illegal characters found in URL";
LAB_00a40be4:
      FUN_00a38a08(param_1,pcVar41);
      iVar8 = 3;
LAB_00a40bf0:
      pcVar41 = (char *)0x0;
      pcVar15 = (char *)0x0;
      goto LAB_00a40c5c;
    }
                    /* catch() { ... } // from try @ 00a40cc8 with catch @ 00a40d00 */
    iVar8 = sscanf(pcVar16,"%15[^:]:%[^\n]",&local_268,pcVar41);
                    /* try { // try from 00a40d14 to 00b40dfb has its CatchHandler @ 00a40d14
                       catch() { ... } // from try @ 00a40d14 with catch @ 00a40d14
                       catch() { ... } // from try @ 00a40e7c with catch @ 00a40d14 */
    if ((iVar8 == 2) && (iVar8 = FUN_00a4a0f8(&local_268,"file"), iVar8 != 0)) {
      if (*pcVar41 == '/') {
        if (pcVar41[1] == '/') {
          sVar13 = strlen(pcVar41 + 2);
          memmove(pcVar41,pcVar41 + 2,sVar13 + 1);
          if (*pcVar41 != '/') goto LAB_00a40d6c;
        }
      }
      else {
LAB_00a40d6c:
        iVar8 = FUN_00a4a37c("localhost/",pcVar41,10);
        if ((iVar8 == 0) && (iVar8 = FUN_00a4a37c("127.0.0.1/",pcVar41,10), iVar8 == 0)) {
          pcVar41 = "Valid host name with slash missing in URL";
          goto LAB_00a40be4;
        }
        pcVar15 = pcVar41 + 10;
        if (pcVar41[10] != '/') {
          pcVar15 = pcVar41 + 9;
        }
        sVar13 = strlen(pcVar15);
        memmove(pcVar41,pcVar15,sVar13 + 1);
      }
      bVar6 = false;
      local_2d0 = (ulong *)0x13c25ff;
      goto LAB_00a40fc0;
    }
    *pcVar41 = '\0';
                    /* try { // try from 00a40dfc to 00b40e2f has its CatchHandler @ 00a40efc */
    iVar8 = sscanf(*(char **)(param_1 + 0x908),"%15[^\n:]:%3[/]%[^\n/?#]%[^\n]",&local_268,
                   &local_168,*plVar45,pcVar41);
    if (iVar8 == 2) {
      pcVar41 = "Bad URL";
      goto LAB_00a40be4;
    }
    if (2 < iVar8) {
      sVar13 = strlen((char *)&local_168);
      if (sVar13 == 2) {
                    /* try { // try from 00a40e7c to 00b40f17 has its CatchHandler @ 00a40d14 */
        bVar6 = false;
        local_2d0 = &local_268;
        goto LAB_00a40fc0;
      }
      pcVar15 = "es";
      if (sVar13 < 2) {
        pcVar15 = "";
      }
      FUN_00a38740(param_1,"Unwillingly accepted illegal URL using %d slash%s!\n",sVar13,pcVar15);
      if (*(char *)(param_1 + 0x910) != '\0') {
                    /* catch() { ... } // from try @ 00a40e30 with catch @ 00a40ec8 */
                    /* catch() { ... } // from try @ 00a40e48 with catch @ 00a40ecc */
        (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x908));
      }
      lVar32 = FUN_00a24258("%s://%s%s",&local_268,*plVar45,pcVar41);
      *(long *)(param_1 + 0x908) = lVar32;
      if (lVar32 != 0) {
        local_2d0 = &local_268;
        bVar6 = false;
                    /* catch() { ... } // from try @ 00a40dfc with catch @ 00a40efc */
        *(undefined1 *)(param_1 + 0x910) = 1;
        goto LAB_00a40fc0;
      }
LAB_00a411f4:
      iVar8 = 0x1b;
      goto LAB_00a40bf0;
    }
                    /* try { // try from 00a40e30 to 00b40e43 has its CatchHandler @ 00a40ec8 */
    iVar8 = sscanf(*(char **)(param_1 + 0x908),"%[^\n/?#]%[^\n]",*plVar45,pcVar41);
    if (iVar8 < 1) {
      pcVar41 = "<url> malformed";
      goto LAB_00a40be4;
    }
    local_2d0 = *(ulong **)(param_1 + 0x6a8);
    if (*(ulong **)(param_1 + 0x6a8) == (ulong *)0x0) {
                    /* try { // try from 00a40e48 to 00b40e7b has its CatchHandler @ 00a40ecc */
      iVar8 = FUN_00a4a37c(&DAT_013c5518,*plVar45,4);
      if (iVar8 == 0) {
        iVar8 = FUN_00a4a37c("DICT.",*plVar45,5);
        if (iVar8 == 0) {
          iVar8 = FUN_00a4a37c("LDAP.",*plVar45,5);
          if (iVar8 == 0) {
            iVar8 = FUN_00a4a37c("IMAP.",*plVar45,5);
            if (iVar8 == 0) {
              iVar8 = FUN_00a4a37c(&DAT_013c553e,*plVar45,5);
              if (iVar8 == 0) {
                iVar8 = FUN_00a4a37c("POP3.",*plVar45,5);
                local_2d0 = (ulong *)0x12c5849;
                if (iVar8 != 0) {
                  local_2d0 = (ulong *)&DAT_013c15d0;
                }
              }
              else {
                local_2d0 = (ulong *)0x12c5861;
              }
            }
            else {
              local_2d0 = (ulong *)&DAT_013c5539;
            }
          }
          else {
            local_2d0 = (ulong *)&DAT_013c552e;
          }
        }
        else {
          local_2d0 = (ulong *)&DAT_013c5523;
        }
      }
      else {
        local_2d0 = (ulong *)0x12c582f;
      }
    }
    bVar6 = true;
LAB_00a40fc0:
    pcVar15 = (char *)*plVar45;
    pcVar16 = strchr(pcVar15,0x40);
    if (pcVar16 != (char *)0x0) {
      pcVar15 = pcVar16 + 1;
    }
    pcVar15 = strchr(pcVar15,0x3f);
    if (pcVar15 == (char *)0x0) {
      if (*pcVar41 == '\0') {
        bVar5 = true;
        pcVar41[0] = '/';
        pcVar41[1] = '\0';
      }
      else {
        bVar5 = false;
        if (*pcVar41 != '/') goto LAB_00a41058;
      }
LAB_00a4108c:
      if (*(char *)(param_1 + 0x8e2) == '\0') {
        pcVar15 = (char *)FUN_00a58b10(pcVar41);
        if (pcVar15 == (char *)0x0) goto LAB_00a411f4;
        iVar8 = strcmp(pcVar15,pcVar41);
        if (iVar8 == 0) {
          (*(code *)PTR_free_01769a00)(pcVar15);
          if (!bVar5) goto LAB_00a411b8;
        }
        else {
          (*(code *)PTR_free_01769a00)(*plVar26);
          *plVar26 = (long)pcVar15;
          *plVar42 = (long)pcVar15;
          pcVar41 = pcVar15;
        }
        goto LAB_00a410f0;
      }
      if (bVar5) goto LAB_00a410f0;
    }
    else {
      sVar13 = strlen(pcVar15);
      sVar18 = strlen(pcVar41);
      memmove(pcVar41 + sVar13 + 1,pcVar41,sVar18 + 1);
      memcpy(pcVar41 + 1,pcVar15,sVar13);
      *pcVar41 = '/';
      *pcVar15 = '\0';
      bVar5 = true;
      if (*pcVar41 == '/') goto LAB_00a4108c;
LAB_00a41058:
      sVar13 = strlen(pcVar41);
      memmove(pcVar41 + 1,pcVar41,sVar13 + 1);
      *pcVar41 = '/';
LAB_00a410f0:
                    /* try { // try from 00a410f4 to 00b4113f has its CatchHandler @ 00a410f4
                       catch() { ... } // from try @ 00a410f4 with catch @ 00a410f4
                       catch() { ... } // from try @ 00a41144 with catch @ 00a410f4 */
      sVar18 = strlen(pcVar41);
      sVar19 = strlen(*(char **)(param_1 + 0x908));
      sVar13 = strlen((char *)*plVar45);
      if (!bVar6) {
        sVar20 = strlen((char *)local_2d0);
        sVar13 = sVar13 + sVar20 + 3;
      }
                    /* try { // try from 00a41140 to 00b41143 has its CatchHandler @ 00a41178 */
                    /* try { // try from 00a41144 to 00b4118b has its CatchHandler @ 00a410f4 */
      __dest = (void *)(*(code *)PTR_malloc_017699f8)(sVar19 + 2);
      if (__dest == (void *)0x0) goto LAB_00a411f4;
      memcpy(__dest,*(void **)(param_1 + 0x908),sVar13);
      memcpy((void *)((long)__dest + sVar13),pcVar41,sVar18 + 1);
      if (*(char *)(param_1 + 0x910) != '\0') {
                    /* catch() { ... } // from try @ 00a41140 with catch @ 00a41178 */
        (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x908));
                    /* try { // try from 00a4118c to 00b41273 has its CatchHandler @ 00a4118c
                       catch() { ... } // from try @ 00a4118c with catch @ 00a4118c
                       catch() { ... } // from try @ 00a412f4 with catch @ 00a4118c */
        *(undefined8 *)(param_1 + 0x908) = 0;
        *(undefined1 *)(param_1 + 0x910) = 0;
      }
      FUN_00a38740(param_1,"Rebuilt URL to: %s\n",__dest);
      *(void **)(param_1 + 0x908) = __dest;
      *(undefined1 *)(param_1 + 0x910) = 1;
    }
LAB_00a411b8:
    local_168 = (long *)0x0;
    local_278 = 0;
    local_270 = (char *)0x0;
    pcVar16 = (char *)*plVar45;
    pcVar15 = strchr(pcVar16,0x40);
    if (pcVar15 == (char *)0x0) {
LAB_00a411e8:
      iVar8 = 0;
    }
    else {
      *plVar45 = (long)(pcVar15 + 1);
      if (*(int *)(param_1 + 0x624) == 2) goto LAB_00a411e8;
      iVar8 = FUN_00a43ff4(pcVar16,pcVar15 + 1 + ~(ulong)pcVar16,&local_168,&local_270,&local_278);
      if (iVar8 == 0) {
                    /* try { // try from 00a412f4 to 00b4138f has its CatchHandler @ 00a4118c */
        if (local_168 != (long *)0x0) {
          *(undefined1 *)(plVar11 + 0x7a) = 1;
          *(undefined1 *)(plVar11 + 0x78) = 1;
          iVar8 = FUN_00a45500(param_1,local_168,0,&local_280,0,0);
          if (iVar8 != 0) goto LAB_00a41224;
          (*(code *)PTR_free_01769a00)(local_288);
                    /* catch() { ... } // from try @ 00a412a8 with catch @ 00a41340 */
                    /* catch() { ... } // from try @ 00a412c0 with catch @ 00a41344 */
          local_288 = local_280;
        }
        if (local_270 != (char *)0x0) {
          iVar8 = FUN_00a45500(param_1,local_270,0,&local_280,0,0);
          if (iVar8 != 0) goto LAB_00a41224;
                    /* catch() { ... } // from try @ 00a41274 with catch @ 00a41374 */
          (*(code *)PTR_free_01769a00)(local_290);
          local_290 = local_280;
        }
        if (local_278 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = FUN_00a45500(param_1,local_278,0,&local_280,0,0);
          if (iVar8 == 0) {
            (*(code *)PTR_free_01769a00)(pcVar17);
            pcVar17 = local_280;
          }
        }
      }
    }
LAB_00a41224:
    (*(code *)PTR_free_01769a00)(local_168);
    (*(code *)PTR_free_01769a00)(local_270);
    (*(code *)PTR_free_01769a00)(local_278);
    if (iVar8 != 0) goto LAB_00a40bf0;
                    /* try { // try from 00a41274 to 00b412a7 has its CatchHandler @ 00a41374 */
    if ((*(char *)*plVar45 == '[') &&
       (pcVar15 = strchr((char *)*plVar45,0x25), pcVar15 != (char *)0x0)) {
      lVar32 = 3;
      iVar8 = strncmp("%25",pcVar15,3);
      if (iVar8 != 0) {
        FUN_00a38740(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
                    /* try { // try from 00a412a8 to 00b412bb has its CatchHandler @ 00a41340 */
        lVar32 = 1;
      }
      pcVar16 = pcVar15 + lVar32;
      uVar12 = strtoul(pcVar16,&local_270,10);
      pcVar22 = local_270;
                    /* try { // try from 00a412c0 to 00b412f3 has its CatchHandler @ 00a41344 */
      if (*local_270 == ']') {
        sVar13 = strlen(local_270);
        memmove(pcVar15,pcVar22,sVar13 + 1);
        *(int *)(plVar11 + 0x15) = (int)uVar12;
      }
      else {
        strncpy((char *)&local_168,pcVar16,0x12);
        local_157 = 0;
        pcVar22 = strchr((char *)&local_168,0x5d);
        if (pcVar22 != (char *)0x0) {
          *pcVar22 = '\0';
          uVar30 = if_nametoindex((char *)&local_168);
          if (uVar30 != 0) {
            sVar13 = strlen((char *)&local_168);
            sVar18 = strlen(pcVar16 + sVar13);
            memmove(pcVar15,pcVar16 + sVar13,sVar18 + 1);
            *(uint *)(plVar11 + 0x15) = uVar30;
            goto LAB_00a41474;
          }
          piVar23 = (int *)__errno();
          pcVar15 = strerror(*piVar23);
          FUN_00a38740(param_1,"Invalid network interface: %s; %s\n",&local_168,pcVar15);
        }
        FUN_00a38740(param_1,"Invalid IPv6 address format\n");
      }
    }
LAB_00a41474:
    if (*(int *)(param_1 + 0x858) != 0) {
      *(int *)(plVar11 + 0x15) = *(int *)(param_1 + 0x858);
    }
    pcVar41 = strchr(pcVar41,0x23);
    if (pcVar41 != (char *)0x0) {
      *pcVar41 = '\0';
      pcVar41 = strchr(*(char **)(param_1 + 0x908),0x23);
      if (pcVar41 != (char *)0x0) {
        *pcVar41 = '\0';
      }
    }
    ppuVar40 = &PTR_DAT_016a3a70;
    pcVar41 = "HTTP";
    iVar8 = FUN_00a4a0f8(&DAT_012b5068,local_2d0);
    if (iVar8 == 0) {
      ppuVar40 = &PTR_s_HTTPS_016a3af0;
      pcVar41 = "HTTPS";
      iVar8 = FUN_00a4a0f8("HTTPS",local_2d0);
      if (iVar8 != 0) goto LAB_00a416ac;
      ppuVar40 = &PTR_DAT_016a4af0;
      pcVar41 = "FTP";
      iVar8 = FUN_00a4a0f8(&DAT_013c73ed,local_2d0);
      if (iVar8 != 0) goto LAB_00a416ac;
      ppuVar40 = &PTR_DAT_016a4b70;
      pcVar41 = "FTPS";
      iVar8 = FUN_00a4a0f8(&DAT_013cb24c,local_2d0);
      if (iVar8 != 0) goto LAB_00a416ac;
      ppuVar40 = &PTR_s_TELNET_016a3ca8;
      pcVar41 = "TELNET";
      iVar8 = FUN_00a4a0f8("TELNET",local_2d0);
      if (iVar8 != 0) goto LAB_00a416ac;
      ppuVar40 = &PTR_DAT_016a3c28;
      pcVar41 = "DICT";
      iVar8 = FUN_00a4a0f8(&DAT_013c5523,local_2d0);
      if (iVar8 != 0) goto LAB_00a416ac;
      ppuVar40 = &PTR_s_FILE_013ed403_4_016a4a10;
      pcVar41 = "FILE";
      iVar8 = FUN_00a4a0f8("FILE",local_2d0);
      if (iVar8 != 0) goto LAB_00a416ac;
      ppuVar40 = &PTR_DAT_016a4010;
      pcVar41 = "TFTP";
      iVar8 = FUN_00a4a0f8(&DAT_013c73ec,local_2d0);
      if (iVar8 != 0) goto LAB_00a416ac;
      ppuVar40 = &PTR_DAT_016a4090;
      pcVar41 = "IMAP";
      iVar8 = FUN_00a4a0f8(&DAT_013c5539,local_2d0);
      if (iVar8 != 0) goto LAB_00a416ac;
      ppuVar40 = &PTR_s_IMAPS_016a4110;
      pcVar41 = "IMAPS";
      iVar8 = FUN_00a4a0f8("IMAPS",local_2d0);
      if (iVar8 != 0) goto LAB_00a416ac;
      ppuVar40 = &PTR_DAT_016a42c0;
      pcVar41 = "POP3";
      iVar8 = FUN_00a4a0f8(&DAT_013c8940,local_2d0);
      if (iVar8 != 0) goto LAB_00a416ac;
      ppuVar40 = &PTR_s_POP3S_016a4340;
      pcVar41 = "POP3S";
      iVar8 = FUN_00a4a0f8("POP3S",local_2d0);
      if (iVar8 != 0) goto LAB_00a416ac;
      ppuVar40 = &PTR_DAT_016a4910;
      pcVar41 = "SMB";
      iVar8 = FUN_00a4a0f8(&DAT_013c94f4,local_2d0);
      if (iVar8 != 0) goto LAB_00a416ac;
      ppuVar40 = &PTR_DAT_016a4990;
      pcVar41 = "SMBS";
      iVar8 = FUN_00a4a0f8(&DAT_013c94f8,local_2d0);
      if (iVar8 != 0) goto LAB_00a416ac;
      ppuVar40 = &PTR_DAT_016a44f0;
      pcVar41 = "SMTP";
      iVar8 = FUN_00a4a0f8(&DAT_013c8a28,local_2d0);
      if (iVar8 != 0) goto LAB_00a416ac;
      ppuVar40 = &PTR_s_SMTPS_016a4570;
      pcVar41 = "SMTPS";
      iVar8 = FUN_00a4a0f8("SMTPS",local_2d0);
      if (iVar8 != 0) goto LAB_00a416ac;
      ppuVar40 = &PTR_DAT_016a4720;
      pcVar41 = "RTSP";
      iVar8 = FUN_00a4a0f8(&DAT_013c8bfc,local_2d0);
      if (iVar8 != 0) goto LAB_00a416ac;
      ppuVar40 = &PTR_s_GOPHER_016a47a0;
      pcVar41 = "GOPHER";
                    /* try { // try from 00a43ef8 to 00b43f2b has its CatchHandler @ 00a43ff8 */
      iVar8 = FUN_00a4a0f8("GOPHER",local_2d0);
      if (iVar8 != 0) goto LAB_00a416ac;
LAB_00a43f0c:
      FUN_00a38a08(param_1,"Protocol \"%s\" not supported or disabled in libcurl",local_2d0);
      iVar8 = 1;
      goto LAB_00a40bf0;
    }
LAB_00a416ac:
                    /* try { // try from 00a416c8 to 00b41713 has its CatchHandler @ 00a416c8
                       catch() { ... } // from try @ 00a416c8 with catch @ 00a416c8
                       catch() { ... } // from try @ 00a41718 with catch @ 00a416c8 */
    if (((*(ulong *)(param_1 + 0x860) & (ulong)*(uint *)(ppuVar40 + 0xf)) == 0) ||
       ((*(char *)(param_1 + 0x8b18) != '\0' &&
        ((*(ulong *)(param_1 + 0x868) & (ulong)*(uint *)(ppuVar40 + 0xf)) == 0))))
    goto LAB_00a43f0c;
    plVar11[0x81] = (long)ppuVar40;
    plVar11[0x80] = (long)ppuVar40;
    if (bVar6) {
      pbVar21 = (byte *)FUN_00a24258("%s://%s",pcVar41,*(undefined8 *)(param_1 + 0x908));
      pcVar41 = (char *)0x0;
      if (pbVar21 != (byte *)0x0) {
        uVar30 = (uint)*pbVar21;
        pbVar44 = pbVar21;
        if (*pbVar21 != 0x3a) {
          do {
                    /* try { // try from 00a41718 to 00b4175f has its CatchHandler @ 00a416c8 */
                    /* try { // try from 00a41714 to 00b41717 has its CatchHandler @ 00a4174c */
            iVar8 = tolower(uVar30);
            uVar30 = (uint)pbVar44[1];
            *pbVar44 = (byte)iVar8;
            pbVar44 = pbVar44 + 1;
          } while (uVar30 != 0x3a);
        }
        if (*(char *)(param_1 + 0x910) != '\0') {
          (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x908));
          *(undefined8 *)(param_1 + 0x908) = 0;
                    /* catch() { ... } // from try @ 00a41714 with catch @ 00a4174c */
          *(undefined1 *)(param_1 + 0x910) = 0;
        }
        *(byte **)(param_1 + 0x908) = pbVar21;
        *(undefined1 *)(param_1 + 0x910) = 1;
        ppuVar40 = (undefined **)plVar11[0x81];
        goto LAB_00a41760;
      }
      goto LAB_00a40c54;
    }
LAB_00a41760:
                    /* try { // try from 00a41760 to 00b41877 has its CatchHandler @ 00a41760
                       catch() { ... } // from try @ 00a41760 with catch @ 00a41760
                       catch() { ... } // from try @ 00a418f8 with catch @ 00a41760 */
    if (((*(byte *)((long)ppuVar40 + 0x7c) >> 6 & 1) != 0) &&
       (pcVar41 = strchr(*(char **)(*plVar11 + 0x8cc0),0x3f), pcVar41 != (char *)0x0)) {
      *pcVar41 = '\0';
    }
    if (*(long *)(param_1 + 0x838) != 0) {
      lVar32 = (*(code *)PTR_strdup_01769a10)();
      plVar11[0x46] = lVar32;
      if (lVar32 != 0) goto LAB_00a417a4;
      goto LAB_00a40c50;
    }
LAB_00a417a4:
    if (*(char *)((long)plVar11 + 0x3c1) != '\0') {
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
      iVar8 = FUN_00a45500(param_1,&local_168,0,plVar11 + 0x31,0,0);
      if ((iVar8 != 0) ||
         (iVar8 = FUN_00a45500(param_1,&local_268,0,plVar11 + 0x32,0,0), iVar8 != 0))
      goto LAB_00a40bf0;
    }
    if (*(long *)(param_1 + 0x718) == 0) {
      pcVar15 = (char *)0x0;
    }
    else {
      pcVar15 = (char *)(*(code *)PTR_strdup_01769a10)();
      if (pcVar15 == (char *)0x0) {
        FUN_00a38a08(param_1,"memory shortage");
        pcVar41 = (char *)0x0;
                    /* try { // try from 00a41878 to 00b418ab has its CatchHandler @ 00a41978 */
        goto LAB_00a40c58;
      }
    }
    if (*(long *)(param_1 + 0x720) == 0) {
      pcVar41 = (char *)0x0;
    }
    else {
      pcVar41 = (char *)(*(code *)PTR_strdup_01769a10)();
      if (pcVar41 == (char *)0x0) {
                    /* try { // try from 00a418ac to 00b418bf has its CatchHandler @ 00a41944 */
        FUN_00a38a08(param_1,"memory shortage");
        goto LAB_00a40c58;
      }
    }
                    /* try { // try from 00a418c4 to 00b418f7 has its CatchHandler @ 00a41948 */
    if ((*(long *)(param_1 + 0x7e0) != 0) && (uVar12 = FUN_00a44288(*plVar45), (uVar12 & 1) != 0)) {
      (*(code *)PTR_free_01769a00)(pcVar15);
      (*(code *)PTR_free_01769a00)(pcVar41);
      pcVar41 = (char *)0x0;
                    /* try { // try from 00a418f8 to 00b41993 has its CatchHandler @ 00a41760 */
      pcVar15 = (char *)0x0;
      lVar32 = *(long *)(param_1 + 0x840);
      if (lVar32 != 0) goto LAB_00a41a90;
LAB_00a41904:
      if ((pcVar15 == (char *)0x0) ||
         ((*pcVar15 != '\0' && ((*(byte *)(plVar11[0x80] + 0x7c) >> 4 & 1) == 0))))
      goto LAB_00a41ac8;
      (*(code *)PTR_free_01769a00)(pcVar15);
      pcVar15 = (char *)0x0;
      if (pcVar41 != (char *)0x0) goto LAB_00a41acc;
LAB_00a41b00:
      if (pcVar15 == (char *)0x0) {
        uVar28 = 0;
        pcVar41 = (char *)0x0;
        lVar32 = 0x3be;
        *(undefined1 *)((long)plVar11 + 0x3bf) = 0;
        goto LAB_00a41bf4;
      }
      pcVar41 = (char *)0x0;
      bVar6 = false;
LAB_00a41b0c:
      iVar8 = FUN_00a44400(param_1,plVar11,pcVar15,(int)plVar11[0x30]);
      (*(code *)PTR_free_01769a00)(pcVar15);
      if (iVar8 == 0) {
        if (bVar6) goto LAB_00a41b5c;
        goto LAB_00a41b98;
      }
LAB_00a41b3c:
      pcVar15 = (char *)0x0;
      goto LAB_00a40c5c;
    }
    if (pcVar15 == (char *)0x0 && pcVar41 == (char *)0x0) {
                    /* catch() { ... } // from try @ 00a418ac with catch @ 00a41944 */
                    /* catch() { ... } // from try @ 00a418c4 with catch @ 00a41948 */
      lVar32 = FUN_00a451ac("no_proxy");
      if (lVar32 == 0) {
        lVar32 = FUN_00a451ac("NO_PROXY");
      }
      uVar12 = FUN_00a44288(*plVar45,lVar32);
                    /* catch() { ... } // from try @ 00a41878 with catch @ 00a41978 */
      if ((uVar12 & 1) == 0) {
        pbVar21 = *(byte **)plVar11[0x80];
        uVar30 = (uint)*pbVar21;
        if (*pbVar21 == 0) {
          pplVar38 = &local_168;
        }
        else {
          pplVar37 = &local_168;
          do {
            pbVar21 = pbVar21 + 1;
            iVar8 = tolower(uVar30);
            pplVar38 = (long **)((long)pplVar37 + 1);
            *(char *)pplVar37 = (char)iVar8;
            uVar30 = (uint)*pbVar21;
            pplVar37 = pplVar38;
          } while (uVar30 != 0);
        }
        *(undefined1 *)((long)pplVar38 + 6) = 0;
        *(undefined2 *)((long)pplVar38 + 4) = 0x7978;
        *(undefined4 *)pplVar38 = 0x6f72705f;
        pcVar15 = (char *)FUN_00a451ac(&local_168);
        if (pcVar15 == (char *)0x0) {
          iVar8 = FUN_00a4a0f8("http_proxy",&local_168);
          if (iVar8 == 0) {
            FUN_00a4a2bc(&local_168,&local_168,0x80);
                    /* try { // try from 00a41a60 to 00b41a63 has its CatchHandler @ 00a41a98 */
                    /* try { // try from 00a41a64 to 00b41aab has its CatchHandler @ 00a41a14 */
            pcVar15 = (char *)FUN_00a451ac(&local_168);
            if (pcVar15 != (char *)0x0) goto LAB_00a41a70;
          }
          pcVar15 = (char *)FUN_00a451ac("all_proxy");
          if (pcVar15 == (char *)0x0) {
            pcVar15 = (char *)FUN_00a451ac("ALL_PROXY");
                    /* try { // try from 00a41a14 to 00b41a5f has its CatchHandler @ 00a41a14
                       catch() { ... } // from try @ 00a41a14 with catch @ 00a41a14
                       catch() { ... } // from try @ 00a41a64 with catch @ 00a41a14 */
          }
        }
      }
      else {
        pcVar15 = (char *)0x0;
      }
LAB_00a41a70:
      (*(code *)PTR_free_01769a00)(lVar32);
      pcVar41 = (char *)0x0;
    }
    lVar32 = *(long *)(param_1 + 0x840);
    if (lVar32 == 0) goto LAB_00a41904;
LAB_00a41a90:
    if (pcVar15 != (char *)0x0) {
                    /* catch() { ... } // from try @ 00a41a60 with catch @ 00a41a98 */
      (*(code *)PTR_free_01769a00)(pcVar15);
      lVar32 = *(long *)(param_1 + 0x840);
    }
                    /* try { // try from 00a41aac to 00b41b63 has its CatchHandler @ 00a41aac
                       catch() { ... } // from try @ 00a41aac with catch @ 00a41aac
                       catch() { ... } // from try @ 00a41be4 with catch @ 00a41aac */
    lVar32 = (*(code *)PTR_strdup_01769a10)(lVar32);
    pcVar15 = (char *)0x0;
    plVar11[0xe5] = lVar32;
    if (lVar32 == 0) goto LAB_00a40c58;
LAB_00a41ac8:
    if (pcVar41 == (char *)0x0) goto LAB_00a41b00;
LAB_00a41acc:
    if ((*pcVar41 == '\0') || ((*(byte *)(plVar11[0x80] + 0x7c) >> 4 & 1) != 0)) {
      (*(code *)PTR_free_01769a00)(pcVar41);
      goto LAB_00a41b00;
    }
    if (pcVar15 != (char *)0x0) {
      bVar6 = true;
      goto LAB_00a41b0c;
    }
LAB_00a41b5c:
                    /* try { // try from 00a41b64 to 00b41b97 has its CatchHandler @ 00a41c64 */
    iVar8 = FUN_00a44400(param_1,plVar11,pcVar41,(int)plVar11[0x28]);
    (*(code *)PTR_free_01769a00)(pcVar41);
    pcVar41 = (char *)0x0;
    if (iVar8 != 0) goto LAB_00a41b90;
LAB_00a41b98:
                    /* try { // try from 00a41b98 to 00b41bab has its CatchHandler @ 00a41c30 */
    if (plVar11[0x2b] == 0) {
      lVar32 = 0x3c9;
      *(undefined1 *)((long)plVar11 + 0x3be) = 0;
      uVar28 = 0;
    }
    else {
                    /* try { // try from 00a41bb0 to 00b41be3 has its CatchHandler @ 00a41c34 */
      if (((*(byte *)(plVar11[0x80] + 0x78) & 3) == 0) && (*(char *)((long)plVar11 + 0x3c9) == '\0')
         ) {
        plVar11[0x80] = (long)&PTR_DAT_016a3a70;
      }
      uVar28 = 1;
      lVar32 = 0x3be;
    }
    *(undefined1 *)((long)plVar11 + lVar32) = uVar28;
    uVar28 = 0;
    if (plVar11[0x23] != 0) {
                    /* try { // try from 00a41be4 to 00b41c7f has its CatchHandler @ 00a41aac */
      if ((plVar11[0x2b] == 0) && (plVar11[0x29] == 0)) {
                    /* catch() { ... } // from try @ 00a42328 with catch @ 00a42428 */
        lVar32 = plVar11[0x31];
        plVar11[0x31] = 0;
        plVar11[0x29] = lVar32;
        (*(code *)PTR_free_01769a00)(plVar11[0x2a]);
        lVar32 = plVar11[0x32];
        plVar11[0x32] = 0;
        uVar28 = 1;
        plVar11[0x2a] = lVar32;
      }
      else {
        uVar28 = 1;
      }
    }
    lVar32 = 0x3bf;
LAB_00a41bf4:
    *(undefined1 *)((long)plVar11 + lVar32) = uVar28;
    if (*(char *)((long)plVar11 + 0x3be) == '\0') {
      *(char *)((long)plVar11 + 0x3bd) = *(char *)((long)plVar11 + 0x3bf);
      if (*(char *)((long)plVar11 + 0x3bf) == '\0') {
        *(undefined2 *)((long)plVar11 + 0x3bd) = 0;
        lVar32 = 0x3c9;
        *(undefined1 *)((long)plVar11 + 0x3bf) = 0;
        *(undefined1 *)((long)plVar11 + 0x3c1) = 0;
        uVar28 = 0;
        goto LAB_00a41c08;
      }
    }
    else {
      uVar28 = 1;
      lVar32 = 0x3bd;
LAB_00a41c08:
      *(undefined1 *)((long)plVar11 + lVar32) = uVar28;
    }
    if (((*(byte *)(plVar11[0x81] + 0x7c) & 1) != 0) && (*(char *)((long)plVar11 + 0x3be) != '\0'))
    {
                    /* catch() { ... } // from try @ 00a41b98 with catch @ 00a41c30 */
                    /* catch() { ... } // from try @ 00a41bb0 with catch @ 00a41c34 */
      *(undefined1 *)((long)plVar11 + 0x3c9) = 1;
    }
    iVar8 = sscanf((char *)*plVar45,"[%*45[0123456789abcdefABCDEF:.]%c",&local_268);
    if ((iVar8 != 1) || ((char)local_268 != ']')) {
      iVar8 = inet_pton(10,(char *)*plVar45,&local_168);
      if (iVar8 < 1) {
        pcVar15 = strrchr((char *)*plVar45,0x3a);
        lVar32 = *(long *)(param_1 + 0x260);
        goto joined_r0x00a41ce0;
      }
      pcVar15 = "IPv6 numerical address used in URL without brackets";
      goto LAB_00a41d60;
    }
                    /* catch() { ... } // from try @ 00a41b64 with catch @ 00a41c64 */
    lVar32 = plVar11[0x18];
    *(undefined1 *)((long)plVar11 + 0x3c2) = 1;
    plVar11[0x18] = lVar32 + 1;
    pcVar15 = strchr((char *)(lVar32 + 1),0x5d);
    if (pcVar15 == (char *)0x0) {
      pcVar15 = (char *)0x0;
      lVar32 = *(long *)(param_1 + 0x260);
joined_r0x00a41ce0:
      if (lVar32 != 0) goto LAB_00a41cf4;
LAB_00a41d38:
      if (pcVar15 == (char *)0x0) goto LAB_00a41e98;
      plVar26 = (long *)(pcVar15 + 1);
      uVar12 = strtol((char *)plVar26,(char **)&local_168,10);
      if (0xffff < uVar12) {
        pcVar15 = "Port number out of range";
LAB_00a41d60:
        FUN_00a38a08(param_1,pcVar15);
        iVar8 = 3;
        pcVar15 = (char *)0x0;
        goto LAB_00a40c5c;
      }
      if (local_168 == plVar26) {
        if ((char)*plVar26 != '\0') {
          pcVar15 = "Illegal port number";
          goto LAB_00a41d60;
        }
        *pcVar15 = '\0';
        iVar8 = (int)plVar11[0x34];
      }
      else {
        *pcVar15 = '\0';
        uVar30 = FUN_00a2c6bc();
        *(uint *)(plVar11 + 0x34) = uVar30 & 0xffff;
        iVar8 = (int)plVar11[0x34];
      }
    }
    else {
      *pcVar15 = '\0';
      pcVar15 = pcVar15 + 1;
      if (*pcVar15 != ':') {
        pcVar15 = (char *)0x0;
      }
      lVar32 = *(long *)(param_1 + 0x260);
      if (lVar32 == 0) goto LAB_00a41d38;
LAB_00a41cf4:
      if (*(char *)(param_1 + 0x8b70) == '\0') goto LAB_00a41d38;
      *(uint *)(plVar11 + 0x34) = (uint)lVar32 & 0xffff;
      if (pcVar15 != (char *)0x0) {
        *pcVar15 = '\0';
      }
      if (*(char *)((long)plVar11 + 0x3be) != '\0') {
        local_160 = 0;
        local_168 = (long *)0x0;
        if (*(char *)((long)plVar11 + 0x3d4) != '\0') {
          if (*(char *)(param_1 + 0x613) == '\0') {
            uVar31 = 0x44;
            if (*(char *)(param_1 + 0x615) == '\0') {
              uVar31 = 0x49;
            }
          }
          else {
            uVar31 = 0x41;
          }
          FUN_00a241ac(&local_168,0xc,";type=%c",uVar31);
        }
        pcVar15 = "";
        pcVar16 = "]";
        pcVar22 = "[";
        if (*(char *)((long)plVar11 + 0x3c2) == '\0') {
          pcVar16 = pcVar15;
          pcVar22 = pcVar15;
        }
        pcVar2 = "/";
        if (*(char *)(param_1 + 0x8cc8) == '\0') {
          pcVar2 = pcVar15;
        }
        lVar32 = FUN_00a24258("%s://%s%s%s:%hu%s%s%s",*(undefined8 *)plVar11[0x81],pcVar22,
                              plVar11[0x18],pcVar16,(int)plVar11[0x34],pcVar2,*plVar42,&local_168);
        if (lVar32 == 0) {
          iVar8 = 0x1b;
          pcVar15 = (char *)0x0;
          goto LAB_00a40c5c;
        }
        if (*(char *)(param_1 + 0x910) != '\0') {
          (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x908));
          *(undefined8 *)(param_1 + 0x908) = 0;
          *(undefined1 *)(param_1 + 0x910) = 0;
        }
        *(long *)(param_1 + 0x908) = lVar32;
        *(undefined1 *)(param_1 + 0x910) = 1;
      }
LAB_00a41e98:
      iVar8 = (int)plVar11[0x34];
    }
    if (iVar8 < 0) {
      *(uint *)(plVar11 + 0x34) = (uint)*(ushort *)(plVar11[0x81] + 0x70);
    }
    if (*(long *)(param_1 + 0x7b8) != 0) {
      (*(code *)PTR_free_01769a00)(local_288);
      local_288 = (char *)(*(code *)PTR_strdup_01769a10)(*(undefined8 *)(param_1 + 0x7b8));
      if (local_288 == (char *)0x0) goto LAB_00a40c54;
    }
    if (*(long *)(param_1 + 0x7c0) != 0) {
      (*(code *)PTR_free_01769a00)(local_290);
      local_290 = (char *)(*(code *)PTR_strdup_01769a10)(*(undefined8 *)(param_1 + 0x7c0));
      if (local_290 == (char *)0x0) goto LAB_00a40c54;
    }
    if (*(long *)(param_1 + 0x7c8) != 0) {
      (*(code *)PTR_free_01769a00)(pcVar17);
      pcVar17 = (char *)(*(code *)PTR_strdup_01769a10)(*(undefined8 *)(param_1 + 0x7c8));
      if (pcVar17 == (char *)0x0) goto LAB_00a40c54;
    }
    *(undefined1 *)((long)plVar11 + 0x3cf) = 0;
    if (*(int *)(param_1 + 0x624) != 0) {
      iVar8 = FUN_00a47728(*plVar45,&local_288,&local_290,*(undefined8 *)(param_1 + 0x710));
      if (iVar8 < 1) {
        if (iVar8 < 0) goto LAB_00a40c54;
        *(undefined1 *)((long)plVar11 + 0x3cf) = 1;
        *(undefined1 *)(plVar11 + 0x78) = 1;
      }
      else {
        FUN_00a38740(param_1,"Couldn\'t find host %s in the .netrc file; using defaults\n",*plVar45)
        ;
      }
    }
    pcVar15 = local_290;
    if (((*(byte *)(plVar11[0x80] + 0x7c) >> 5 & 1) == 0) || ((char)plVar11[0x78] != '\0')) {
      lVar32 = (*(code *)PTR_strdup_01769a10)(local_288);
      plVar11[0x43] = lVar32;
      if (lVar32 == 0) goto LAB_00a4241c;
    }
    else {
                    /* catch() { ... } // from try @ 00a4235c with catch @ 00a423f4 */
                    /* catch() { ... } // from try @ 00a42374 with catch @ 00a423f8 */
      lVar32 = (*(code *)PTR_strdup_01769a10)("anonymous");
      plVar11[0x43] = lVar32;
      if (lVar32 == 0) {
LAB_00a4241c:
        pcVar15 = (char *)0x0;
        plVar11[0x44] = 0;
        goto LAB_00a40c58;
      }
      pcVar15 = "ftp@example.com";
    }
    lVar32 = (*(code *)PTR_strdup_01769a10)(pcVar15);
    pcVar15 = (char *)0x0;
    iVar8 = 0x1b;
    plVar11[0x44] = lVar32;
    if ((lVar32 == 0) || (plVar11[0x43] == 0)) goto LAB_00a40c5c;
    if (*pcVar17 != '\0') {
      lVar32 = (*(code *)PTR_strdup_01769a10)(pcVar17);
      plVar11[0x45] = lVar32;
      if (lVar32 == 0) goto LAB_00a40c54;
    }
    puVar39 = *(undefined8 **)(param_1 + 0x418);
    if (puVar39 != (undefined8 *)0x0) {
LAB_00a42394:
      pcVar15 = (char *)*puVar39;
      if (*pcVar15 == ':') {
LAB_00a4208c:
        pcVar16 = pcVar15 + 1;
        if (*pcVar16 != ':') {
          plVar26 = (long *)strchr(pcVar16,0x3a);
          if (plVar26 != (long *)0x0) {
                    /* try { // try from 00a42194 to 00b42197 has its CatchHandler @ 00a421cc */
                    /* try { // try from 00a42198 to 00b421df has its CatchHandler @ 00a42148 */
            local_168 = (long *)0x0;
            lVar32 = strtol(pcVar16,(char **)&local_168,10);
            if (((local_168 == plVar26) && (lVar32 == (int)plVar11[0x34])) &&
               (*(char *)((long)plVar26 + 1) != '\0')) goto LAB_00a420a8;
          }
          goto LAB_00a421c8;
        }
        if (pcVar15[2] == '\0') goto LAB_00a421c8;
LAB_00a420a8:
        pbVar21 = (byte *)(*(code *)PTR_strdup_01769a10)();
        if (pbVar21 != (byte *)0x0) {
          pbVar44 = pbVar21;
          local_2a0 = pbVar21;
          if (*pbVar21 == 0x5b) {
            local_2a0 = pbVar21 + 1;
            uVar30 = (uint)*local_2a0;
            pbVar43 = local_2a0;
            if (*local_2a0 != 0) {
              pbVar44 = pbVar21 + 2;
              do {
                pbVar43 = pbVar44;
                iVar8 = isxdigit(uVar30);
                if (((iVar8 == 0) && (uVar30 != 0x2e)) && (uVar30 != 0x3a)) {
                  if (uVar30 != 0x25) {
                    pbVar43 = pbVar43 + -1;
                    goto LAB_00a42380;
                  }
                  iVar8 = strncmp("%25",(char *)(pbVar43 + -1),3);
                  if (iVar8 != 0) {
                    /* try { // try from 00a42328 to 00b4235b has its CatchHandler @ 00a42428 */
                    FUN_00a38740(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
                  }
                  uVar30 = (uint)*pbVar43;
                  if (uVar30 != 0) goto LAB_00a42338;
                  break;
                }
                uVar30 = (uint)*pbVar43;
                pbVar44 = pbVar43 + 1;
              } while (uVar30 != 0);
            }
            goto LAB_00a42114;
          }
          goto LAB_00a42124;
        }
      }
      else {
                    /* try { // try from 00a423a8 to 00b42443 has its CatchHandler @ 00a421e0 */
        bVar6 = *(char *)((long)plVar11 + 0x3c2) == '\0';
        pcVar16 = "[";
        if (bVar6) {
          pcVar16 = "";
        }
        pcVar22 = "]";
        if (bVar6) {
          pcVar22 = "";
        }
        pcVar16 = (char *)FUN_00a24258("%s%s%s",pcVar16,plVar11[0x18],pcVar22);
        if (pcVar16 != (char *)0x0) {
          sVar13 = strlen(pcVar16);
          iVar8 = FUN_00a4a220(pcVar15,pcVar16,sVar13);
          (*(code *)PTR_free_01769a00)(pcVar16);
          if ((iVar8 != 0) && (pcVar15 = pcVar15 + sVar13, *pcVar15 == ':')) goto LAB_00a4208c;
LAB_00a421c8:
          pcVar15 = (char *)0x0;
          uVar12 = 0xffffffff;
          goto LAB_00a421cc;
        }
      }
      goto LAB_00a40c54;
    }
LAB_00a4245c:
    pcVar15 = (char *)plVar11[0x18];
    lVar32 = *plVar11;
    plVar11[0x19] = (long)pcVar15;
    sVar13 = strlen(pcVar15);
    if ((sVar13 != 0) && (pcVar15[sVar13 - 1] == '.')) {
      pcVar15[sVar13 - 1] = '\0';
      pcVar15 = (char *)*plVar45;
    }
    do {
      cVar29 = *pcVar15;
      if (cVar29 == '\0') goto LAB_00a424b8;
      pcVar15 = pcVar15 + 1;
    } while (-1 < cVar29);
    FUN_00a38740(lVar32,"IDN support not present, can\'t parse Unicode domains\n");
LAB_00a424b8:
    if (*(char *)((long)plVar11 + 0x3bb) != '\0') {
      pcVar15 = (char *)plVar11[0x1d];
      lVar32 = *plVar11;
      plVar11[0x1e] = (long)pcVar15;
      sVar13 = strlen(pcVar15);
      if ((sVar13 != 0) && (pcVar15[sVar13 - 1] == '.')) {
        pcVar15[sVar13 - 1] = '\0';
        pcVar15 = (char *)plVar11[0x1d];
      }
      do {
        cVar29 = *pcVar15;
        if (cVar29 == '\0') goto LAB_00a42510;
        pcVar15 = pcVar15 + 1;
      } while (-1 < cVar29);
      FUN_00a38740(lVar32,"IDN support not present, can\'t parse Unicode domains\n");
    }
LAB_00a42510:
    pcVar15 = (char *)plVar11[0x21];
    if ((pcVar15 != (char *)0x0) && (*pcVar15 != '\0')) {
      lVar32 = *plVar11;
      plVar11[0x22] = (long)pcVar15;
      sVar13 = strlen(pcVar15);
      if ((sVar13 != 0) && (pcVar15[sVar13 - 1] == '.')) {
        pcVar15[sVar13 - 1] = '\0';
        pcVar15 = (char *)plVar11[0x21];
      }
      do {
        cVar29 = *pcVar15;
        if (cVar29 == '\0') goto LAB_00a4256c;
        pcVar15 = pcVar15 + 1;
      } while (-1 < cVar29);
      FUN_00a38740(lVar32,"IDN support not present, can\'t parse Unicode domains\n");
    }
LAB_00a4256c:
    if ((*(char *)((long)plVar11 + 0x3bb) != '\0') &&
       (iVar8 = FUN_00a4a0f8(plVar11[0x1d],plVar11[0x18]), iVar8 != 0)) {
      *(undefined1 *)((long)plVar11 + 0x3bb) = 0;
    }
    if (*(char *)((long)plVar11 + 0x3bc) == '\0') {
LAB_00a425a4:
      bVar6 = true;
      if (*(char *)((long)plVar11 + 0x3bb) != '\0') goto LAB_00a425d8;
LAB_00a425d4:
      if (!bVar6) goto LAB_00a425d8;
    }
    else {
      if (*(int *)((long)plVar11 + 0x1a4) == (int)plVar11[0x34]) {
        *(undefined1 *)((long)plVar11 + 0x3bc) = 0;
        goto LAB_00a425a4;
      }
      bVar6 = false;
      if (*(char *)((long)plVar11 + 0x3bb) == '\0') goto LAB_00a425d4;
LAB_00a425d8:
      if (*(char *)((long)plVar11 + 0x3be) != '\0') {
        *(undefined1 *)((long)plVar11 + 0x3c9) = 1;
      }
    }
    lVar32 = *plVar11;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar32 + 0x218));
    *(undefined8 *)(lVar32 + 0x218) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar32 + 0x1f8));
    memset((void *)(lVar32 + 0x78),0,0x1a8);
    *(undefined8 *)(lVar32 + 0x88) = 0xffffffffffffffff;
    lVar32 = plVar11[0x80];
    *(undefined4 *)((long)plVar11 + 0xac) = 1;
    if (*(code **)(lVar32 + 8) != (code *)0x0) {
      iVar8 = (**(code **)(lVar32 + 8))(plVar11);
      if (iVar8 != 0) goto LAB_00a41b3c;
      lVar32 = plVar11[0x80];
    }
    if (plVar11[0x33] < 0) {
      plVar11[0x33] = *(long *)(lVar32 + 0x70);
    }
    plVar11[0x50] = (long)FUN_00a38e5c;
    plVar11[0x4f] = (long)FUN_00a38e5c;
    plVar11[0x52] = (long)FUN_00a38d40;
    plVar11[0x51] = (long)FUN_00a38d40;
    *(undefined1 *)((long)plVar11 + 0x3d6) = *(undefined1 *)(param_1 + 0x8d0);
    if ((*(byte *)(lVar32 + 0x7c) >> 4 & 1) != 0) {
      iVar8 = (**(code **)(lVar32 + 0x28))(plVar11,&local_168);
      if (iVar8 == 0) {
        *plVar11 = param_1;
        *(undefined1 *)((long)plVar11 + 0x3c5) = 1;
        FUN_00a2c844(*(undefined8 *)(param_1 + 0xad0),plVar11);
        lVar32 = *(long *)(param_1 + 0x3b0);
        *(long *)(param_1 + 0x8cd8) = lVar32;
                    /* try { // try from 00a428b0 to 00b428b3 has its CatchHandler @ 00a428e8 */
        if ((lVar32 != 0) || (uVar28 = 0, *(long *)(param_1 + 0x728) != 0)) {
                    /* try { // try from 00a428b4 to 00b428fb has its CatchHandler @ 00a42864 */
          if (*(char *)(param_1 + 0x8cca) != '\0') {
            (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x8cd0));
            lVar32 = *(long *)(param_1 + 0x8cd8);
          }
          if (lVar32 == 0) {
            lVar32 = (*(code *)PTR_strdup_01769a10)(*(undefined8 *)(param_1 + 0x728));
          }
          else {
                    /* catch() { ... } // from try @ 00a428b0 with catch @ 00a428e8 */
            lVar32 = FUN_00a24258(&DAT_013c5878);
          }
          *(long *)(param_1 + 0x8cd0) = lVar32;
          *(char *)(param_1 + 0x8cca) = lVar32 != 0;
          if (lVar32 == 0) {
            iVar8 = 0x1b;
            (**(code **)(plVar11[0x80] + 0x18))(plVar11,0x1b,0);
            pcVar15 = (char *)0x0;
            goto LAB_00a40c5c;
          }
          uVar28 = 1;
        }
        *(undefined1 *)(param_1 + 0x8cc9) = uVar28;
        FUN_00a49fc0(plVar11,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
        iVar8 = 0;
      }
      *(undefined1 *)((long)plVar11 + 0x3c4) = 0;
      *(undefined1 *)(param_1 + 0x8d08) = 0;
      *(undefined1 *)(param_1 + 0x8ca8) = 0;
      if (*(char *)(param_1 + 0x620) == '\0') {
        if (*(int *)(param_1 + 0x430) == 5) {
          uVar31 = 1;
          goto LAB_00a429d4;
        }
      }
      else {
        uVar31 = 5;
LAB_00a429d4:
        *(undefined4 *)(param_1 + 0x430) = uVar31;
      }
      auVar46 = FUN_00a2e828();
      *(undefined1 (*) [16])(param_1 + 0xb8) = auVar46;
      *(undefined1 *)(param_1 + 0xd8) = 1;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(long *)(param_1 + 0x1d0) = param_1 + 0xb08;
      *(long *)(param_1 + 0x1d8) = param_1 + 0x4b09;
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xaf8);
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xc0);
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xb8);
      *(undefined1 *)(param_1 + 0x1e9) = 0;
      FUN_00a450d4(param_1);
      FUN_00a3112c(param_1,0);
                    /* try { // try from 00a42a2c to 00b42a5f has its CatchHandler @ 00a42b2c */
      FUN_00a31094(param_1,0);
      pcVar15 = (char *)0x0;
      goto LAB_00a40c5c;
    }
    *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(param_1 + 0x748);
    *(undefined8 *)(param_1 + 0x458) = *(undefined8 *)(param_1 + 0x750);
    *(undefined8 *)(param_1 + 0x510) = *(undefined8 *)(param_1 + 0x758);
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
    *(undefined8 *)(param_1 + 0x578) = *(undefined8 *)(param_1 + 0x688);
    *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)(param_1 + 0x6d8);
    *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)(param_1 + 0x798);
    *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(param_1 + 0x6e0);
    *(undefined8 *)(param_1 + 0x4d0) = *(undefined8 *)(param_1 + 0x6f8);
    *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(param_1 + 0x700);
    *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(param_1 + 0x6e8);
    *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_1 + 0x6f0);
    *(undefined8 *)(param_1 + 0x4b8) = *(undefined8 *)(param_1 + 0x670);
    *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_1 + 0x670);
    *(undefined8 *)(param_1 + 0x570) = *(undefined8 *)(param_1 + 0x678);
    *(undefined8 *)(param_1 + 0x518) = *(undefined8 *)(param_1 + 0x678);
    plVar26 = plVar11 + 0x67;
    *(undefined8 *)(param_1 + 0x4e0) = *(undefined8 *)(param_1 + 0x818);
    *(undefined8 *)(param_1 + 0x598) = *(undefined8 *)(param_1 + 0x820);
    *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(param_1 + 0x828);
    *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x830);
    uVar12 = FUN_00a2d374(param_1 + 0x440);
    if ((uVar12 & 1) != 0) {
      uVar12 = FUN_00a2d374(param_1 + 0x4f8);
      if ((uVar12 & 1) != 0) {
        auVar46 = FUN_00a2e828();
        lVar32 = FUN_00a2e888(auVar46._0_8_,auVar46._8_8_,
                              *(undefined8 *)(*(long *)(param_1 + 0xad0) + 0x40),
                              *(undefined8 *)(*(long *)(param_1 + 0xad0) + 0x48));
        if (999 < lVar32) {
          FUN_00a2cb80(*(undefined8 *)(param_1 + 0xad0),param_1,FUN_00a448ac);
          *(undefined1 (*) [16])(*(long *)(param_1 + 0xad0) + 0x40) = auVar46;
        }
        if ((*(char *)(param_1 + 0x62b) != '\0') &&
           (bVar6 = false, *(char *)(param_1 + 0x8b18) == '\0')) goto LAB_00a43980;
        if ((((*(byte *)(plVar11[0x80] + 0x78) & 3) == 0) ||
            ((*(char *)((long)plVar11 + 0x3c7) != '\0' && (*(char *)((long)plVar11 + 0x3b9) != '\0')
             ))) || (((uVar12 = FUN_00a27f7c(*(undefined8 *)(param_1 + 0x60),1), (uVar12 & 1) == 0
                      || ((*(long *)(param_1 + 0x438) == 1 ||
                          ((*(uint *)(param_1 + 0x430) | 4) != 5)))) &&
                     ((uVar12 = FUN_00a27f7c(*(undefined8 *)(param_1 + 0x60),2), (uVar12 & 1) == 0
                      || (*(long *)(param_1 + 0x438) < 3)))))) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
                    /* try { // try from 00a42864 to 00b428af has its CatchHandler @ 00a42864
                       catch() { ... } // from try @ 00a42864 with catch @ 00a42864
                       catch() { ... } // from try @ 00a428b4 with catch @ 00a42864 */
        }
        if ((*(byte *)(param_1 + 0x8bf8) & 0x28) == 0) {
          bVar5 = false;
                    /* try { // try from 00a42a60 to 00b42a73 has its CatchHandler @ 00a42af8 */
          if (*(char *)((long)plVar11 + 0x3c1) != '\0') goto LAB_00a42a68;
LAB_00a42a9c:
          bVar7 = false;
          if (bVar6) goto LAB_00a42aa4;
LAB_00a42a94:
          uVar30 = 0;
        }
        else {
          bVar5 = (*(byte *)(plVar11[0x80] + 0x78) & 3) != 0;
          if (*(char *)((long)plVar11 + 0x3c1) == '\0') goto LAB_00a42a9c;
LAB_00a42a68:
                    /* try { // try from 00a42a78 to 00b42aab has its CatchHandler @ 00a42afc */
          if ((*(byte *)(param_1 + 0x8c18) & 0x28) == 0) goto LAB_00a42a9c;
          bVar7 = (*(byte *)(plVar11[0x80] + 0x78) & 3) != 0;
          if (!bVar6) goto LAB_00a42a94;
LAB_00a42aa4:
                    /* try { // try from 00a42aac to 00b42b47 has its CatchHandler @ 00a428fc */
          uVar30 = FUN_00a2ce10(param_1,plVar11);
          uVar30 = uVar30 ^ 1;
        }
        piVar23 = (int *)FUN_00a2c798(plVar11,*(undefined8 *)(param_1 + 0xad0));
        if (piVar23 == (int *)0x0) goto LAB_00a4397c;
        iVar8 = *piVar23;
        if ((iVar8 == 2) || (*(long *)(param_1 + 0x60) == 0)) {
          local_308 = 0;
        }
        else {
          local_308 = *(ulong *)(*(long *)(param_1 + 0x60) + 0x138);
        }
                    /* catch() { ... } // from try @ 00a42a60 with catch @ 00a42af8 */
                    /* catch() { ... } // from try @ 00a42a78 with catch @ 00a42afc */
        plVar42 = plVar45;
        if (*(char *)((long)plVar11 + 0x3bb) != '\0') {
          plVar42 = plVar11 + 0x1d;
        }
        pcVar15 = "can multiplex";
        if (iVar8 != 2) {
          pcVar15 = "serially";
        }
        pcVar16 = "can pipeline";
                    /* catch() { ... } // from try @ 00a42a2c with catch @ 00a42b2c */
        if (iVar8 != 1) {
          pcVar16 = pcVar15;
        }
        FUN_00a38740(param_1,"Found bundle for host %s: %p [%s]\n",*plVar42,piVar23,pcVar16);
        if ((uVar30 & 1) == 0) {
LAB_00a42bd4:
          bVar6 = false;
        }
        else {
          iVar8 = *piVar23;
          if (0 < iVar8) {
            bVar6 = true;
            if (iVar8 != 1) goto LAB_00a42ba0;
LAB_00a42b8c:
            uVar12 = FUN_00a27f7c(*(undefined8 *)(param_1 + 0x60),1);
            if ((uVar12 & 1) != 0) {
              iVar8 = *piVar23;
              goto LAB_00a42ba0;
            }
            pcVar15 = "Could pipeline, but not asked to!\n";
LAB_00a42bcc:
            FUN_00a38740(param_1,pcVar15);
            goto LAB_00a42bd4;
          }
                    /* try { // try from 00a43dc4 to 00b43dc7 has its CatchHandler @ 00a43dfc */
          if ((iVar8 == 0) && (*(char *)(param_1 + 0x8e3) != '\0')) {
                    /* try { // try from 00a43dc8 to 00b43e0f has its CatchHandler @ 00a43d78 */
            pcVar15 = "Server doesn\'t support multi-use yet, wait\n";
            goto LAB_00a43dd0;
          }
          FUN_00a38740(param_1,"Server doesn\'t support multi-use (yet)\n");
          iVar8 = *piVar23;
          bVar6 = false;
          if (iVar8 == 1) goto LAB_00a42b8c;
LAB_00a42ba0:
          if ((iVar8 == 2) &&
             (uVar12 = FUN_00a27f7c(*(undefined8 *)(param_1 + 0x60),2), (uVar12 & 1) == 0)) {
            pcVar15 = "Could multiplex, but not asked to!\n";
            goto LAB_00a42bcc;
          }
        }
        puVar39 = (undefined8 *)**(undefined8 **)(piVar23 + 4);
        if (puVar39 != (undefined8 *)0x0) {
          plVar42 = plVar11 + 0x43;
          plVar1 = plVar11 + 0x31;
          bVar4 = false;
          local_2f8 = (long *)0x0;
          local_340 = local_308;
LAB_00a42c30:
          plVar33 = (long *)*puVar39;
          puVar39 = (undefined8 *)puVar39[2];
          if ((*(long *)(plVar33[0x8f] + 0x18) + *(long *)(plVar33[0x90] + 0x18) == 0) &&
             ((char)plVar33[9] == '\0')) {
            if ((*(byte *)(plVar33[0x80] + 0x7a) >> 2 & 1) != 0) {
              uVar12 = FUN_00a55d88(plVar33);
              if ((uVar12 & 1) != 0) goto LAB_00a42dc4;
              goto LAB_00a42c5c;
            }
            iVar8 = FUN_00a2b3d0((int)plVar33[0x4c],0xffffffff,0xffffffff,0);
            if (iVar8 == 0) goto LAB_00a42c5c;
LAB_00a42dc4:
            *plVar33 = param_1;
            FUN_00a38740(param_1,"Connection %ld seems to be dead!\n",plVar33[10]);
                    /* catch() { ... } // from try @ 00a42da4 with catch @ 00a42ddc */
            FUN_00a3fd90(plVar33,1);
          }
          else {
LAB_00a42c5c:
            puVar34 = (undefined8 *)plVar33[0x90];
            uVar12 = puVar34[3] + ((undefined8 *)plVar33[0x8f])[3];
            if (!bVar6) {
              if (uVar12 == 0) {
                cVar29 = *(char *)((long)plVar33 + 0x3b9);
                if ((int)plVar33[0x4c] != -1) {
                  if (cVar29 == '\0') goto LAB_00a42c98;
                  cVar29 = '\x01';
                }
                if (cVar29 == '\0') {
                  bVar4 = true;
                }
                FUN_00a38740(param_1,"Connection #%ld isn\'t open enough, can\'t reuse\n",
                             plVar33[10]);
              }
              goto joined_r0x00a42d2c;
            }
            cVar29 = *(char *)((long)plVar33 + 0x3c7);
            if ((cVar29 != '\0') && (*(char *)((long)plVar33 + 0x3b9) != '\0'))
            goto joined_r0x00a42d2c;
            if (*(char *)((long)plVar33 + 0x3d5) == '\0') {
              plVar36 = *(long **)plVar33[0x8f];
              if (plVar36 == (long *)0x0) {
                lVar32 = 0;
                plVar36 = (long *)*puVar34;
                if (plVar36 != (long *)0x0) goto LAB_00a42d48;
LAB_00a42e58:
                lVar25 = 0;
              }
              else {
                lVar32 = *plVar36;
                plVar36 = (long *)*puVar34;
                if (plVar36 == (long *)0x0) goto LAB_00a42e58;
LAB_00a42d48:
                lVar25 = *plVar36;
              }
              if (lVar32 == 0) {
                if (lVar25 == 0) goto LAB_00a42c98;
                if (((*(byte *)(plVar33[0x80] + 0x78) & 3) != 0) &&
                   ((cVar29 == '\0' || (*(char *)((long)plVar33 + 0x3b9) == '\0')))) {
                  uVar24 = FUN_00a27f7c(*(undefined8 *)(lVar25 + 0x60),1);
                  if (((uVar24 & 1) != 0) &&
                     ((*(long *)(lVar25 + 0x438) != 1 && ((*(uint *)(lVar25 + 0x430) | 4) == 5))))
                  goto LAB_00a42c98;
                  uVar24 = FUN_00a27f7c(*(undefined8 *)(lVar25 + 0x60),2);
                  if ((uVar24 & 1) != 0) {
                    lVar32 = *(long *)(lVar25 + 0x438);
                    goto joined_r0x00a42db0;
                  }
                }
              }
              else {
                    /* try { // try from 00a42d58 to 00b42da3 has its CatchHandler @ 00a42d58
                       catch() { ... } // from try @ 00a42d58 with catch @ 00a42d58
                       catch() { ... } // from try @ 00a42da8 with catch @ 00a42d58 */
                if (((*(byte *)(plVar33[0x80] + 0x78) & 3) != 0) &&
                   ((cVar29 == '\0' || (*(char *)((long)plVar33 + 0x3b9) == '\0')))) {
                  uVar24 = FUN_00a27f7c(*(undefined8 *)(lVar32 + 0x60),1);
                  if (((uVar24 & 1) != 0) &&
                     ((*(long *)(lVar32 + 0x438) != 1 && ((*(uint *)(lVar32 + 0x430) | 4) == 5))))
                  goto LAB_00a42c98;
                  uVar24 = FUN_00a27f7c(*(undefined8 *)(lVar32 + 0x60),2);
                    /* try { // try from 00a42da4 to 00b42da7 has its CatchHandler @ 00a42ddc */
                  if ((uVar24 & 1) != 0) {
                    /* try { // try from 00a42da8 to 00b42def has its CatchHandler @ 00a42d58 */
                    lVar32 = *(long *)(lVar32 + 0x438);
joined_r0x00a42db0:
                    if (2 < lVar32) goto LAB_00a42c98;
                  }
                }
              }
              goto joined_r0x00a42d2c;
            }
LAB_00a42c98:
            pcVar15 = (char *)plVar33[0xe5];
            if ((char *)plVar11[0xe5] == (char *)0x0) {
                    /* try { // try from 00a42df0 to 00b42ed7 has its CatchHandler @ 00a42df0
                       catch() { ... } // from try @ 00a42df0 with catch @ 00a42df0
                       catch() { ... } // from try @ 00a42f58 with catch @ 00a42df0 */
              if (pcVar15 == (char *)0x0) goto LAB_00a42df4;
              goto joined_r0x00a42d2c;
            }
            if ((pcVar15 == (char *)0x0) ||
               (iVar8 = strcmp((char *)plVar11[0xe5],pcVar15), iVar8 != 0)) goto joined_r0x00a42d2c;
LAB_00a42df4:
            if (((*(uint *)(plVar33[0x80] + 0x7c) ^ *(uint *)(plVar11[0x80] + 0x7c)) & 1) != 0) {
              iVar8 = *(int *)(plVar33[0x80] + 0x78);
              iVar35 = iVar8;
              if (iVar8 < 0x4000) {
                if (iVar8 < 0x80) {
                  iVar35 = 1;
                  switch(iVar8) {
                  case 1:
                  case 2:
                    break;
                  default:
                    goto switchD_00a42e40_caseD_3;
                  case 4:
                  case 8:
                    iVar35 = 4;
                    break;
                  case 0x10:
                  case 0x20:
                  case 0x40:
switchD_00a42e40_caseD_10:
                    iVar35 = iVar8;
                  }
                }
                else if (iVar8 < 0x400) {
                  if ((iVar8 == 0x80) || (iVar8 == 0x100)) {
                    iVar35 = 0x80;
                  }
                  else if (iVar8 != 0x200) goto switchD_00a42e40_caseD_3;
                }
                else if (iVar8 < 0x1000) {
                    /* try { // try from 00a42f0c to 00b42f1f has its CatchHandler @ 00a42fa4 */
                  if (iVar8 == 0x400) goto switchD_00a42e40_caseD_10;
                  if (iVar8 != 0x800) goto switchD_00a42e40_caseD_3;
                }
                else {
                    /* catch() { ... } // from try @ 00a42ed8 with catch @ 00a42fd8 */
                  if ((iVar8 != 0x1000) && (iVar8 != 0x2000)) goto switchD_00a42e40_caseD_3;
                  iVar35 = 0x1000;
                }
              }
              else if (iVar8 < 0x200000) {
                    /* try { // try from 00a42ed8 to 00b42f0b has its CatchHandler @ 00a42fd8 */
                if (iVar8 < 0x20000) {
                  if ((iVar8 == 0x4000) || (iVar8 == 0x8000)) {
                    iVar35 = 0x4000;
                  }
                  else {
                    if (iVar8 == 0x10000) goto LAB_00a42f74;
switchD_00a42e40_caseD_3:
                    iVar35 = 0;
                  }
                }
                else if (iVar8 < 0x80000) {
                  if (iVar8 == 0x20000) {
LAB_00a42f74:
                    iVar35 = 0x10000;
                  }
                  else if (iVar8 != 0x40000) goto switchD_00a42e40_caseD_3;
                }
                else {
                  if (iVar8 != 0x80000) {
                    if (iVar8 == 0x100000) goto LAB_00a42fd0;
                    goto switchD_00a42e40_caseD_3;
                  }
LAB_00a43020:
                  iVar35 = 0x80000;
                }
              }
              else {
                    /* try { // try from 00a42f24 to 00b42f57 has its CatchHandler @ 00a42fa8 */
                if (iVar8 < 0x1000000) {
                  if (iVar8 == 0x200000) goto switchD_00a42e40_caseD_10;
                    /* catch() { ... } // from try @ 00a42f0c with catch @ 00a42fa4 */
                    /* catch() { ... } // from try @ 00a42f24 with catch @ 00a42fa8 */
                  if (iVar8 != 0x400000) {
                    if (iVar8 == 0x800000) goto LAB_00a43020;
                    goto switchD_00a42e40_caseD_3;
                  }
                }
                else if (iVar8 < 0x4000000) {
                  if (iVar8 == 0x1000000) {
LAB_00a42fd0:
                    iVar35 = 0x100000;
                  }
                  else if (iVar8 != 0x2000000) goto switchD_00a42e40_caseD_3;
                }
                else {
                  if ((iVar8 != 0x4000000) && (iVar8 != 0x8000000)) goto switchD_00a42e40_caseD_3;
                  iVar35 = 0x4000000;
                }
              }
              if ((iVar35 != *(int *)(plVar11[0x80] + 0x78)) || ((char)plVar33[0x77] == '\0'))
              goto joined_r0x00a42d2c;
            }
            if ((((*(char *)((long)plVar11 + 0x3be) != *(char *)((long)plVar33 + 0x3be)) ||
                 (*(char *)((long)plVar11 + 0x3bf) != *(char *)((long)plVar33 + 0x3bf))) ||
                ((*(char *)((long)plVar11 + 0x3bf) != '\0' &&
                 (((((int)plVar11[0x28] != (int)plVar33[0x28] || (plVar11[0x27] != plVar33[0x27]))
                   || (iVar8 = FUN_00a4a180(plVar11[0x25],plVar33[0x25]), iVar8 == 0)) ||
                  ((iVar8 = FUN_00a4a180(plVar11[0x29],plVar33[0x29]), iVar8 == 0 ||
                   (iVar8 = FUN_00a4a180(plVar11[0x2a],plVar33[0x2a]), iVar8 == 0)))))))) ||
               ((*(char *)((long)plVar11 + 0x3bb) != *(char *)((long)plVar33 + 0x3bb) ||
                (*(char *)((long)plVar11 + 0x3bc) != *(char *)((long)plVar33 + 0x3bc)))))
            goto joined_r0x00a42d2c;
            if (*(char *)((long)plVar11 + 0x3be) != '\0') {
              if ((((int)plVar11[0x30] == (int)plVar33[0x30]) && (plVar11[0x2f] == plVar33[0x2f]))
                 && ((iVar8 = FUN_00a4a180(plVar11[0x2d],plVar33[0x2d]), iVar8 != 0 &&
                     (((iVar8 = FUN_00a4a180(*plVar1,plVar33[0x31]), iVar8 != 0 &&
                       (iVar8 = FUN_00a4a180(plVar11[0x32],plVar33[0x32]), iVar8 != 0)) &&
                      (*(char *)((long)plVar11 + 0x3c9) == *(char *)((long)plVar33 + 0x3c9))))))) {
                if ((int)plVar11[0x30] != 2) goto LAB_00a43198;
                if ((*(byte *)(plVar11[0x80] + 0x7c) & 1) == 0) {
                  uVar24 = FUN_00a2d2d8(plVar26,plVar33 + 0x67);
                  if ((uVar24 & 1) != 0) {
                    iVar8 = *(int *)((long)plVar33 + 0x29c);
joined_r0x00a43194:
                    if (iVar8 == 2) goto LAB_00a43198;
                  }
                }
                else {
                  uVar24 = FUN_00a2d2d8(plVar11 + 0x6f,plVar33 + 0x6f);
                  if ((uVar24 & 1) != 0) {
                    iVar8 = *(int *)((long)plVar33 + 0x2ec);
                    goto joined_r0x00a43194;
                  }
                }
              }
              goto joined_r0x00a42d2c;
            }
LAB_00a43198:
            if ((!bVar6) && ((char)plVar33[9] != '\0')) goto joined_r0x00a42d2c;
            pcVar15 = (char *)plVar11[0xe0];
            if (((pcVar15 != (char *)0x0) || ((short)plVar11[0xe1] != 0)) &&
               ((((short)plVar33[0xe1] != (short)plVar11[0xe1] ||
                 (*(int *)((long)plVar33 + 0x70c) != *(int *)((long)plVar11 + 0x70c))) ||
                ((pcVar15 != (char *)0x0 &&
                 (((char *)plVar33[0xe0] == (char *)0x0 ||
                  (iVar8 = strcmp((char *)plVar33[0xe0],pcVar15), iVar8 != 0))))))))
            goto joined_r0x00a42d2c;
            puVar34 = (undefined8 *)plVar11[0x80];
            uVar30 = *(uint *)((long)puVar34 + 0x7c);
            if (((uVar30 >> 7 & 1) == 0) &&
               ((iVar8 = strcmp((char *)*plVar42,(char *)plVar33[0x43]), iVar8 != 0 ||
                (iVar8 = strcmp((char *)plVar11[0x44],(char *)plVar33[0x44]), iVar8 != 0))))
            goto joined_r0x00a42d2c;
            if (((uVar30 & 1) != 0) ||
               ((*(char *)((long)plVar11 + 0x3be) == '\0' ||
                (*(char *)((long)plVar11 + 0x3c9) != '\0')))) {
              iVar8 = FUN_00a4a0f8(*puVar34,*(undefined8 *)plVar33[0x80]);
              if (iVar8 == 0) {
                iVar8 = *(int *)(plVar33[0x80] + 0x78);
                iVar35 = iVar8;
                if (iVar8 < 0x4000) {
                  if (iVar8 < 0x80) {
                    iVar35 = 1;
                    switch(iVar8) {
                    case 1:
                    case 2:
                      break;
                    default:
                      goto switchD_00a4332c_caseD_3;
                    case 4:
                    case 8:
                      iVar35 = 4;
                      break;
                    case 0x10:
                    case 0x20:
                    case 0x40:
switchD_00a4332c_caseD_10:
                      iVar35 = iVar8;
                    }
                  }
                  else if (iVar8 < 0x400) {
                    if ((iVar8 == 0x80) || (iVar8 == 0x100)) {
                      iVar35 = 0x80;
                    }
                    else if (iVar8 != 0x200) goto switchD_00a4332c_caseD_3;
                  }
                  else if (iVar8 < 0x1000) {
                    if (iVar8 == 0x400) goto switchD_00a4332c_caseD_10;
                    if (iVar8 != 0x800) goto switchD_00a4332c_caseD_3;
                  }
                  else {
                    if ((iVar8 != 0x1000) && (iVar8 != 0x2000)) goto switchD_00a4332c_caseD_3;
                    iVar35 = 0x1000;
                  }
                }
                else if (iVar8 < 0x200000) {
                  if (iVar8 < 0x20000) {
                    if ((iVar8 == 0x4000) || (iVar8 == 0x8000)) {
                      iVar35 = 0x4000;
                    }
                    else {
                      if (iVar8 == 0x10000) goto LAB_00a43424;
switchD_00a4332c_caseD_3:
                      iVar35 = 0;
                    }
                  }
                  else if (iVar8 < 0x80000) {
                    if (iVar8 == 0x20000) {
LAB_00a43424:
                      iVar35 = 0x10000;
                    }
                    else if (iVar8 != 0x40000) goto switchD_00a4332c_caseD_3;
                  }
                  else {
                    if (iVar8 != 0x80000) {
                      if (iVar8 == 0x100000) goto LAB_00a434bc;
                      goto switchD_00a4332c_caseD_3;
                    }
LAB_00a4350c:
                    iVar35 = 0x80000;
                  }
                }
                else if (iVar8 < 0x1000000) {
                  if (iVar8 == 0x200000) goto switchD_00a4332c_caseD_10;
                  if (iVar8 != 0x400000) {
                    if (iVar8 == 0x800000) goto LAB_00a4350c;
                    goto switchD_00a4332c_caseD_3;
                  }
                }
                else if (iVar8 < 0x4000000) {
                  if (iVar8 == 0x1000000) {
LAB_00a434bc:
                    iVar35 = 0x100000;
                  }
                  else if (iVar8 != 0x2000000) goto switchD_00a4332c_caseD_3;
                }
                else {
                  if ((iVar8 != 0x4000000) && (iVar8 != 0x8000000)) goto switchD_00a4332c_caseD_3;
                  iVar35 = 0x4000000;
                }
                if ((iVar35 != *(int *)(plVar11[0x80] + 0x78)) || ((char)plVar33[0x77] == '\0'))
                goto joined_r0x00a42d2c;
              }
              if (((*(char *)((long)plVar11 + 0x3bb) == '\0') ||
                  (iVar8 = FUN_00a4a0f8(plVar11[0x1d],plVar33[0x1d]), iVar8 != 0)) &&
                 ((((*(char *)((long)plVar11 + 0x3bc) == '\0' ||
                    (*(int *)((long)plVar11 + 0x1a4) == *(int *)((long)plVar33 + 0x1a4))) &&
                   (iVar8 = FUN_00a4a0f8(*plVar45,plVar33[0x18]), iVar8 != 0)) &&
                  ((int)plVar11[0x34] == (int)plVar33[0x34])))) {
                if ((*(byte *)(plVar11[0x80] + 0x7c) & 1) == 0) goto LAB_00a43290;
                uVar24 = FUN_00a2d2d8(plVar26,plVar33 + 0x67);
                if ((uVar24 & 1) == 0) goto joined_r0x00a42d2c;
                if (*(int *)((long)plVar33 + 0x29c) == 2) goto LAB_00a43290;
                bVar4 = true;
                uVar12 = local_340;
                plVar33 = local_2f8;
                goto joined_r0x00a435b0;
              }
              goto joined_r0x00a42d2c;
            }
LAB_00a43290:
            if (bVar5) {
              iVar8 = strcmp((char *)*plVar42,(char *)plVar33[0x43]);
              if (iVar8 != 0) goto joined_r0x00a42d2c;
              iVar8 = strcmp((char *)plVar11[0x44],(char *)plVar33[0x44]);
            }
            else {
              iVar8 = (int)plVar33[0x96];
            }
            if (iVar8 != 0) goto joined_r0x00a42d2c;
            if (!bVar7) {
              if ((int)plVar33[0x9a] != 0) goto joined_r0x00a42d2c;
              if (bVar5) goto LAB_00a43484;
              if (uVar12 == 0 || (bool)(bVar6 ^ 1)) goto LAB_00a435e8;
              if (uVar12 < local_308 || local_308 == 0) {
                uVar24 = FUN_00a2cc48(param_1,plVar33);
                if ((uVar24 & 1) == 0) {
                  if (local_308 == 0) {
                    /* try { // try from 00a43f2c to 00b43f3f has its CatchHandler @ 00a43fc4 */
                    FUN_00a38740(param_1,"Multiplexed connection found!\n");
                    goto LAB_00a435e8;
                  }
                  if (local_340 <= uVar12) goto joined_r0x00a42d2c;
                }
                else {
                  FUN_00a38740(param_1,"Penalized, skip\n");
                  uVar12 = local_340;
                  plVar33 = local_2f8;
                }
              }
              else {
                FUN_00a38740(param_1,"Pipe is full, skip (%zu)\n",uVar12);
                uVar12 = local_340;
                plVar33 = local_2f8;
              }
              goto joined_r0x00a435b0;
            }
            if ((((char *)plVar33[0x31] != (char *)0x0) &&
                (pcVar15 = (char *)plVar33[0x32], pcVar15 != (char *)0x0)) &&
               ((iVar8 = strcmp((char *)*plVar1,(char *)plVar33[0x31]), iVar8 == 0 &&
                (iVar8 = strcmp((char *)plVar11[0x32],pcVar15), iVar8 == 0)))) {
LAB_00a43484:
              local_2f8 = plVar33;
              if ((!bVar5) || ((int)plVar33[0x96] == 0)) {
                uVar12 = local_340;
                if (!bVar7) goto joined_r0x00a435b0;
                if ((int)plVar33[0x9a] == 0) goto joined_r0x00a42d2c;
              }
              goto LAB_00a436d4;
            }
          }
joined_r0x00a42d2c:
          uVar12 = local_340;
          plVar33 = local_2f8;
joined_r0x00a435b0:
          local_2f8 = plVar33;
          local_340 = uVar12;
          if (puVar39 == (undefined8 *)0x0) goto LAB_00a435e0;
          goto LAB_00a42c30;
        }
        goto LAB_00a4397c;
      }
    }
    goto LAB_00a40c54;
  }
  (*(code *)PTR_free_01769a00)(*plVar26);
  pcVar17 = (char *)0x0;
  pcVar41 = (char *)0x0;
  pcVar15 = (char *)0x0;
  *plVar26 = 0;
  *(undefined8 *)(param_1 + 0x8cc0) = 0;
LAB_00a40c58:
  iVar8 = 0x1b;
  goto LAB_00a40c5c;
  while( true ) {
    pbVar43 = pbVar43 + 1;
    uVar30 = (uint)*pbVar43;
                    /* try { // try from 00a42374 to 00b423a7 has its CatchHandler @ 00a423f8 */
    if (uVar30 == 0) break;
LAB_00a42338:
    iVar8 = isalpha(uVar30);
                    /* try { // try from 00a4235c to 00b4236f has its CatchHandler @ 00a423f4 */
    if (((iVar8 == 0) && (iVar8 = isxdigit(uVar30), iVar8 == 0)) &&
       ((1 < uVar30 - 0x2d && ((uVar30 != 0x5f && (uVar30 != 0x7e)))))) goto LAB_00a42380;
  }
LAB_00a42114:
  FUN_00a38740(param_1,"Invalid IPv6 address format\n");
  pbVar44 = pbVar43;
LAB_00a42124:
  pcVar15 = strchr((char *)pbVar44,0x3a);
  if (pcVar15 != (char *)0x0) {
    local_168 = (long *)0x0;
    *pcVar15 = '\0';
    pcVar15 = pcVar15 + 1;
    if (*pcVar15 != '\0') {
                    /* try { // try from 00a42148 to 00b42193 has its CatchHandler @ 00a42148
                       catch() { ... } // from try @ 00a42148 with catch @ 00a42148
                       catch() { ... } // from try @ 00a42198 with catch @ 00a42148 */
      uVar12 = strtol(pcVar15,(char **)&local_168,10);
      if (local_168 == (long *)0x0) {
        if (uVar12 < 0x10000) goto LAB_00a4223c;
      }
      else if ((uVar12 >> 0x10 == 0) && ((char)*local_168 == '\0')) goto LAB_00a4223c;
      FUN_00a38740(param_1,"No valid port number in connect to host string (%s)\n",pcVar15);
      local_2a0 = (byte *)0x0;
    }
  }
  uVar12 = 0xffffffff;
LAB_00a4223c:
  if (local_2a0 == (byte *)0x0) {
    pcVar15 = (char *)0x0;
  }
  else {
    pcVar15 = (char *)(*(code *)PTR_strdup_01769a10)(local_2a0);
    if (pcVar15 == (char *)0x0) {
                    /* try { // try from 00a428fc to 00b42a2b has its CatchHandler @ 00a428fc
                       catch() { ... } // from try @ 00a428fc with catch @ 00a428fc
                       catch() { ... } // from try @ 00a42aac with catch @ 00a428fc */
      (*(code *)PTR_free_01769a00)(pbVar21);
      goto LAB_00a40c54;
    }
  }
  (*(code *)PTR_free_01769a00)(pbVar21);
  if ((pcVar15 == (char *)0x0) || (*pcVar15 == '\0')) {
LAB_00a421cc:
                    /* catch() { ... } // from try @ 00a42194 with catch @ 00a421cc */
    *(undefined1 *)((long)plVar11 + 0x3bb) = 0;
                    /* try { // try from 00a421e0 to 00b42327 has its CatchHandler @ 00a421e0
                       catch() { ... } // from try @ 00a421e0 with catch @ 00a421e0
                       catch() { ... } // from try @ 00a423a8 with catch @ 00a421e0 */
    (*(code *)PTR_free_01769a00)(pcVar15);
    pcVar15 = (char *)0x0;
    iVar8 = (int)uVar12;
  }
  else {
    plVar11[0x1b] = (long)pcVar15;
    plVar11[0x1d] = (long)pcVar15;
    *(undefined1 *)((long)plVar11 + 0x3bb) = 1;
    pcVar22 = strchr(pcVar15,0x3a);
    pcVar16 = "[";
    if (pcVar22 == (char *)0x0) {
      pcVar16 = "";
    }
    pcVar2 = "]";
    if (pcVar22 == (char *)0x0) {
      pcVar2 = "";
    }
    FUN_00a38740(param_1,"Connecting to hostname: %s%s%s\n",pcVar16,pcVar15,pcVar2);
    iVar8 = (int)uVar12;
  }
  if (iVar8 < 0) {
    *(undefined1 *)((long)plVar11 + 0x3bc) = 0;
  }
  else {
    *(int *)((long)plVar11 + 0x1a4) = (int)uVar12;
    *(undefined1 *)((long)plVar11 + 0x3bc) = 1;
    FUN_00a38740(param_1,"Connecting to port: %d\n",uVar12 & 0xffffffff);
    if ((int)uVar12 != -1) goto LAB_00a4245c;
  }
  if ((pcVar15 != (char *)0x0) || (puVar39 = (undefined8 *)puVar39[1], puVar39 == (undefined8 *)0x0)
     ) goto LAB_00a4245c;
  goto LAB_00a42394;
LAB_00a42380:
  if (uVar30 != 0x5d) goto LAB_00a42114;
  pbVar44 = pbVar43 + 1;
  *pbVar43 = 0;
  goto LAB_00a42124;
LAB_00a435e0:
  plVar33 = local_2f8;
  if (local_2f8 == (long *)0x0) {
    if (!bVar4) goto LAB_00a4397c;
    bVar6 = false;
    if (*(char *)(param_1 + 0x8e3) != '\0') {
      pcVar15 = "Found pending candidate for reuse and CURLOPT_PIPEWAIT is set\n";
LAB_00a43dd0:
      FUN_00a38740(param_1,pcVar15);
      bVar6 = true;
    }
LAB_00a43980:
    if ((*(byte *)(plVar11[0x80] + 0x7d) & 1) != 0) {
      if (*(char *)(param_1 + 0x8e1) != '\0') {
        *(undefined1 *)(plVar11 + 0x7b) = 1;
      }
      if (*(char *)(param_1 + 0x8e0) != '\0') {
        *(undefined1 *)((long)plVar11 + 0x3d7) = 1;
      }
    }
    if (!bVar6) {
      lVar32 = FUN_00a2c798(plVar11,*(undefined8 *)(param_1 + 0xad0));
      if (((uVar9 == 0) || (lVar32 == 0)) || (*(ulong *)(lVar32 + 8) < uVar9)) {
LAB_00a43a70:
                    /* try { // try from 00a43a84 to 00b43ab7 has its CatchHandler @ 00a43b08 */
        if ((uVar10 != 0) && (uVar10 <= *(ulong *)(*(long *)(param_1 + 0xad0) + 0x30))) {
          plVar26 = (long *)FUN_00a402d0(param_1);
          if (plVar26 == (long *)0x0) {
            FUN_00a38740(param_1,"No connections available in cache\n");
            goto LAB_00a439b0;
          }
          *plVar26 = param_1;
          FUN_00a3fd90(plVar26,0);
        }
        FUN_00a2c844(*(undefined8 *)(param_1 + 0xad0),plVar11);
        pbVar21 = (byte *)(param_1 + 0x8c00);
                    /* try { // try from 00a43ab8 to 00b43b53 has its CatchHandler @ 00a43890 */
        if (((*pbVar21 & 0x28) != 0) && (*(char *)(param_1 + 0x8c10) != '\0')) {
          FUN_00a38740(param_1,"NTLM picked AND auth done set, clear picked!\n");
          pbVar21[0] = 0;
          pbVar21[1] = 0;
          pbVar21[2] = 0;
          pbVar21[3] = 0;
          pbVar21[4] = 0;
          pbVar21[5] = 0;
          pbVar21[6] = 0;
          pbVar21[7] = 0;
          *(char *)(param_1 + 0x8c10) = '\0';
        }
        pbVar21 = (byte *)(param_1 + 0x8c20);
                    /* catch() { ... } // from try @ 00a43a6c with catch @ 00a43b04 */
                    /* catch() { ... } // from try @ 00a43a84 with catch @ 00a43b08 */
        if (((*pbVar21 & 0x28) != 0) && (*(char *)(param_1 + 0x8c30) != '\0')) {
          FUN_00a38740(param_1,"NTLM-proxy picked AND auth done set, clear picked!\n");
          pbVar21[0] = 0;
          pbVar21[1] = 0;
          pbVar21[2] = 0;
          pbVar21[3] = 0;
          pbVar21[4] = 0;
          pbVar21[5] = 0;
          pbVar21[6] = 0;
          pbVar21[7] = 0;
          *(char *)(param_1 + 0x8c30) = '\0';
        }
        plVar45 = plVar11 + 9;
        local_2f8 = plVar11;
        goto LAB_00a43b60;
      }
      auVar46 = FUN_00a2e828();
      puVar39 = (undefined8 *)**(undefined8 **)(lVar32 + 0x10);
      if (puVar39 != (undefined8 *)0x0) {
        lVar32 = -1;
        plVar26 = (long *)0x0;
        do {
          plVar45 = (long *)*puVar39;
          lVar25 = lVar32;
          plVar42 = plVar26;
                    /* try { // try from 00a43a38 to 00b43a6b has its CatchHandler @ 00a43b38 */
          if (((char)plVar45[9] == '\0') &&
             (lVar25 = FUN_00a2e888(auVar46._0_8_,auVar46._8_8_,plVar45[0x48],plVar45[0x49]),
             plVar42 = plVar45, lVar25 <= lVar32)) {
            lVar25 = lVar32;
            plVar42 = plVar26;
          }
          puVar39 = (undefined8 *)puVar39[2];
          lVar32 = lVar25;
          plVar26 = plVar42;
        } while (puVar39 != (undefined8 *)0x0);
        if (plVar42 != (long *)0x0) {
          *plVar42 = param_1;
                    /* try { // try from 00a43a6c to 00b43a7f has its CatchHandler @ 00a43b04 */
          FUN_00a3fd90(plVar42,0);
          goto LAB_00a43a70;
        }
      }
      FUN_00a38740(param_1,"No more connections allowed to host: %d\n",uVar9);
    }
LAB_00a439b0:
    FUN_00a38740(param_1,"No connections available.\n");
    FUN_00a3fef0(plVar11);
    pcVar15 = (char *)0x0;
    iVar8 = 0x59;
    *param_2 = 0;
    goto LAB_00a40c5c;
  }
LAB_00a435e8:
  local_2f8 = plVar33;
                    /* try { // try from 00a43650 to 00b4369f has its CatchHandler @ 00a43650
                       catch() { ... } // from try @ 00a43650 with catch @ 00a43650
                       catch() { ... } // from try @ 00a436d8 with catch @ 00a43650
                       catch() { ... } // from try @ 00a4371c with catch @ 00a43650 */
                    /* try { // try from 00a436a0 to 00b436d7 has its CatchHandler @ 00a4375c */
  if ((((*(byte *)(local_2f8[0x80] + 0x78) & 3) != 0) &&
      ((*(char *)((long)local_2f8 + 0x3c7) == '\0' || (*(char *)((long)local_2f8 + 0x3b9) == '\0')))
      ) && ((((uVar12 = FUN_00a27f7c(*(undefined8 *)(param_1 + 0x60),1), (uVar12 & 1) != 0 &&
              ((*(long *)(param_1 + 0x438) != 1 && ((*(uint *)(param_1 + 0x430) | 4) == 5)))) ||
             ((uVar12 = FUN_00a27f7c(*(undefined8 *)(param_1 + 0x60),2), (uVar12 & 1) != 0 &&
              (2 < *(long *)(param_1 + 0x438))))) &&
            (((*(long *)(local_2f8[0x90] + 0x18) + *(long *)(local_2f8[0x8f] + 0x18) != 0 &&
              (FUN_00a38740(param_1,"Found connection %ld, with requests in the pipe (%zu)\n",
                            local_2f8[10]), *(ulong *)(local_2f8[0xe3] + 8) < uVar9)) &&
             (*(ulong *)(*(long *)(param_1 + 0xad0) + 0x30) < uVar10)))))) {
    FUN_00a38740(param_1,"We can reuse, but we want a new connection anyway\n");
LAB_00a4397c:
    bVar6 = false;
    goto LAB_00a43980;
  }
LAB_00a436d4:
  plVar45 = local_2f8 + 9;
                    /* try { // try from 00a436d8 to 00b43707 has its CatchHandler @ 00a43650 */
  *(undefined1 *)plVar45 = 1;
  (*(code *)PTR_free_01769a00)(plVar11[0x2b]);
  (*(code *)PTR_free_01769a00)(plVar11[0x23]);
                    /* try { // try from 00a43708 to 00b4371b has its CatchHandler @ 00a4375c */
  (*(code *)PTR_free_01769a00)(plVar11[0x1f]);
  FUN_00a2d4b4(plVar26);
                    /* try { // try from 00a4371c to 00b43777 has its CatchHandler @ 00a43650 */
  FUN_00a2d4b4(plVar11 + 0x6f);
  *local_2f8 = *plVar11;
  lVar32 = plVar11[0x78];
  *(char *)(local_2f8 + 0x78) = (char)lVar32;
  if ((char)lVar32 != '\0') {
    (*(code *)PTR_free_01769a00)(local_2f8[0x43]);
    local_2f8[0x43] = 0;
                    /* catch() { ... } // from try @ 00a436a0 with catch @ 00a4375c
                       catch() { ... } // from try @ 00a43708 with catch @ 00a4375c */
    (*(code *)PTR_free_01769a00)(local_2f8[0x44]);
    local_2f8[0x44] = 0;
    lVar32 = *plVar42;
    local_2f8[0x44] = plVar11[0x44];
    local_2f8[0x43] = lVar32;
    *plVar42 = 0;
    plVar11[0x44] = 0;
  }
  cVar29 = *(char *)((long)plVar11 + 0x3c1);
  *(char *)((long)local_2f8 + 0x3c1) = cVar29;
  if (cVar29 != '\0') {
    (*(code *)PTR_free_01769a00)(local_2f8[0x31]);
    local_2f8[0x31] = 0;
    (*(code *)PTR_free_01769a00)(local_2f8[0x29]);
    local_2f8[0x29] = 0;
    (*(code *)PTR_free_01769a00)(local_2f8[0x32]);
    local_2f8[0x32] = 0;
    (*(code *)PTR_free_01769a00)(local_2f8[0x2a]);
    local_2f8[0x2a] = 0;
    local_2f8[0x29] = plVar11[0x29];
    lVar32 = *plVar1;
    local_2f8[0x32] = plVar11[0x32];
    local_2f8[0x31] = lVar32;
    local_2f8[0x2a] = plVar11[0x2a];
                    /* try { // try from 00a437f8 to 00b43843 has its CatchHandler @ 00a437f8
                       catch() { ... } // from try @ 00a437f8 with catch @ 00a437f8
                       catch() { ... } // from try @ 00a43848 with catch @ 00a437f8 */
    plVar11[0x29] = 0;
    plVar11[0x2a] = 0;
    *plVar1 = 0;
    plVar11[0x32] = 0;
  }
  plVar26 = local_2f8 + 0x16;
  (*(code *)PTR_free_01769a00)(*plVar26);
  *plVar26 = 0;
  (*(code *)PTR_free_01769a00)(local_2f8[0x1b]);
  local_2f8[0x1b] = 0;
  lVar32 = plVar11[0x18];
  local_2f8[0x19] = plVar11[0x19];
  local_2f8[0x18] = lVar32;
                    /* try { // try from 00a43844 to 00b43847 has its CatchHandler @ 00a4387c */
  lVar32 = plVar11[0x16];
                    /* try { // try from 00a43848 to 00b4388f has its CatchHandler @ 00a437f8 */
  local_2f8[0x17] = plVar11[0x17];
  *plVar26 = lVar32;
  *(undefined1 *)((long)local_2f8 + 0x3bb) = *(undefined1 *)((long)plVar11 + 0x3bb);
  lVar32 = plVar11[0x1d];
  local_2f8[0x1e] = plVar11[0x1e];
  local_2f8[0x1d] = lVar32;
  lVar32 = plVar11[0x1b];
  local_2f8[0x1c] = plVar11[0x1c];
  local_2f8[0x1b] = lVar32;
  *(undefined1 *)((long)local_2f8 + 0x3bc) = *(undefined1 *)((long)plVar11 + 0x3bc);
  *(undefined4 *)((long)local_2f8 + 0x1a4) = *(undefined4 *)((long)plVar11 + 0x1a4);
  FUN_00a25300(local_2f8);
                    /* catch() { ... } // from try @ 00a43844 with catch @ 00a4387c */
  *(undefined1 *)((long)local_2f8 + 0x3ba) = 1;
  (*(code *)PTR_free_01769a00)(plVar11[0x43]);
  plVar11[0x43] = 0;
                    /* try { // try from 00a43890 to 00b43a37 has its CatchHandler @ 00a43890
                       catch() { ... } // from try @ 00a43890 with catch @ 00a43890
                       catch() { ... } // from try @ 00a43ab8 with catch @ 00a43890 */
  (*(code *)PTR_free_01769a00)(plVar11[0x44]);
  plVar11[0x44] = 0;
  (*(code *)PTR_free_01769a00)(plVar11[0x31]);
  plVar11[0x31] = 0;
  (*(code *)PTR_free_01769a00)(plVar11[0x29]);
  plVar11[0x29] = 0;
  (*(code *)PTR_free_01769a00)(plVar11[0x32]);
  plVar11[0x32] = 0;
  (*(code *)PTR_free_01769a00)(plVar11[0x2a]);
  plVar11[0x2a] = 0;
  (*(code *)PTR_free_01769a00)(plVar11[0xe0]);
  plVar11[0xe0] = 0;
  FUN_00a4ab10(plVar11[0x8f],0);
  FUN_00a4ab10(plVar11[0x90],0);
  plVar11[0x8f] = 0;
  plVar11[0x90] = 0;
  (*(code *)PTR_free_01769a00)(plVar11[0x91]);
  plVar11[0x91] = 0;
  (*(code *)PTR_free_01769a00)(plVar11[0xe5]);
  plVar11[0xe5] = 0;
  (*(code *)PTR_free_01769a00)(plVar11);
  *param_2 = local_2f8;
  pcVar15 = "proxy";
  if (*(char *)((long)local_2f8 + 0x3bd) == '\0') {
    pcVar15 = "host";
  }
  if (local_2f8[0x25] == 0) {
                    /* catch() { ... } // from try @ 00a43a38 with catch @ 00a43b38 */
    plVar11 = local_2f8 + 0x2b;
    if (local_2f8[0x2d] == 0) {
      plVar11 = plVar26;
    }
  }
  else {
    plVar11 = local_2f8 + 0x23;
  }
  FUN_00a38740(param_1,"Re-using existing connection! (#%ld) with %s %s\n",local_2f8[10],pcVar15,
               plVar11[3]);
LAB_00a43b60:
  *(undefined1 *)plVar45 = 1;
  *(undefined1 *)((long)local_2f8 + 0x3c4) = 0;
  *(undefined1 *)(param_1 + 0x8d08) = 0;
  *(undefined1 *)(param_1 + 0x8ca8) = 0;
  if (*(char *)(param_1 + 0x620) == '\0') {
    if (*(int *)(param_1 + 0x430) == 5) {
      uVar31 = 1;
      goto LAB_00a43b9c;
    }
  }
  else {
    uVar31 = 5;
LAB_00a43b9c:
    *(undefined4 *)(param_1 + 0x430) = uVar31;
  }
  auVar46 = FUN_00a2e828();
  *(undefined1 (*) [16])(param_1 + 0xb8) = auVar46;
  *(undefined1 *)(param_1 + 0xd8) = 1;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(long *)(param_1 + 0x1d0) = param_1 + 0xb08;
  *(long *)(param_1 + 0x1d8) = param_1 + 0x4b09;
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xaf8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined1 *)(param_1 + 0x1e9) = 0;
  FUN_00a450d4(param_1);
  FUN_00a3112c(param_1,0);
  FUN_00a31094(param_1,0);
  lVar32 = *(long *)(param_1 + 0x3b0);
  *(long *)(param_1 + 0x8cd8) = lVar32;
  if ((lVar32 != 0) || (uVar28 = 0, *(long *)(param_1 + 0x728) != 0)) {
    if (*(char *)(param_1 + 0x8cca) != '\0') {
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x8cd0));
      lVar32 = *(long *)(param_1 + 0x8cd8);
    }
    if (lVar32 == 0) {
      lVar32 = (*(code *)PTR_strdup_01769a10)(*(undefined8 *)(param_1 + 0x728));
    }
    else {
      lVar32 = FUN_00a24258(&DAT_013c5878);
    }
    *(long *)(param_1 + 0x8cd0) = lVar32;
    *(char *)(param_1 + 0x8cca) = lVar32 != 0;
    if (lVar32 == 0) {
LAB_00a40c54:
      pcVar15 = (char *)0x0;
      goto LAB_00a40c58;
    }
    uVar28 = 1;
  }
  *(undefined1 *)(param_1 + 0x8cc9) = uVar28;
  local_2f8[0x94] = *(long *)(param_1 + 0x298);
  local_2f8[0x95] = *(long *)(param_1 + 0x328);
  uVar27 = FUN_00a25238(param_1,0,1);
  if (*(char *)((long)local_2f8 + 0x3ba) != '\0') {
    pcVar15 = (char *)0x0;
    iVar8 = 0;
    *param_3 = 0;
    goto LAB_00a40c5c;
  }
  lVar32 = local_2f8[0xe5];
  if (lVar32 == 0) {
    if (*(char *)((long)local_2f8 + 0x3bd) == '\0') {
      plVar11 = local_2f8 + 0x16;
      if (*(char *)((long)local_2f8 + 0x3bb) != '\0') {
        plVar11 = local_2f8 + 0x1b;
      }
      plVar26 = local_2f8 + 0x34;
      if (*(char *)((long)local_2f8 + 0x3bc) != '\0') {
        plVar26 = (long *)((long)local_2f8 + 0x1a4);
      }
      lVar32 = *plVar26;
      local_2f8[0x33] = (long)(int)lVar32;
      iVar8 = FUN_00a2ffa8(local_2f8,plVar11[2],(long)(int)lVar32,&local_168,uVar27);
      if (iVar8 == -2) goto LAB_00a43e88;
      if (iVar8 == 1) goto LAB_00a43e74;
      if (local_168 != (long *)0x0) goto LAB_00a43eb4;
      FUN_00a38a08(param_1,"Couldn\'t resolve host \'%s\'",plVar11[3]);
      iVar8 = 6;
    }
    else {
                    /* try { // try from 00a43d78 to 00b43dc3 has its CatchHandler @ 00a43d78
                       catch() { ... } // from try @ 00a43d78 with catch @ 00a43d78
                       catch() { ... } // from try @ 00a43dc8 with catch @ 00a43d78 */
      plVar11 = local_2f8 + 0x23;
      if (*(char *)((long)local_2f8 + 0x3bf) == '\0') {
        plVar11 = local_2f8 + 0x2b;
      }
      iVar8 = FUN_00a2ffa8(local_2f8,plVar11[2],(int)local_2f8[0x33],&local_168,uVar27);
      if (iVar8 == -2) {
LAB_00a43e88:
        iVar8 = 0x1c;
      }
      else if (iVar8 == 1) {
LAB_00a43e74:
        iVar8 = 0;
        *param_3 = 1;
      }
      else if (local_168 == (long *)0x0) {
        FUN_00a38a08(param_1,"Couldn\'t resolve proxy \'%s\'",plVar11[3]);
        iVar8 = 5;
      }
      else {
LAB_00a43eb4:
        iVar8 = 0;
      }
    }
  }
  else {
    local_168 = (long *)(*(code *)PTR_calloc_01769a18)(1,0x18);
    if (local_168 == (long *)0x0) {
      iVar8 = 0x1b;
    }
    else {
      local_268 = local_268 & 0xffffffff00000000;
      lVar25 = FUN_00a2c350(lVar32,&local_268);
      *local_168 = lVar25;
      if (*local_168 == 0) {
                    /* catch() { ... } // from try @ 00a43dc4 with catch @ 00a43dfc */
        if ((int)local_268 == 0) {
          iVar8 = 0x1b;
        }
        else {
                    /* try { // try from 00a43e10 to 00b43ef7 has its CatchHandler @ 00a43e10
                       catch() { ... } // from try @ 00a43e10 with catch @ 00a43e10
                       catch() { ... } // from try @ 00a43f78 with catch @ 00a43e10 */
          FUN_00a38a08(param_1,"Unix socket path too long: \'%s\'",lVar32);
          iVar8 = 6;
        }
        (*(code *)PTR_free_01769a00)(local_168);
        local_168 = (long *)0x0;
      }
      else {
        iVar8 = 0;
        local_168[2] = local_168[2] + 1;
      }
    }
  }
  pcVar15 = (char *)0x0;
  local_2f8[0xb] = (long)local_168;
LAB_00a40c5c:
  (*(code *)PTR_free_01769a00)(pcVar17);
  (*(code *)PTR_free_01769a00)(local_290);
                    /* try { // try from 00a40c7c to 00b40cc7 has its CatchHandler @ 00a40c7c
                       catch() { ... } // from try @ 00a40c7c with catch @ 00a40c7c
                       catch() { ... } // from try @ 00a40ccc with catch @ 00a40c7c */
  (*(code *)PTR_free_01769a00)(local_288);
  (*(code *)PTR_free_01769a00)(pcVar41);
  (*(code *)PTR_free_01769a00)(pcVar15);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00a40cc8 to 00b40ccb has its CatchHandler @ 00a40d00 */
                    /* try { // try from 00a40ccc to 00b40d13 has its CatchHandler @ 00a40c7c */
  return iVar8;
}

