
/* WARNING: Removing unreachable block (ram,0x0104cd18) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0104c950(long *param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  long lVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  size_t sVar14;
  char *pcVar15;
  longlong lVar16;
  byte *pbVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  byte bVar22;
  undefined4 uVar23;
  long lVar24;
  byte *pbVar25;
  undefined8 uVar26;
  long lVar27;
  code *pcVar28;
  ulong uVar29;
  char cVar30;
  undefined8 *puVar31;
  char *local_1b8;
  undefined8 local_1b0;
  uint local_1a8;
  uint local_1a4;
  long *local_1a0;
  byte local_198;
  undefined7 uStack_197;
  undefined1 local_6d [5];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_1a8 = 0;
  lVar24 = param_1[0x44];
  local_1b0 = 0;
                    /* try { // try from 0104c99c to 0114c9d7 has its CatchHandler @ 0104c99c
                       catch() { ... } // from try @ 0104c99c with catch @ 0104c99c
                       catch() { ... } // from try @ 0104cbc0 with catch @ 0104c99c
                       catch() { ... } // from try @ 0104cbe0 with catch @ 0104c99c */
  pbVar25 = *(byte **)(lVar24 + (ulong)*(byte *)((long)param_1 + 0x304) * 0x6f8 + 0x7b8);
  local_1a0 = param_1;
  if (param_1[3] != 0) {
    thunk_FUN_0104b1cc(param_1[3],0,"free");
    param_1[3] = 0;
  }
  lVar27 = *param_1;
  if ((*(byte *)((long)param_1 + 0x2f7) >> 1 & 1) == 0) {
    lws_union_transition(param_1,0x21);
                    /* try { // try from 0104c9d8 to 0114ca03 has its CatchHandler @ 0104cc68 */
    *param_1 = lVar27;
    *(undefined1 *)((long)param_1 + 0x2ff) = 6;
    *(undefined4 *)(lVar27 + 0xb64) = 0;
  }
  *(undefined4 *)((long)param_1 + 0x144) = 1;
  pcVar13 = (char *)FUN_01047fa0(param_1,0xf);
  if ((pcVar13 == (char *)0x0) && ((*(uint *)((long)param_1 + 0x2f4) >> 0x19 & 1) != 0)) {
LAB_0104ca0c:
    pcVar13 = "HS: URI missing";
                    /* try { // try from 0104ca1c to 0114ca27 has its CatchHandler @ 0104cc34 */
    lVar24 = local_1a0[0x49];
joined_r0x0104ca20:
    uVar23 = 0;
    plVar1 = local_1a0;
joined_r0x0104d5ec:
    local_1a0 = plVar1;
    if (lVar24 != 0) {
      pcVar28 = *(code **)(lVar24 + 8);
      lVar24 = *(long *)((long)plVar1 + 0x270);
      sVar14 = strlen(pcVar13);
      (*pcVar28)(plVar1,1,lVar24,pcVar13,sVar14 & 0xffffffff);
    }
    *(uint *)((long)local_1a0 + 0x2f4) = *(uint *)((long)local_1a0 + 0x2f4) | 0x10000;
    FUN_010417b8(local_1a0,uVar23);
    uVar26 = 1;
  }
  else {
    if (pcVar13 == (char *)0x0) {
      pcVar13 = (char *)FUN_01047fa0(param_1,0x4f);
      *(undefined4 *)((long)param_1 + 0x144) = 0;
                    /* try { // try from 0104cab8 to 0114cabf has its CatchHandler @ 0104cc68 */
      if (pcVar13 == (char *)0x0) goto LAB_0104ca0c;
    }
    local_1a4 = atoi(pcVar13);
    if (lVar27 != 0) {
                    /* try { // try from 0104cacc to 0114cadb has its CatchHandler @ 0104cbe8 */
      *(uint *)(lVar27 + 0xb64) = local_1a4;
    }
                    /* try { // try from 0104cadc to 0114cb07 has its CatchHandler @ 0104cc04 */
    if ((local_1a4 - 0x12d < 8) && ((1 << (ulong)(local_1a4 - 0x12d & 0x1f) & 199U) != 0)) {
      pcVar13 = (char *)FUN_01047fa0(param_1,0x3b);
      if (pcVar13 == (char *)0x0) {
                    /* try { // try from 0104cb64 to 0114cba3 has its CatchHandler @ 0104cc3c */
        pcVar13 = "HS: Redirect code but no Location";
        lVar24 = local_1a0[0x49];
joined_r0x0104cfd4:
        uVar23 = 0;
        plVar1 = local_1a0;
        goto joined_r0x0104d5ec;
      }
      if (*pcVar13 == '/') {
        bVar4 = *(byte *)(param_1 + 0x5f);
        bVar22 = bVar4 & 0xf;
        local_1b0 = FUN_01047fa0(param_1,0x55);
                    /* try { // try from 0104cb30 to 0114cb37 has its CatchHandler @ 0104cbe0 */
        local_1a8 = (uint)*(ushort *)((long)param_1 + 0x2fa);
        pcVar13 = pcVar13 + 1;
                    /* try { // try from 0104cb18 to 0114cb1f has its CatchHandler @ 0104cbe4 */
joined_r0x0104cb34:
        local_1b8 = pcVar13;
        if ((bVar4 & 0xf) == 0) {
LAB_0104cb38:
                    /* try { // try from 0104cb38 to 0114cb53 has its CatchHandler @ 0104cbec */
          if ((*(byte *)(local_1a0 + 0x5f) & 0xf) != 0) {
            pcVar13 = "HS: Redirect attempted SSL downgrade";
            lVar24 = local_1a0[0x49];
            goto joined_r0x0104ca20;
          }
        }
      }
      else {
        pcVar15 = strchr(pcVar13,0x3a);
        if (pcVar15 == (char *)0x0) {
          bVar4 = *(byte *)(param_1 + 0x5f);
          bVar22 = bVar4 & 0xf;
          local_1b0 = FUN_01047fa0(param_1,0x55);
                    /* catch() { ... } // from try @ 0104ca6c with catch @ 0104cc24 */
          local_1b8 = (char *)((ulong)&local_198 | 1);
                    /* catch() { ... } // from try @ 0104ca1c with catch @ 0104cc34 */
          local_1a8 = (uint)*(ushort *)((long)param_1 + 0x2fa);
          pcVar15 = (char *)FUN_01047fa0(param_1,0x56);
                    /* catch() { ... } // from try @ 0104cb64 with catch @ 0104cc3c */
          strncpy((char *)&local_198,pcVar15,300);
          local_6d[0] = 0;
          pcVar15 = strrchr((char *)&local_198,0x2f);
          if (pcVar15 != (char *)0x0) {
                    /* catch() { ... } // from try @ 0104c9d8 with catch @ 0104cc68
                       catch() { ... } // from try @ 0104cab8 with catch @ 0104cc68
                       catch() { ... } // from try @ 0104cbc8 with catch @ 0104cc68 */
            strncpy(pcVar15 + 1,pcVar13,(size_t)(local_6d + -(long)pcVar15));
            local_6d[0] = 0;
            pcVar13 = local_1b8;
          }
          goto joined_r0x0104cb34;
        }
        iVar12 = lws_parse_uri(pcVar13,&local_198,&local_1b0,&local_1a8,&local_1b8);
        if (iVar12 != 0) {
          pcVar13 = "HS: URI did not parse";
                    /* try { // try from 0104cbb8 to 0114cbbf has its CatchHandler @ 0104cc04 */
          lVar24 = local_1a0[0x49];
                    /* try { // try from 0104cbc0 to 0114cbc7 has its CatchHandler @ 0104c99c */
joined_r0x0104cfb8:
          uVar23 = 0;
          plVar1 = local_1a0;
          goto joined_r0x0104d5ec;
        }
        pcVar13 = (char *)CONCAT71(uStack_197,local_198);
        iVar12 = strcmp(pcVar13,"wss");
        if ((iVar12 != 0) && (iVar12 = strcmp(pcVar13,"https"), iVar12 != 0)) {
          bVar22 = 0;
          goto LAB_0104cb38;
        }
        bVar22 = 1;
      }
      lVar24 = lws_client_reset(&local_1a0,bVar22,local_1b0,local_1a8,local_1b8,local_1b0);
      if (lVar24 != 0) {
LAB_0104cd4c:
        if (*(long *)(lVar5 + 0x28) == local_68) {
          return 0;
        }
        goto LAB_0104cd60;
      }
      uVar26 = 1;
      _lws_log(1,"Redirect failed\n");
      if (local_1a0 != (long *)0x0) {
        pcVar13 = "HS: Redirect failed";
        lVar24 = local_1a0[0x49];
joined_r0x0104ce64:
        uVar23 = 0;
        plVar1 = local_1a0;
        goto joined_r0x0104d5ec;
      }
    }
    else {
                    /* try { // try from 0104cbc8 to 0114cbd3 has its CatchHandler @ 0104cc68 */
      if ((*(byte *)((long)param_1 + 0x2f7) >> 1 & 1) == 0) {
                    /* try { // try from 0104cbd4 to 0114cbdf has its CatchHandler @ 0104cc04 */
        iVar12 = FUN_01042334(param_1);
        if (iVar12 == 0) {
          *(undefined4 *)((long)param_1 + 0x2ec) = 0;
          *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) & 0xfbffffff;
          iVar12 = lws_hdr_total_length(param_1,0x44);
          if (iVar12 != 0) {
            pcVar13 = (char *)FUN_01047fa0(param_1,0x44);
            iVar12 = strcmp(pcVar13,"chunked");
            *(undefined1 *)(param_1 + 0x61) = 0;
            *(uint *)((long)param_1 + 0x2f4) =
                 *(uint *)((long)param_1 + 0x2f4) & 0xf8000000 |
                 *(uint *)((long)param_1 + 0x2f4) & 0x3ffffff | (uint)(iVar12 == 0) << 0x1a;
          }
          iVar12 = lws_hdr_total_length(param_1,0x1b);
          if (iVar12 == 0) {
            if ((*(byte *)((long)param_1 + 0x2f7) >> 2 & 1) == 0) {
              *(undefined4 *)((long)param_1 + 0x144) = 0;
            }
          }
          else {
            pcVar13 = (char *)FUN_01047fa0(param_1,0x1b);
            lVar16 = atoll(pcVar13);
            param_1[0x2b] = lVar16;
            _lws_log(4,"%s: incoming content length %llu\n","lws_client_interpret_server_handshake",
                     lVar16);
            param_1[0x2c] = param_1[0x2b];
          }
          iVar12 = (**(code **)(param_1[0x49] + 8))(param_1,2,param_1[0x4e],0,0);
          if (iVar12 == 0) {
            lws_set_timeout(param_1,0,0);
            *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) & 0xfffffe7f | 0x80;
            iVar12 = (**(code **)(param_1[0x49] + 8))(param_1,0x2c,param_1[0x4e],0,0);
            if (iVar12 != 0) {
              pcVar13 = "HS: disallowed at ESTABLISHED";
              lVar24 = local_1a0[0x49];
              goto joined_r0x0104d704;
            }
            FUN_01047ae8(param_1,0);
            _lws_log(4,"%s: client connection up\n","lws_client_interpret_server_handshake");
            goto LAB_0104cd4c;
          }
          pcVar13 = "HS: disallowed by client filter";
          lVar24 = local_1a0[0x49];
joined_r0x0104d52c:
          uVar23 = 0x3ea;
          plVar1 = local_1a0;
        }
        else {
LAB_0104cbdc:
                    /* catch() { ... } // from try @ 0104cb30 with catch @ 0104cbe0
                       try { // try from 0104cbe0 to 0114cc8b has its CatchHandler @ 0104c99c */
                    /* catch() { ... } // from try @ 0104cb18 with catch @ 0104cbe4 */
                    /* catch() { ... } // from try @ 0104cacc with catch @ 0104cbe8 */
          _lws_log(1,"Problem allocating wsi user mem\n");
LAB_0104cbec:
                    /* catch() { ... } // from try @ 0104cb38 with catch @ 0104cbec */
          pcVar13 = "HS: OOM";
          uVar23 = 0x3ea;
          lVar24 = local_1a0[0x49];
          plVar1 = local_1a0;
        }
        goto joined_r0x0104d5ec;
      }
      iVar12 = strncmp(pcVar13,"401",3);
      if (iVar12 == 0) {
        _lws_log(2,"lws_client_handshake: got bad HTTP response \'%s\'\n",pcVar13);
        pcVar13 = "HS: ws upgrade unauthorized";
        lVar24 = local_1a0[0x49];
        goto joined_r0x0104ce64;
      }
      iVar12 = strncmp(pcVar13,"101",3);
      if (iVar12 != 0) {
        _lws_log(2,"lws_client_handshake: got bad HTTP response \'%s\'\n",pcVar13);
        pcVar13 = "HS: ws upgrade response not 101";
        lVar24 = local_1a0[0x49];
        goto joined_r0x0104d704;
      }
      iVar12 = lws_hdr_total_length(param_1,0xd);
      if (iVar12 == 0) {
        pcVar13 = "HS: ACCEPT missing";
        lVar24 = local_1a0[0x49];
        goto joined_r0x0104cfb8;
      }
      pbVar17 = (byte *)FUN_01047fa0(param_1,5);
      if (pbVar17 == (byte *)0x0) {
        pcVar13 = "HS: UPGRADE missing";
        lVar24 = local_1a0[0x49];
        goto joined_r0x0104cfd4;
      }
      uVar19 = (uint)*pbVar17;
      pbVar7 = pbVar17;
      if (*pbVar17 != 0) {
        do {
          iVar12 = tolower(uVar19);
          uVar19 = (uint)pbVar7[1];
          *pbVar7 = (byte)iVar12;
          pbVar7 = pbVar7 + 1;
        } while (uVar19 != 0);
      }
      iVar12 = strcmp((char *)pbVar17,"websocket");
      if (iVar12 != 0) {
        _lws_log(2,"lws_client_handshake: got bad Upgrade header \'%s\'\n",pbVar17);
        uVar23 = 0;
        pcVar13 = "HS: Upgrade to something other than websocket";
        lVar24 = local_1a0[0x49];
        plVar1 = local_1a0;
        goto joined_r0x0104d5ec;
      }
      pbVar17 = (byte *)FUN_01047fa0(local_1a0,4);
      if (pbVar17 == (byte *)0x0) {
        uVar23 = 0;
        pcVar13 = "HS: CONNECTION missing";
        lVar24 = local_1a0[0x49];
        plVar1 = local_1a0;
        goto joined_r0x0104d5ec;
      }
      uVar19 = (uint)*pbVar17;
      pbVar7 = pbVar17;
      if (*pbVar17 != 0) {
        do {
          iVar12 = tolower(uVar19);
          uVar19 = (uint)pbVar7[1];
          *pbVar7 = (byte)iVar12;
          pbVar7 = pbVar7 + 1;
        } while (uVar19 != 0);
      }
      iVar12 = strcmp((char *)pbVar17,"upgrade");
      plVar1 = local_1a0;
      if (iVar12 != 0) {
        _lws_log(2,"lws_client_int_s_hs: bad header %s\n",pbVar17);
        uVar23 = 0;
        pcVar13 = "HS: UPGRADE malformed";
        lVar24 = local_1a0[0x49];
        plVar1 = local_1a0;
        goto joined_r0x0104d5ec;
      }
      pcVar13 = (char *)FUN_01047fa0(local_1a0,0x54);
      iVar12 = lws_hdr_total_length(plVar1,0xc);
      if (iVar12 != 0) {
        pcVar15 = (char *)FUN_01047fa0(plVar1,0xc);
        if (pcVar13 != (char *)0x0) {
          sVar14 = strlen(pcVar15);
          cVar30 = *pcVar13;
          if (cVar30 != '\0') {
            do {
              iVar12 = strncmp(pcVar13,pcVar15,(long)(int)sVar14);
              pcVar11 = pcVar13;
              pcVar6 = pcVar13;
              if ((iVar12 == 0) && ((pcVar13[(int)sVar14] == '\0' || (pcVar13[(int)sVar14] == ',')))
                 ) {
                local_1a4 = 0;
                lVar27 = plVar1[0x45];
                plVar1[0x49] = 0;
                puVar31 = *(undefined8 **)(lVar27 + 0x188);
                if (puVar31[1] == 0) goto LAB_0104d74c;
                uVar29 = 0;
                goto LAB_0104d728;
              }
              do {
                pcVar13 = pcVar11;
                if (cVar30 == ',') break;
                cVar30 = pcVar6[1];
                pcVar11 = pcVar13 + 1;
                pcVar6 = pcVar6 + 1;
              } while (cVar30 != '\0');
              do {
                pcVar13 = pcVar13 + 1;
                cVar30 = *pcVar13;
              } while (cVar30 == ' ');
            } while (cVar30 != '\0');
          }
        }
        _lws_log(1,"lws_client_int_s_hs: got bad protocol %s\n",pcVar15);
        pcVar13 = "HS: PROTOCOL malformed";
        lVar24 = local_1a0[0x49];
        goto joined_r0x0104d774;
      }
      local_1a4 = 0;
      lVar27 = plVar1[0x45];
      uVar29 = 0;
      plVar1[0x49] = *(long *)(lVar27 + 0x188);
