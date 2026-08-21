
void FUN_00c32acc(long param_1,ulong param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  ulong *puVar6;
  undefined1 local_9;
  undefined8 local_8;
  
  local_8 = 0xfffe00000141251a;
  puVar2 = (ulong *)FUN_00c1bc70(param_2,*(ulong *)(*(long *)(param_2 + 0x10) + 0xd0) &
                                         0x7fffffffffff,&local_8);
  if ((int)((long)*puVar2 >> 0x2f) == -9) {
    puVar6 = *(ulong **)(param_1 + 0x28);
    *(ulong **)(param_1 + 0x28) = puVar6 + 1;
    *puVar6 = *puVar2 & 0x7fffffffffff | 0xfffb800000000000;
    puVar2 = *(ulong **)(param_1 + 0x28);
    *(ulong **)(param_1 + 0x28) = puVar2 + 1;
    *puVar2 = param_2 | 0xfffc800000000000;
    puVar5 = *(undefined4 **)(param_1 + 0x28);
    *(undefined4 **)(param_1 + 0x28) = puVar5 + 2;
    *puVar5 = param_3;
    puVar5[1] = 0xfff90000;
    puVar2 = *(ulong **)(param_1 + 0x28);
    *(ulong **)(param_1 + 0x28) = puVar2 + 1;
    local_9 = param_4;
    uVar3 = FUN_00bfba1c(param_1,&local_9,1);
    *puVar2 = uVar3 | 0xfffd800000000000;
    iVar1 = lua_pcall(param_1,3,0,0);
    if (iVar1 != 0) {
      pcVar4 = *(code **)(*(long *)(param_1 + 0x10) + 0x148);
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(param_1);
      }
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  return;
}

