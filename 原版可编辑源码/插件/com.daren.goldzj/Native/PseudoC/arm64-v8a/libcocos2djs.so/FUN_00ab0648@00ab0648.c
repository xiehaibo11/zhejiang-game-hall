
undefined4 FUN_00ab0648(long *param_1)

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
  if (iVar6 != 0) {
    cVar3 = cVar3 + '\x01';
  }
  if (cVar3 == '\x01') {
LAB_00ab0758:
    iVar6 = lws_hdr_total_length(param_1,0);
    uVar8 = 0;
    if (iVar6 == 0) {
      uVar8 = 1;
      iVar6 = lws_hdr_total_length(param_1,1);
      if (iVar6 == 0) {
        uVar8 = 2;
        iVar6 = lws_hdr_total_length(param_1,2);
        if (iVar6 == 0) {
          uVar8 = 0x4a;
          iVar6 = lws_hdr_total_length(param_1,0x4a);
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
                  if (iVar6 == 0) goto LAB_00ab0914;
                }
              }
            }
          }
        }
      }
    }
    pcVar10 = (char *)FUN_00aa581c(param_1,uVar8);
                    /* try { // try from 00ab0810 to 00bb0817 has its CatchHandler @ 00ab081c */
    iVar6 = lws_hdr_total_length(param_1,uVar8);
                    /* try { // try from 00ab0818 to 00bb091b has its CatchHandler @ 00aafc04 */
                    /* catch() { ... } // from try @ 00ab0810 with catch @ 00ab081c */
    if ((pcVar10 == (char *)0x0) || (*pcVar10 != '/')) {
      uVar20 = 0x193;
LAB_00ab08f4:
      lws_return_http_status(param_1,uVar20,0);
    }
    else {
      iVar7 = FUN_00a9fbb0(param_1);
                    /* catch() { ... } // from try @ 00ab05d0 with catch @ 00ab0830 */
      if (iVar7 == 0) {
                    /* catch() { ... } // from try @ 00aaff90 with catch @ 00ab0834 */
                    /* catch() { ... } // from try @ 00aafcec with catch @ 00ab0838 */
                    /* catch() { ... } // from try @ 00ab02ac with catch @ 00ab083c */
        param_1[0x2b] = 0;
                    /* catch() { ... } // from try @ 00aafcd4 with catch @ 00ab0840 */
        iVar7 = lws_hdr_total_length(param_1,1);
                    /* catch() { ... } // from try @ 00aafd18 with catch @ 00ab0850
                       catch() { ... } // from try @ 00aaff7c with catch @ 00ab0850 */
                    /* catch() { ... } // from try @ 00ab05e8 with catch @ 00ab0854 */
                    /* catch() { ... } // from try @ 00aaff3c with catch @ 00ab0858 */
                    /* catch() { ... } // from try @ 00aaff30 with catch @ 00ab085c */
                    /* catch() { ... } // from try @ 00aaff20 with catch @ 00ab0860 */
                    /* catch() { ... } // from try @ 00aafe64 with catch @ 00ab0864 */
        if (((iVar7 != 0) || (iVar7 = lws_hdr_total_length(param_1,0x49), iVar7 != 0)) ||
           (iVar7 = lws_hdr_total_length(param_1,0x4a), iVar7 != 0)) {
                    /* catch() { ... } // from try @ 00ab0418 with catch @ 00ab0868 */
                    /* catch() { ... } // from try @ 00ab0420 with catch @ 00ab086c */
          param_1[0x2b] = 0x6400000;
        }
                    /* catch() { ... } // from try @ 00aafe78 with catch @ 00ab0870 */
                    /* catch() { ... } // from try @ 00ab0014 with catch @ 00ab0874 */
                    /* catch() { ... } // from try @ 00ab0058 with catch @ 00ab0878 */
        iVar7 = lws_hdr_total_length(param_1,0x1b);
                    /* catch() { ... } // from try @ 00ab00a8 with catch @ 00ab087c */
        if (iVar7 != 0) {
                    /* catch() { ... } // from try @ 00ab00b8 with catch @ 00ab0880 */
                    /* catch() { ... } // from try @ 00ab00c4 with catch @ 00ab0884 */
                    /* catch() { ... } // from try @ 00ab00cc with catch @ 00ab0888 */
                    /* catch() { ... } // from try @ 00aafe04 with catch @ 00ab088c */
                    /* catch() { ... } // from try @ 00ab003c with catch @ 00ab0890 */
          lws_hdr_copy(param_1,acStack_408,0x1f,0x1b);
                    /* catch() { ... } // from try @ 00aafdb8 with catch @ 00ab0894 */
                    /* catch() { ... } // from try @ 00ab00f0 with catch @ 00ab0898 */
          lVar11 = atoll(acStack_408);
          param_1[0x2b] = lVar11;
        }
        if ((*(byte *)((long)param_1 + 0x2f4) >> 1 & 1) == 0) {
          iVar7 = lws_hdr_total_length(param_1,0xf);
          if (((iVar7 < 8) || (lws_hdr_copy(param_1,auStack_414,9,0xf), local_40f != '1')) ||
             (local_40d != '1')) {
            uVar8 = 0;
          }
          else {
            uVar8 = 1;
          }
          *(undefined4 *)(param_1 + 0x28) = uVar8;
          iVar7 = lws_hdr_total_length(param_1,4);
          uVar27 = uVar8;
          if (iVar7 != 0) {
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
          *(undefined4 *)((long)param_1 + 0x144) = uVar27;
        }
        else {
          *(undefined4 *)(param_1 + 0x28) = 2;
        }
        iVar7 = (**(code **)(param_1[0x49] + 8))(param_1,0x12,param_1[0x4e],pcVar10,(long)iVar6);
        if (iVar7 != 0) goto LAB_00ab09fc;
        lws_set_timeout(param_1,10,*(undefined4 *)(param_1[0x44] + 0xc80));
        if ((*(byte *)(param_1 + 0x5f) >> 4 & 1) != 0) {
          lVar30 = *(long *)(lVar30 + (ulong)bVar4 * 0x6f8 + 0x7b8);
          local_3e8 = lVar30 + 0x10;
          iVar6 = lws_hdr_total_length(param_1,3);
          if (iVar6 != 0) {
            pcVar10 = (char *)(lVar30 + 0x210);
            uVar20 = FUN_00aa581c(param_1,3);
            iVar6 = sprintf(pcVar10,"https://%s/",uVar20);
            iVar6 = lws_http_redirect(param_1,0x12d,pcVar10,iVar6,&local_3e8,pcVar10);
joined_r0x00ab0b40:
            if (-1 < iVar6) {
LAB_00ab0ba0:
              uVar8 = lws_http_transaction_completed(param_1);
              goto LAB_00ab0ba8;
            }
          }
          goto LAB_00ab0914;
        }
        lVar12 = FUN_00ab049c(param_1,pcVar10,iVar6);
        if (lVar12 == 0) {
          iVar7 = FUN_00a9fa04(param_1,*(undefined8 *)(param_1[0x45] + 0x188));
          if (iVar7 != 0) goto LAB_00ab09fc;
LAB_00ab1520:
          iVar6 = (**(code **)(param_1[0x49] + 8))(param_1,0xc,param_1[0x4e],pcVar10,(long)iVar6);
joined_r0x00ab1540:
          if (iVar6 != 0) {
LAB_00ab09fc:
            if (*(long *)(lVar5 + 0x28) == local_68) {
              return 1;
            }
            goto LAB_00ab12d8;
          }
LAB_00ab1544:
          if ((*(char *)((long)param_1 + 0x2ff) != '\x01') && (param_1[0x2b] != 0)) {
            _lws_log(4,"%s: %p: LWSS_HTTP_BODY state set\n","lws_http_action",param_1);
            *(undefined1 *)((long)param_1 + 0x2ff) = 3;
            param_1[0x2c] = param_1[0x2b];
            if (*(long *)(lVar5 + 0x28) == local_68) {
              return 0;
            }
            goto LAB_00ab12d8;
          }
        }
        else {
          pcVar29 = pcVar10 + *(byte *)(lVar12 + 0x4e);
          if ((1 < (ulong)*(byte *)(lVar12 + 0x4e)) ||
             (bVar22 = *(byte *)(lVar12 + 0x4d), (bVar22 & 0xfe) == 4)) {
            bVar22 = *(byte *)(lVar12 + 0x4d);
            if (((*pcVar29 != '/') || ((bVar22 & 0xfe) == 4)) && ((bVar22 != 3 && (bVar22 != 6)))) {
              lVar30 = *(long *)(lVar30 + (ulong)bVar4 * 0x6f8 + 0x7b8);
              local_3e8 = lVar30 + 0x10;
              pcVar29 = (char *)(lVar30 + 0x210);
              if ((bVar22 & 0xfe) == 4) {
                uVar8 = lws_snprintf(pcVar29,0x100,"%s%s",
                                     (&PTR_s_http____01c6fdc8)[(ulong)bVar22 & 1],
                                     *(undefined8 *)(lVar12 + 0x10));
              }
              else {
                iVar6 = lws_hdr_total_length(param_1,3);
                if (iVar6 == 0) {
                  iVar6 = lws_hdr_total_length(param_1,0x23);
                  if (iVar6 == 0) goto LAB_00ab0914;
                  iVar6 = lws_is_ssl(param_1);
                  puVar28 = (&PTR_s_http____01c6fdc8)[iVar6 != 0];
                  uVar20 = 0x23;
                }
                else {
                  iVar6 = lws_is_ssl(param_1);
                  puVar28 = (&PTR_s_http____01c6fdc8)[iVar6 != 0];
                  uVar20 = 3;
                }
                uVar20 = FUN_00aa581c(param_1,uVar20);
                uVar8 = lws_snprintf(pcVar29,0x100,"%s%s%s/",puVar28,uVar20,pcVar10);
              }
              pcVar10 = pcVar29;
                    /* try { // try from 00ab0d88 to 00bb0ec3 has its CatchHandler @ 00ab0d88
                       catch() { ... } // from try @ 00ab0d88 with catch @ 00ab0d88
                       catch() { ... } // from try @ 00ab1318 with catch @ 00ab0d88 */
              if ((((*pcVar29 == 'h') && (*(char *)(lVar30 + 0x211) == 't')) &&
                  (*(char *)(lVar30 + 0x212) == 't')) && (*(char *)(lVar30 + 0x213) == 'p')) {
                pcVar33 = (char *)(lVar30 + 0x215);
                if (*(char *)(lVar30 + 0x214) != 's') {
                  pcVar33 = (char *)(lVar30 + 0x214);
                }
                pcVar10 = pcVar33;
                if ((*pcVar33 == ':') && (pcVar10 = pcVar33 + 1, *pcVar10 == '/')) {
                  pcVar10 = pcVar33 + 2;
                }
              }
              pcVar33 = pcVar10 + 2;
              while( true ) {
                while (*pcVar10 == '/') {
                  if (pcVar10[1] != '/') goto LAB_00ab0ddc;
                  *pcVar10 = '/';
                  pcVar26 = pcVar33;
                  do {
                    cVar21 = *pcVar26;
                    pcVar26[-1] = cVar21;
                    pcVar26 = pcVar26 + 1;
                  } while (cVar21 != '\0');
                }
                if (*pcVar10 == '\0') break;
LAB_00ab0ddc:
                pcVar33 = pcVar33 + 1;
                pcVar10 = pcVar10 + 1;
              }
              iVar6 = lws_http_redirect(param_1,0x12d,pcVar29,uVar8,&local_3e8,pcVar29);
              goto joined_r0x00ab0b40;
            }
          }
          if (*(long *)(lVar12 + 0x50) != 0) {
            iVar7 = lws_hdr_total_length(param_1,0x19);
            if (iVar7 != 0) {
              iVar7 = lws_hdr_copy(param_1,&local_3e8,0xa0,0x19);
              if (iVar7 < 7) {
                    /* try { // try from 00ab0acc to 00bb0c4b has its CatchHandler @ 00ab0acc
                       catch() { ... } // from try @ 00ab0acc with catch @ 00ab0acc
                       catch() { ... } // from try @ 00ab0c54 with catch @ 00ab0acc */
                pcVar10 = "b64 auth too long\n";
LAB_00ab0ad0:
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
                      _lws_log(1,"can\'t open auth file: %s\n",pcVar33);
                    }
                    else {
                      iVar31 = 0;
                    /* try { // try from 00ab0c4c to 00bb0c53 has its CatchHandler @ 00ab0ca4 */
                    /* try { // try from 00ab0c54 to 00bb0cbf has its CatchHandler @ 00ab0acc */
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
                              goto LAB_00ab0e70;
                            }
                            iVar32 = 0;
                          }
                          iVar23 = iVar23 + 1;
                          iVar31 = 0;
                          if (cVar21 == local_e8[iVar32]) {
                            iVar31 = iVar32 + 1;
                          }
                          if (iVar23 == (int)sVar13) break;
                    /* catch() { ... } // from try @ 00ab0c4c with catch @ 00ab0ca4 */
                          cVar21 = local_1e8[iVar23];
                          iVar32 = iVar31;
                        }
                      }
                      close(iVar9);
                      if (iVar31 != iVar7) {
                        _lws_log(1,"basic auth lookup failed\n");
                        goto LAB_00ab1424;
                      }
                    }
LAB_00ab0e70:
                    _lws_log(4,"basic auth accepted\n");
                    bVar22 = *(byte *)(lVar12 + 0x4d);
                    goto LAB_00ab0e84;
                  }
                  pcVar10 = "plain auth too long\n";
                  goto LAB_00ab0ad0;
                }
                _lws_log(1,"auth missing basic: %s\n",&local_3e8);
              }
              lws_return_http_status(param_1,0x193,0);
              goto LAB_00ab0ba0;
            }
