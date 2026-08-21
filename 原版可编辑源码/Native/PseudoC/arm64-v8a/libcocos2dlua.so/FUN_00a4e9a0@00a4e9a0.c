
void FUN_00a4e9a0(char *param_1,char *param_2,char *param_3,undefined4 param_4,int param_5,
                 undefined8 *param_6)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  size_t __n;
  long lVar6;
  long lVar7;
  size_t __n_00;
  size_t __n_01;
  long lVar8;
  char *pcVar9;
  ushort uVar10;
  char cVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long local_338;
  undefined2 *local_330;
  long *local_310;
  long local_308;
  long local_300 [7];
  char acStack_2c2 [2];
  undefined2 local_2c0;
  char local_2be [5];
  undefined1 local_2b9;
  byte local_2b8;
  char local_2b7;
  undefined1 local_2b6;
  undefined1 local_2b5;
  undefined1 local_2b4;
  undefined1 local_2b3;
  undefined1 local_2b2;
  undefined1 local_2b1;
  undefined1 local_2b0;
  undefined1 local_2af;
  undefined1 local_2ae;
  undefined1 local_2ad;
  long local_68;
  
                    /* try { // try from 00a4e9c4 to 00b4e9cf has its CatchHandler @ 00a4eb74 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a4e9d0 to 00b4e9fb has its CatchHandler @ 00a4e8b8 */
  iVar5 = *(int *)(param_6 + 0x28);
  uVar1 = *(undefined4 *)((long)param_6 + (long)param_5 * 4 + 0x260);
  uVar12 = *param_6;
  bVar3 = iVar5 == 5;
                    /* try { // try from 00a4e9fc to 00b4ea5f has its CatchHandler @ 00a4eb78 */
  __n = strlen(param_3);
  if (*(char *)((long)param_6 + 0x3be) != '\0') {
    FUN_00a38740(uVar12,"SOCKS5: connecting to HTTP proxy %s port %d\n",param_3,param_4);
  }
  if ((0xff < __n) && (iVar5 != 5)) {
    FUN_00a38740(*param_6,
                 "SOCKS5: server resolving disabled for hostnames of length > 255 [actual len=%zu]\n"
                 ,__n);
    bVar3 = true;
  }
  lVar6 = FUN_00a25238(uVar12,0,1);
  if (lVar6 < 0) {
    pcVar9 = "Connection time-out";
                    /* try { // try from 00a4eab0 to 00b4eabb has its CatchHandler @ 00a4eb78 */
  }
  else {
    FUN_00a2c678(uVar1,1);
                    /* try { // try from 00a4ea74 to 00b4ea7f has its CatchHandler @ 00a4eb3c */
    uVar4 = FUN_00a2b3d0(0xffffffff,0xffffffff,uVar1,lVar6);
    if (uVar4 != 0) {
                    /* try { // try from 00a4ea8c to 00b4ea9b has its CatchHandler @ 00a4eb38 */
      if (uVar4 == 0xffffffff) {
        uVar12 = *param_6;
        pcVar9 = "SOCKS5: no connection here";
      }
      else if ((uVar4 >> 2 & 1) == 0) {
        cVar11 = '\x01';
        if (param_1 != (char *)0x0) {
          cVar11 = '\x02';
        }
        local_2c0 = CONCAT11(cVar11,5);
        local_2be[0] = '\0';
        local_2be[1] = '\x02';
        FUN_00a2c678(uVar1,0);
        FUN_00a38740(uVar12,"SOCKS5 communication to %s:%d\n",param_3,param_4);
        iVar5 = FUN_00a38e24(param_6,uVar1,&local_2c0,cVar11 + '\x02',&local_308);
                    /* catch() { ... } // from try @ 00a4ea8c with catch @ 00a4eb38 */
                    /* catch() { ... } // from try @ 00a4ea74 with catch @ 00a4eb3c */
                    /* catch() { ... } // from try @ 00a4e99c with catch @ 00a4eb40 */
        if ((iVar5 != 0) || (local_308 != (ulong)local_2c0._1_1_ + 2)) {
          pcVar9 = "Unable to send initial SOCKS5 request.";
          goto LAB_00a4ebb0;
        }
        FUN_00a2c678(uVar1,1);
        uVar4 = FUN_00a2b3d0(uVar1,0xffffffff,0xffffffff,lVar6);
                    /* catch() { ... } // from try @ 00a4e98c with catch @ 00a4eb70 */
                    /* catch() { ... } // from try @ 00a4e934 with catch @ 00a4eb74
                       catch() { ... } // from try @ 00a4e9c4 with catch @ 00a4eb74 */
        if (uVar4 == 0) {
          uVar12 = *param_6;
          pcVar9 = "SOCKS5 read timeout";
          goto LAB_00a4eac0;
        }
                    /* catch() { ... } // from try @ 00a4e9fc with catch @ 00a4eb78
                       catch() { ... } // from try @ 00a4eab0 with catch @ 00a4eb78 */
        if (uVar4 == 0xffffffff) {
          uVar12 = *param_6;
          pcVar9 = "SOCKS5 nothing to read";
        }
        else {
          if ((uVar4 >> 2 & 1) != 0) {
            FUN_00a38a08(*param_6,"SOCKS5 read error occurred");
            uVar12 = 0x38;
            goto LAB_00a4ebc0;
          }
          local_330 = &local_2c0;
                    /* try { // try from 00a4ec0c to 00b4ec53 has its CatchHandler @ 00a4ed50 */
          FUN_00a2c678(uVar1,0);
          local_338 = 0;
          lVar6 = 2;
          while( true ) {
            do {
                    /* try { // try from 00a4ec64 to 00b4ec6f has its CatchHandler @ 00a4ed4c */
              lVar7 = FUN_00a25238(*param_6,0,1);
                    /* try { // try from 00a4ec74 to 00b4ec83 has its CatchHandler @ 00a4ed1c */
              if ((lVar7 < 0) ||
                 (iVar5 = FUN_00a2b3d0(uVar1,0xffffffff,0xffffffff,lVar7), iVar5 < 1))
              goto LAB_00a4ed04;
                    /* try { // try from 00a4ec98 to 00b4eca3 has its CatchHandler @ 00a4ed50 */
              iVar5 = FUN_00a39388(uVar1,local_330,lVar6,local_300);
                    /* try { // try from 00a4eca4 to 00b4ed6b has its CatchHandler @ 00a4eb94 */
            } while (iVar5 == 0x51);
            if (iVar5 != 0) goto LAB_00a4ed04;
            if (lVar6 - local_300[0] == 0) break;
            if (local_300[0] == 0) goto LAB_00a4ed04;
            local_330 = (undefined2 *)((long)local_330 + local_300[0]);
            local_338 = local_300[0] + local_338;
            lVar6 = lVar6 - local_300[0];
          }
          if (local_338 + lVar6 == 2) {
            if ((char)local_2c0 != '\x05') {
              pcVar9 = "Received invalid version in initial SOCKS5 response.";
                    /* catch() { ... } // from try @ 00a4ec74 with catch @ 00a4ed1c */
              goto LAB_00a4ebb0;
            }
            if (local_2c0._1_1_ < 2) {
              if (local_2c0._1_1_ == 0) goto LAB_00a4eed4;
              if (local_2c0._1_1_ == 1) {
                pcVar9 = "SOCKS5 GSSAPI per-message authentication is not supported.";
                goto LAB_00a4ebb0;
              }
            }
            else {
              if (local_2c0._1_1_ == 0xff) {
                if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
                  pcVar9 = 
                  "No authentication method was acceptable. (It is quite likely that the SOCKS5 server wanted a username/password, since none was supplied to the server on this connection.)"
                  ;
                }
                else {
                  pcVar9 = "No authentication method was acceptable.";
                }
                goto LAB_00a4ebb0;
              }
              if (local_2c0._1_1_ == 2) {
                if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
                  __n_01 = 0;
                  __n_00 = 0;
                  local_2c0 = 1;
                }
                else {
                  __n_00 = strlen(param_1);
                    /* catch() { ... } // from try @ 00a4ec64 with catch @ 00a4ed4c */
                  __n_01 = strlen(param_2);
                    /* catch() { ... } // from try @ 00a4ec0c with catch @ 00a4ed50
                       catch() { ... } // from try @ 00a4ec98 with catch @ 00a4ed50 */
                  local_2c0 = CONCAT11((char)__n_00,1);
                  if (__n_00 != 0) {
                    memcpy((void *)((ulong)&local_2c0 | 2),param_1,__n_00);
                  }
                }
                    /* try { // try from 00a4edc4 to 00b4ee1b has its CatchHandler @ 00a4edc4
                       catch() { ... } // from try @ 00a4edc4 with catch @ 00a4edc4
                       catch() { ... } // from try @ 00a4ee34 with catch @ 00a4edc4 */
                local_2be[__n_00] = (char)__n_01;
                if ((param_2 != (char *)0x0) && (__n_01 != 0)) {
                  memcpy(local_2be + __n_00 + 1,param_2,__n_01);
                }
                lVar6 = __n_00 + 3 + __n_01;
                iVar5 = FUN_00a38e24(param_6,uVar1,&local_2c0,lVar6,&local_308);
                if ((iVar5 != 0) || (lVar6 != local_308)) {
                  pcVar9 = "Failed to send SOCKS5 sub-negotiation request.";
                    /* try { // try from 00a4ee30 to 00b4ee33 has its CatchHandler @ 00a4eea4 */
                  goto LAB_00a4ebb0;
                }
                lVar6 = 0;
                    /* try { // try from 00a4ee1c to 00b4ee27 has its CatchHandler @ 00a4eebc */
                puVar13 = &local_2c0;
                lVar7 = 2;
                goto LAB_00a4ee40;
              }
            }
            pcVar9 = "Undocumented SOCKS5 mode attempted to be used by server.";
            goto LAB_00a4ebb0;
          }
LAB_00a4ed04:
          pcVar9 = "Unable to receive initial SOCKS5 response.";
        }
      }
      else {
        uVar12 = *param_6;
                    /* try { // try from 00a4eb94 to 00b4ec0b has its CatchHandler @ 00a4eb94
                       catch() { ... } // from try @ 00a4eb94 with catch @ 00a4eb94
                       catch() { ... } // from try @ 00a4eca4 with catch @ 00a4eb94 */
        pcVar9 = "SOCKS5: error occurred during connection";
      }
      FUN_00a38a08(uVar12,pcVar9);
      uVar12 = 7;
      goto LAB_00a4ebc0;
    }
    uVar12 = *param_6;
                    /* try { // try from 00a4eabc to 00b4eb93 has its CatchHandler @ 00a4e8b8 */
    pcVar9 = "SOCKS5: connection timeout";
  }
