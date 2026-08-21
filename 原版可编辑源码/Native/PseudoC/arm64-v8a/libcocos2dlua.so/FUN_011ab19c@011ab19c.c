
ulong FUN_011ab19c(long param_1,iovec *param_2,uint param_3,short *param_4,uint param_5)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  socklen_t __len;
  msghdr local_78;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    if (*(int *)(param_1 + 0xb0) == -1) {
      if (*param_4 == 10) {
        uVar4 = 10;
        __len = 0x1c;
        local_78.msg_iovlen = local_78.msg_iovlen & 0xffffffff00000000;
        local_78.msg_iov = (iovec *)0x0;
        local_78.msg_name = &DAT_0000000a;
      }
      else {
        if (*param_4 != 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar4 = 2;
        local_78.msg_name = (undefined1 *)0x2;
        __len = 0x10;
      }
      local_78.msg_namelen = 0;
      local_78._12_4_ = 0;
      uVar2 = FUN_011a2b64(uVar4,2,0);
      iVar1 = (int)uVar2;
      if (iVar1 < 0) {
        return uVar2;
      }
      *(int *)(param_1 + 0xb0) = iVar1;
      iVar1 = bind(iVar1,(sockaddr *)&local_78,__len);
      if (iVar1 == 0) {
        uVar5 = *(uint *)(param_1 + 0x58);
        if ((short)local_78.msg_name == 10) {
          uVar5 = uVar5 | 0x400000;
          *(uint *)(param_1 + 0x58) = uVar5;
        }
        *(uint *)(param_1 + 0x58) = uVar5 | 0x2000;
        goto LAB_011ab1f8;
      }
      piVar3 = (int *)__errno();
      iVar1 = *piVar3;
      if (iVar1 == 0x61) {
        return 0xffffffea;
      }
      if (iVar1 == 0) goto LAB_011ab1f8;
    }
    else {
LAB_011ab1f8:
      local_78.msg_iovlen = (size_t)param_3;
      local_78.msg_control = (void *)0x0;
      local_78.msg_controllen = 0;
      local_78.msg_flags = 0;
      local_78._52_4_ = 0;
      local_78._12_4_ = 0;
      local_78.msg_namelen = param_5;
      local_78.msg_name = param_4;
      local_78.msg_iov = param_2;
      do {
        uVar2 = sendmsg(*(int *)(param_1 + 0xb0),&local_78,0);
        if (uVar2 != 0xffffffffffffffff) {
          return uVar2;
        }
        piVar3 = (int *)__errno();
        iVar1 = *piVar3;
      } while (iVar1 == 4);
      if ((iVar1 == 0xb) || (iVar1 == 0x69)) goto LAB_011ab1d0;
    }
    uVar2 = (ulong)(uint)-iVar1;
  }
  else {
LAB_011ab1d0:
    uVar2 = 0xfffffff5;
  }
  return uVar2;
}

