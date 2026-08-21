
undefined4 FUN_01052dcc(long *param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  long lVar12;
  ssize_t sVar13;
  size_t sVar14;
  undefined8 *puVar15;
  int *piVar16;
  ulong uVar17;
  size_t sVar18;
  long lVar19;
  undefined8 uVar20;
  char cVar21;
  byte bVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  char *pcVar26;
  undefined4 uVar27;
  undefined *puVar28;
  char *pcVar29;
  long lVar30;
  int iVar31;
  int iVar32;
  char *pcVar33;
  long *plVar34;
  char *local_470;
  int local_468;
  undefined4 uStack_464;
  int local_460;
  undefined1 *local_458;
  undefined4 local_44c;
  undefined8 local_448;
  undefined1 *local_440;
  int local_434;
  char acStack_428 [19];
  undefined1 local_415;
  undefined1 auStack_414 [5];
  char local_40f;
  char local_40d;
  char acStack_408 [32];
  undefined8 local_3e8;
  undefined1 auStack_3b8 [464];
  char local_1e8 [256];
  char local_e8 [16];
  uint local_d8;
  __time_t local_90;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar30 = param_1[0x44];
  bVar4 = *(byte *)((long)param_1 + 0x304);
  iVar6 = lws_hdr_total_length(param_1,0);
  iVar7 = lws_hdr_total_length(param_1,1);
  cVar21 = '\x02';
  if (iVar6 == 0) {
    cVar21 = '\x01';
  }
  cVar3 = iVar6 != 0;
  if (iVar7 != 0) {
    cVar3 = cVar21;
  }
  iVar6 = lws_hdr_total_length(param_1,2);
  if (iVar6 != 0) {
    cVar3 = cVar3 + '\x01';
  }
  iVar6 = lws_hdr_total_length(param_1,0x4a);
  if (iVar6 != 0) {
    cVar3 = cVar3 + '\x01';
  }
  iVar6 = lws_hdr_total_length(param_1,0x49);
  if (iVar6 != 0) {
    cVar3 = cVar3 + '\x01';
  }
  iVar6 = lws_hdr_total_length(param_1,0x4b);
  if (iVar6 != 0) {
    cVar3 = cVar3 + '\x01';
  }
  iVar6 = lws_hdr_total_length(param_1,0x51);
  if (iVar6 != 0) {
    cVar3 = cVar3 + '\x01';
  }
  iVar6 = lws_hdr_total_length(param_1,0x52);
                    /* try { // try from 01052ea8 to 01152ebb has its CatchHandler @ 010534b0 */
  if (iVar6 != 0) {
    cVar3 = cVar3 + '\x01';
  }
  if (cVar3 == '\x01') {
LAB_01052edc:
    iVar6 = lws_hdr_total_length(param_1,0);
    uVar8 = 0;
    if (iVar6 == 0) {
      uVar8 = 1;
      iVar6 = lws_hdr_total_length(param_1,1);
      if (iVar6 == 0) {
        uVar8 = 2;
                    /* try { // try from 01052f10 to 01152f23 has its CatchHandler @ 010534a8 */
        iVar6 = lws_hdr_total_length(param_1,2);
        if (iVar6 == 0) {
          uVar8 = 0x4a;
          iVar6 = lws_hdr_total_length(param_1,0x4a);
                    /* try { // try from 01052f28 to 01152f77 has its CatchHandler @ 010535fc */
          if (iVar6 == 0) {
            uVar8 = 0x49;
            iVar6 = lws_hdr_total_length(param_1,0x49);
            if (iVar6 == 0) {
              uVar8 = 0x4b;
              iVar6 = lws_hdr_total_length(param_1,0x4b);
              if (iVar6 == 0) {
                uVar8 = 0x51;
                iVar6 = lws_hdr_total_length(param_1,0x51);
                if (iVar6 == 0) {
                  uVar8 = 0x52;
                  iVar6 = lws_hdr_total_length(param_1,0x52);
                  if (iVar6 == 0) goto LAB_01053098;
                }
              }
            }
          }
        }
      }
    }
                    /* try { // try from 01052f84 to 01152f97 has its CatchHandler @ 01053738 */
    pcVar10 = (char *)FUN_01047fa0(param_1,uVar8);
    iVar6 = lws_hdr_total_length(param_1,uVar8);
                    /* try { // try from 01052f9c to 01152fc3 has its CatchHandler @ 010538b0 */
    if ((pcVar10 == (char *)0x0) || (*pcVar10 != '/')) {
      uVar20 = 0x193;
LAB_01053078:
      lws_return_http_status(param_1,uVar20,0);
    }
    else {
      iVar7 = FUN_01042334(param_1);
      if (iVar7 == 0) {
        param_1[0x2b] = 0;
        iVar7 = lws_hdr_total_length(param_1,1);
        if (((iVar7 != 0) || (iVar7 = lws_hdr_total_length(param_1,0x49), iVar7 != 0)) ||
           (iVar7 = lws_hdr_total_length(param_1,0x4a), iVar7 != 0)) {
          param_1[0x2b] = 0x6400000;
        }
        iVar7 = lws_hdr_total_length(param_1,0x1b);
        if (iVar7 != 0) {
          lws_hdr_copy(param_1,acStack_408,0x1f,0x1b);
          lVar11 = atoll(acStack_408);
          param_1[0x2b] = lVar11;
        }
                    /* try { // try from 01053028 to 0115303b has its CatchHandler @ 01053728 */
        if ((*(byte *)((long)param_1 + 0x2f4) >> 1 & 1) == 0) {
          iVar7 = lws_hdr_total_length(param_1,0xf);
                    /* try { // try from 01053040 to 01153067 has its CatchHandler @ 0105389c */
          if (((iVar7 < 8) || (lws_hdr_copy(param_1,auStack_414,9,0xf), local_40f != '1')) ||
             (local_40d != '1')) {
            uVar8 = 0;
          }
          else {
            uVar8 = 1;
          }
                    /* try { // try from 010530fc to 0115310f has its CatchHandler @ 01053718 */
          *(undefined4 *)(param_1 + 0x28) = uVar8;
          iVar7 = lws_hdr_total_length(param_1,4);
          uVar27 = uVar8;
          if (iVar7 != 0) {
                    /* try { // try from 01053114 to 01153137 has its CatchHandler @ 0105387c */
            lws_hdr_copy(param_1,acStack_428,0x13,4);
            local_415 = 0;
            iVar7 = strcasecmp(acStack_428,"keep-alive");
            if (iVar7 == 0) {
              uVar27 = 1;
            }
            else {
              iVar7 = strcasecmp(acStack_428,"close");
              uVar27 = 0;
              if (iVar7 != 0) {
                uVar27 = uVar8;
              }
            }
          }
                    /* try { // try from 01053154 to 0115315b has its CatchHandler @ 0105398c */
          *(undefined4 *)((long)param_1 + 0x144) = uVar27;
        }
        else {
          *(undefined4 *)(param_1 + 0x28) = 2;
        }
                    /* try { // try from 0105315c to 0115316f has its CatchHandler @ 01053714 */
                    /* try { // try from 01053174 to 01153197 has its CatchHandler @ 01053878 */
        iVar7 = (**(code **)(param_1[0x49] + 8))(param_1,0x12,param_1[0x4e],pcVar10,(long)iVar6);
        if (iVar7 != 0) goto LAB_01053180;
        lws_set_timeout(param_1,10,*(undefined4 *)(param_1[0x44] + 0xc80));
                    /* try { // try from 010531ac to 011531bf has its CatchHandler @ 01053710 */
        if ((*(byte *)(param_1 + 0x5f) >> 4 & 1) != 0) {
          lVar30 = *(long *)(lVar30 + (ulong)bVar4 * 0x6f8 + 0x7b8);
                    /* try { // try from 01053270 to 01153293 has its CatchHandler @ 0105386c */
          local_3e8 = lVar30 + 0x10;
          iVar6 = lws_hdr_total_length(param_1,3);
          if (iVar6 != 0) {
            pcVar10 = (char *)(lVar30 + 0x210);
            uVar20 = FUN_01047fa0(param_1,3);
            iVar6 = sprintf(pcVar10,"https://%s/",uVar20);
                    /* try { // try from 010532ac to 011532b3 has its CatchHandler @ 0105398c */
            iVar6 = lws_http_redirect(param_1,0x12d,pcVar10,iVar6,&local_3e8,pcVar10);
joined_r0x010532c4:
            if (-1 < iVar6) {
LAB_01053324:
              uVar8 = lws_http_transaction_completed(param_1);
              goto LAB_0105332c;
            }
          }
          goto LAB_01053098;
        }
        lVar12 = FUN_01052c20(param_1,pcVar10,iVar6);
                    /* try { // try from 010531c4 to 011531e7 has its CatchHandler @ 01053874 */
        if (lVar12 == 0) {
          iVar7 = FUN_01042188(param_1,*(undefined8 *)(param_1[0x45] + 0x188));
          if (iVar7 != 0) goto LAB_01053180;
LAB_01053ca4:
          iVar6 = (**(code **)(param_1[0x49] + 8))(param_1,0xc,param_1[0x4e],pcVar10,(long)iVar6);
joined_r0x01053cc4:
          if (iVar6 != 0) {
LAB_01053180:
            if (*(long *)(lVar5 + 0x28) == local_68) {
              return 1;
            }
            goto LAB_01053a5c;
          }
LAB_01053cc8:
          if ((*(char *)((long)param_1 + 0x2ff) != '\x01') && (param_1[0x2b] != 0)) {
            _lws_log(4,"%s: %p: LWSS_HTTP_BODY state set\n","lws_http_action",param_1);
            *(undefined1 *)((long)param_1 + 0x2ff) = 3;
            param_1[0x2c] = param_1[0x2b];
            if (*(long *)(lVar5 + 0x28) == local_68) {
              return 0;
            }
            goto LAB_01053a5c;
          }
        }
        else {
          pcVar29 = pcVar10 + *(byte *)(lVar12 + 0x4e);
          if ((1 < (ulong)*(byte *)(lVar12 + 0x4e)) ||
             (bVar22 = *(byte *)(lVar12 + 0x4d), (bVar22 & 0xfe) == 4)) {
            bVar22 = *(byte *)(lVar12 + 0x4d);
                    /* try { // try from 01053200 to 01153207 has its CatchHandler @ 0105398c */
                    /* try { // try from 01053208 to 0115321b has its CatchHandler @ 0105370c */
            if (((*pcVar29 != '/') || ((bVar22 & 0xfe) == 4)) && ((bVar22 != 3 && (bVar22 != 6)))) {
              lVar30 = *(long *)(lVar30 + (ulong)bVar4 * 0x6f8 + 0x7b8);
              local_3e8 = lVar30 + 0x10;
              pcVar29 = (char *)(lVar30 + 0x210);
              if ((bVar22 & 0xfe) == 4) {
                uVar8 = lws_snprintf(pcVar29,0x100,"%s%s",
                                     (&PTR_s_http____01728120)[(ulong)bVar22 & 1],
                                     *(undefined8 *)(lVar12 + 0x10));
              }
              else {
                iVar6 = lws_hdr_total_length(param_1,3);
                if (iVar6 == 0) {
                    /* catch() { ... } // from try @ 01053474 with catch @ 01053494 */
                  iVar6 = lws_hdr_total_length(param_1,0x23);
                    /* catch() { ... } // from try @ 01053464 with catch @ 01053498 */
                  if (iVar6 == 0) goto LAB_01053098;
                    /* catch() { ... } // from try @ 010533dc with catch @ 0105349c */
                    /* catch() { ... } // from try @ 010533cc with catch @ 010534a0 */
                  iVar6 = lws_is_ssl(param_1);
                    /* catch() { ... } // from try @ 01050bd4 with catch @ 010534a4 */
                    /* catch() { ... } // from try @ 01052f10 with catch @ 010534a8 */
                    /* catch() { ... } // from try @ 01052ec0 with catch @ 010534ac */
                    /* catch() { ... } // from try @ 01052ea8 with catch @ 010534b0 */
                    /* catch() { ... } // from try @ 010529e8 with catch @ 010534b4 */
                  puVar28 = (&PTR_s_http____01728120)[iVar6 != 0];
                    /* catch() { ... } // from try @ 01052998 with catch @ 010534b8 */
                  uVar20 = 0x23;
                }
                else {
                  iVar6 = lws_is_ssl(param_1);
                    /* try { // try from 01053464 to 01153473 has its CatchHandler @ 01053498 */
                    /* try { // try from 01053474 to 01153483 has its CatchHandler @ 01053494 */
                  puVar28 = (&PTR_s_http____01728120)[iVar6 != 0];
                  uVar20 = 3;
                }
                    /* catch() { ... } // from try @ 01052990 with catch @ 010534bc */
                    /* catch() { ... } // from try @ 0105294c with catch @ 010534c0 */
                uVar20 = FUN_01047fa0(param_1,uVar20);
                    /* catch() { ... } // from try @ 010528f8 with catch @ 010534c4 */
                    /* catch() { ... } // from try @ 010528a8 with catch @ 010534cc */
                    /* catch() { ... } // from try @ 0105288c with catch @ 010534d0 */
                    /* catch() { ... } // from try @ 01052838 with catch @ 010534d4 */
                    /* catch() { ... } // from try @ 010527e8 with catch @ 010534dc */
                    /* catch() { ... } // from try @ 010516d0 with catch @ 010534e0 */
                uVar8 = lws_snprintf(pcVar29,0x100,"%s%s%s/",puVar28,uVar20,pcVar10);
              }
              pcVar10 = pcVar29;
                    /* catch() { ... } // from try @ 0105167c with catch @ 010534f4 */
                    /* catch() { ... } // from try @ 0105162c with catch @ 010534fc */
                    /* catch() { ... } // from try @ 01052db8 with catch @ 01053500 */
                    /* catch() { ... } // from try @ 01052d8c with catch @ 01053504 */
                    /* catch() { ... } // from try @ 01052754 with catch @ 01053508 */
                    /* catch() { ... } // from try @ 01052200 with catch @ 0105350c */
              if ((((*pcVar29 == 'h') && (*(char *)(lVar30 + 0x211) == 't')) &&
                  (*(char *)(lVar30 + 0x212) == 't')) && (*(char *)(lVar30 + 0x213) == 'p')) {
                    /* catch() { ... } // from try @ 01052ed8 with catch @ 0105352c */
                    /* catch() { ... } // from try @ 010529b0 with catch @ 01053530 */
                    /* catch() { ... } // from try @ 01052910 with catch @ 01053534 */
                pcVar33 = (char *)(lVar30 + 0x215);
                    /* catch() { ... } // from try @ 010528c0 with catch @ 01053538 */
                if (*(char *)(lVar30 + 0x214) != 's') {
                  pcVar33 = (char *)(lVar30 + 0x214);
                }
                    /* catch() { ... } // from try @ 01052850 with catch @ 0105353c */
                    /* catch() { ... } // from try @ 01052800 with catch @ 01053540 */
                pcVar10 = pcVar33;
                    /* catch() { ... } // from try @ 01051694 with catch @ 01053544 */
                if ((*pcVar33 == ':') && (pcVar10 = pcVar33 + 1, *pcVar10 == '/')) {
                  pcVar10 = pcVar33 + 2;
                }
              }
              pcVar33 = pcVar10 + 2;
              while( true ) {
                    /* catch() { ... } // from try @ 01051644 with catch @ 0105356c */
                    /* catch() { ... } // from try @ 01052694 with catch @ 01053588 */
                    /* catch() { ... } // from try @ 010520fc with catch @ 0105358c */
                while (*pcVar10 == '/') {
                    /* catch() { ... } // from try @ 010520f0 with catch @ 01053594 */
                    /* catch() { ... } // from try @ 01052008 with catch @ 01053598 */
                  if (pcVar10[1] != '/') goto LAB_01053560;
                    /* catch() { ... } // from try @ 01052c80 with catch @ 01053570 */
                    /* catch() { ... } // from try @ 01052c30 with catch @ 01053574 */
                  *pcVar10 = '/';
                  pcVar26 = pcVar33;
                  do {
                    /* catch() { ... } // from try @ 01052bd8 with catch @ 01053578 */
                    cVar21 = *pcVar26;
                    /* catch() { ... } // from try @ 01052b88 with catch @ 0105357c */
                    pcVar26[-1] = cVar21;
                    /* catch() { ... } // from try @ 01052208 with catch @ 01053580 */
                    pcVar26 = pcVar26 + 1;
                    /* catch() { ... } // from try @ 010526a4 with catch @ 01053584 */
                  } while (cVar21 != '\0');
                }
                    /* catch() { ... } // from try @ 01051270 with catch @ 010535a4 */
                if (*pcVar10 == '\0') break;
LAB_01053560:
                pcVar33 = pcVar33 + 1;
                pcVar10 = pcVar10 + 1;
              }
                    /* catch() { ... } // from try @ 010511f8 with catch @ 010535b4 */
                    /* catch() { ... } // from try @ 010511c0 with catch @ 010535bc */
              iVar6 = lws_http_redirect(param_1,0x12d,pcVar29,uVar8,&local_3e8,pcVar29);
              goto joined_r0x010532c4;
            }
          }
          if (*(long *)(lVar12 + 0x50) != 0) {
                    /* try { // try from 01053220 to 01153243 has its CatchHandler @ 01053870 */
            iVar7 = lws_hdr_total_length(param_1,0x19);
            if (iVar7 != 0) {
              iVar7 = lws_hdr_copy(param_1,&local_3e8,0xa0,0x19);
              if (iVar7 < 7) {
                pcVar10 = "b64 auth too long\n";
LAB_01053254:
                    /* try { // try from 01053258 to 0115326b has its CatchHandler @ 01053708 */
                _lws_log(1,pcVar10);
              }
              else {
                local_3e8._0_6_ = (uint6)(uint5)local_3e8;
                iVar7 = strcasecmp((char *)&local_3e8,"Basic");
                if (iVar7 == 0) {
                  iVar7 = lws_b64_decode_string((long)&local_3e8 + 6,local_e8,0x78);
                  if (-1 < iVar7) {
                    pcVar33 = *(char **)(lVar12 + 0x50);
                    iVar9 = open(pcVar33,0);
                    if (iVar9 < 0) {
                    /* catch() { ... } // from try @ 01050dcc with catch @ 010535cc */
                    /* catch() { ... } // from try @ 01050724 with catch @ 010535d0 */
                      _lws_log(1,"can\'t open auth file: %s\n",pcVar33);
                    }
                    else {
                      iVar31 = 0;
                    /* try { // try from 010533cc to 011533db has its CatchHandler @ 010534a0 */
                    /* try { // try from 010533dc to 011533eb has its CatchHandler @ 0105349c */
                      while( true ) {
                        sVar13 = read(iVar9,local_1e8,0x80);
                        if ((int)sVar13 < 1) break;
                        iVar23 = 0;
                        iVar32 = iVar31;
                        cVar21 = local_1e8[0];
                        while( true ) {
                          if (iVar32 == iVar7) {
                            if ((cVar21 == '\n') || (cVar21 == '\r')) {
                              close(iVar9);
                              goto LAB_010535f4;
                            }
                            iVar32 = 0;
                          }
                          iVar23 = iVar23 + 1;
                          iVar31 = 0;
                          if (cVar21 == local_e8[iVar32]) {
                            iVar31 = iVar32 + 1;
                          }
                          if (iVar23 == (int)sVar13) break;
                          cVar21 = local_1e8[iVar23];
                          iVar32 = iVar31;
                        }
                      }
                    /* catch() { ... } // from try @ 010506ac with catch @ 010535e0 */
                    /* catch() { ... } // from try @ 01050674 with catch @ 010535e8 */
                      close(iVar9);
                      if (iVar31 != iVar7) {
                        _lws_log(1,"basic auth lookup failed\n");
                        goto LAB_01053ba8;
                      }
                    }
LAB_010535f4:
                    /* catch() { ... } // from try @ 0105276c with catch @ 010535f8 */
                    /* catch() { ... } // from try @ 01052f28 with catch @ 010535fc */
                    /* catch() { ... } // from try @ 01052a00 with catch @ 01053600 */
                    _lws_log(4,"basic auth accepted\n");
                    /* catch() { ... } // from try @ 01051f8c with catch @ 01053604 */
                    bVar22 = *(byte *)(lVar12 + 0x4d);
                    goto LAB_01053608;
                  }
                    /* try { // try from 01053484 to 01153f0f has its CatchHandler @ 01050340 */
                  pcVar10 = "plain auth too long\n";
                  goto LAB_01053254;
                }
                _lws_log(1,"auth missing basic: %s\n",&local_3e8);
              }
              lws_return_http_status(param_1,0x193,0);
              goto LAB_01053324;
            }
LAB_01053ba8:
            uVar8 = FUN_01053e9c(param_1);
LAB_0105332c:
            if (*(long *)(lVar5 + 0x28) == local_68) {
              return uVar8;
            }
            goto LAB_01053a5c;
          }
LAB_01053608:
          lVar30 = *(long *)(lVar12 + 0x20);
                    /* catch() { ... } // from try @ 01051d8c with catch @ 0105360c */
          if ((bVar22 != 6) && (lVar30 == 0)) {
LAB_01053618:
                    /* catch() { ... } // from try @ 01051d28 with catch @ 0105361c */
            sVar14 = strlen(pcVar29);
                    /* catch() { ... } // from try @ 01051d04 with catch @ 01053620 */
                    /* catch() { ... } // from try @ 01051704 with catch @ 01053630 */
                    /* catch() { ... } // from try @ 010516fc with catch @ 01053634 */
                    /* catch() { ... } // from try @ 010524e8 with catch @ 01053638 */
                    /* catch() { ... } // from try @ 010524b4 with catch @ 0105363c */
            if ((*pcVar29 == '\0') || (((int)sVar14 == 1 && (*pcVar29 == '/')))) {
                    /* catch() { ... } // from try @ 010525c4 with catch @ 01053640 */
              pcVar29 = *(char **)(lVar12 + 0x18);
            }
                    /* catch() { ... } // from try @ 010522e0 with catch @ 01053644 */
                    /* catch() { ... } // from try @ 01051f68 with catch @ 01053648 */
            uVar24 = *(uint *)((long)param_1 + 0x2f4);
                    /* catch() { ... } // from try @ 010517a4 with catch @ 0105364c */
                    /* catch() { ... } // from try @ 01051150 with catch @ 01053650 */
                    /* catch() { ... } // from try @ 01051148 with catch @ 01053654 */
            *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(lVar12 + 0x44);
                    /* catch() { ... } // from try @ 01050eb8 with catch @ 01053658 */
            pcVar33 = "index.html";
            if (pcVar29 != (char *)0x0) {
              pcVar33 = pcVar29;
            }
            uVar25 = uVar24 & 0x7ff | (*(byte *)(lVar12 + 0x4c) & 1) << 0xb;
                    /* catch() { ... } // from try @ 01050e3c with catch @ 01053670 */
            *(uint *)((long)param_1 + 0x2f4) = uVar24 & 0xfffff000 | uVar25;
            uVar25 = uVar25 | (*(byte *)(lVar12 + 0x4c) >> 1 & 1) << 0xc;
            *(uint *)((long)param_1 + 0x2f4) = uVar24 & 0xffffe000 | uVar25;
                    /* catch() { ... } // from try @ 01050d4c with catch @ 01053690 */
                    /* catch() { ... } // from try @ 01050b44 with catch @ 01053694 */
                    /* catch() { ... } // from try @ 01050af4 with catch @ 01053698 */
                    /* catch() { ... } // from try @ 01050604 with catch @ 0105369c */
                    /* catch() { ... } // from try @ 010505fc with catch @ 010536a0 */
            *(uint *)((long)param_1 + 0x2f4) =
                 uVar24 & 0xffffc000 | uVar25 | (*(byte *)(lVar12 + 0x4c) >> 2 & 1) << 0xd;
                    /* catch() { ... } // from try @ 01052c98 with catch @ 010536a4 */
            uVar20 = *(undefined8 *)(lVar12 + 0x10);
                    /* catch() { ... } // from try @ 01052c48 with catch @ 010536a8 */
            plVar34 = *(long **)(lVar12 + 0x38);
                    /* catch() { ... } // from try @ 01052bf0 with catch @ 010536ac */
                    /* catch() { ... } // from try @ 01052ba0 with catch @ 010536b0 */
                    /* catch() { ... } // from try @ 01052220 with catch @ 010536b4 */
                    /* catch() { ... } // from try @ 01052124 with catch @ 010536b8 */
            local_44c = 0;
            local_458 = auStack_3b8;
            lws_snprintf(local_1e8,0xff,"%s/%s");
            iVar7 = lws_hdr_total_length(param_1,0x15);
            if (iVar7 == 0) {
              local_44c = 0;
              uVar24 = 0;
            }
            else {
                    /* catch() { ... } // from try @ 01052030 with catch @ 010536e0 */
              pcVar29 = (char *)FUN_01047fa0(param_1,0x15);
              pcVar29 = strstr(pcVar29,"gzip");
              uVar24 = 0;
              if (pcVar29 != (char *)0x0) {
                uVar24 = 0x1000000;
              }
            }
            local_44c = uVar24 | local_44c;
            plVar1 = param_1 + 8;
            uVar24 = 0;
            while( true ) {
              uVar25 = uVar24;
              puVar15 = (undefined8 *)
                        FUN_01042c90(*(undefined8 *)(param_1[0x44] + 0x18),local_1e8,&local_448);
              if (param_1[8] != 0) {
                (**(code **)(*(long *)(param_1[8] + 8) + 8))(plVar1);
              }
                    /* catch() { ... } // from try @ 01051d40 with catch @ 010537c0 */
                    /* catch() { ... } // from try @ 01051cec with catch @ 010537c4 */
                    /* catch() { ... } // from try @ 01051c8c with catch @ 010537c8 */
                    /* catch() { ... } // from try @ 01051c4c with catch @ 010537cc */
                    /* catch() { ... } // from try @ 01051bf4 with catch @ 010537d0 */
                    /* catch() { ... } // from try @ 01051bec with catch @ 010537d4 */
              piVar16 = (int *)(*(code *)*puVar15)(*(undefined8 *)(param_1[0x44] + 0x18),local_1e8,
                                                   local_448,&local_44c);
                    /* catch() { ... } // from try @ 01051b90 with catch @ 010537d8 */
              param_1[8] = (long)piVar16;
                    /* catch() { ... } // from try @ 01051b88 with catch @ 010537dc */
              if (piVar16 == (int *)0x0) {
                pcVar29 = "Unable to open \'%s\'\n";
                goto LAB_01053bbc;
              }
                    /* catch() { ... } // from try @ 01051b48 with catch @ 010537e0 */
                    /* catch() { ... } // from try @ 01051af0 with catch @ 010537e4 */
              if ((local_44c._3_1_ >> 3 & 1) != 0) break;
                    /* catch() { ... } // from try @ 01051aa0 with catch @ 010537e8 */
                    /* catch() { ... } // from try @ 01051a48 with catch @ 010537ec */
                    /* catch() { ... } // from try @ 01051a3c with catch @ 010537f0 */
              iVar7 = fstat(*piVar16,(stat *)local_e8);
                    /* catch() { ... } // from try @ 010519c8 with catch @ 010537f4 */
              if (iVar7 != 0) goto LAB_01053bc8;
                    /* catch() { ... } // from try @ 010519c0 with catch @ 010537f8 */
                    /* catch() { ... } // from try @ 01051954 with catch @ 010537fc */
                    /* catch() { ... } // from try @ 010518f8 with catch @ 01053800 */
              *(int *)(*plVar1 + 0x2c) = (int)local_90;
                    /* catch() { ... } // from try @ 010518a8 with catch @ 01053804 */
                    /* catch() { ... } // from try @ 01051800 with catch @ 01053808 */
                    /* catch() { ... } // from try @ 010517ac with catch @ 0105380c */
              uVar2 = local_d8 & 0xf000;
                    /* catch() { ... } // from try @ 0105171c with catch @ 01053810 */
              local_44c = local_44c | 0x4000000;
                    /* catch() { ... } // from try @ 01050f30 with catch @ 01053814 */
                    /* catch() { ... } // from try @ 01050edc with catch @ 01053818 */
                    /* catch() { ... } // from try @ 01050e44 with catch @ 0105381c */
              if (uVar2 == 0x4000) {
                    /* catch() { ... } // from try @ 01053270 with catch @ 0105386c */
                    /* catch() { ... } // from try @ 01053220 with catch @ 01053870 */
                    /* catch() { ... } // from try @ 010531c4 with catch @ 01053874 */
                    /* catch() { ... } // from try @ 01053174 with catch @ 01053878 */
                lws_snprintf(local_1e8,0xff,"%s/%s/index.html",uVar20,pcVar33);
              }
              else {
                    /* catch() { ... } // from try @ 01050c98 with catch @ 01053820 */
                    /* catch() { ... } // from try @ 01050c48 with catch @ 01053824 */
                if (uVar2 == 0xa000) {
                    /* catch() { ... } // from try @ 010504f8 with catch @ 01053828 */
                    /* catch() { ... } // from try @ 010504a8 with catch @ 0105382c */
                    /* catch() { ... } // from try @ 010525dc with catch @ 01053830 */
                  sVar13 = readlink(local_1e8,(char *)&local_3e8,0x1ff);
                  if (sVar13 != 0) {
                    pcVar29 = "Failed to read link %s\n";
                    goto LAB_01053bbc;
                  }
                    /* catch() { ... } // from try @ 0105256c with catch @ 01053840 */
                    /* catch() { ... } // from try @ 01051168 with catch @ 01053844 */
                    /* catch() { ... } // from try @ 01050d64 with catch @ 01053848 */
                    /* catch() { ... } // from try @ 01050b5c with catch @ 0105384c */
                    /* catch() { ... } // from try @ 01050b0c with catch @ 01053850 */
                  local_3e8 = local_3e8 & 0xffffffffffffff00;
                    /* catch() { ... } // from try @ 0105061c with catch @ 01053854 */
                  lws_snprintf(local_1e8,0xff,"%s",&local_3e8);
                    /* catch() { ... } // from try @ 01051888 with catch @ 01053858
                       catch() { ... } // from try @ 01052654 with catch @ 01053858 */
                    /* catch() { ... } // from try @ 01052c28 with catch @ 0105385c
                       catch() { ... } // from try @ 01052cd4 with catch @ 0105385c */
                }
              }
              if ((3 < uVar25) || (uVar24 = uVar25 + 1, uVar2 == 0x8000)) break;
            }
            if (uVar25 == 4) {
                    /* catch() { ... } // from try @ 01053040 with catch @ 0105389c */
              _lws_log(1,"symlink loop %s \n",local_1e8);
            }
                    /* catch() { ... } // from try @ 01052f9c with catch @ 010538b0 */
            uVar20 = lws_vfs_get_length(param_1[8]);
            uVar17 = lws_vfs_get_mod_time(param_1[8]);
                    /* catch() { ... } // from try @ 01052368 with catch @ 010538c4 */
                    /* catch() { ... } // from try @ 01052318 with catch @ 010538c8 */
                    /* catch() { ... } // from try @ 01051e60 with catch @ 010538cc
                       catch() { ... } // from try @ 01051f0c with catch @ 010538cc */
                    /* catch() { ... } // from try @ 01051ed0 with catch @ 010538d0 */
                    /* catch() { ... } // from try @ 01051e80 with catch @ 010538d4 */
                    /* catch() { ... } // from try @ 01051ca4 with catch @ 010538d8 */
            iVar7 = sprintf((char *)&local_3e8,"%08llX%08lX",uVar20,uVar17 & 0xffffffff);
            iVar9 = lws_hdr_total_length(param_1,0x37);
                    /* catch() { ... } // from try @ 01051c64 with catch @ 010538f0 */
            if (iVar9 != 0) {
              pcVar29 = (char *)FUN_01047fa0(param_1,0x37);
                    /* catch() { ... } // from try @ 01051c0c with catch @ 01053900 */
                    /* catch() { ... } // from try @ 01051ba8 with catch @ 01053904 */
                    /* catch() { ... } // from try @ 01051b08 with catch @ 01053908 */
              iVar9 = strcmp((char *)&local_3e8,pcVar29);
                    /* catch() { ... } // from try @ 01051ab8 with catch @ 0105390c */
              if (iVar9 != 0) {
                    /* catch() { ... } // from try @ 01051a60 with catch @ 01053910 */
                    /* catch() { ... } // from try @ 010519e0 with catch @ 01053914 */
                *(undefined1 *)(*param_1 + 0x31e) = 0;
              }
            }
                    /* catch() { ... } // from try @ 010519a4 with catch @ 01053918 */
                    /* catch() { ... } // from try @ 0105196c with catch @ 0105391c */
                    /* catch() { ... } // from try @ 01051910 with catch @ 01053920 */
            iVar9 = lws_hdr_total_length(param_1,0x14);
                    /* catch() { ... } // from try @ 010518c0 with catch @ 01053924 */
            if (iVar9 == 0) {
LAB_01053944:
                    /* catch() { ... } // from try @ 01050cb0 with catch @ 01053948 */
                    /* catch() { ... } // from try @ 01050c60 with catch @ 0105394c */
                    /* catch() { ... } // from try @ 01050510 with catch @ 0105395c */
              iVar7 = lws_add_http_header_by_token
                                (param_1,0x32,&local_3e8,iVar7,&local_458,local_1e8);
              if (iVar7 == 0) {
                lVar30 = lws_get_mimetype(local_1e8,lVar12);
                    /* catch() { ... } // from try @ 010504c0 with catch @ 01053970 */
                if (lVar30 == 0) {
                  pcVar29 = "unknown mimetype for %s\n";
LAB_01053bbc:
                  _lws_log(1,pcVar29,local_1e8);
                }
                else {
                  uVar24 = *(uint *)((long)param_1 + 0x2f4);
                    /* catch() { ... } // from try @ 010523c4 with catch @ 01053984 */
                  *(uint *)((long)param_1 + 0x2f4) = uVar24 & 0xffff7fff;
                    /* catch() { ... } // from try @ 01052260 with catch @ 01053988 */
                  if (plVar34 != (long *)0x0) {
                    /* catch() { ... } // from try @ 01053154 with catch @ 0105398c
                       catch() { ... } // from try @ 01053200 with catch @ 0105398c
                       catch() { ... } // from try @ 010532ac with catch @ 0105398c */
                    sVar14 = strlen(local_1e8);
                    do {
                      pcVar29 = (char *)plVar34[2];
                      sVar18 = strlen(pcVar29);
                    /* catch() { ... } // from try @ 01051b54 with catch @ 010539bc */
                    /* catch() { ... } // from try @ 010514b8 with catch @ 010539c0 */
                    /* catch() { ... } // from try @ 010514b0 with catch @ 010539c4 */
                      if (((int)sVar18 < (int)sVar14) &&
                         (iVar7 = strcmp(local_1e8 + ((long)(int)sVar14 - sVar18),pcVar29),
                         iVar7 == 0)) {
                        *(uint *)((long)param_1 + 0x2f4) = uVar24 | 0x8000;
                        lVar19 = plVar34[3];
                        *(char *)((long)param_1 + 0x305) = (char)lVar19;
                        param_1[0x49] = *(long *)(param_1[0x45] + 0x188) + (long)(int)lVar19 * 0x38;
                        iVar7 = FUN_01042334(param_1);
                        if (iVar7 != 0) goto LAB_01053bc8;
                        break;
                      }
                    /* catch() { ... } // from try @ 01051408 with catch @ 010539c8 */
                      plVar34 = (long *)*plVar34;
                    } while (plVar34 != (long *)0x0);
                  }
                    /* catch() { ... } // from try @ 01051400 with catch @ 010539d0 */
                    /* catch() { ... } // from try @ 0105096c with catch @ 010539d4 */
                  if (*(long *)(lVar12 + 0x20) == 0) {
LAB_01053c1c:
                    /* catch() { ... } // from try @ 01050864 with catch @ 01053c24
                       catch() { ... } // from try @ 01050914 with catch @ 01053c24 */
                    iVar7 = lws_serve_http_file(param_1,local_1e8,lVar30,auStack_3b8,
                                                (int)local_458 - (int)auStack_3b8);
                    if ((-1 < iVar7) &&
                       ((iVar7 == 0 || (iVar7 = lws_http_transaction_completed(param_1), iVar7 == 0)
                        ))) goto LAB_01053cc8;
                  }
                  else {
                    /* catch() { ... } // from try @ 01050964 with catch @ 010539d8 */
                    /* catch() { ... } // from try @ 010508bc with catch @ 010539dc */
                    lVar19 = lws_vhost_name_to_protocol(param_1[0x45]);
                    /* catch() { ... } // from try @ 010508b4 with catch @ 010539e4 */
                    /* catch() { ... } // from try @ 01051540 with catch @ 010539e8 */
                    iVar7 = FUN_01042188(param_1,lVar19);
                    /* catch() { ... } // from try @ 01051528 with catch @ 010539f0 */
                    if (iVar7 == 0) {
                    /* catch() { ... } // from try @ 010509f4 with catch @ 01053a00 */
                      local_440 = local_458;
                    /* catch() { ... } // from try @ 010509dc with catch @ 01053a08 */
                      local_434 = (int)local_1e8 - (int)local_458;
                    /* catch() { ... } // from try @ 010514d0 with catch @ 01053a18 */
                    /* catch() { ... } // from try @ 01051420 with catch @ 01053a1c */
                      iVar7 = (**(code **)(lVar19 + 8))(param_1,0x35,param_1[0x4e],&local_440,0);
                      if (iVar7 == 0) {
                        local_458 = local_440;
                        goto LAB_01053c1c;
                      }
                    }
                  }
                }
              }
LAB_01053bc8:
              lVar30 = *(long *)(lVar12 + 0x20);
joined_r0x01053bcc:
              if (lVar30 == 0) goto LAB_01053ca4;
              lVar30 = lws_vhost_name_to_protocol(param_1[0x45]);
              iVar7 = FUN_01042188(param_1,lVar30);
              if (iVar7 != 0) goto LAB_01053180;
              iVar6 = (**(code **)(lVar30 + 8))
                                (param_1,0xc,param_1[0x4e],pcVar10 + *(byte *)(lVar12 + 0x4e),
                                 (long)iVar6 - (ulong)*(byte *)(lVar12 + 0x4e));
              goto joined_r0x01053cc4;
            }
                    /* catch() { ... } // from try @ 01051818 with catch @ 01053928 */
                    /* catch() { ... } // from try @ 010517c4 with catch @ 0105392c */
                    /* catch() { ... } // from try @ 01050f48 with catch @ 01053930 */
            pcVar29 = (char *)FUN_01047fa0(param_1,0x14);
                    /* catch() { ... } // from try @ 01050ef4 with catch @ 01053934 */
                    /* catch() { ... } // from try @ 01050e5c with catch @ 01053938 */
            iVar9 = strcmp((char *)&local_3e8,pcVar29);
            if (iVar9 != 0) goto LAB_01053944;
                    /* catch() { ... } // from try @ 01051510 with catch @ 01053a70 */
                    /* catch() { ... } // from try @ 01051388 with catch @ 01053a74 */
            iVar9 = lws_add_http_header_status(param_1,0x130,&local_458,local_1e8);
                    /* catch() { ... } // from try @ 01051324 with catch @ 01053a84 */
                    /* catch() { ... } // from try @ 010509c4 with catch @ 01053a8c */
                    /* catch() { ... } // from try @ 0105083c with catch @ 01053a90 */
                    /* catch() { ... } // from try @ 010507d8 with catch @ 01053aa0 */
                    /* catch() { ... } // from try @ 010512dc with catch @ 01053aa8 */
            if ((iVar9 != 0) ||
               ((iVar7 = lws_add_http_header_by_token
                                   (param_1,0x32,&local_3e8,iVar7,&local_458,local_1e8), iVar7 != 0
                || (iVar7 = lws_finalize_http_header(param_1,&local_458,local_1e8), iVar7 != 0))))
            goto LAB_01053bc8;
                    /* catch() { ... } // from try @ 01050790 with catch @ 01053ab8 */
                    /* catch() { ... } // from try @ 010513b0 with catch @ 01053ac8
                       catch() { ... } // from try @ 01051460 with catch @ 01053ac8 */
            iVar7 = lws_write(param_1,auStack_3b8,(long)local_458 - (long)auStack_3b8,0x88);
            if ((long)local_458 - (long)auStack_3b8 != (long)iVar7) {
              _lws_log(1,"_write returned %d from %ld\n",iVar7);
              lVar30 = *(long *)(lVar12 + 0x20);
              goto joined_r0x01053bcc;
            }
            (**(code **)(*(long *)(param_1[8] + 8) + 8))(plVar1);
            iVar7 = lws_http_transaction_completed(param_1);
            if (iVar7 != 0) goto LAB_01053bc8;
            goto LAB_01053cc8;
          }
                    /* catch() { ... } // from try @ 01053258 with catch @ 01053708 */
                    /* catch() { ... } // from try @ 01053208 with catch @ 0105370c */
                    /* catch() { ... } // from try @ 010531ac with catch @ 01053710 */
          lVar19 = *(long *)(lVar12 + 0x10);
                    /* catch() { ... } // from try @ 0105315c with catch @ 01053714 */
          if (lVar30 != 0) {
            lVar19 = lVar30;
          }
                    /* catch() { ... } // from try @ 010530fc with catch @ 01053718 */
          lVar30 = lws_vhost_name_to_protocol(param_1[0x45],lVar19);
          if (lVar30 == 0) {
                    /* catch() { ... } // from try @ 01050984 with catch @ 01053a44 */
                    /* catch() { ... } // from try @ 010508d4 with catch @ 01053a48 */
            _lws_log(1,"Unable to find plugin \'%s\'\n",*(undefined8 *)(lVar12 + 0x10));
            if (*(long *)(lVar5 + 0x28) == local_68) {
              return 1;
            }
            goto LAB_01053a5c;
          }
                    /* catch() { ... } // from try @ 01053028 with catch @ 01053728 */
          iVar7 = FUN_01042188(param_1,lVar30);
          if (iVar7 != 0) goto LAB_01053180;
                    /* catch() { ... } // from try @ 01052f84 with catch @ 01053738 */
          uStack_464 = *(undefined4 *)(lVar12 + 0x48);
          local_460 = 0;
                    /* catch() { ... } // from try @ 01052350 with catch @ 01053748 */
                    /* catch() { ... } // from try @ 01052300 with catch @ 0105374c */
                    /* catch() { ... } // from try @ 010522a4 with catch @ 01053750 */
                    /* catch() { ... } // from try @ 0105228c with catch @ 01053754 */
                    /* catch() { ... } // from try @ 01051f2c with catch @ 01053758 */
                    /* catch() { ... } // from try @ 01051f14 with catch @ 0105375c */
          local_470 = pcVar10;
          local_468 = iVar6;
                    /* catch() { ... } // from try @ 01051eb8 with catch @ 01053760 */
          iVar7 = (**(code **)(param_1[0x49] + 8))(param_1,0x33,param_1[0x4e],&local_470,0);
                    /* catch() { ... } // from try @ 01051e68 with catch @ 01053764 */
          if (iVar7 != 0) {
                    /* catch() { ... } // from try @ 01051dac with catch @ 01053768 */
            uVar20 = 0x191;
            goto LAB_01053078;
          }
          if (local_460 == 0) {
            if ((*(long *)(lVar12 + 0x28) == 0) ||
               (iVar7 = (**(code **)(param_1[0x49] + 8))
                                  (param_1,0x38,param_1[0x4e],*(long *)(lVar12 + 0x28),0),
               iVar7 == 0)) {
              iVar7 = lws_hdr_total_length(param_1,1);
              if (iVar7 == 0) goto LAB_01053618;
              iVar6 = (**(code **)(param_1[0x49] + 8))
                                (param_1,0xc,param_1[0x4e],pcVar10 + *(byte *)(lVar12 + 0x4e),
                                 (long)iVar6 - (ulong)*(byte *)(lVar12 + 0x4e));
              if (iVar6 == 0) goto LAB_01053cc8;
            }
            goto LAB_01053180;
          }
        }
        if (*(long *)(lVar5 + 0x28) == local_68) {
          return 0;
        }
        goto LAB_01053a5c;
      }
    }
  }
  else {
    if (cVar3 == '\0') {
      pcVar10 = "Missing URI in HTTP request\n";
                    /* try { // try from 01052ec0 to 01152ed3 has its CatchHandler @ 010534ac */
    }
    else {
                    /* try { // try from 01052ed8 to 01152eff has its CatchHandler @ 0105352c */
      if (((*(byte *)((long)param_1 + 0x2f4) >> 1 & 1) != 0) &&
         (iVar6 = lws_hdr_total_length(param_1,0x25), iVar6 != 0)) goto LAB_01052edc;
      pcVar10 = "multiple methods?\n";
    }
    _lws_log(2,pcVar10);
  }
LAB_01053098:
  FUN_01047a8c(param_1);
  FUN_01047ae8(param_1,1);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return 1;
  }
LAB_01053a5c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

