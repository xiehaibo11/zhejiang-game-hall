
void FUN_00c0dd40(long *param_1)

{
  size_t sVar1;
  ulong uVar2;
  char *__s;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined1 local_2e4;
  undefined1 local_2e3;
  ulong local_2e0;
  long *local_2d8;
  long local_2d0;
  undefined8 *local_2c8;
  long local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  byte local_288;
  undefined1 local_287;
  undefined1 local_286;
  undefined1 local_285;
  
  __s = (char *)param_1[0x10];
  lVar4 = param_1[1];
  sVar1 = strlen(__s);
  uVar2 = FUN_00bfba1c(lVar4,__s,sVar1);
  puVar3 = *(ulong **)(lVar4 + 0x28);
  param_1[0xf] = uVar2;
  *puVar3 = uVar2 | 0xfffd800000000000;
  uVar2 = *(long *)(lVar4 + 0x28) + 8;
  *(ulong *)(lVar4 + 0x28) = uVar2;
  if (*(ulong *)(lVar4 + 0x30) <= uVar2) {
    FUN_00bfe164(lVar4);
  }
  lVar5 = param_1[1];
  local_28c = *(undefined4 *)((long)param_1 + 0x9c);
  local_2c0 = *param_1;
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  local_2b0 = 0xffffffff;
  *param_1 = (long)&local_2e0;
  local_2b8 = 0;
  local_2b4 = 0;
  local_2ac = 0;
  local_2a0 = 0;
  local_2a4 = 0;
  local_2a8 = 0;
  local_285 = 0;
  local_2c8 = (undefined8 *)0x0;
  local_288 = 0;
  local_286 = 1;
  local_2d8 = param_1;
  local_2d0 = lVar5;
  local_2e0 = FUN_00c1b840(lVar5,0,0);
  **(ulong **)(lVar5 + 0x28) = local_2e0 | 0xfffa000000000000;
  uVar2 = *(long *)(lVar5 + 0x28) + 8;
  *(ulong *)(lVar5 + 0x28) = uVar2;
  if (*(ulong *)(lVar5 + 0x30) <= uVar2) {
    FUN_00bfe164(lVar5);
  }
  local_288 = local_288 | 2;
  local_2e8 = *(undefined4 *)((long)local_2d8 + 0x9c);
  local_2e4 = (undefined1)local_2a8;
  local_2f0 = local_2c8;
  local_29c = 0;
  local_287 = 0;
  local_298 = 0;
  local_290 = 0;
  local_2e3 = 0;
  local_2c8 = &local_2f0;
  FUN_00c07f70(&local_2e0,0x5c);
  FUN_00c079c0(param_1);
  FUN_00c0c9c0(param_1);
  if (*(int *)((long)param_1 + 0x34) == 0x121) {
    FUN_00c0996c(param_1,(int)param_1[0xe]);
    *(long *)(lVar4 + 0x28) = *(long *)(lVar4 + 0x28) + -8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00c07c88(param_1,0x121);
}

