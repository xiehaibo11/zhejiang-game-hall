
void FUN_011ab08c(long param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  msghdr local_88;
  
  plVar5 = (long *)(param_1 + 0xb8);
  plVar6 = (long *)*plVar5;
  if (plVar5 != plVar6) {
    do {
      local_88.msg_name = plVar6 + 2;
      local_88.msg_control = (void *)0x0;
      local_88.msg_flags = 0;
      local_88._52_4_ = 0;
      local_88.msg_controllen = 0;
      local_88.msg_namelen = 0x1c;
      if ((short)plVar6[2] != 10) {
        local_88.msg_namelen = 0x10;
      }
      local_88._12_4_ = 0;
      local_88.msg_iov = (iovec *)plVar6[0x13];
      local_88.msg_iovlen = (size_t)*(uint *)(plVar6 + 0x12);
      do {
        lVar2 = sendmsg(*(int *)(param_1 + 0xb0),&local_88,0);
        if (lVar2 != -1) goto LAB_011ab140;
        piVar3 = (int *)__errno();
        iVar1 = *piVar3;
      } while (iVar1 == 4);
      if (iVar1 == 0xb) {
        return;
      }
      if (iVar1 == 0x69) {
        return;
      }
      lVar2 = -(long)iVar1;
LAB_011ab140:
      plVar6[0x14] = lVar2;
      *(long *)plVar6[1] = *plVar6;
      *(long *)(*plVar6 + 8) = plVar6[1];
      *plVar6 = param_1 + 200;
      puVar4 = *(undefined8 **)(param_1 + 0xd0);
      plVar6[1] = (long)puVar4;
      *puVar4 = plVar6;
      *(long **)(param_1 + 0xd0) = plVar6;
      FUN_011a390c(*(undefined8 *)(param_1 + 8),param_1 + 0x80);
      plVar6 = *(long **)(param_1 + 0xb8);
    } while (plVar5 != plVar6);
  }
  return;
}

