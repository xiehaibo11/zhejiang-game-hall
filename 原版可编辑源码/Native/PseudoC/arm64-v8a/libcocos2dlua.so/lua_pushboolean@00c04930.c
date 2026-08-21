
void lua_pushboolean(long param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffeffffffffffff;
  if (param_2 == 0) {
    uVar2 = 0xffff7fffffffffff;
  }
  **(undefined8 **)(param_1 + 0x28) = uVar2;
  uVar1 = *(long *)(param_1 + 0x28) + 8;
  *(ulong *)(param_1 + 0x28) = uVar1;
  if (uVar1 < *(ulong *)(param_1 + 0x30)) {
    return;
  }
  FUN_00bfe164();
  return;
}

