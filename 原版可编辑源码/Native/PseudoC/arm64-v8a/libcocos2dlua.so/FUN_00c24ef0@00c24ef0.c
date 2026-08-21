
void FUN_00c24ef0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  uVar1 = FUN_00c1b840(param_1,0,0);
  uVar2 = FUN_00c1cb88(param_1,0x10,uVar1);
  *(undefined8 *)(uVar2 + 0x38) = uVar1;
  *(undefined1 *)(uVar2 + 10) = 2;
  puVar3 = *(ulong **)(param_1 + 0x28);
  *(undefined8 *)(uVar2 + 0x20) = param_2;
  *(ulong **)(param_1 + 0x28) = puVar3 + 1;
  *puVar3 = uVar2 | 0xfff9800000000000;
  *(undefined8 *)(uVar2 + 0x30) = 0;
  return;
}