LAB_00a4eac0:
  FUN_00a38a08(uVar12,pcVar9);
  uVar12 = 0x1c;
  goto LAB_00a4ebc0;
LAB_00a4eed4:
  local_2c0 = 0x105;
  local_2be[0] = '\0';
  if (bVar3) {
    iVar5 = FUN_00a2fe40(param_6,param_3,param_4,&local_310);
    if ((iVar5 != -1) && (iVar5 != 1)) {
      if ((local_310 != (long *)0x0) && (lVar6 = *local_310, lVar6 != 0)) {
        FUN_00a2fa9c(lVar6,local_300,0x40);
        if (*(int *)(lVar6 + 4) == 10) {
          local_2be[1] = '\x04';
          lVar7 = *(long *)(lVar6 + 0x20);
          local_2be[2] = *(byte *)(lVar7 + 8);
          local_2be[3] = *(undefined1 *)(lVar7 + 9);
          local_2be[4] = *(undefined1 *)(lVar7 + 10);
          local_2b9 = *(undefined1 *)(lVar7 + 0xb);
          local_2b8 = *(byte *)(lVar7 + 0xc);
          local_2b7 = *(char *)(lVar7 + 0xd);
          local_2b6 = *(undefined1 *)(lVar7 + 0xe);
          local_2b5 = *(undefined1 *)(lVar7 + 0xf);
          local_2b4 = *(undefined1 *)(lVar7 + 0x10);
          local_2b3 = *(undefined1 *)(lVar7 + 0x11);
          local_2b2 = *(undefined1 *)(lVar7 + 0x12);
          local_2b1 = *(undefined1 *)(lVar7 + 0x13);
          local_2b0 = *(undefined1 *)(lVar7 + 0x14);
          local_2af = *(undefined1 *)(lVar7 + 0x15);
          local_2ae = *(undefined1 *)(lVar7 + 0x16);
          local_2ad = *(undefined1 *)(lVar7 + 0x17);
          FUN_00a38740(uVar12,"SOCKS5 connect to IPv6 %s (locally resolved)\n",local_300);
          lVar7 = 0x14;
        }
        else if (*(int *)(lVar6 + 4) == 2) {
          local_2be[1] = '\x01';
          lVar7 = *(long *)(lVar6 + 0x20);
          local_2be[2] = *(byte *)(lVar7 + 4);
          local_2be[3] = *(undefined1 *)(lVar7 + 5);
          local_2be[4] = *(undefined1 *)(lVar7 + 6);
          local_2b9 = *(undefined1 *)(lVar7 + 7);
          FUN_00a38740(uVar12,"SOCKS5 connect to IPv4 %s (locally resolved)\n",local_300);
          lVar7 = 8;
        }
        else {
          FUN_00a38a08(uVar12,"SOCKS5 connection to %s not supported\n",local_300);
          lVar6 = 0;
          lVar7 = 3;
        }
        FUN_00a301e8(uVar12,local_310);
        if (lVar6 != 0) goto LAB_00a4efa8;
      }
      FUN_00a38a08(uVar12,"Failed to resolve \"%s\" for SOCKS5 connect.",param_3);
    }
    uVar12 = 6;
    goto LAB_00a4ebc0;
  }
  local_2be[1] = '\x03';
  local_2be[2] = (char)__n;
  memcpy(local_2be + 3,param_3,__n);
  lVar7 = __n + 5;
