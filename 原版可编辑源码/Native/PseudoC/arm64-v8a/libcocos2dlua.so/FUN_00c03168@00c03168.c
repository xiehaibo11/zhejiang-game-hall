
void FUN_00c03168(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
  if (*(char *)(uVar1 + 9) == '\b') {
    uVar3 = *(undefined8 *)(uVar1 + 0x10);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
  }
  uVar1 = FUN_00bfbe68(param_1,0,uVar3);
  puVar2 = *(ulong **)(param_1 + 0x28);
  *(undefined8 *)(uVar1 + 0x28) = param_2;
  *puVar2 = uVar1 | 0xfffb800000000000;
  puVar2[1] = 0xffffffffffffffff;
  if (param_3 >> 0x2f == 0) {
    puVar2[2] = param_3 | 0xfffe000000000000;
    *(undefined4 *)(*(long *)(param_1 + 0x50) + 200) = 1;
    *(ulong **)(param_1 + 0x28) = puVar2 + 3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfaf54(param_1,0x366);
}