LAB_0104d100:
      plVar2 = local_1a0;
      lVar27 = *(long *)(lVar27 + 0x1a8);
      uVar29 = -(uVar29 >> 0x1f & 1) & 0xfffffff800000000 | (uVar29 & 0xffffffff) << 3;
      plVar1[0x4a] = lVar27 + uVar29;
      plVar1[0x4b] = *(long *)(lVar27 + uVar29);
      *(long **)(lVar27 + uVar29) = plVar1;
      if (local_1a0[0x4b] != 0) {
        *(long **)(local_1a0[0x4b] + 0x250) = local_1a0 + 0x4b;
      }
      iVar12 = lws_hdr_total_length(local_1a0,9);
      if (iVar12 != 0) {
        iVar12 = lws_hdr_copy(plVar2,pbVar25,*(undefined4 *)(lVar24 + 0xc84),9);
        if (-1 < iVar12) {
          bVar9 = true;
LAB_0104d174:
          local_1a4 = 0;
          uVar19 = 0;
          bVar8 = false;
          pbVar17 = (byte *)0x0;
          uVar20 = 0;
LAB_0104d198:
          do {
LAB_0104d1a0:
            do {
              bVar22 = *pbVar25;
              if (bVar22 < 0x2c) {
                if ((bVar22 == 0) || (bVar22 == 9)) {
LAB_0104d1c8:
                  (&local_198)[(int)uVar19] = 0;
                  if (*pbVar25 == 0) {
                    bVar9 = false;
                  }
                  else {
                    bVar8 = false;
                    pbVar25 = pbVar25 + 1;
                    bVar3 = uVar19 == 0;
                    uVar19 = 0;
                    if (bVar3) goto LAB_0104d1a0;
                  }
                  _lws_log(4,"checking client ext %s\n",&local_198);
                  local_1a4 = 0;
                  puVar31 = *(undefined8 **)(local_1a0[0x45] + 0x1c0);
                  if (puVar31 == (undefined8 *)0x0) goto LAB_0104d550;
                  if (puVar31[1] == 0) goto LAB_0104d3c4;
                  goto LAB_0104d274;
                }
              }
              else {
                if (bVar22 == 0x2c) goto LAB_0104d1c8;
                if (bVar22 == 0x3b) {
                  if (pbVar17 == (byte *)0x0) {
                    pbVar17 = pbVar25 + 1;
                  }
                  pbVar25 = pbVar25 + 1;
                  bVar8 = true;
                  goto LAB_0104d198;
                }
              }
              if (bVar8) {
LAB_0104d230:
                pbVar25 = pbVar25 + 1;
                goto LAB_0104d198;
              }
              if (bVar22 == 0x20) {
                bVar8 = false;
                goto LAB_0104d230;
              }
              bVar8 = false;
              pbVar25 = pbVar25 + 1;
              (&local_198)[(int)uVar20] = bVar22;
              uVar19 = uVar20;
            } while (0x7e < uVar20);
            uVar19 = uVar20 + 1;
            bVar8 = false;
            local_1a4 = uVar19;
            uVar20 = uVar19;
          } while( true );
        }
        _lws_log(2,"ext list from server failed to copy\n");
        pcVar13 = "HS: EXT: list too big";
        uVar23 = 0x3ea;
        lVar24 = local_1a0[0x49];
        plVar1 = local_1a0;
        goto joined_r0x0104d5ec;
      }