LAB_00a4efa8:
  local_2be[lVar7 + -2] = (char)((uint)param_4 >> 8);
  local_2be[lVar7 + -1] = (char)param_4;
  iVar5 = FUN_00a38e24(param_6,uVar1,&local_2c0,lVar7 + 2,&local_308);
  if ((iVar5 == 0) && (lVar7 + 2 == local_308)) {
    lVar6 = 0;
    puVar13 = &local_2c0;
    lVar7 = 10;
    while( true ) {
      do {
        lVar8 = FUN_00a25238(*param_6,0,1);
        if ((lVar8 < 0) || (iVar5 = FUN_00a2b3d0(uVar1,0xffffffff,0xffffffff,lVar8), iVar5 < 1))
        goto LAB_00a4f3a4;
        iVar5 = FUN_00a39388(uVar1,puVar13,lVar7,local_300);
      } while (iVar5 == 0x51);
      if (iVar5 != 0) goto LAB_00a4f3a4;
      if (lVar7 - local_300[0] == 0) break;
      if (local_300[0] == 0) goto LAB_00a4f3a4;
      puVar13 = (undefined2 *)((long)puVar13 + local_300[0]);
      lVar6 = local_300[0] + lVar6;
      lVar7 = lVar7 - local_300[0];
    }
    if (lVar6 + lVar7 == 10) {
      if ((char)local_2c0 != '\x05') {
        pcVar9 = "SOCKS5 reply has wrong version, version should be 5.";
        goto LAB_00a4ebb0;
      }
      if (local_2be[1] == '\x04') {
        uVar15 = 0x16;
      }
      else {
        if (local_2be[1] != '\x03') {
          uVar15 = 10;
          goto LAB_00a4f1e4;
        }
        uVar15 = (ulong)(byte)local_2be[2] + 7;
        if (uVar15 < 0xb) goto LAB_00a4f1e4;
      }
      lVar6 = 0;
      puVar14 = &local_2b6;
      lVar7 = uVar15 - 10;
      goto LAB_00a4f264;
    }
LAB_00a4f3a4:
    pcVar9 = "Failed to receive SOCKS5 connect request ack.";
  }
  else {
    pcVar9 = "Failed to send SOCKS5 connect request.";
  }
  goto LAB_00a4ebb0;
