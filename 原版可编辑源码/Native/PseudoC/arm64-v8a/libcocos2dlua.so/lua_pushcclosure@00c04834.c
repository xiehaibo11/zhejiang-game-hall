
void lua_pushcclosure(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  
  if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x20))
  {
    FUN_00c19f80();
  }
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
  if (*(char *)(uVar1 + 9) == '\b') {
    uVar3 = *(undefined8 *)(uVar1 + 0x10);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
  }
  uVar1 = FUN_00bfbe68(param_1,(ulong)param_3,uVar3);
  *(undefined8 *)(uVar1 + 0x28) = param_2;
  uVar2 = -(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)param_3 << 3;
  puVar4 = (ulong *)(*(long *)(param_1 + 0x28) - uVar2);
  *(ulong **)(param_1 + 0x28) = puVar4;
  if (param_3 != 0) {
    do {
      uVar2 = uVar2 - 8;
      *(undefined8 *)(uVar1 + uVar2 + 0x30) = *(undefined8 *)((long)puVar4 + uVar2);
    } while (uVar2 != ((long)(int)(param_3 - 1) - (ulong)(param_3 - 1)) * 8);
  }
  *puVar4 = uVar1 | 0xfffb800000000000;
  uVar1 = *(long *)(param_1 + 0x28) + 8;
  *(ulong *)(param_1 + 0x28) = uVar1;
  if (uVar1 < *(ulong *)(param_1 + 0x30)) {
    return;
  }
  FUN_00bfe164(param_1);
  return;
}

