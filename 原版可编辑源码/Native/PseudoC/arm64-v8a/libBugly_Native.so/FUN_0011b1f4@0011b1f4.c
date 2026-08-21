
void FUN_0011b1f4(long param_1,void *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  memset(param_2,0,0xcb0);
  lVar5 = 0;
  do {
    lVar1 = lVar5 + 0x10;
    *(undefined4 *)((long)param_2 + lVar5 + 0x668) = 1;
    *(undefined8 *)((long)param_2 + lVar5 + 0x670) = 0;
    lVar5 = lVar1;
  } while (lVar1 != 0x630);
  if (*(int *)(param_1 + 0x6a0) - 1U < 2) {
    puVar6 = *(undefined8 **)(param_1 + 0x6a8);
    *(undefined8 *)(param_1 + 0x28) = puVar6[6];
    local_50 = *puVar6;
    uVar4 = FUN_0011b7fc(param_1,param_2,0xffffffffffffffff,&local_50,puVar6[1],puVar6);
    if (-1 < (int)uVar4) {
      memcpy((void *)((long)param_2 + 0x10),(void *)((long)param_2 + 0x660),0x650);
      local_50 = puVar6[2];
      uVar3 = FUN_0011b7fc(param_1,param_2,param_3,&local_50,puVar6[3],puVar6);
      uVar4 = (ulong)(uVar3 & (int)uVar3 >> 0x1f);
    }
  }
  else if (*(int *)(param_1 + 0x6a0) == 0) {
    log2Console(3,"Bugly-libunwind","Not yet implemented\n");
    uVar4 = 0xfffffff6;
  }
  else {
    log2Console(3,"Bugly-libunwind","Unexpected unwind-info format %d\n");
    uVar4 = 0xfffffff8;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