LAB_0104d3d8:
      pcVar13 = (char *)FUN_01047fa0(local_1a0,0xd);
      plVar1 = local_1a0;
      lVar27 = *local_1a0;
      iVar12 = strcmp(pcVar13,(char *)(lVar27 + 0xb6c));
      if (iVar12 != 0) {
        _lws_log(2,"lws_client_int_s_hs: accept \'%s\' wrong vs \'%s\'\n",pcVar13,
                 (char *)(lVar27 + 0xb6c));
        pcVar13 = "HS: Accept hash wrong";
        uVar23 = 0x3ea;
        lVar24 = local_1a0[0x49];
        plVar1 = local_1a0;
        goto joined_r0x0104d5ec;
      }
      iVar12 = FUN_01042334(plVar1);
      if (iVar12 != 0) goto LAB_0104cbdc;
      iVar12 = (**(code **)(local_1a0[0x49] + 8))(local_1a0,2,local_1a0[0x4e],0,0);
      if (iVar12 != 0) {
        pcVar13 = "HS: Rejected by filter cb";
        lVar24 = local_1a0[0x49];
        goto joined_r0x0104d52c;
      }
      lws_set_timeout(local_1a0,0,0);
      FUN_01047ae8(local_1a0,0);
      lws_union_transition(local_1a0,4);
      *(undefined1 *)((long)local_1a0 + 0x2ff) = 5;
      FUN_01044614();
      *(uint *)((long)local_1a0 + 0x2f4) = *(uint *)((long)local_1a0 + 0x2f4) & 0xfffffe7f | 0x80;
      iVar12 = *(int *)(local_1a0[0x49] + 0x18);
      if (iVar12 == 0) {
        iVar12 = *(int *)(lVar24 + 0xc84);
      }
      uVar19 = iVar12 + 0x10;
      local_1a4 = uVar19;
      lVar27 = thunk_FUN_0104b1cc(0,(long)(iVar12 + 0x14),"client frame buffer");
      local_1a0[7] = lVar27;
      if (lVar27 == 0) {
        _lws_log(1,"Out of Mem allocating rx buffer %d\n",uVar19);
        goto LAB_0104cbec;
      }
      *(uint *)(local_1a0 + 8) = uVar19;
      iVar12 = setsockopt((int)local_1a0[0x5a],1,7,&local_1a4,4);
      if (iVar12 != 0) {
        _lws_log(2,"Failed to set SNDBUF to %d",local_1a4);
        pcVar13 = "HS: SO_SNDBUF failed";
        lVar24 = local_1a0[0x49];
joined_r0x0104d704:
        uVar23 = 0;
        plVar1 = local_1a0;
        goto joined_r0x0104d5ec;
      }
      iVar12 = (**(code **)(local_1a0[0x49] + 8))(local_1a0,3,local_1a0[0x4e],0,0);
      if (iVar12 != 0) {
        pcVar13 = "HS: Rejected at CLIENT_ESTABLISHED";
        lVar24 = local_1a0[0x49];
        goto joined_r0x0104d704;
      }
      lVar27 = *(long *)(local_1a0[0x45] + 0x1c0);
      if ((lVar27 == 0) || (pcVar28 = *(code **)(lVar27 + 8), pcVar28 == (code *)0x0))
      goto LAB_0104cd4c;
      do {
        local_1a4 = 0;
        bVar22 = *(byte *)((long)local_1a0 + 0x2fc);
        if ((ulong)bVar22 == 0) {
          lVar18 = 0;
        }
        else {
          if (local_1a0[0x52] == lVar27) {
            lVar18 = local_1a0[0x54];
          }
          else {
            lVar18 = 0;
          }
          if (bVar22 < 2) {
            local_1a4 = 1;
          }
          else {
            lVar10 = 0;
            do {
              lVar21 = lVar10;
              if (local_1a0[lVar21 + 0x53] == lVar27) {
                lVar18 = local_1a0[lVar21 + 0x55];
              }
              lVar10 = lVar21 + 1;
            } while (lVar21 + 2U < (ulong)bVar22);
            local_1a4 = (int)lVar21 + 2;
          }
        }
        (*pcVar28)(lVar24,lVar27,local_1a0,10,lVar18,0,0);
        pcVar28 = *(code **)(lVar27 + 0x20);
        uVar26 = 0;
        lVar27 = lVar27 + 0x18;
      } while (pcVar28 != (code *)0x0);
    }
  }
                    /* try { // try from 0104ca6c to 0114ca73 has its CatchHandler @ 0104cc24 */
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return uVar26;
  }
