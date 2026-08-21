
/* cocos2d::Console::listenOnTCP(int) */

void cocos2d::Console::listenOnTCP(int param_1)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  addrinfo *__ai;
  int iVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  addrinfo *local_e8;
  addrinfo local_e0;
  undefined4 local_ac;
  undefined8 local_a8;
  code *local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined6 uStack_88;
  undefined2 local_82;
  undefined6 uStack_80;
  undefined8 uStack_7a;
  char acStack_68 [32];
  long local_48;
  
  uVar6 = (ulong)(uint)param_1;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_ac = 1;
  FUN_00f90ad4(acStack_68);
  local_e0.ai_addr = (sockaddr *)0x0;
  local_e0.ai_addrlen = 0;
  local_e0._20_4_ = 0;
  local_e0.ai_next = (addrinfo *)0x0;
  local_e0.ai_canonname = (char *)0x0;
  local_e0.ai_flags = 1;
  local_e0.ai_family = 0;
  local_e0.ai_socktype = 1;
  local_e0.ai_protocol = 0;
  iVar4 = getaddrinfo((char *)0x0,acStack_68,&local_e0,&local_e8);
  __ai = local_e8;
  if (iVar4 == 0) {
    do {
      iVar4 = socket(local_e8->ai_family,local_e8->ai_socktype,local_e8->ai_protocol);
      if (-1 < iVar4) {
        setsockopt(iVar4,1,2,&local_ac,4);
        bVar1 = *(byte *)(uVar6 + 0x150);
        if ((bVar1 & 1) == 0) {
          if (bVar1 >> 1 != 0) {
LAB_00f9091c:
            pcVar7 = (char *)(uVar6 + 0x151);
            if (local_e8->ai_family == 10) {
              if ((bVar1 & 1) != 0) {
                pcVar7 = *(char **)(uVar6 + 0x160);
              }
              pcVar9 = local_e8->ai_canonname + 8;
              iVar5 = 10;
            }
            else {
              if (local_e8->ai_family != 2) goto LAB_00f908a8;
              if ((bVar1 & 1) != 0) {
                pcVar7 = *(char **)(uVar6 + 0x160);
              }
              pcVar9 = local_e8->ai_canonname + 4;
              iVar5 = 2;
            }
            inet_pton(iVar5,pcVar7,pcVar9);
          }
        }
        else if (*(long *)(uVar6 + 0x158) != 0) goto LAB_00f9091c;
LAB_00f908a8:
        iVar5 = bind(iVar4,(sockaddr *)local_e8->ai_canonname,local_e8->ai_addrlen);
        if (iVar5 == 0) {
          if (local_e8 != (addrinfo *)0x0) {
            listen(iVar4,0x32);
            if (local_e8->ai_family == 10) {
              *(undefined1 *)(uVar6 + 0xd2) = 1;
              uStack_7a = 0;
              uStack_80 = 0;
              uStack_98 = 0;
              local_a0 = (code *)0x0;
              uStack_88 = 0;
              local_82 = 0;
              local_90 = 0;
              pcVar9 = local_e8->ai_canonname;
              pcVar7 = inet_ntop(local_e8->ai_family,pcVar9 + 8,(char *)&local_a0,0x2e);
              if (pcVar7 != (char *)0x0) {
                uVar2 = *(ushort *)(pcVar9 + 2);
                pcVar7 = "Console: IPV6 server is listening on [%s]:%d";
                goto LAB_00f90a40;
              }
LAB_00f90abc:
              perror("inet_ntop");
            }
            else if (local_e8->ai_family == 2) {
              *(undefined1 *)(uVar6 + 0xd2) = 0;
              local_a0 = (code *)0x0;
              uStack_98 = 0;
              pcVar9 = local_e8->ai_canonname;
              pcVar7 = inet_ntop(local_e8->ai_family,pcVar9 + 4,(char *)&local_a0,0x10);
              if (pcVar7 == (char *)0x0) goto LAB_00f90abc;
              uVar2 = *(ushort *)(pcVar9 + 2);
              pcVar7 = "Console: IPV4 server is listening on %s:%d";
LAB_00f90a40:
              cocos2d::log(pcVar7,&local_a0,uVar2 >> 8 | uVar2 << 8);
            }
            freeaddrinfo(__ai);
            if (*(char *)(uVar6 + 0xd0) != '\0') {
              cocos2d::log("Console already started. \'stop\' it before calling \'listen\' again");
              goto LAB_00f909d8;
            }
            *(int *)(uVar6 + 0x24) = iVar4;
            uStack_98 = 0;
            local_a0 = loop;
            local_90 = uVar6;
            FUN_00f9113c(&local_a8,&local_a0);
            if (*(long *)(uVar6 + 0x48) != 0) {
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            *(undefined8 *)(uVar6 + 0x48) = local_a8;
            local_a8 = 0;
            std::__ndk1::thread::~thread((thread *)&local_a8);
            uVar8 = 1;
            goto LAB_00f909dc;
          }
          break;
        }
        close(iVar4);
      }
      local_e8 = local_e8->ai_next;
    } while (local_e8 != (addrinfo *)0x0);
    perror("net_listen:");
    freeaddrinfo(__ai);
  }
  else {
    pcVar7 = gai_strerror(iVar4);
    fprintf((FILE *)pthread_rwlock_tryrdlock,"net_listen error for %s: %s",acStack_68,pcVar7);
  }
LAB_00f909d8:
  uVar8 = 0;
LAB_00f909dc:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