LAB_00a4f264:
  do {
    lVar8 = FUN_00a25238(*param_6,0,1);
    if ((lVar8 < 0) || (iVar5 = FUN_00a2b3d0(uVar1,0xffffffff,0xffffffff,lVar8), iVar5 < 1))
    goto LAB_00a4f3a4;
    iVar5 = FUN_00a39388(uVar1,puVar14,lVar7,local_300);
  } while (iVar5 == 0x51);
  if (iVar5 != 0) goto LAB_00a4f3a4;
  if (lVar7 - local_300[0] == 0) {
    if (uVar15 - 10 == lVar6 + lVar7) goto LAB_00a4f1e4;
    goto LAB_00a4f3a4;
  }
  if (local_300[0] == 0) goto LAB_00a4f3a4;
  puVar14 = puVar14 + local_300[0];
  lVar6 = local_300[0] + lVar6;
  lVar7 = lVar7 - local_300[0];
  goto LAB_00a4f264;
LAB_00a4f1e4:
  if (local_2c0._1_1_ == '\0') {
    FUN_00a38740(uVar12,"SOCKS5 request granted.\n");
    FUN_00a2c678(uVar1,1);
    uVar12 = 0;
    goto LAB_00a4ebc0;
  }
  if (local_2be[1] == '\x04') {
    uVar10 = (ushort)local_2b8;
    pcVar9 = 
    "Can\'t complete SOCKS5 connection to %02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%d. (%d)"
    ;
    cVar11 = local_2b7;
LAB_00a4f358:
    FUN_00a38a08(uVar12,pcVar9,local_2be[2],local_2be[3],local_2be[4],local_2b9,uVar10,cVar11);
  }
  else if (local_2be[1] == '\x03') {
    cVar11 = acStack_2c2[uVar15];
    acStack_2c2[uVar15] = '\0';
    FUN_00a38a08(uVar12,"Can\'t complete SOCKS5 connection to %s:%d. (%d)",local_2be + 3,
                 CONCAT11(cVar11,acStack_2c2[uVar15 + 1]),local_2c0._1_1_);
    acStack_2c2[uVar15] = cVar11;
  }
  else if (local_2be[1] == '\x01') {
    uVar10 = CONCAT11(local_2b8,local_2b7);
    pcVar9 = "Can\'t complete SOCKS5 connection to %d.%d.%d.%d:%d. (%d)";
    cVar11 = local_2c0._1_1_;
    goto LAB_00a4f358;
  }
  goto LAB_00a4ebb8;
