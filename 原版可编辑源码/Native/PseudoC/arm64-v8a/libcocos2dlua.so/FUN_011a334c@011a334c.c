
long FUN_011a334c(int param_1,msghdr *param_2,uint param_3)

{
  size_t sVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  ulong uVar5;
  size_t sVar6;
  long lVar7;
  cmsghdr *__cmsg;
  cmsghdr *pcVar8;
  
  if ((DAT_01793634 & 1) == 0) {
    sVar3 = recvmsg(param_1,param_2,param_3 | 0x40000000);
    if (sVar3 != -1) {
      return sVar3;
    }
    piVar4 = (int *)__errno();
    lVar7 = (long)*piVar4;
    if (*piVar4 == 0x16) {
      sVar3 = recvmsg(param_1,param_2,param_3);
      if (sVar3 != -1) {
        DAT_01793634 = 1;
        uVar5 = param_2->msg_controllen;
        goto joined_r0x011a3470;
      }
      lVar7 = (long)*piVar4;
    }
  }
  else {
    sVar3 = recvmsg(param_1,param_2,param_3);
    if (sVar3 != -1) {
      uVar5 = param_2->msg_controllen;
joined_r0x011a3470:
      if (uVar5 < 0x10) {
        return sVar3;
      }
      __cmsg = param_2->msg_control;
      do {
        if (__cmsg == (cmsghdr *)0x0) {
          return sVar3;
        }
        if (__cmsg->cmsg_type == 1) {
          sVar6 = __cmsg->cmsg_len;
          for (pcVar8 = __cmsg + 1; pcVar8 < (cmsghdr *)((long)&__cmsg->cmsg_len + sVar6);
              pcVar8 = (cmsghdr *)((long)&pcVar8->cmsg_len + 4)) {
            sVar1 = pcVar8->cmsg_len;
            do {
              iVar2 = ioctl((int)sVar1,0x5451);
              if (iVar2 != -1) break;
              piVar4 = (int *)__errno();
            } while (*piVar4 == 4);
          }
        }
        __cmsg = __cmsg_nxthdr(param_2,__cmsg);
      } while( true );
    }
    piVar4 = (int *)__errno();
    lVar7 = (long)*piVar4;
  }
  return -lVar7;
}

