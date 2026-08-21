
long * FUN_00aab134(long *param_1)

{
  addrinfo **ppaVar1;
  long *plVar2;
  undefined2 *puVar3;
  byte bVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  ssize_t sVar9;
  size_t sVar10;
  long lVar11;
  addrinfo *paVar12;
  socklen_t __len;
  long lVar13;
  char *pcVar14;
  code *pcVar15;
  uint uVar16;
  undefined4 local_80;
  undefined4 uStack_7c;
  addrinfo *local_78;
  addrinfo local_70;
  
                    /* try { // try from 00aab144 to 00bab18b has its CatchHandler @ 00aab144
                       catch() { ... } // from try @ 00aab144 with catch @ 00aab144
                       catch() { ... } // from try @ 00aab190 with catch @ 00aab144 */
  if (*param_1 == 0) {
    pcVar14 = "ah was NULL at cc2";
    _lws_log(1,"%s\n","ah was NULL at cc2");
  }
  else {
    lVar11 = param_1[0x45];
    lVar13 = param_1[0x44];
    bVar4 = *(byte *)((long)param_1 + 0x304);
    *(uint *)((long)param_1 + 0x2f4) =
         (*(uint *)((long)param_1 + 0x2f4) & 0xfff00000 |
         *(uint *)((long)param_1 + 0x2f4) & 0x7ffff |
         ((*(uint *)(*(long *)(lVar11 + 0x150) + 0xc78) | *(uint *)(lVar11 + 0x1d8)) >> 5 & 1) <<
         0x13) ^ 0x80000;
                    /* try { // try from 00aab18c to 00bab18f has its CatchHandler @ 00aab1a4 */
    if (*(int *)(lVar11 + 0x1d4) == 0) {
      pcVar14 = (char *)FUN_00aa581c(param_1,0x55);
      uVar16 = (uint)*(ushort *)((long)param_1 + 0x2fa);
      sVar10 = 0;
    }
    else {
                    /* try { // try from 00aab190 to 00bab1b7 has its CatchHandler @ 00aab144 */
      lVar11 = lVar13 + (ulong)bVar4 * 0x6f8;
      pcVar14 = *(char **)(lVar11 + 0x7b8);
                    /* catch() { ... } // from try @ 00aab18c with catch @ 00aab1a4 */
      plVar2 = (long *)(lVar11 + 0x7b8);
      uVar7 = FUN_00aa581c(param_1,0x55);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aab354 with catch @ 00aab1b8
                       catch(type#1 @ 00000000) { ... } // from try @ 00aab51c with catch @ 00aab1b8
                        */
      iVar6 = sprintf(pcVar14,"CONNECT %s:%u HTTP/1.0\r\nUser-agent: libwebsockets\r\n",uVar7,
                      (ulong)*(ushort *)((long)param_1 + 0x2fa));
      lVar11 = (long)iVar6;
      if (*(char *)(param_1[0x45] + 0x80) != '\0') {
        iVar6 = sprintf((char *)(*plVar2 + lVar11),"Proxy-authorization: basic %s\r\n");
        lVar11 = lVar11 + iVar6;
      }
      puVar3 = (undefined2 *)(*plVar2 + lVar11);
      *(undefined1 *)(puVar3 + 1) = 0;
      *puVar3 = 0xa0d;
      pcVar14 = (char *)param_1[0x45];
      sVar10 = lVar11 + 2;
      uVar16 = *(uint *)(pcVar14 + 0x1d4);
    }
    _lws_log(4,"%s: %p: address %s\n","lws_client_connect_2",param_1,pcVar14);
    local_70.ai_addr = (sockaddr *)0x0;
    local_70.ai_addrlen = 0;
    local_70._20_4_ = 0;
    local_70.ai_next = (addrinfo *)0x0;
    local_70.ai_canonname = (char *)0x0;
    local_70.ai_flags = 0;
    local_70.ai_family = 0;
    local_78 = (addrinfo *)0x0;
    local_70.ai_socktype._0_1_ = (*(byte *)((long)param_1 + 0x2f6) >> 3 & 1) == 0;
    if (local_70.ai_socktype._0_1_) {
      local_70.ai_flags = 2;
      local_70.ai_family = 0;
    }
    local_70._9_7_ = 0;
    iVar6 = getaddrinfo(pcVar14,(char *)0x0,&local_70,&local_78);
    if ((*(byte *)((long)param_1 + 0x2f6) >> 3 & 1) == 0) {
      if (iVar6 == 0) {
                    /* try { // try from 00aab300 to 00bab307 has its CatchHandler @ 00aab434 */
        paVar12 = local_78;
        if (local_78 != (addrinfo *)0x0) {
          do {
                    /* try { // try from 00aab30c to 00bab30f has its CatchHandler @ 00aab410 */
            if (paVar12->ai_family == 2) {
              local_70.ai_flags._0_2_ = 2;
              local_70.ai_socktype = 0;
              local_70.ai_protocol = 0;
              local_70.ai_family = *(int *)(paVar12->ai_canonname + 4);
              goto joined_r0x00aab3fc;
            }
            ppaVar1 = &paVar12->ai_next;
            paVar12 = *ppaVar1;
          } while (*ppaVar1 != (addrinfo *)0x0);
          if (local_78 != (addrinfo *)0x0) {
            freeaddrinfo(local_78);
          }
        }
        _lws_log(1,"Couldn\'t identify address\n");
        pcVar14 = "unable to lookup address";
      }
      else {
        _lws_log(1,"getaddrinfo failed\n");
                    /* try { // try from 00aab2c8 to 00bab2cf has its CatchHandler @ 00aab42c */
        pcVar14 = "getaddrinfo failed";
      }
    }
    else if (iVar6 == 0) {
      local_70.ai_socktype = 0;
      local_70.ai_protocol = 0;
                    /* try { // try from 00aab34c to 00bab353 has its CatchHandler @ 00aab434 */
      uVar5 = (ulong)local_70.ai_addr >> 0x20;
      local_70.ai_addr = (sockaddr *)((ulong)local_70.ai_addr & 0xffffffff00000000);
      local_70.ai_addrlen = 0;
      local_70._20_4_ = 0;
                    /* try { // try from 00aab354 to 00bab4cb has its CatchHandler @ 00aab1b8 */
      local_70.ai_flags = 10;
      local_70.ai_family = 0;
      if (local_78->ai_family == 10) {
        pcVar14 = local_78->ai_canonname;
        local_70._16_8_ = *(undefined8 *)(pcVar14 + 0x10);
        local_70._8_8_ = *(undefined8 *)(pcVar14 + 8);
        local_70.ai_addr = (sockaddr *)CONCAT44((int)uVar5,*(undefined4 *)(pcVar14 + 0x18));
        local_70.ai_family = *(int *)(pcVar14 + 4);
        local_70.ai_flags = 10;
LAB_00aab400:
        freeaddrinfo(local_78);
      }
      else {
        if (local_78->ai_family != 2) {
          _lws_log(1,"Unknown address family\n");
          freeaddrinfo(local_78);
          pcVar14 = "unknown address family";
          goto LAB_00aab614;
        }
        local_70.ai_socktype = 0;
        local_70.ai_protocol = 0;
        pcVar14 = local_78->ai_canonname;
        local_70._20_1_ = pcVar14[4];
        local_70._21_1_ = pcVar14[5];
        local_70._22_1_ = pcVar14[6];
        local_70._23_1_ = pcVar14[7];
        local_70.ai_addrlen = 0xffff0000;
        _lws_log(4,"uplevelling AF_INET to AF_INET6\n");
joined_r0x00aab3fc:
        if (local_78 != (addrinfo *)0x0) goto LAB_00aab400;
      }
      if (-1 < (int)param_1[0x5a]) {
LAB_00aab40c:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aab30c with catch @ 00aab410
                        */
        local_70.ai_flags._2_2_ = (ushort)(uVar16 >> 8) & 0xff | (ushort)((uVar16 & 0xff00ff) << 8);
        __len = 0x10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aab2c8 with catch @ 00aab42c
                        */
        if ((*(uint *)((long)param_1 + 0x2f4) & 0x80000) != 0) {
          __len = 0x1c;
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aab300 with catch @ 00aab434
                       catch(type#1 @ 00000000) { ... } // from try @ 00aab34c with catch @ 00aab434
                        */
        iVar6 = connect((int)param_1[0x5a],(sockaddr *)&local_70,__len);
        if (iVar6 == -1) {
          piVar8 = (int *)__errno();
          iVar6 = *piVar8;
          if (iVar6 - 0x72U < 2) {
LAB_00aab514:
                    /* try { // try from 00aab518 to 00bab51b has its CatchHandler @ 00aab590 */
            iVar6 = lws_plat_check_connection_error(param_1);
                    /* try { // try from 00aab51c to 00bab5a3 has its CatchHandler @ 00aab1b8 */
            if (iVar6 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aab690 with catch @ 00aab6d0
                        */
              iVar6 = FUN_00aa3be0(param_1,0,4);
              if (iVar6 == 0) {
                return param_1;
              }
              pcVar14 = "POLLOUT set failed";
            }
            else {
              pcVar14 = "socket connect failed";
            }
          }
          else {
            if (iVar6 == 0x6a) goto LAB_00aab440;
            if (iVar6 == 0xb) goto LAB_00aab514;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aab724 with catch @ 00aab6f4
                        */
            _lws_log(4,"Connect failed errno=%d\n");
            pcVar14 = "connect failed";
          }
        }
        else {
LAB_00aab440:
          if (*(int *)(param_1[0x45] + 0x1d4) == 0) {
            lws_set_timeout(param_1,8,0x14);
            local_80 = (undefined4)param_1[0x5a];
            *(undefined1 *)((long)param_1 + 0x2fe) = 0x24;
            uStack_7c = 0x10001;
            iVar6 = lws_service_fd(lVar13,&local_80);
            if (-1 < iVar6) {
              if (iVar6 == 0) {
                return param_1;
              }
              return (long *)0x0;
            }
            pcVar14 = "first service failed";
          }
          else {
            iVar6 = FUN_00aa58d4(param_1,0x55);
            if (iVar6 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aab4cc with catch @ 00aab57c
                        */
              *(short *)((long)param_1 + 0x2fa) = (short)*(undefined4 *)(param_1[0x45] + 0x1d4);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aab518 with catch @ 00aab590
                        */
              sVar9 = send((int)param_1[0x5a],*(void **)(lVar13 + (ulong)bVar4 * 0x6f8 + 0x7b8),
                           sVar10,0x4000);
              if (-1 < (int)sVar9) {
                lws_set_timeout(param_1,1,0x14);
                *(undefined1 *)((long)param_1 + 0x2fe) = 0x23;
                return param_1;
              }
              pcVar14 = "proxy write failed";
            }
            else {
              pcVar14 = "";
            }
          }
        }
LAB_00aab710:
        lVar11 = param_1[0x4e];
                    /* try { // try from 00aab720 to 00bab723 has its CatchHandler @ 00aab860 */
        pcVar15 = *(code **)(*(long *)(param_1[0x45] + 0x188) + 8);
                    /* try { // try from 00aab724 to 00bab7af has its CatchHandler @ 00aab6f4 */
        sVar10 = strlen(pcVar14);
        (*pcVar15)(param_1,1,lVar11,pcVar14,sVar10);
        *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) | 0x10000;
        goto LAB_00aab674;
      }
      if (((*(byte *)(lVar13 + 0xc79) >> 2 & 1) == 0) || (iVar6 = FUN_00ab5740(param_1), iVar6 == 0)
         ) {
        iVar6 = socket(*(ushort *)((long)param_1 + 0x2f6) & 8 | 2,1,0);
        *(int *)(param_1 + 0x5a) = iVar6;
        if (iVar6 < 0) {
          _lws_log(2,"Unable to open socket\n");
          pcVar14 = "unable to open socket";
        }
        else {
          iVar6 = lws_plat_set_socket_options(param_1[0x45],iVar6);
          if (iVar6 == 0) {
            *(undefined1 *)((long)param_1 + 0x2fe) = 0x22;
            FUN_00ab53b0(param_1,(int)param_1[0x5a]);
            iVar6 = FUN_00aa3824(lVar13,param_1);
            if (iVar6 == 0) {
              FUN_00aa3be0(param_1,0,1);
              lVar11 = param_1[0x49];
              if (lVar11 == 0) {
                lVar11 = *(long *)(param_1[0x45] + 0x188);
                param_1[0x49] = lVar11;
              }
              (**(code **)(lVar11 + 8))(param_1,0x1d,param_1[0x4e],0,0);
              lws_set_timeout(param_1,2,0x14);
              lVar11 = FUN_00aa581c(param_1,0x5a);
                    /* try { // try from 00aab7b0 to 00bab7b3 has its CatchHandler @ 00aab8f0 */
              if ((lVar11 == 0) ||
                 (iVar6 = FUN_00aa1b98(param_1[0x45],(int)param_1[0x5a],0,lVar11), -1 < iVar6))
              goto LAB_00aab40c;
              pcVar14 = "unable to bind socket";
              goto LAB_00aab710;
            }
            close((int)param_1[0x5a]);
            pcVar14 = "insert wsi failed";
          }
          else {
                    /* try { // try from 00aab4cc to 00bab4cf has its CatchHandler @ 00aab57c */
            _lws_log(1,"Failed to set wsi socket options\n");
            close((int)param_1[0x5a]);
            pcVar14 = "set socket opts failed";
          }
        }
      }
      else {
        _lws_log(2,"Waiting for libuv watcher to close\n");
        pcVar14 = "waiting for libuv watcher to close";
      }
    }
    else {
      _lws_log(4,"%s: lws_getaddrinfo46 failed %d\n","lws_client_connect_2",iVar6);
      pcVar14 = "ipv6 lws_getaddrinfo46 failed";
    }
  }
LAB_00aab614:
  FUN_00aa5308(param_1);
                    /* try { // try from 00aab61c to 00bab61f has its CatchHandler @ 00aab65c */
  if (*(byte *)((long)param_1 + 0x2fe) - 0x20 < 3) {
    lVar11 = param_1[0x4e];
    pcVar15 = *(code **)(*(long *)(param_1[0x45] + 0x188) + 8);
    sVar10 = strlen(pcVar14);
    (*pcVar15)(param_1,1,lVar11,pcVar14,sVar10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aab61c with catch @ 00aab65c
                        */
    *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) | 0x10000;
  }
  if (*(int *)((long)param_1 + 0x2d4) == -1) {
    FUN_00a9ef14(param_1);
                    /* try { // try from 00aab690 to 00bab693 has its CatchHandler @ 00aab6d0 */
    FUN_00aa5364(param_1,0);
    thunk_FUN_00aa8a48(param_1,0,"lws_free");
    return (long *)0x0;
  }
LAB_00aab674:
  FUN_00a9f034(param_1,0);
  return (long *)0x0;
}

