
void FUN_0013adf4(long *param_1,void *param_2,void *param_3)

{
  size_t __n;
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long local_68;
  undefined1 auStack_5c [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
joined_r0x0013ae20:
  do {
    if (param_3 <= param_2) {
      uVar3 = 1;
LAB_0013af48:
      if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar3);
      }
      return;
    }
    lVar6 = param_1[10];
    uVar5 = lVar6 - param_1[0x15];
    if (uVar5 != 0) {
      __n = (long)param_3 - (long)param_2;
      if (uVar5 <= (ulong)((long)param_3 - (long)param_2)) {
        __n = uVar5;
      }
      memcpy(param_2,(void *)(param_1[8] + param_1[0x15]),__n);
      lVar6 = param_1[0x15];
      param_2 = (void *)((long)param_2 + __n);
      param_1[0x15] = lVar6 + __n;
      if ((param_1[10] == param_1[9]) && (param_1[10] == lVar6 + __n)) {
        param_1[10] = 0;
        param_1[0x15] = 0;
      }
      goto joined_r0x0013ae20;
    }
    lVar4 = param_1[0x16];
    if ((lVar4 == 0x4000) && (uVar5 = param_1[2] - param_1[1], uVar5 != 0)) {
      if (0x3fff < uVar5) {
        uVar5 = 0x4000;
      }
      param_1[0x16] = 0x4000 - uVar5;
      iVar2 = (**(code **)(*param_1 + 0x10))();
      if (iVar2 != 0) {
        lVar4 = param_1[0x16];
        lVar6 = param_1[10];
        param_1[1] = param_1[1] + uVar5;
        goto LAB_0013aeec;
      }
LAB_0013af44:
      uVar3 = 0;
      goto LAB_0013af48;
    }
LAB_0013aeec:
    local_68 = 0x4000 - lVar4;
    iVar2 = FUN_0012c81c(param_1 + 3,param_1[9],(long)param_1 + lVar4 + 0xb8,&local_68,0,auStack_5c)
    ;
    if ((iVar2 != 0) || ((local_68 == 0 && (param_1[10] == lVar6)))) goto LAB_0013af44;
    param_1[0x16] = param_1[0x16] + local_68;
  } while( true );
}

