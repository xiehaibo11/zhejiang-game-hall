
/* WARNING: Type propagation algorithm not settling */

long * FUN_00a1bcd8(undefined8 param_1,long *param_2,ulong param_3,char *param_4,char *param_5,
                   char *param_6)

{
  char *__s;
  long lVar1;
  bool bVar2;
  int iVar3;
  time_t tVar4;
  long *plVar5;
  char *pcVar6;
  char *pcVar7;
  size_t sVar8;
  size_t sVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  void *__dest;
  char cVar14;
  char cVar15;
  bool bVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar21;
  char *local_488;
  undefined1 auStack_480 [16];
  undefined1 auStack_470 [8];
  char *local_468 [128];
  long local_68;
  long *plVar20;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  tVar4 = time((time_t *)0x0);
  plVar5 = (long *)(*(code *)PTR_calloc_01d1b760)(1,0x60);
  if (plVar5 != (long *)0x0) {
    if ((param_3 & 1) == 0) {
      local_468[0] = (char *)0x0;
      iVar3 = strncmp(param_4,"#HttpOnly_",10);
      if (iVar3 == 0) {
        param_4 = param_4 + 10;
        *(undefined1 *)((long)plVar5 + 0x5a) = 1;
      }
      if (*param_4 == '#') goto LAB_00a1c8ac;
      pcVar6 = strchr(param_4,0xd);
      if (pcVar6 != (char *)0x0) {
        *pcVar6 = '\0';
      }
      pcVar6 = strchr(param_4,10);
      if (pcVar6 != (char *)0x0) {
        *pcVar6 = '\0';
      }
      pcVar6 = strtok_r(param_4,"\t",local_468);
      if (pcVar6 != (char *)0x0) {
        iVar3 = 0;
        bVar16 = false;
        do {
          switch(iVar3) {
          case 0:
            pcVar7 = pcVar6 + 1;
            if (*pcVar6 != '.') {
              pcVar7 = pcVar6;
            }
            lVar10 = (*(code *)PTR_strdup_01d1b758)(pcVar7);
            iVar3 = 0;
            plVar5[5] = lVar10;
            bVar16 = (bool)(bVar16 | lVar10 == 0);
            break;
          case 1:
            iVar3 = FUN_00a33710(pcVar6,&DAT_0188a5ce);
            *(bool *)(plVar5 + 8) = iVar3 != 0;
            iVar3 = 1;
            break;
          case 2:
                    /* try { // try from 00a1c434 to 00b1c43b has its CatchHandler @ 00a1c700 */
            iVar3 = strcmp("TRUE",pcVar6);
                    /* try { // try from 00a1c43c to 00b1c473 has its CatchHandler @ 00a1c204 */
            if ((iVar3 == 0) || (iVar3 = strcmp("FALSE",pcVar6), iVar3 == 0)) {
              lVar10 = (*(code *)PTR_strdup_01d1b758)("/");
              plVar5[3] = lVar10;
                    /* try { // try from 00a1c55c to 00b1c563 has its CatchHandler @ 00a1c7b8 */
              lVar13 = (*(code *)PTR_strdup_01d1b758)("/");
              bVar16 = (bool)(bVar16 | lVar10 == 0 | lVar13 == 0);
              plVar5[4] = lVar13;
              goto switchD_00a1c3dc_caseD_3;
            }
            lVar10 = (*(code *)PTR_strdup_01d1b758)(pcVar6);
            plVar5[3] = lVar10;
            if (lVar10 == 0) {
              iVar3 = 2;
                    /* try { // try from 00a1c384 to 00b1c38b has its CatchHandler @ 00a1c710 */
              bVar16 = true;
            }
            else {
              pcVar6 = (char *)(*(code *)PTR_strdup_01d1b758)();
                    /* try { // try from 00a1c474 to 00b1c493 has its CatchHandler @ 00a1c784 */
              if (pcVar6 != (char *)0x0) {
                sVar8 = strlen(pcVar6);
                if (*pcVar6 == '\"') {
                    /* try { // try from 00a1c494 to 00b1c4ab has its CatchHandler @ 00a1c764 */
                  memmove(pcVar6,pcVar6 + 1,sVar8);
                  sVar8 = sVar8 - 1;
                }
                if ((sVar8 != 0) && (sVar9 = sVar8 - 1, pcVar6[sVar9] == '\"')) {
                  pcVar6[sVar9] = '\0';
                  sVar8 = sVar9;
                }
                    /* try { // try from 00a1c4c4 to 00b1c4d7 has its CatchHandler @ 00a1c720 */
                if (*pcVar6 == '/') {
                  if ((sVar8 != 0) && (pcVar6[sVar8 - 1] == '/')) {
                    pcVar6[sVar8 - 1] = '\0';
                  }
                }
                else {
                    /* try { // try from 00a1c38c to 00b1c433 has its CatchHandler @ 00a1c204 */
                  (*(code *)PTR_free_01d1b748)(pcVar6);
                  pcVar6 = (char *)(*(code *)PTR_strdup_01d1b758)("/");
                }
              }
              plVar5[4] = (long)pcVar6;
              bVar16 = (bool)(bVar16 | pcVar6 == (char *)0x0);
              iVar3 = 2;
            }
            break;
          case 3:
switchD_00a1c3dc_caseD_3:
                    /* try { // try from 00a1c58c to 00b1c603 has its CatchHandler @ 00a1c7c8 */
            iVar3 = FUN_00a33710(pcVar6,&DAT_0188a5ce);
            *(bool *)(plVar5 + 0xb) = iVar3 != 0;
            iVar3 = 3;
            break;
          case 4:
            lVar10 = strtol(pcVar6,(char **)0x0,10);
            plVar5[6] = lVar10;
            iVar3 = 4;
            break;
          case 5:
            lVar10 = (*(code *)PTR_strdup_01d1b758)(pcVar6);
            plVar5[1] = lVar10;
            bVar16 = (bool)(bVar16 | lVar10 == 0);
            iVar3 = 5;
            break;
          case 6:
            lVar10 = (*(code *)PTR_strdup_01d1b758)(pcVar6);
            bVar16 = (bool)(bVar16 | lVar10 == 0);
            iVar3 = 6;
            plVar5[2] = lVar10;
          }
          pcVar6 = strtok_r((char *)0x0,"\t",local_468);
          iVar3 = iVar3 + 1;
        } while ((pcVar6 != (char *)0x0) && (!bVar16));
        if (iVar3 == 6) {
          lVar10 = (*(code *)PTR_strdup_01d1b758)(&DAT_0189703a);
          iVar3 = 6;
          bVar16 = (bool)(bVar16 | lVar10 == 0);
          if (lVar10 != 0) {
            iVar3 = 7;
          }
          plVar5[2] = lVar10;
        }
        if ((!bVar16) && (iVar3 == 7)) {
          cVar15 = (char)param_2[2];
          if (cVar15 != '\0') {
LAB_00a1c918:
            *(char *)((long)plVar5 + 0x59) = cVar15;
            tVar4 = time((time_t *)0x0);
                    /* catch() { ... } // from try @ 00a1c970 with catch @ 00a1c924 */
            if ((long *)*param_2 == (long *)0x0) {
              plVar18 = (long *)0x0;
LAB_00a1ca94:
              bVar16 = false;
              cVar15 = (char)param_2[2];
            }
            else {
              plVar21 = (long *)*param_2;
              plVar19 = (long *)0x0;
              do {
                while( true ) {
                  plVar20 = plVar21;
                  plVar21 = (long *)*plVar20;
                  plVar17 = param_2;
                  if ((plVar20[6] == 0) || (tVar4 <= plVar20[6])) break;
                  plVar18 = param_2;
                  if (plVar20 != (long *)*param_2) {
                    plVar18 = plVar19;
                  }
                    /* try { // try from 00a1c964 to 00b1c96f has its CatchHandler @ 00a1c9a4 */
                  *plVar18 = (long)plVar21;
                    /* try { // try from 00a1c970 to 00b1c9bf has its CatchHandler @ 00a1c924 */
                  param_2[3] = param_2[3] + -1;
                  (*(code *)PTR_free_01d1b748)(plVar20[7]);
                  (*(code *)PTR_free_01d1b748)(plVar20[5]);
                  (*(code *)PTR_free_01d1b748)(plVar20[3]);
                  (*(code *)PTR_free_01d1b748)(plVar20[4]);
                    /* catch() { ... } // from try @ 00a1c964 with catch @ 00a1c9a4 */
                  (*(code *)PTR_free_01d1b748)(plVar20[1]);
                  (*(code *)PTR_free_01d1b748)(plVar20[2]);
                    /* try { // try from 00a1c9c0 to 00b1ca07 has its CatchHandler @ 00a1c9c0
                       catch() { ... } // from try @ 00a1c9c0 with catch @ 00a1c9c0
                       catch() { ... } // from try @ 00a1ca68 with catch @ 00a1c9c0
                       catch() { ... } // from try @ 00a1cb70 with catch @ 00a1c9c0 */
                  (*(code *)PTR_free_01d1b748)(plVar20[10]);
                  (*(code *)PTR_free_01d1b748)(plVar20[9]);
                  (*(code *)PTR_free_01d1b748)(plVar20);
                  if (plVar21 == (long *)0x0) {
                    plVar18 = (long *)0x0;
                    goto LAB_00a1cb50;
                  }
                }
                plVar18 = (long *)0x0;
                plVar19 = plVar20;
              } while (plVar21 != (long *)0x0);
LAB_00a1cb50:
              do {
                    /* try { // try from 00a1cb54 to 00b1cb6f has its CatchHandler @ 00a1cc7c */
                plVar17 = (long *)*plVar17;
                if (plVar17 == (long *)0x0) goto LAB_00a1ca94;
                iVar3 = FUN_00a33710(plVar17[1],plVar5[1]);
                plVar18 = plVar17;
              } while (iVar3 == 0);
                    /* try { // try from 00a1cb70 to 00b1cccb has its CatchHandler @ 00a1c9c0 */
              if (plVar17[5] == 0) {
                if (plVar5[5] != 0) goto LAB_00a1cb50;
              }
              else if (((plVar5[5] == 0) || (iVar3 = FUN_00a33710(), iVar3 == 0)) ||
                      ((char)plVar17[8] != (char)plVar5[8])) goto LAB_00a1cb50;
              if (plVar17[4] == 0) {
                if (plVar5[4] == 0) goto LAB_00a1cbb4;
                goto LAB_00a1cb50;
              }
              if ((plVar5[4] == 0) || (iVar3 = FUN_00a33710(), iVar3 == 0)) goto LAB_00a1cb50;
LAB_00a1cbb4:
                    /* catch() { ... } // from try @ 00a1cab0 with catch @ 00a1cc78 */
              if ((*(char *)((long)plVar5 + 0x59) == '\0') &&
                 (*(char *)((long)plVar17 + 0x59) != '\0')) goto LAB_00a1ca18;
              *plVar5 = *plVar17;
              (*(code *)PTR_free_01d1b748)(plVar17[1]);
                    /* catch() { ... } // from try @ 00a1ca60 with catch @ 00a1cbdc */
              (*(code *)PTR_free_01d1b748)(plVar17[2]);
              (*(code *)PTR_free_01d1b748)(plVar17[5]);
              (*(code *)PTR_free_01d1b748)(plVar17[3]);
              (*(code *)PTR_free_01d1b748)(plVar17[4]);
                    /* catch() { ... } // from try @ 00a1ca08 with catch @ 00a1cc10 */
              (*(code *)PTR_free_01d1b748)(plVar17[7]);
              (*(code *)PTR_free_01d1b748)(plVar17[9]);
                    /* catch() { ... } // from try @ 00a1cb18 with catch @ 00a1cc24 */
              (*(code *)PTR_free_01d1b748)(plVar17[10]);
              memcpy(plVar17,plVar5,0x60);
                    /* catch() { ... } // from try @ 00a1cb00 with catch @ 00a1cc3c */
              (*(code *)PTR_free_01d1b748)(plVar5);
              plVar5 = plVar17;
              do {
                plVar18 = plVar5;
                plVar5 = (long *)*plVar18;
              } while ((long *)*plVar18 != (long *)0x0);
              bVar16 = true;
                    /* catch() { ... } // from try @ 00a1caf8 with catch @ 00a1cc5c */
              cVar15 = (char)param_2[2];
              plVar5 = plVar17;
            }
                    /* catch() { ... } // from try @ 00a1cac8 with catch @ 00a1cc60 */
            if (cVar15 != '\0') {
                    /* try { // try from 00a1cab0 to 00b1cabb has its CatchHandler @ 00a1cc78 */
              pcVar6 = "Replaced";
                    /* try { // try from 00a1cac8 to 00b1caeb has its CatchHandler @ 00a1cc60 */
              if (!bVar16) {
                pcVar6 = "Added";
              }
              FUN_00a22d58(param_1,"%s cookie %s=\"%s\" for domain %s, path %s, expire %ld\n",pcVar6
                           ,plVar5[1],plVar5[2],plVar5[5],plVar5[3],plVar5[6]);
            }
            if (!bVar16) {
              if (plVar18 == (long *)0x0) {
                plVar18 = param_2;
              }
              *plVar18 = (long)plVar5;
              param_2[3] = param_2[3] + 1;
            }
            goto LAB_00a1c8b8;
          }
LAB_00a1ca08:
                    /* try { // try from 00a1ca08 to 00b1ca4b has its CatchHandler @ 00a1cc10 */
          if (((char)param_2[4] == '\0') || (plVar5[6] != 0)) goto LAB_00a1c918;
LAB_00a1ca18:
          (*(code *)PTR_free_01d1b748)(plVar5[7]);
          (*(code *)PTR_free_01d1b748)(plVar5[5]);
          (*(code *)PTR_free_01d1b748)(plVar5[3]);
          (*(code *)PTR_free_01d1b748)(plVar5[4]);
          (*(code *)PTR_free_01d1b748)(plVar5[1]);
                    /* try { // try from 00a1ca60 to 00b1ca67 has its CatchHandler @ 00a1cbdc */
          (*(code *)PTR_free_01d1b748)(plVar5[2]);
                    /* try { // try from 00a1ca68 to 00b1caaf has its CatchHandler @ 00a1c9c0 */
          (*(code *)PTR_free_01d1b748)(plVar5[10]);
          (*(code *)PTR_free_01d1b748)(plVar5[9]);
          goto LAB_00a1c8ac;
        }
      }
      (*(code *)PTR_free_01d1b748)(plVar5[7]);
      (*(code *)PTR_free_01d1b748)(plVar5[5]);
      (*(code *)PTR_free_01d1b748)(plVar5[3]);
      (*(code *)PTR_free_01d1b748)(plVar5[4]);
      (*(code *)PTR_free_01d1b748)(plVar5[1]);
      (*(code *)PTR_free_01d1b748)(plVar5[2]);
      (*(code *)PTR_free_01d1b748)(plVar5[10]);
      (*(code *)PTR_free_01d1b748)(plVar5[9]);
      (*(code *)PTR_free_01d1b748)(plVar5);
    }
    else {
      pcVar6 = (char *)(*(code *)PTR_malloc_01d1b740)(5000);
      if (pcVar6 != (char *)0x0) {
        pcVar7 = strchr(param_4,0x3b);
        for (; (*param_4 == '\t' || (*param_4 == ' ')); param_4 = param_4 + 1) {
        }
        bVar16 = false;
        local_488 = param_5;
        do {
          do {
            *pcVar6 = '\0';
            local_468[0] = (char *)((ulong)local_468[0] & 0xffffffffffffff00);
            iVar3 = sscanf(param_4,"%1023[^;\r\n=] =%4999[^;\r\n]",local_468,pcVar6);
            if (0 < iVar3) {
              sVar8 = strlen(pcVar6);
              sVar9 = strlen((char *)local_468);
              cVar15 = param_4[sVar9];
              if ((sVar9 != 0) &&
                 ((cVar14 = (param_4 + sVar9)[-1], cVar14 == ' ' || (cVar14 == '\t')))) {
                for (; ((cVar14 == ' ' || ((cVar14 != '\0' && (cVar14 == '\t')))) && (sVar9 != 0));
                    sVar9 = sVar9 - 1) {
                  cVar14 = param_4[sVar9 - 2];
                }
                *(undefined1 *)((long)local_468 + sVar9) = 0;
              }
              for (; pcVar11 = pcVar6, sVar8 != 0; sVar8 = sVar8 - 1) {
                if ((pcVar6[sVar8 - 1] != '\t') && (pcVar6[sVar8 - 1] != ' ')) {
                  bVar2 = true;
                  goto LAB_00a1be84;
                }
                pcVar6[sVar8 - 1] = '\0';
              }
                    /* try { // try from 00a1be30 to 00b1bf13 has its CatchHandler @ 00a1be30
                       catch() { ... } // from try @ 00a1be30 with catch @ 00a1be30
                       catch() { ... } // from try @ 00a1bf1c with catch @ 00a1be30
                       catch() { ... } // from try @ 00a1bfb4 with catch @ 00a1be30
                       catch() { ... } // from try @ 00a1c040 with catch @ 00a1be30
                       catch() { ... } // from try @ 00a1c090 with catch @ 00a1be30
                       catch() { ... } // from try @ 00a1c150 with catch @ 00a1be30 */
              bVar2 = false;
LAB_00a1be84:
              for (; (*pcVar11 == ' ' || (*pcVar11 == '\t')); pcVar11 = pcVar11 + 1) {
              }
              if ((plVar5[1] == 0) && (cVar15 == '=')) {
                lVar10 = (*(code *)PTR_strdup_01d1b758)(local_468);
                plVar5[1] = lVar10;
                lVar10 = (*(code *)PTR_strdup_01d1b758)(pcVar11);
                plVar5[2] = lVar10;
                if ((lVar10 != 0) && (plVar5[1] != 0)) goto LAB_00a1bee8;
LAB_00a1c688:
                bVar16 = true;
                goto LAB_00a1c690;
              }
              if (bVar2) {
LAB_00a1bee8:
                iVar3 = FUN_00a33710("path",local_468);
                if (iVar3 != 0) {
                  (*(code *)PTR_free_01d1b748)(plVar5[3]);
                    /* try { // try from 00a1bf14 to 00b1bf1b has its CatchHandler @ 00a1c170 */
                  lVar10 = (*(code *)PTR_strdup_01d1b758)(pcVar11);
                    /* try { // try from 00a1bf1c to 00b1bfab has its CatchHandler @ 00a1be30 */
                  plVar5[3] = lVar10;
                  if (lVar10 != 0) {
                    pcVar11 = (char *)(*(code *)PTR_strdup_01d1b758)();
                    if (pcVar11 != (char *)0x0) {
                      sVar8 = strlen(pcVar11);
                      if (*pcVar11 == '\"') {
                        memmove(pcVar11,pcVar11 + 1,sVar8);
                        sVar8 = sVar8 - 1;
                      }
                      if ((sVar8 != 0) && (sVar9 = sVar8 - 1, pcVar11[sVar9] == '\"')) {
                        pcVar11[sVar9] = '\0';
                        sVar8 = sVar9;
                      }
                      if (*pcVar11 != '/') {
                    /* try { // try from 00a1c074 to 00b1c08f has its CatchHandler @ 00a1c180 */
                        (*(code *)PTR_free_01d1b748)(pcVar11);
                        lVar10 = (*(code *)PTR_strdup_01d1b758)("/");
                    /* try { // try from 00a1c090 to 00b1c137 has its CatchHandler @ 00a1be30 */
                        plVar5[4] = lVar10;
                        goto joined_r0x00a1c2b0;
                      }
                      if ((sVar8 != 0) && (pcVar11[sVar8 - 1] == '/')) {
                        pcVar11[sVar8 - 1] = '\0';
                      }
                      plVar5[4] = (long)pcVar11;
                      goto joined_r0x00a1bfa4;
                    }
                    plVar5[4] = 0;
                  }
                  goto LAB_00a1c688;
                }
                iVar3 = FUN_00a33710("domain",local_468);
                if (iVar3 == 0) {
                  iVar3 = FUN_00a33710("version",local_468);
                  if (iVar3 == 0) {
                    iVar3 = FUN_00a33710("max-age",local_468);
                    if (iVar3 == 0) {
                      iVar3 = FUN_00a33710("expires",local_468);
                      if (iVar3 != 0) {
                        (*(code *)PTR_free_01d1b748)(plVar5[7]);
                        lVar10 = (*(code *)PTR_strdup_01d1b758)(pcVar11);
                        plVar5[7] = lVar10;
                        goto joined_r0x00a1c2b0;
                      }
                    }
                    else {
                      (*(code *)PTR_free_01d1b748)(plVar5[10]);
                      lVar10 = (*(code *)PTR_strdup_01d1b758)(pcVar11);
                      plVar5[10] = lVar10;
                      if (lVar10 == 0) {
                        bVar16 = true;
                        lVar10 = plVar5[7];
                        goto joined_r0x00a1cb44;
                      }
                    }
                  }
                  else {
                    (*(code *)PTR_free_01d1b748)(plVar5[9]);
                    lVar10 = (*(code *)PTR_strdup_01d1b758)(pcVar11);
                    plVar5[9] = lVar10;
joined_r0x00a1c2b0:
                    if (lVar10 == 0) goto LAB_00a1c688;
                  }
                }
                else {
                  __s = pcVar11 + 1;
                  if (*pcVar11 != '.') {
                    __s = pcVar11;
                  }
                  pcVar11 = local_488;
                    /* try { // try from 00a1c038 to 00b1c03f has its CatchHandler @ 00a1c150 */
                  if (local_488 == (char *)0x0) {
                    pcVar11 = __s;
                  }
                    /* try { // try from 00a1c040 to 00b1c073 has its CatchHandler @ 00a1be30 */
                  iVar3 = inet_pton(2,pcVar11,auStack_470);
                  if (iVar3 == 0) {
                    iVar3 = inet_pton(10,pcVar11,auStack_480);
                    bVar2 = iVar3 != 0;
                  }
                  else {
                    bVar2 = true;
                  }
                  pcVar12 = strchr(__s,0x2e);
                  pcVar11 = ":";
                  if (pcVar12 != (char *)0x0) {
                    pcVar11 = local_488;
                  }
                    /* try { // try from 00a1c138 to 00b1c13f has its CatchHandler @ 00a1c170 */
                  local_488 = pcVar11;
                  if (pcVar11 == (char *)0x0) {
LAB_00a1c1ac:
                    (*(code *)PTR_free_01d1b748)(plVar5[5]);
                    lVar10 = (*(code *)PTR_strdup_01d1b758)(__s);
                    plVar5[5] = lVar10;
                    if (bVar2 || lVar10 == 0) {
                      bVar16 = (bool)(bVar16 | lVar10 == 0);
                      if (lVar10 == 0) goto LAB_00a1c690;
                    }
                    else {
                      *(undefined1 *)(plVar5 + 8) = 1;
                    }
                  }
                  else {
                    /* try { // try from 00a1c140 to 00b1c147 has its CatchHandler @ 00a1c160 */
                    if (bVar2) {
                    /* try { // try from 00a1c148 to 00b1c14f has its CatchHandler @ 00a1c150 */
                      iVar3 = strcmp(__s,pcVar11);
                    /* catch() { ... } // from try @ 00a1c038 with catch @ 00a1c150
                       catch() { ... } // from try @ 00a1c148 with catch @ 00a1c150
                       try { // try from 00a1c150 to 00b1c203 has its CatchHandler @ 00a1be30 */
                      if (iVar3 == 0) goto LAB_00a1c1ac;
                    }
                    else {
                      sVar8 = strlen(__s);
                    /* catch() { ... } // from try @ 00a1bfac with catch @ 00a1c160
                       catch() { ... } // from try @ 00a1c140 with catch @ 00a1c160 */
                      sVar9 = strlen(pcVar11);
                    /* catch() { ... } // from try @ 00a1bf14 with catch @ 00a1c170
                       catch() { ... } // from try @ 00a1c138 with catch @ 00a1c170 */
                      if (sVar8 <= sVar9) {
                    /* catch() { ... } // from try @ 00a1c074 with catch @ 00a1c180 */
                        iVar3 = FUN_00a33710(__s);
                        if ((iVar3 != 0) &&
                           ((sVar9 == sVar8 || (pcVar11[(sVar9 - sVar8) + -1] == '.'))))
                        goto LAB_00a1c1ac;
                      }
                    }
                    /* try { // try from 00a1c204 to 00b1c383 has its CatchHandler @ 00a1c204
                       catch() { ... } // from try @ 00a1c204 with catch @ 00a1c204
                       catch() { ... } // from try @ 00a1c38c with catch @ 00a1c204
                       catch() { ... } // from try @ 00a1c43c with catch @ 00a1c204
                       catch() { ... } // from try @ 00a1c6a0 with catch @ 00a1c204
                       catch() { ... } // from try @ 00a1c700 with catch @ 00a1c204 */
                    FUN_00a22d58(param_1,"skipped cookie with bad tailmatch domain: %s\n",__s);
                    bVar16 = true;
                  }
                }
              }
              else {
                iVar3 = FUN_00a33710("secure",local_468);
                if (iVar3 == 0) {
                  iVar3 = FUN_00a33710("httponly",local_468);
                  if (iVar3 == 0) {
                    if (cVar15 == '=') goto LAB_00a1bee8;
                  }
                  else {
                    *(undefined1 *)((long)plVar5 + 0x5a) = 1;
                  }
                }
                else {
                  *(undefined1 *)(plVar5 + 0xb) = 1;
                }
              }
            }
joined_r0x00a1bfa4:
                    /* try { // try from 00a1bfac to 00b1bfb3 has its CatchHandler @ 00a1c160 */
            if ((pcVar7 == (char *)0x0) || (param_4 = pcVar7, *pcVar7 == '\0')) goto LAB_00a1c690;
            do {
              do {
                param_4 = param_4 + 1;
                cVar15 = *param_4;
              } while (cVar15 == ' ');
            } while (cVar15 == '\t');
            pcVar7 = strchr(param_4,0x3b);
          } while (pcVar7 != (char *)0x0);
          if (cVar15 == '\0') break;
          sVar8 = strlen(param_4);
          pcVar7 = param_4 + sVar8;
        } while (pcVar7 != (char *)0x0);
LAB_00a1c690:
                    /* try { // try from 00a1c690 to 00b1c69f has its CatchHandler @ 00a1c7b8 */
        pcVar7 = (char *)plVar5[10];
        if (pcVar7 == (char *)0x0) {
          lVar10 = plVar5[7];
joined_r0x00a1cb44:
          if (lVar10 != 0) {
            lVar10 = FUN_00a358b8(lVar10,0);
            plVar5[6] = lVar10;
            if (lVar10 == 0) {
              plVar5[6] = 1;
            }
            else {
                    /* try { // try from 00a1c820 to 00b1c893 has its CatchHandler @ 00a1c820
                       catch() { ... } // from try @ 00a1c820 with catch @ 00a1c820
                       catch() { ... } // from try @ 00a1c8a0 with catch @ 00a1c820 */
              if (lVar10 < 0) {
                plVar5[6] = 0;
              }
            }
          }
          if (!bVar16) goto LAB_00a1c6e8;
LAB_00a1c83c:
          (*(code *)PTR_free_01d1b748)(pcVar6);
        }
        else {
                    /* try { // try from 00a1c6a0 to 00b1c6ef has its CatchHandler @ 00a1c204 */
          if (*pcVar7 == '\"') {
            pcVar7 = pcVar7 + 1;
          }
          lVar13 = strtol(pcVar7,(char **)0x0,10);
          lVar10 = 0x7fffffffffffffff;
          plVar5[6] = lVar13;
          if (lVar13 <= 0x7fffffffffffffff - tVar4) {
            lVar10 = lVar13 + tVar4;
          }
          plVar5[6] = lVar10;
          if (bVar16) goto LAB_00a1c83c;
LAB_00a1c6e8:
                    /* try { // try from 00a1c6f0 to 00b1c6f7 has its CatchHandler @ 00a1c710 */
          if ((local_488 != (char *)0x0) && (plVar5[5] == 0)) {
                    /* try { // try from 00a1c6f8 to 00b1c6ff has its CatchHandler @ 00a1c700 */
                    /* catch() { ... } // from try @ 00a1c434 with catch @ 00a1c700
                       catch() { ... } // from try @ 00a1c6f8 with catch @ 00a1c700
                       try { // try from 00a1c700 to 00b1c81f has its CatchHandler @ 00a1c204 */
            lVar10 = (*(code *)PTR_strdup_01d1b758)(local_488);
            plVar5[5] = lVar10;
            if (lVar10 == 0) goto LAB_00a1c83c;
          }
                    /* catch() { ... } // from try @ 00a1c384 with catch @ 00a1c710
                       catch() { ... } // from try @ 00a1c6f0 with catch @ 00a1c710 */
          if ((param_6 == (char *)0x0) || (plVar5[3] != 0)) {
LAB_00a1c8fc:
            (*(code *)PTR_free_01d1b748)(pcVar6);
LAB_00a1c908:
            if (plVar5[1] != 0) {
              cVar15 = (char)param_2[2];
              if (cVar15 == '\0') goto LAB_00a1ca08;
              goto LAB_00a1c918;
            }
          }
          else {
                    /* catch() { ... } // from try @ 00a1c4c4 with catch @ 00a1c720 */
            pcVar7 = strchr(param_6,0x3f);
            if (pcVar7 == (char *)0x0) {
              pcVar7 = strrchr(param_6,0x2f);
            }
            else {
              pcVar7 = memrchr(param_6,0x2f,(long)pcVar7 - (long)param_6);
            }
            if (pcVar7 == (char *)0x0) goto LAB_00a1c8fc;
            __dest = (void *)(*(code *)PTR_malloc_01d1b740)(pcVar7 + (2 - (long)param_6));
            plVar5[3] = (long)__dest;
            if (__dest == (void *)0x0) goto LAB_00a1c83c;
                    /* catch() { ... } // from try @ 00a1c494 with catch @ 00a1c764 */
            memcpy(__dest,param_6,(size_t)(pcVar7 + (1 - (long)param_6)));
            (pcVar7 + (1 - (long)param_6))[plVar5[3]] = '\0';
            pcVar7 = (char *)(*(code *)PTR_strdup_01d1b758)(plVar5[3]);
                    /* catch() { ... } // from try @ 00a1c474 with catch @ 00a1c784 */
            if (pcVar7 != (char *)0x0) {
              sVar8 = strlen(pcVar7);
              if (*pcVar7 == '\"') {
                memmove(pcVar7,pcVar7 + 1,sVar8);
                sVar8 = sVar8 - 1;
              }
                    /* catch() { ... } // from try @ 00a1c55c with catch @ 00a1c7b8
                       catch() { ... } // from try @ 00a1c690 with catch @ 00a1c7b8 */
              if ((sVar8 != 0) && (sVar9 = sVar8 - 1, pcVar7[sVar9] == '\"')) {
                    /* catch() { ... } // from try @ 00a1c58c with catch @ 00a1c7c8 */
                pcVar7[sVar9] = '\0';
                sVar8 = sVar9;
              }
              if (*pcVar7 == '/') {
                if ((sVar8 != 0) && (pcVar7[sVar8 - 1] == '/')) {
                  pcVar7[sVar8 - 1] = '\0';
                }
              }
              else {
                    /* try { // try from 00a1caf8 to 00b1caff has its CatchHandler @ 00a1cc5c */
                    /* try { // try from 00a1cb00 to 00b1cb0b has its CatchHandler @ 00a1cc3c */
                (*(code *)PTR_free_01d1b748)(pcVar7);
                    /* try { // try from 00a1cb18 to 00b1cb3b has its CatchHandler @ 00a1cc24 */
                pcVar7 = (char *)(*(code *)PTR_strdup_01d1b758)("/");
              }
            }
            plVar5[4] = (long)pcVar7;
            (*(code *)PTR_free_01d1b748)(pcVar6);
            if (pcVar7 != (char *)0x0) goto LAB_00a1c908;
          }
        }
        (*(code *)PTR_free_01d1b748)(plVar5[7]);
        (*(code *)PTR_free_01d1b748)(plVar5[5]);
        (*(code *)PTR_free_01d1b748)(plVar5[3]);
        (*(code *)PTR_free_01d1b748)(plVar5[4]);
        (*(code *)PTR_free_01d1b748)(plVar5[1]);
        (*(code *)PTR_free_01d1b748)(plVar5[2]);
                    /* try { // try from 00a1c894 to 00b1c89f has its CatchHandler @ 00a1c8e4 */
        (*(code *)PTR_free_01d1b748)(plVar5[10]);
                    /* try { // try from 00a1c8a0 to 00b1c91f has its CatchHandler @ 00a1c820 */
        (*(code *)PTR_free_01d1b748)(plVar5[9]);
      }
LAB_00a1c8ac:
      (*(code *)PTR_free_01d1b748)(plVar5);
    }
  }
  plVar5 = (long *)0x0;
LAB_00a1c8b8:
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 00a1c894 with catch @ 00a1c8e4 */
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