LAB_00ab1424:
            uVar8 = FUN_00ab1718(param_1);
LAB_00ab0ba8:
            if (*(long *)(lVar5 + 0x28) == local_68) {
              return uVar8;
            }
            goto LAB_00ab12d8;
          }
LAB_00ab0e84:
          lVar30 = *(long *)(lVar12 + 0x20);
          if ((bVar22 != 6) && (lVar30 == 0)) {
LAB_00ab0e94:
            sVar14 = strlen(pcVar29);
            if ((*pcVar29 == '\0') || (((int)sVar14 == 1 && (*pcVar29 == '/')))) {
              pcVar29 = *(char **)(lVar12 + 0x18);
            }
                    /* try { // try from 00ab0ec4 to 00bb0edb has its CatchHandler @ 00ab13c8 */
            uVar24 = *(uint *)((long)param_1 + 0x2f4);
            *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(lVar12 + 0x44);
            pcVar33 = "index.html";
            if (pcVar29 != (char *)0x0) {
              pcVar33 = pcVar29;
            }
            uVar25 = uVar24 & 0x7ff | (*(byte *)(lVar12 + 0x4c) & 1) << 0xb;
            *(uint *)((long)param_1 + 0x2f4) = uVar24 & 0xfffff000 | uVar25;
                    /* try { // try from 00ab0f00 to 00bb0f1b has its CatchHandler @ 00ab13bc */
            uVar25 = uVar25 | (*(byte *)(lVar12 + 0x4c) >> 1 & 1) << 0xc;
            *(uint *)((long)param_1 + 0x2f4) = uVar24 & 0xffffe000 | uVar25;
            *(uint *)((long)param_1 + 0x2f4) =
                 uVar24 & 0xffffc000 | uVar25 | (*(byte *)(lVar12 + 0x4c) >> 2 & 1) << 0xd;
            uVar20 = *(undefined8 *)(lVar12 + 0x10);
            plVar34 = *(long **)(lVar12 + 0x38);
            local_44c = 0;
            local_458 = auStack_3b8;
                    /* try { // try from 00ab0f38 to 00bb0f67 has its CatchHandler @ 00ab13c0 */
            lws_snprintf(local_1e8,0xff,"%s/%s");
            iVar7 = lws_hdr_total_length(param_1,0x15);
            if (iVar7 == 0) {
              local_44c = 0;
              uVar24 = 0;
            }
            else {
              pcVar29 = (char *)FUN_00aa581c(param_1,0x15);
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
                        FUN_00aa050c(*(undefined8 *)(param_1[0x44] + 0x18),local_1e8,&local_448);
              if (param_1[8] != 0) {
                    /* try { // try from 00ab1034 to 00bb105b has its CatchHandler @ 00ab1394 */
                (**(code **)(*(long *)(param_1[8] + 8) + 8))(plVar1);
              }
              piVar16 = (int *)(*(code *)*puVar15)(*(undefined8 *)(param_1[0x44] + 0x18),local_1e8,
                                                   local_448,&local_44c);
              param_1[8] = (long)piVar16;
              if (piVar16 == (int *)0x0) {
                pcVar29 = "Unable to open \'%s\'\n";
                goto LAB_00ab1438;
              }
              if ((local_44c._3_1_ >> 3 & 1) != 0) break;
              iVar7 = fstat(*piVar16,(stat *)local_e8);
              if (iVar7 != 0) goto LAB_00ab1444;
              *(int *)(*plVar1 + 0x2c) = (int)local_90;
              uVar2 = local_d8 & 0xf000;
              local_44c = local_44c | 0x4000000;
              if (uVar2 == 0x4000) {
                lws_snprintf(local_1e8,0xff,"%s/%s/index.html",uVar20,pcVar33);
              }
              else if (uVar2 == 0xa000) {
                    /* try { // try from 00ab10b0 to 00bb10bf has its CatchHandler @ 00ab1390 */
                sVar13 = readlink(local_1e8,(char *)&local_3e8,0x1ff);
                if (sVar13 != 0) {
                  pcVar29 = "Failed to read link %s\n";
                  goto LAB_00ab1438;
                }
                local_3e8 = local_3e8 & 0xffffffffffffff00;
                lws_snprintf(local_1e8,0xff,"%s",&local_3e8);
              }
              if ((3 < uVar25) || (uVar24 = uVar25 + 1, uVar2 == 0x8000)) break;
            }
            if (uVar25 == 4) {
              _lws_log(1,"symlink loop %s \n",local_1e8);
            }
            uVar20 = lws_vfs_get_length(param_1[8]);
                    /* try { // try from 00ab113c to 00bb1157 has its CatchHandler @ 00ab13c4 */
            uVar17 = lws_vfs_get_mod_time(param_1[8]);
            iVar7 = sprintf((char *)&local_3e8,"%08llX%08lX",uVar20,uVar17 & 0xffffffff);
            iVar9 = lws_hdr_total_length(param_1,0x37);
            if (iVar9 != 0) {
                    /* try { // try from 00ab1174 to 00bb11a7 has its CatchHandler @ 00ab13cc */
              pcVar29 = (char *)FUN_00aa581c(param_1,0x37);
              iVar9 = strcmp((char *)&local_3e8,pcVar29);
              if (iVar9 != 0) {
                *(undefined1 *)(*param_1 + 0x31e) = 0;
              }
            }
            iVar9 = lws_hdr_total_length(param_1,0x14);
            if (iVar9 == 0) {
LAB_00ab11c0:
                    /* try { // try from 00ab11c0 to 00bb11d3 has its CatchHandler @ 00ab138c */
              iVar7 = lws_add_http_header_by_token
                                (param_1,0x32,&local_3e8,iVar7,&local_458,local_1e8);
              if (iVar7 == 0) {
                lVar30 = lws_get_mimetype(local_1e8,lVar12);
                    /* try { // try from 00ab11ec to 00bb11f3 has its CatchHandler @ 00ab1388 */
                if (lVar30 == 0) {
                  pcVar29 = "unknown mimetype for %s\n";
LAB_00ab1438:
                  _lws_log(1,pcVar29,local_1e8);
                }
                else {
                  uVar24 = *(uint *)((long)param_1 + 0x2f4);
                    /* try { // try from 00ab11f4 to 00bb120f has its CatchHandler @ 00ab1384 */
                  *(uint *)((long)param_1 + 0x2f4) = uVar24 & 0xffff7fff;
                  if (plVar34 != (long *)0x0) {
                    sVar14 = strlen(local_1e8);
                    do {
                    /* try { // try from 00ab1218 to 00bb122f has its CatchHandler @ 00ab1380 */
                      pcVar29 = (char *)plVar34[2];
                      sVar18 = strlen(pcVar29);
                      if (((int)sVar18 < (int)sVar14) &&
                         (iVar7 = strcmp(local_1e8 + ((long)(int)sVar14 - sVar18),pcVar29),
                         iVar7 == 0)) {
                        *(uint *)((long)param_1 + 0x2f4) = uVar24 | 0x8000;
                        lVar19 = plVar34[3];
                        *(char *)((long)param_1 + 0x305) = (char)lVar19;
                        param_1[0x49] = *(long *)(param_1[0x45] + 0x188) + (long)(int)lVar19 * 0x38;
                        iVar7 = FUN_00a9fbb0(param_1);
                        if (iVar7 != 0) goto LAB_00ab1444;
                        break;
                      }
                      plVar34 = (long *)*plVar34;
                    } while (plVar34 != (long *)0x0);
                  }
                  if (*(long *)(lVar12 + 0x20) == 0) {
LAB_00ab1498:
                    iVar7 = lws_serve_http_file(param_1,local_1e8,lVar30,auStack_3b8,
                                                (int)local_458 - (int)auStack_3b8);
                    if ((-1 < iVar7) &&
                       ((iVar7 == 0 || (iVar7 = lws_http_transaction_completed(param_1), iVar7 == 0)
                        ))) goto LAB_00ab1544;
                  }
                  else {
                    lVar19 = lws_vhost_name_to_protocol(param_1[0x45]);
                    iVar7 = FUN_00a9fa04(param_1,lVar19);
                    /* try { // try from 00ab126c to 00bb1293 has its CatchHandler @ 00ab13a0 */
                    if (iVar7 == 0) {
                      local_440 = local_458;
                      local_434 = (int)local_1e8 - (int)local_458;
                      iVar7 = (**(code **)(lVar19 + 8))(param_1,0x35,param_1[0x4e],&local_440,0);
                      if (iVar7 == 0) {
                        local_458 = local_440;
                    /* try { // try from 00ab12ac to 00bb12b3 has its CatchHandler @ 00ab137c */
                        goto LAB_00ab1498;
                      }
                    }
                  }
                }
              }
LAB_00ab1444:
              lVar30 = *(long *)(lVar12 + 0x20);
joined_r0x00ab1448:
              if (lVar30 == 0) goto LAB_00ab1520;
              lVar30 = lws_vhost_name_to_protocol(param_1[0x45]);
              iVar7 = FUN_00a9fa04(param_1,lVar30);
              if (iVar7 != 0) goto LAB_00ab09fc;
              iVar6 = (**(code **)(lVar30 + 8))
                                (param_1,0xc,param_1[0x4e],pcVar10 + *(byte *)(lVar12 + 0x4e),
                                 (long)iVar6 - (ulong)*(byte *)(lVar12 + 0x4e));
              goto joined_r0x00ab1540;
            }
            pcVar29 = (char *)FUN_00aa581c(param_1,0x14);
            iVar9 = strcmp((char *)&local_3e8,pcVar29);
            if (iVar9 != 0) goto LAB_00ab11c0;
            iVar9 = lws_add_http_header_status(param_1,0x130,&local_458,local_1e8);
                    /* try { // try from 00ab1308 to 00bb1317 has its CatchHandler @ 00ab1398 */
                    /* try { // try from 00ab1318 to 00bb13cf has its CatchHandler @ 00ab0d88 */
            if ((iVar9 != 0) ||
               ((iVar7 = lws_add_http_header_by_token
                                   (param_1,0x32,&local_3e8,iVar7,&local_458,local_1e8), iVar7 != 0
                || (iVar7 = lws_finalize_http_header(param_1,&local_458,local_1e8), iVar7 != 0))))
            goto LAB_00ab1444;
            iVar7 = lws_write(param_1,auStack_3b8,(long)local_458 - (long)auStack_3b8,0x88);
            if ((long)local_458 - (long)auStack_3b8 != (long)iVar7) {
              _lws_log(1,"_write returned %d from %ld\n",iVar7);
              lVar30 = *(long *)(lVar12 + 0x20);
              goto joined_r0x00ab1448;
            }
                    /* catch() { ... } // from try @ 00ab0fdc with catch @ 00ab1368 */
                    /* catch() { ... } // from try @ 00ab0fd4 with catch @ 00ab136c */
                    /* catch() { ... } // from try @ 00ab0fa8 with catch @ 00ab1370 */
                    /* catch() { ... } // from try @ 00ab0f8c with catch @ 00ab1374 */
            (**(code **)(*(long *)(param_1[8] + 8) + 8))(plVar1);
                    /* catch() { ... } // from try @ 00ab12bc with catch @ 00ab1378 */
                    /* catch() { ... } // from try @ 00ab12ac with catch @ 00ab137c */
            iVar7 = lws_http_transaction_completed(param_1);
                    /* catch() { ... } // from try @ 00ab1218 with catch @ 00ab1380 */
            if (iVar7 != 0) goto LAB_00ab1444;
            goto LAB_00ab1544;
          }
                    /* try { // try from 00ab0f8c to 00bb0f9b has its CatchHandler @ 00ab1374 */
          lVar19 = *(long *)(lVar12 + 0x10);
          if (lVar30 != 0) {
            lVar19 = lVar30;
          }
          lVar30 = lws_vhost_name_to_protocol(param_1[0x45],lVar19);
          if (lVar30 == 0) {
                    /* try { // try from 00ab12bc to 00bb12d3 has its CatchHandler @ 00ab1378 */
            _lws_log(1,"Unable to find plugin \'%s\'\n",*(undefined8 *)(lVar12 + 0x10));
            if (*(long *)(lVar5 + 0x28) == local_68) {
              return 1;
            }
            goto LAB_00ab12d8;
          }
                    /* try { // try from 00ab0fa8 to 00bb0fbf has its CatchHandler @ 00ab1370 */
          iVar7 = FUN_00a9fa04(param_1,lVar30);
          if (iVar7 != 0) goto LAB_00ab09fc;
          uStack_464 = *(undefined4 *)(lVar12 + 0x48);
          local_460 = 0;
                    /* try { // try from 00ab0fd4 to 00bb0fdb has its CatchHandler @ 00ab136c */
          local_470 = pcVar10;
          local_468 = iVar6;
                    /* try { // try from 00ab0fdc to 00bb0ff7 has its CatchHandler @ 00ab1368 */
          iVar7 = (**(code **)(param_1[0x49] + 8))(param_1,0x33,param_1[0x4e],&local_470,0);
          if (iVar7 != 0) {
            uVar20 = 0x191;
            goto LAB_00ab08f4;
          }
                    /* catch() { ... } // from try @ 00ab11ec with catch @ 00ab1388 */
                    /* catch() { ... } // from try @ 00ab11c0 with catch @ 00ab138c */
          if (local_460 == 0) {
                    /* catch() { ... } // from try @ 00ab10b0 with catch @ 00ab1390 */
                    /* catch() { ... } // from try @ 00ab1034 with catch @ 00ab1394 */
                    /* catch() { ... } // from try @ 00ab1308 with catch @ 00ab1398 */
                    /* catch() { ... } // from try @ 00ab126c with catch @ 00ab13a0 */
            if ((*(long *)(lVar12 + 0x28) == 0) ||
               (iVar7 = (**(code **)(param_1[0x49] + 8))
                                  (param_1,0x38,param_1[0x4e],*(long *)(lVar12 + 0x28),0),
               iVar7 == 0)) {
                    /* catch() { ... } // from try @ 00ab0f00 with catch @ 00ab13bc */
                    /* catch() { ... } // from try @ 00ab0f38 with catch @ 00ab13c0 */
              iVar7 = lws_hdr_total_length(param_1,1);
                    /* catch() { ... } // from try @ 00ab113c with catch @ 00ab13c4 */
              if (iVar7 == 0) goto LAB_00ab0e94;
                    /* catch() { ... } // from try @ 00ab0ec4 with catch @ 00ab13c8 */
                    /* catch() { ... } // from try @ 00ab1174 with catch @ 00ab13cc */
              iVar6 = (**(code **)(param_1[0x49] + 8))
                                (param_1,0xc,param_1[0x4e],pcVar10 + *(byte *)(lVar12 + 0x4e),
                                 (long)iVar6 - (ulong)*(byte *)(lVar12 + 0x4e));
              if (iVar6 == 0) goto LAB_00ab1544;
            }
            goto LAB_00ab09fc;
          }
        }
        if (*(long *)(lVar5 + 0x28) == local_68) {
          return 0;
        }
        goto LAB_00ab12d8;
      }
    }
  }
  else {
    if (cVar3 == '\0') {
      pcVar10 = "Missing URI in HTTP request\n";
    }
    else {
      if (((*(byte *)((long)param_1 + 0x2f4) >> 1 & 1) != 0) &&
         (iVar6 = lws_hdr_total_length(param_1,0x25), iVar6 != 0)) goto LAB_00ab0758;
      pcVar10 = "multiple methods?\n";
    }
    _lws_log(2,pcVar10);
  }
LAB_00ab0914:
  FUN_00aa5308(param_1);
  FUN_00aa5364(param_1,1);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return 1;
  }
LAB_00ab12d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