LAB_00a4ee40:
  do {
    lVar8 = FUN_00a25238(*param_6,0,1);
    if ((lVar8 < 0) || (iVar5 = FUN_00a2b3d0(uVar1,0xffffffff,0xffffffff,lVar8), iVar5 < 1))
    goto LAB_00a4effc;
    iVar5 = FUN_00a39388(uVar1,puVar13,lVar7,local_300);
  } while (iVar5 == 0x51);
  if (iVar5 != 0) goto LAB_00a4effc;
  if (lVar7 - local_300[0] != 0) {
    if (local_300[0] == 0) goto LAB_00a4effc;
                    /* try { // try from 00a4ee34 to 00b4eecf has its CatchHandler @ 00a4edc4 */
    puVar13 = (undefined2 *)((long)puVar13 + local_300[0]);
    lVar6 = local_300[0] + lVar6;
    lVar7 = lVar7 - local_300[0];
    goto LAB_00a4ee40;
  }
  if (lVar6 + lVar7 == 2) {
    if (local_2c0._1_1_ == '\0') goto LAB_00a4eed4;
                    /* catch() { ... } // from try @ 00a4ee1c with catch @ 00a4eebc */
    FUN_00a38a08(uVar12,"User was rejected by the SOCKS5 server (%d %d).",(char)local_2c0);
    goto LAB_00a4ebb8;
  }
LAB_00a4effc:
  pcVar9 = "Unable to receive SOCKS5 sub-negotiation response.";
LAB_00a4ebb0:
  FUN_00a38a08(uVar12,pcVar9);
LAB_00a4ebb8:
  uVar12 = 7;
LAB_00a4ebc0:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar12);
  }
  return;
}

