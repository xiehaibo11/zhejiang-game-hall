
long uv__recvmsg(int param_1,msghdr *param_2,uint param_3)

{
  cmsghdr *pcVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  cmsghdr *pcVar5;
  cmsghdr *__cmsg;
  long lVar7;
  cmsghdr *pcVar6;
  
  if (DAT_01d3bc64 != 0) {
    sVar3 = recvmsg(param_1,param_2,param_3);
    lVar7 = (long)(int)sVar3;
    if (lVar7 == -1) {
      piVar4 = (int *)__errno();
      return (long)-*piVar4;
    }
LAB_00bedf88:
    if ((param_2->msg_controllen < 0x10) ||
       (__cmsg = param_2->msg_control, __cmsg == (cmsghdr *)0x0)) {
      return lVar7;
    }
    iVar2 = __cmsg->cmsg_type;
    do {
      if (iVar2 == 1) {
        pcVar1 = (cmsghdr *)((long)&__cmsg->cmsg_len + __cmsg->cmsg_len);
        pcVar5 = __cmsg + 1;
        if (pcVar1 <= __cmsg + 1) goto LAB_00bedfac;
        do {
          pcVar6 = (cmsghdr *)((long)&pcVar5->cmsg_len + 4);
          uv__cloexec_ioctl((int)pcVar5->cmsg_len,1);
          pcVar5 = pcVar6;
        } while (pcVar6 < pcVar1);
        __cmsg = __cmsg_nxthdr(param_2,__cmsg);
      }
      else {
LAB_00bedfac:
        __cmsg = __cmsg_nxthdr(param_2,__cmsg);
      }
      if (__cmsg == (cmsghdr *)0x0) {
        return lVar7;
      }
      iVar2 = __cmsg->cmsg_type;
    } while( true );
  }
  sVar3 = recvmsg(param_1,param_2,param_3 | 0x40000000);
  if ((long)(int)sVar3 != -1) {
    return (long)(int)sVar3;
  }
  piVar4 = (int *)__errno();
  if (*piVar4 == 0x16) {
    sVar3 = recvmsg(param_1,param_2,param_3);
    lVar7 = (long)(int)sVar3;
    if (lVar7 != -1) {
      DAT_01d3bc64 = 1;
      goto LAB_00bedf88;
    }
  }
  return (long)-*piVar4;
}

