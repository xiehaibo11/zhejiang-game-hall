
/* WARNING: Type propagation algorithm not settling */

long * FUN_00a316c0(undefined8 param_1,long *param_2,ulong param_3,char *param_4,char *param_5,
                   char *param_6)

{
  char *__s;
  undefined *puVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  time_t tVar5;
  long *plVar6;
  char *pcVar7;
  char *pcVar8;
  size_t sVar9;
  size_t sVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  void *__dest;
  char cVar15;
  char cVar16;
  bool bVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar22;
  char *local_488;
  undefined1 auStack_480 [16];
  undefined1 auStack_470 [8];
  char *local_468 [128];
  long local_68;
  long *plVar21;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  tVar5 = time((time_t *)0x0);
  plVar6 = (long *)(*(code *)PTR_calloc_01769a18)(1,0x60);
  if (plVar6 != (long *)0x0) {
    if ((param_3 & 1) == 0) {
      local_468[0] = (char *)0x0;
      iVar4 = strncmp(param_4,"#HttpOnly_",10);
      if (iVar4 == 0) {
        param_4 = param_4 + 10;
        *(undefined1 *)((long)plVar6 + 0x5a) = 1;
      }
      if (*param_4 == '#') goto LAB_00a32294;
      pcVar7 = strchr(param_4,0xd);
      if (pcVar7 != (char *)0x0) {
        *pcVar7 = '\0';
      }
      pcVar7 = strchr(param_4,10);
      if (pcVar7 != (char *)0x0) {
        *pcVar7 = '\0';
      }
      pcVar7 = strtok_r(param_4,"\t",local_468);
      if (pcVar7 != (char *)0x0) {
        iVar4 = 0;
        bVar17 = false;
        do {
          switch(iVar4) {
          case 0:
            pcVar8 = pcVar7 + 1;
            if (*pcVar7 != '.') {
              pcVar8 = pcVar7;
            }
            lVar11 = (*(code *)PTR_strdup_01769a10)(pcVar8);
            iVar4 = 0;
            plVar6[5] = lVar11;
            bVar17 = (bool)(bVar17 | lVar11 == 0);
            break;
          case 1:
            iVar4 = FUN_00a4a0f8(pcVar7,&DAT_013c2e86);
            *(bool *)(plVar6 + 8) = iVar4 != 0;
            iVar4 = 1;
            break;
          case 2:
            iVar4 = strcmp("TRUE",pcVar7);
            if ((iVar4 == 0) || (iVar4 = strcmp("FALSE",pcVar7), iVar4 == 0)) {
              lVar11 = (*(code *)PTR_strdup_01769a10)(&DAT_0144b7ba);
              plVar6[3] = lVar11;
              lVar14 = (*(code *)PTR_strdup_01769a10)(&DAT_0144b7ba);
              bVar17 = (bool)(bVar17 | lVar11 == 0 | lVar14 == 0);
              plVar6[4] = lVar14;
              goto switchD_00a31dc4_caseD_3;
            }
            lVar11 = (*(code *)PTR_strdup_01769a10)(pcVar7);
            plVar6[3] = lVar11;
            if (lVar11 == 0) {
              iVar4 = 2;
              bVar17 = true;
            }
            else {
              pcVar7 = (char *)(*(code *)PTR_strdup_01769a10)();
              if (pcVar7 != (char *)0x0) {
                sVar9 = strlen(pcVar7);
                if (*pcVar7 == '\"') {
                  memmove(pcVar7,pcVar7 + 1,sVar9);
                  sVar9 = sVar9 - 1;
                }
                if ((sVar9 != 0) && (sVar10 = sVar9 - 1, pcVar7[sVar10] == '\"')) {
                  pcVar7[sVar10] = '\0';
                  sVar9 = sVar10;
                }
                if (*pcVar7 == '/') {
                  if ((sVar9 != 0) && (pcVar7[sVar9 - 1] == '/')) {
                    pcVar7[sVar9 - 1] = '\0';
                  }
                }
                else {
                  (*(code *)PTR_free_01769a00)(pcVar7);
                  pcVar7 = (char *)(*(code *)PTR_strdup_01769a10)(&DAT_0144b7ba);
                }
              }
              plVar6[4] = (long)pcVar7;
              bVar17 = (bool)(bVar17 | pcVar7 == (char *)0x0);
              iVar4 = 2;
            }
            break;
          case 3:
switchD_00a31dc4_caseD_3:
            iVar4 = FUN_00a4a0f8(pcVar7,&DAT_013c2e86);
            *(bool *)(plVar6 + 0xb) = iVar4 != 0;
            iVar4 = 3;
            break;
          case 4:
            lVar11 = strtol(pcVar7,(char **)0x0,10);
            plVar6[6] = lVar11;
            iVar4 = 4;
            break;
          case 5:
            lVar11 = (*(code *)PTR_strdup_01769a10)(pcVar7);
            plVar6[1] = lVar11;
            bVar17 = (bool)(bVar17 | lVar11 == 0);
            iVar4 = 5;
            break;
          case 6:
            lVar11 = (*(code *)PTR_strdup_01769a10)(pcVar7);
            bVar17 = (bool)(bVar17 | lVar11 == 0);
            iVar4 = 6;
            plVar6[2] = lVar11;
          }
          pcVar7 = strtok_r((char *)0x0,"\t",local_468);
          iVar4 = iVar4 + 1;
        } while ((pcVar7 != (char *)0x0) && (!bVar17));
        if (iVar4 == 6) {
          lVar11 = (*(code *)PTR_strdup_01769a10)(&DAT_013c996e);
          iVar4 = 6;
          bVar17 = (bool)(bVar17 | lVar11 == 0);
          if (lVar11 != 0) {
            iVar4 = 7;
          }
          plVar6[2] = lVar11;
        }
        if ((!bVar17) && (iVar4 == 7)) {
          cVar16 = (char)param_2[2];
          if (cVar16 != '\0') {
LAB_00a32300:
            *(char *)((long)plVar6 + 0x59) = cVar16;
            tVar5 = time((time_t *)0x0);
            if ((long *)*param_2 == (long *)0x0) {
              plVar19 = (long *)0x0;
LAB_00a3247c:
              bVar17 = false;
              cVar16 = (char)param_2[2];
            }
            else {
              plVar22 = (long *)*param_2;
              plVar20 = (long *)0x0;
              do {
                while( true ) {
                  plVar21 = plVar22;
                  plVar22 = (long *)*plVar21;
                  plVar18 = param_2;
                  if ((plVar21[6] == 0) || (tVar5 <= plVar21[6])) break;
                  plVar19 = param_2;
                  if (plVar21 != (long *)*param_2) {
                    plVar19 = plVar20;
                  }
                  *plVar19 = (long)plVar22;
                  param_2[3] = param_2[3] + -1;
                  (*(code *)PTR_free_01769a00)(plVar21[7]);
                  (*(code *)PTR_free_01769a00)(plVar21[5]);
                  (*(code *)PTR_free_01769a00)(plVar21[3]);
                  (*(code *)PTR_free_01769a00)(plVar21[4]);
                  (*(code *)PTR_free_01769a00)(plVar21[1]);
                  (*(code *)PTR_free_01769a00)(plVar21[2]);
                  (*(code *)PTR_free_01769a00)(plVar21[10]);
                  (*(code *)PTR_free_01769a00)(plVar21[9]);
                  (*(code *)PTR_free_01769a00)(plVar21);
                  if (plVar22 == (long *)0x0) {
                    plVar19 = (long *)0x0;
                    goto LAB_00a32538;
                  }
                }
                plVar19 = (long *)0x0;
                plVar20 = plVar21;
              } while (plVar22 != (long *)0x0);
LAB_00a32538:
              do {
                plVar18 = (long *)*plVar18;
                if (plVar18 == (long *)0x0) goto LAB_00a3247c;
                iVar4 = FUN_00a4a0f8(plVar18[1],plVar6[1]);
                plVar19 = plVar18;
              } while (iVar4 == 0);
              if (plVar18[5] == 0) {
                if (plVar6[5] != 0) goto LAB_00a32538;
              }
              else if (((plVar6[5] == 0) || (iVar4 = FUN_00a4a0f8(), iVar4 == 0)) ||
                      ((char)plVar18[8] != (char)plVar6[8])) goto LAB_00a32538;
              if (plVar18[4] == 0) {
                if (plVar6[4] == 0) goto LAB_00a3259c;
                goto LAB_00a32538;
              }
              if ((plVar6[4] == 0) || (iVar4 = FUN_00a4a0f8(), iVar4 == 0)) goto LAB_00a32538;
LAB_00a3259c:
              if ((*(char *)((long)plVar6 + 0x59) == '\0') &&
                 (*(char *)((long)plVar18 + 0x59) != '\0')) goto LAB_00a32400;
              *plVar6 = *plVar18;
              (*(code *)PTR_free_01769a00)(plVar18[1]);
              (*(code *)PTR_free_01769a00)(plVar18[2]);
              (*(code *)PTR_free_01769a00)(plVar18[5]);
              (*(code *)PTR_free_01769a00)(plVar18[3]);
              (*(code *)PTR_free_01769a00)(plVar18[4]);
              (*(code *)PTR_free_01769a00)(plVar18[7]);
              (*(code *)PTR_free_01769a00)(plVar18[9]);
              (*(code *)PTR_free_01769a00)(plVar18[10]);
                    /* try { // try from 00a3261c to 00b3266b has its CatchHandler @ 00a3261c
                       catch() { ... } // from try @ 00a3261c with catch @ 00a3261c
                       catch() { ... } // from try @ 00a326a8 with catch @ 00a3261c
                       catch() { ... } // from try @ 00a326f0 with catch @ 00a3261c */
              memcpy(plVar18,plVar6,0x60);
              (*(code *)PTR_free_01769a00)(plVar6);
              plVar6 = plVar18;
              do {
                plVar19 = plVar6;
                plVar6 = (long *)*plVar19;
              } while ((long *)*plVar19 != (long *)0x0);
              bVar17 = true;
              cVar16 = (char)param_2[2];
              plVar6 = plVar18;
            }
            if (cVar16 != '\0') {
              puVar1 = &DAT_013c3929;
              if (!bVar17) {
                puVar1 = (undefined *)0x13c3932;
              }
              FUN_00a38740(param_1,"%s cookie %s=\"%s\" for domain %s, path %s, expire %ld\n",puVar1
                           ,plVar6[1],plVar6[2],plVar6[5],plVar6[3],plVar6[6]);
            }
            if (!bVar17) {
              if (plVar19 == (long *)0x0) {
                plVar19 = param_2;
              }
              *plVar19 = (long)plVar6;
              param_2[3] = param_2[3] + 1;
            }
            goto LAB_00a322a0;
          }
LAB_00a323f0:
          if (((char)param_2[4] == '\0') || (plVar6[6] != 0)) goto LAB_00a32300;
LAB_00a32400:
          (*(code *)PTR_free_01769a00)(plVar6[7]);
          (*(code *)PTR_free_01769a00)(plVar6[5]);
          (*(code *)PTR_free_01769a00)(plVar6[3]);
          (*(code *)PTR_free_01769a00)(plVar6[4]);
          (*(code *)PTR_free_01769a00)(plVar6[1]);
          (*(code *)PTR_free_01769a00)(plVar6[2]);
          (*(code *)PTR_free_01769a00)(plVar6[10]);
          (*(code *)PTR_free_01769a00)(plVar6[9]);
          goto LAB_00a32294;
        }
      }
      (*(code *)PTR_free_01769a00)(plVar6[7]);
      (*(code *)PTR_free_01769a00)(plVar6[5]);
      (*(code *)PTR_free_01769a00)(plVar6[3]);
      (*(code *)PTR_free_01769a00)(plVar6[4]);
      (*(code *)PTR_free_01769a00)(plVar6[1]);
      (*(code *)PTR_free_01769a00)(plVar6[2]);
      (*(code *)PTR_free_01769a00)(plVar6[10]);
      (*(code *)PTR_free_01769a00)(plVar6[9]);
      (*(code *)PTR_free_01769a00)(plVar6);
    }
    else {
      pcVar7 = (char *)(*(code *)PTR_malloc_017699f8)(5000);
      if (pcVar7 != (char *)0x0) {
        pcVar8 = strchr(param_4,0x3b);
        for (; (*param_4 == '\t' || (*param_4 == ' ')); param_4 = param_4 + 1) {
        }
        bVar17 = false;
        local_488 = param_5;
        do {
          do {
            *pcVar7 = '\0';
            local_468[0] = (char *)((ulong)local_468[0] & 0xffffffffffffff00);
            iVar4 = sscanf(param_4,"%1023[^;\r\n=] =%4999[^;\r\n]",local_468,pcVar7);
            if (0 < iVar4) {
              sVar9 = strlen(pcVar7);
              sVar10 = strlen((char *)local_468);
              cVar16 = param_4[sVar10];
              if ((sVar10 != 0) &&
                 ((cVar15 = (param_4 + sVar10)[-1], cVar15 == ' ' || (cVar15 == '\t')))) {
                for (; ((cVar15 == ' ' || ((cVar15 != '\0' && (cVar15 == '\t')))) && (sVar10 != 0));
                    sVar10 = sVar10 - 1) {
                  cVar15 = param_4[sVar10 - 2];
                }
                *(undefined1 *)((long)local_468 + sVar10) = 0;
              }
              for (; pcVar12 = pcVar7, sVar9 != 0; sVar9 = sVar9 - 1) {
                if ((pcVar7[sVar9 - 1] != '\t') && (pcVar7[sVar9 - 1] != ' ')) {
                  bVar3 = true;
                  goto LAB_00a3186c;
                }
                pcVar7[sVar9 - 1] = '\0';
              }
                    /* try { // try from 00a31818 to 00b31863 has its CatchHandler @ 00a31818
                       catch() { ... } // from try @ 00a31818 with catch @ 00a31818
                       catch() { ... } // from try @ 00a31868 with catch @ 00a31818 */
              bVar3 = false;
LAB_00a3186c:
              for (; (*pcVar12 == ' ' || (*pcVar12 == '\t')); pcVar12 = pcVar12 + 1) {
                    /* try { // try from 00a31868 to 00b318af has its CatchHandler @ 00a31818 */
              }
              if ((plVar6[1] == 0) && (cVar16 == '=')) {
                    /* catch() { ... } // from try @ 00a31864 with catch @ 00a3189c */
                lVar11 = (*(code *)PTR_strdup_01769a10)(local_468);
                plVar6[1] = lVar11;
                    /* try { // try from 00a318b0 to 00b31b17 has its CatchHandler @ 00a318b0
                       catch() { ... } // from try @ 00a318b0 with catch @ 00a318b0
                       catch() { ... } // from try @ 00a31b98 with catch @ 00a318b0 */
                lVar11 = (*(code *)PTR_strdup_01769a10)(pcVar12);
                plVar6[2] = lVar11;
                if ((lVar11 != 0) && (plVar6[1] != 0)) goto LAB_00a318d0;
LAB_00a32070:
                bVar17 = true;
                goto LAB_00a32078;
              }
              if (bVar3) {
LAB_00a318d0:
                iVar4 = FUN_00a4a0f8(&DAT_0145a62a,local_468);
                if (iVar4 != 0) {
                  (*(code *)PTR_free_01769a00)(plVar6[3]);
                  lVar11 = (*(code *)PTR_strdup_01769a10)(pcVar12);
                  plVar6[3] = lVar11;
                  if (lVar11 != 0) {
                    pcVar12 = (char *)(*(code *)PTR_strdup_01769a10)();
                    if (pcVar12 != (char *)0x0) {
                      sVar9 = strlen(pcVar12);
                      if (*pcVar12 == '\"') {
                        memmove(pcVar12,pcVar12 + 1,sVar9);
                        sVar9 = sVar9 - 1;
                      }
                      if ((sVar9 != 0) && (sVar10 = sVar9 - 1, pcVar12[sVar10] == '\"')) {
                        pcVar12[sVar10] = '\0';
                        sVar9 = sVar10;
                      }
                      if (*pcVar12 != '/') {
                        (*(code *)PTR_free_01769a00)(pcVar12);
                        lVar11 = (*(code *)PTR_strdup_01769a10)(&DAT_0144b7ba);
                        plVar6[4] = lVar11;
                        goto joined_r0x00a31c98;
                      }
                      if ((sVar9 != 0) && (pcVar12[sVar9 - 1] == '/')) {
                        pcVar12[sVar9 - 1] = '\0';
                      }
                      plVar6[4] = (long)pcVar12;
                      goto joined_r0x00a3198c;
                    }
                    plVar6[4] = 0;
                  }
                  goto LAB_00a32070;
                }
                iVar4 = FUN_00a4a0f8("domain",local_468);
                if (iVar4 == 0) {
                  iVar4 = FUN_00a4a0f8("version",local_468);
                  if (iVar4 == 0) {
                    iVar4 = FUN_00a4a0f8("max-age",local_468);
                    if (iVar4 == 0) {
                      iVar4 = FUN_00a4a0f8("expires",local_468);
                      if (iVar4 != 0) {
                        (*(code *)PTR_free_01769a00)(plVar6[7]);
                        lVar11 = (*(code *)PTR_strdup_01769a10)(pcVar12);
                        plVar6[7] = lVar11;
                        goto joined_r0x00a31c98;
                      }
                    }
                    else {
                      (*(code *)PTR_free_01769a00)(plVar6[10]);
                      lVar11 = (*(code *)PTR_strdup_01769a10)(pcVar12);
                      plVar6[10] = lVar11;
                      if (lVar11 == 0) {
                        bVar17 = true;
                        lVar11 = plVar6[7];
                        goto joined_r0x00a3252c;
                      }
                    }
                  }
                  else {
                    (*(code *)PTR_free_01769a00)(plVar6[9]);
                    lVar11 = (*(code *)PTR_strdup_01769a10)(pcVar12);
                    plVar6[9] = lVar11;
joined_r0x00a31c98:
                    if (lVar11 == 0) goto LAB_00a32070;
                  }
                }
                else {
                  __s = pcVar12 + 1;
                  if (*pcVar12 != '.') {
                    __s = pcVar12;
                  }
                  pcVar12 = local_488;
                  if (local_488 == (char *)0x0) {
                    pcVar12 = __s;
                  }
                  iVar4 = inet_pton(2,pcVar12,auStack_470);
                  if (iVar4 == 0) {
                    iVar4 = inet_pton(10,pcVar12,auStack_480);
                    bVar3 = iVar4 != 0;
                  }
                  else {
                    bVar3 = true;
                  }
                  pcVar13 = strchr(__s,0x2e);
                    /* try { // try from 00a31b18 to 00b31b4b has its CatchHandler @ 00a31c18 */
                  pcVar12 = ":";
                  if (pcVar13 != (char *)0x0) {
                    pcVar12 = local_488;
                  }
                  local_488 = pcVar12;
                  if (pcVar12 == (char *)0x0) {
LAB_00a31b94:
                    /* try { // try from 00a31b98 to 00b31c33 has its CatchHandler @ 00a318b0 */
                    (*(code *)PTR_free_01769a00)(plVar6[5]);
                    lVar11 = (*(code *)PTR_strdup_01769a10)(__s);
                    plVar6[5] = lVar11;
                    if (bVar3 || lVar11 == 0) {
                      bVar17 = (bool)(bVar17 | lVar11 == 0);
                      if (lVar11 == 0) goto LAB_00a32078;
                    }
                    else {
                      *(undefined1 *)(plVar6 + 8) = 1;
                    }
                  }
                  else {
                    if (bVar3) {
                      iVar4 = strcmp(__s,pcVar12);
                      if (iVar4 == 0) goto LAB_00a31b94;
                    }
                    else {
                      sVar9 = strlen(__s);
                    /* try { // try from 00a31b4c to 00b31b5f has its CatchHandler @ 00a31be4 */
                      sVar10 = strlen(pcVar12);
                      if (sVar9 <= sVar10) {
                    /* try { // try from 00a31b64 to 00b31b97 has its CatchHandler @ 00a31be8 */
                        iVar4 = FUN_00a4a0f8(__s);
                        if ((iVar4 != 0) &&
                           ((sVar10 == sVar9 || (pcVar12[(sVar10 - sVar9) + -1] == '.'))))
                        goto LAB_00a31b94;
                      }
                    }
                    /* catch() { ... } // from try @ 00a31b4c with catch @ 00a31be4 */
                    /* catch() { ... } // from try @ 00a31b64 with catch @ 00a31be8 */
                    FUN_00a38740(param_1,"skipped cookie with bad tailmatch domain: %s\n",__s);
                    bVar17 = true;
                  }
                }
              }
              else {
                iVar4 = FUN_00a4a0f8("secure",local_468);
                if (iVar4 == 0) {
                  iVar4 = FUN_00a4a0f8("httponly",local_468);
                  if (iVar4 == 0) {
                    if (cVar16 == '=') goto LAB_00a318d0;
                  }
                  else {
                    *(undefined1 *)((long)plVar6 + 0x5a) = 1;
                  }
                }
                else {
                  *(undefined1 *)(plVar6 + 0xb) = 1;
                }
              }
            }
joined_r0x00a3198c:
            if ((pcVar8 == (char *)0x0) || (param_4 = pcVar8, *pcVar8 == '\0')) goto LAB_00a32078;
            do {
              do {
                param_4 = param_4 + 1;
                cVar16 = *param_4;
              } while (cVar16 == ' ');
            } while (cVar16 == '\t');
            pcVar8 = strchr(param_4,0x3b);
          } while (pcVar8 != (char *)0x0);
          if (cVar16 == '\0') break;
          sVar9 = strlen(param_4);
          pcVar8 = param_4 + sVar9;
        } while (pcVar8 != (char *)0x0);
LAB_00a32078:
        pcVar8 = (char *)plVar6[10];
        if (pcVar8 == (char *)0x0) {
          lVar11 = plVar6[7];
joined_r0x00a3252c:
          if (lVar11 != 0) {
            lVar11 = FUN_00a4c2a0(lVar11,0);
            plVar6[6] = lVar11;
            if (lVar11 == 0) {
              plVar6[6] = 1;
            }
            else if (lVar11 < 0) {
              plVar6[6] = 0;
            }
          }
          if (!bVar17) goto LAB_00a320d0;
LAB_00a32224:
          (*(code *)PTR_free_01769a00)(pcVar7);
        }
        else {
          if (*pcVar8 == '\"') {
            pcVar8 = pcVar8 + 1;
          }
          lVar14 = strtol(pcVar8,(char **)0x0,10);
          lVar11 = 0x7fffffffffffffff;
          plVar6[6] = lVar14;
          if (lVar14 <= 0x7fffffffffffffff - tVar5) {
            lVar11 = lVar14 + tVar5;
          }
          plVar6[6] = lVar11;
          if (bVar17) goto LAB_00a32224;
LAB_00a320d0:
          if ((local_488 != (char *)0x0) && (plVar6[5] == 0)) {
            lVar11 = (*(code *)PTR_strdup_01769a10)(local_488);
            plVar6[5] = lVar11;
            if (lVar11 == 0) goto LAB_00a32224;
          }
          if ((param_6 == (char *)0x0) || (plVar6[3] != 0)) {
LAB_00a322e4:
            (*(code *)PTR_free_01769a00)(pcVar7);
LAB_00a322f0:
            if (plVar6[1] != 0) {
              cVar16 = (char)param_2[2];
              if (cVar16 == '\0') goto LAB_00a323f0;
              goto LAB_00a32300;
            }
          }
          else {
            pcVar8 = strchr(param_6,0x3f);
            if (pcVar8 == (char *)0x0) {
              pcVar8 = strrchr(param_6,0x2f);
            }
            else {
              pcVar8 = memrchr(param_6,0x2f,(long)pcVar8 - (long)param_6);
            }
            if (pcVar8 == (char *)0x0) goto LAB_00a322e4;
            __dest = (void *)(*(code *)PTR_malloc_017699f8)(pcVar8 + (2 - (long)param_6));
            plVar6[3] = (long)__dest;
            if (__dest == (void *)0x0) goto LAB_00a32224;
            memcpy(__dest,param_6,(size_t)(pcVar8 + (1 - (long)param_6)));
            (pcVar8 + (1 - (long)param_6))[plVar6[3]] = '\0';
            pcVar8 = (char *)(*(code *)PTR_strdup_01769a10)(plVar6[3]);
            if (pcVar8 != (char *)0x0) {
              sVar9 = strlen(pcVar8);
              if (*pcVar8 == '\"') {
                memmove(pcVar8,pcVar8 + 1,sVar9);
                sVar9 = sVar9 - 1;
              }
              if ((sVar9 != 0) && (sVar10 = sVar9 - 1, pcVar8[sVar10] == '\"')) {
                pcVar8[sVar10] = '\0';
                sVar9 = sVar10;
              }
              if (*pcVar8 == '/') {
                if ((sVar9 != 0) && (pcVar8[sVar9 - 1] == '/')) {
                  pcVar8[sVar9 - 1] = '\0';
                }
              }
              else {
                (*(code *)PTR_free_01769a00)(pcVar8);
                pcVar8 = (char *)(*(code *)PTR_strdup_01769a10)(&DAT_0144b7ba);
              }
            }
            plVar6[4] = (long)pcVar8;
            (*(code *)PTR_free_01769a00)(pcVar7);
            if (pcVar8 != (char *)0x0) goto LAB_00a322f0;
          }
        }
        (*(code *)PTR_free_01769a00)(plVar6[7]);
        (*(code *)PTR_free_01769a00)(plVar6[5]);
        (*(code *)PTR_free_01769a00)(plVar6[3]);
        (*(code *)PTR_free_01769a00)(plVar6[4]);
        (*(code *)PTR_free_01769a00)(plVar6[1]);
        (*(code *)PTR_free_01769a00)(plVar6[2]);
        (*(code *)PTR_free_01769a00)(plVar6[10]);
        (*(code *)PTR_free_01769a00)(plVar6[9]);
      }
LAB_00a32294:
      (*(code *)PTR_free_01769a00)(plVar6);
    }
  }
  plVar6 = (long *)0x0;
LAB_00a322a0:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

