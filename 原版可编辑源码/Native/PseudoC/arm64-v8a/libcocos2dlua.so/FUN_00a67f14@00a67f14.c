
void FUN_00a67f14(long *param_1)

{
  int __fd;
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  socklen_t local_cc;
  sockaddr asStack_c8 [8];
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  __fd = *(int *)((long)param_1 + 0x264);
  lVar5 = *param_1;
  local_cc = 0x80;
  iVar2 = getsockname(__fd,asStack_c8,&local_cc);
  if (iVar2 == 0) {
    local_cc = 0x80;
    iVar2 = accept(__fd,asStack_c8,&local_cc);
    FUN_00a25eac(param_1,__fd);
    if (iVar2 != -1) {
      FUN_00a38740(lVar5,"Connection accepted from server\n");
      *(undefined1 *)((long)param_1 + 0x3c4) = 0;
      *(int *)((long)param_1 + 0x264) = iVar2;
      FUN_00a2c678(iVar2,1);
      *(undefined1 *)((long)param_1 + 0x271) = 1;
      if (*(code **)(lVar5 + 0x2f8) == (code *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)(lVar5 + 0x2f8))(*(undefined8 *)(lVar5 + 0x300),iVar2,1);
        if ((int)uVar3 != 0) {
          if (*(int *)((long)param_1 + 0x264) != -1) {
            FUN_00a25eac(param_1);
            *(undefined4 *)((long)param_1 + 0x264) = 0xffffffff;
          }
          uVar3 = 0x2a;
          *(undefined1 *)((long)param_1 + 0x3c6) = 0;
          *(undefined4 *)((long)param_1 + 0x714) = 0;
        }
      }
      goto LAB_00a67f84;
    }
  }
  else {
    FUN_00a25eac(param_1,__fd);
  }
  FUN_00a38a08(lVar5,"Error accept()ing server connect");
  uVar3 = 0x1e;
LAB_00a67f84:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

