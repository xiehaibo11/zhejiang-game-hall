
long * FUN_0104d8b8(long *param_1)

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
    if (*(int *)(lVar11 + 0x1d4) == 0) {
      pcVar14 = (char *)FUN_01047fa0(param_1,0x55);
      uVar16 = (uint)*(ushort *)((long)param_1 + 0x2fa);
      sVar10 = 0;
    }
    else {
      lVar11 = lVar13 + (ulong)bVar4 * 0x6f8;
      pcVar14 = *(char **)(lVar11 + 0x7b8);
      plVar2 = (long *)(lVar11 + 0x7b8);
      uVar7 = FUN_01047fa0(param_1,0x55);
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
        paVar12 = local_78;
        if (local_78 != (addrinfo *)0x0) {
          do {
            if (paVar12->ai_family == 2) {
              local_70.ai_flags._0_2_ = 2;
              local_70.ai_socktype = 0;
              local_70.ai_protocol = 0;
              local_70.ai_family = *(int *)(paVar12->ai_canonname + 4);
              goto joined_r0x0104db80;
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
        pcVar14 = "getaddrinfo failed";
      }
    }
    else if (iVar6 == 0) {
      local_70.ai_socktype = 0;
      local_70.ai_protocol = 0;
      uVar5 = (ulong)local_70.ai_addr >> 0x20;
      local_70.ai_addr = (sockaddr *)((ulong)local_70.ai_addr & 0xffffffff00000000);
      local_70.ai_addrlen = 0;
      local_70._20_4_ = 0;
      local_70.ai_flags = 10;
      local_70.ai_family = 0;
      if (local_78->ai_family == 10) {
        pcVar14 = local_78->ai_canonname;
        local_70._16_8_ = *(undefined8 *)(pcVar14 + 0x10);
        local_70._8_8_ = *(undefined8 *)(pcVar14 + 8);
        local_70.ai_addr = (sockaddr *)CONCAT44((int)uVar5,*(undefined4 *)(pcVar14 + 0x18));
        local_70.ai_family = *(int *)(pcVar14 + 4);
        local_70.ai_flags = 10;
LAB_0104db84:
        freeaddrinfo(local_78);
      }
      else {
        if (local_78->ai_family != 2) {
          _lws_log(1,"Unknown address family\n");
          freeaddrinfo(local_78);
          pcVar14 = "unknown address family";
          goto LAB_0104dd98;
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
joined_r0x0104db80:
        if (local_78 != (addrinfo *)0x0) goto LAB_0104db84;
      }
      if (-1 < (int)param_1[0x5a]) {
LAB_0104db90:
        local_70.ai_flags._2_2_ = (ushort)(uVar16 >> 8) & 0xff | (ushort)((uVar16 & 0xff00ff) << 8);
        __len = 0x10;
        if ((*(uint *)((long)param_1 + 0x2f4) & 0x80000) != 0) {
          __len = 0x1c;
        }
        iVar6 = connect((int)param_1[0x5a],(sockaddr *)&local_70,__len);
        if (iVar6 == -1) {
          piVar8 = (int *)__errno();
          iVar6 = *piVar8;
          if (iVar6 - 0x72U < 2) {
LAB_0104dc98:
            iVar6 = lws_plat_check_connection_error(param_1);
            if (iVar6 == 0) {
              iVar6 = FUN_01046364(param_1,0,4);
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
            if (iVar6 == 0x6a) goto LAB_0104dbc4;
            if (iVar6 == 0xb) goto LAB_0104dc98;
            _lws_log(4,"Connect failed errno=%d\n");
            pcVar14 = "connect failed";
          }
        }
        else {
LAB_0104dbc4:
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
            iVar6 = FUN_01048058(param_1,0x55);
            if (iVar6 == 0) {
              *(short *)((long)param_1 + 0x2fa) = (short)*(undefined4 *)(param_1[0x45] + 0x1d4);
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
LAB_0104de94:
        lVar11 = param_1[0x4e];
        pcVar15 = *(code **)(*(long *)(param_1[0x45] + 0x188) + 8);
        sVar10 = strlen(pcVar14);
        (*pcVar15)(param_1,1,lVar11,pcVar14,sVar10);
        *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) | 0x10000;
        goto LAB_0104ddf8;
      }
      if (((*(byte *)(lVar13 + 0xc79) >> 2 & 1) == 0) || (iVar6 = FUN_01057ec4(param_1), iVar6 == 0)
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
            FUN_01057b34(param_1,(int)param_1[0x5a]);
            iVar6 = FUN_01045fa8(lVar13,param_1);
            if (iVar6 == 0) {
              FUN_01046364(param_1,0,1);
              lVar11 = param_1[0x49];
              if (lVar11 == 0) {
                lVar11 = *(long *)(param_1[0x45] + 0x188);
                param_1[0x49] = lVar11;
              }
              (**(code **)(lVar11 + 8))(param_1,0x1d,param_1[0x4e],0,0);
              lws_set_timeout(param_1,2,0x14);
              lVar11 = FUN_01047fa0(param_1,0x5a);
              if ((lVar11 == 0) ||
                 (iVar6 = FUN_0104431c(param_1[0x45],(int)param_1[0x5a],0,lVar11), -1 < iVar6))
              goto LAB_0104db90;
              pcVar14 = "unable to bind socket";
              goto LAB_0104de94;
            }
            close((int)param_1[0x5a]);
            pcVar14 = "insert wsi failed";
          }
          else {
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
LAB_0104dd98:
  FUN_01047a8c(param_1);
  if (*(byte *)((long)param_1 + 0x2fe) - 0x20 < 3) {
    lVar11 = param_1[0x4e];
    pcVar15 = *(code **)(*(long *)(param_1[0x45] + 0x188) + 8);
    sVar10 = strlen(pcVar14);
    (*pcVar15)(param_1,1,lVar11,pcVar14,sVar10);
    *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) | 0x10000;
  }
  if (*(int *)((long)param_1 + 0x2d4) == -1) {
    FUN_01041698(param_1);
    FUN_01047ae8(param_1,0);
    thunk_FUN_0104b1cc(param_1,0,"lws_free");
    return (long *)0x0;
  }
LAB_0104ddf8:
  FUN_010417b8(param_1,0);
  return (long *)0x0;
}

