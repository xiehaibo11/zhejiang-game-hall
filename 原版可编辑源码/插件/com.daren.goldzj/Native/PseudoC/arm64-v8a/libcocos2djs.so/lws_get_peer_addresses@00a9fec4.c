
void lws_get_peer_addresses
               (long param_1,int param_2,char *param_3,socklen_t param_4,char *param_5,
               socklen_t param_6)

{
  long lVar1;
  addrinfo *paVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  int *piVar6;
  long lVar7;
  sockaddr *__addr;
  sockaddr sStack_d0;
  socklen_t local_b4;
  addrinfo *local_b0;
  addrinfo local_a8;
  sockaddr sStack_78;
  undefined2 local_68 [2];
  undefined4 local_64;
  long local_58;
  
  __addr = &sStack_d0;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_5 = '\0';
  *param_3 = '\0';
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x228) + 0x150) + 0xc78) >> 5 & 1) == 0) &&
     ((*(byte *)(*(long *)(param_1 + 0x228) + 0x1d8) >> 5 & 1) == 0)) {
    local_b4 = 0x1c;
  }
  else {
    local_b4 = 0x10;
    __addr = &sStack_78;
  }
  iVar3 = getpeername(param_2,__addr,&local_b4);
  if (iVar3 < 0) {
    piVar6 = (int *)__errno();
    pcVar4 = strerror(*piVar6);
    _lws_log(2,"getpeername: %s\n",pcVar4);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x228);
    *param_5 = '\0';
    *param_3 = '\0';
    local_68[0] = 0;
    if (((*(byte *)(*(long *)(lVar7 + 0x150) + 0xc78) >> 5 & 1) == 0) &&
       ((*(byte *)(lVar7 + 0x1d8) >> 5 & 1) == 0)) {
      pcVar4 = lws_plat_inet_ntop(10,__addr->sa_data + 6,param_5,param_6);
      if (pcVar4 == (char *)0x0) {
        piVar6 = (int *)__errno();
        pcVar4 = strerror(*piVar6);
        _lws_log(1,"inet_ntop: %s",pcVar4);
        if (*(long *)(lVar1 + 0x28) == local_58) {
          return;
        }
      }
      else {
        iVar3 = strncmp(param_5,"::ffff:",7);
        if (iVar3 == 0) {
          sVar5 = strlen(param_5);
          memmove(param_5,param_5 + 7,sVar5 - 6);
        }
        getnameinfo(__addr,0x1c,param_3,param_4,(char *)0x0,0,0);
        if (*(long *)(lVar1 + 0x28) == local_58) {
          return;
        }
      }
      goto LAB_00aa0100;
    }
    local_a8.ai_next = (addrinfo *)0x0;
    local_a8.ai_canonname = (char *)0x0;
    local_a8.ai_addr = (sockaddr *)0x0;
    local_a8.ai_addrlen = 0;
    local_a8._20_4_ = 0;
    local_a8.ai_socktype = 1;
    local_a8.ai_protocol = 0;
    local_a8.ai_flags = 2;
    local_a8.ai_family = 0;
    iVar3 = getnameinfo(__addr,0x10,param_3,param_4,(char *)0x0,0,0);
    if ((iVar3 == 0) &&
       (iVar3 = getaddrinfo(param_3,(char *)0x0,&local_a8,&local_b0), paVar2 = local_b0, iVar3 == 0)
       ) {
                    /* catch() { ... } // from try @ 00aa0160 with catch @ 00aa0050
                       catch() { ... } // from try @ 00aa0304 with catch @ 00aa0050
                       catch() { ... } // from try @ 00aa03f8 with catch @ 00aa0050 */
      for (; paVar2 != (addrinfo *)0x0; paVar2 = paVar2->ai_next) {
        if (paVar2->ai_family == 2) {
          local_64 = *(undefined4 *)(paVar2->ai_canonname + 4);
          local_68[0] = 2;
          freeaddrinfo(local_b0);
          lws_plat_inet_ntop(2,(void *)((ulong)local_68 | 4),param_5,param_6);
          if (*(long *)(lVar1 + 0x28) == local_58) {
            return;
          }
          goto LAB_00aa0100;
        }
      }
      freeaddrinfo(local_b0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
        return;
      }
      goto LAB_00aa0100;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_00aa0100:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

