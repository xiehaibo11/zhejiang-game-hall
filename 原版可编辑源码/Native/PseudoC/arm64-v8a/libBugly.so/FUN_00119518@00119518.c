
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00119518(long param_1,void *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  memset(param_2,0,0xcb0);
  puVar4 = (undefined4 *)((long)param_2 + 0x668);
  do {
    *puVar4 = 1;
    puVar1 = puVar4 + 4;
    *(undefined8 *)(puVar4 + 2) = 0;
    puVar4 = puVar1;
  } while (puVar1 != (undefined4 *)((long)param_2 + 0xc98));
  iVar2 = *(int *)(param_1 + 0x6a0);
  if (iVar2 == 0) {
    log2Console(3,"Bugly-libunwind","Not yet implemented\n");
    uVar5 = 0xfffffff6;
  }
  else if ((iVar2 < 0) || (2 < iVar2)) {
    log2Console(3,"Bugly-libunwind","Unexpected unwind-info format %d\n");
    uVar5 = 0xfffffff8;
  }
  else {
    puVar7 = *(undefined8 **)(param_1 + 0x6a8);
    local_10 = *puVar7;
    uVar6 = puVar7[1];
    *(undefined8 *)(param_1 + 0x28) = puVar7[6];
    uVar5 = FUN_00117f0c(param_1,param_2,0xffffffffffffffff,&local_10,uVar6,puVar7);
    if (-1 < (int)uVar5) {
      memcpy((void *)((long)param_2 + 0x10),(void *)((long)param_2 + 0x660),0x650);
      local_10 = puVar7[2];
      uVar3 = FUN_00117f0c(param_1,param_2,param_3,&local_10,puVar7[3],puVar7);
      if (0 < (int)uVar3) {
        uVar3 = 0;
      }
      uVar5 = (ulong)uVar3;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