LAB_0104cd60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    uVar29 = uVar29 + 1;
    local_1a4 = (uint)uVar29;
    plVar2 = puVar31 + 8;
    puVar31 = puVar31 + 7;
    if (*plVar2 == 0) break;
LAB_0104d728:
    iVar12 = strcmp(pcVar15,(char *)*puVar31);
    if (iVar12 == 0) {
      plVar1[0x49] = (long)puVar31;
      goto LAB_0104d100;
    }
  }
LAB_0104d74c:
  _lws_log(1,"lws_client_int_s_hs: fail protocol %s\n",pcVar15);
  pcVar13 = "HS: Cannot match protocol";
  lVar24 = local_1a0[0x49];
joined_r0x0104d774:
  uVar23 = 0x3ea;
  plVar1 = local_1a0;
  goto joined_r0x0104d5ec;
LAB_0104d274:
  do {
    iVar12 = strcmp((char *)&local_198,(char *)*puVar31);
    if (iVar12 == 0) {
      local_1a4 = 1;
      _lws_log(4,"instantiating client ext %s\n",&local_198);
      local_1a0[(ulong)*(byte *)((long)local_1a0 + 0x2fc) + 0x52] = (long)puVar31;
      pcVar28 = (code *)puVar31[1];
      uVar26 = lws_get_context();
      iVar12 = (*pcVar28)(uVar26,puVar31,local_1a0,5,
                          local_1a0 + (ulong)*(byte *)((long)local_1a0 + 0x2fc) + 0x54,&local_1b8,0)
      ;
      if (iVar12 == 0) {
        local_198 = 0;
        iVar12 = FUN_01043028(*(undefined8 *)(local_1a0[0x49] + 8),local_1a0,0x27,*puVar31,
                              &local_198,0x80);
        plVar1 = local_1a0;
        pcVar13 = local_1b8;
        if (iVar12 != 0) {
          pcVar13 = "HS: EXT: failed setting defaults";
          lVar24 = local_1a0[0x49];
          goto joined_r0x0104d5ec;
        }
        if (local_198 != 0) {
          lVar27 = local_1a0[(ulong)*(byte *)((long)local_1a0 + 0x2fc) + 0x54];
          sVar14 = strlen((char *)&local_198);
          iVar12 = lws_ext_parse_options(puVar31,plVar1,lVar27,pcVar13,&local_198,sVar14);
          if (iVar12 != 0) {
            _lws_log(1,"%s: unable to parse user defaults \'%s\'",
                     "lws_client_interpret_server_handshake",&local_198);
            pcVar13 = "HS: EXT: failed parsing defaults";
            lVar24 = local_1a0[0x49];
            goto joined_r0x0104d5ec;
          }
        }
        if ((pbVar17 != (byte *)0x0) &&
           (iVar12 = lws_ext_parse_options
                               (puVar31,local_1a0,
                                local_1a0[(ulong)*(byte *)((long)local_1a0 + 0x2fc) + 0x54],
                                local_1b8,pbVar17,(int)pbVar25 - (int)pbVar17), iVar12 != 0)) {
          _lws_log(1,"%s: unable to parse remote def \'%s\'","lws_client_interpret_server_handshake"
                   ,pbVar17);
          pcVar13 = "HS: EXT: failed parsing options";
          uVar23 = 0x3ea;
          lVar24 = local_1a0[0x49];
          plVar1 = local_1a0;
          goto joined_r0x0104d5ec;
        }
        pcVar28 = (code *)puVar31[1];
        uVar26 = lws_get_context(local_1a0);
        iVar12 = (*pcVar28)(uVar26,puVar31,local_1a0,0x19,
                            local_1a0[(ulong)*(byte *)((long)local_1a0 + 0x2fc) + 0x54],0,0);
        if (iVar12 != 0) {
          _lws_log(1,"%s: ext %s rejects server options %s","lws_client_interpret_server_handshake",
                   *puVar31,pbVar17);
          pcVar13 = "HS: EXT: Rejects server options";
          lVar24 = local_1a0[0x49];
          goto joined_r0x0104d5ec;
        }
        *(char *)((long)local_1a0 + 0x2fc) = *(char *)((long)local_1a0 + 0x2fc) + '\x01';
      }
    }
    plVar1 = puVar31 + 4;
    puVar31 = puVar31 + 3;
  } while (*plVar1 != 0);
LAB_0104d3c4:
  if (local_1a4 == 0) {
LAB_0104d550:
    _lws_log(2,"Unknown ext \'%s\'!\n",&local_198);
    pcVar13 = "HS: EXT: unknown ext";
    lVar24 = local_1a0[0x49];
joined_r0x0104d5ec:
    uVar23 = 0x3ea;
    plVar1 = local_1a0;
    goto joined_r0x0104d5ec;
  }
  local_1a4 = 0;
  if (!bVar9) goto LAB_0104d3d8;
  goto LAB_0104d174;
}

