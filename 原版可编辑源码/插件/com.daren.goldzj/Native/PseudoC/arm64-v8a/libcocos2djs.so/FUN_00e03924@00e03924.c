
void FUN_00e03924(long param_1)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | (uint)(iVar1 == 0);
  }
  return;
}

