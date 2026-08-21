
void FUN_00bfc1ec(long param_1,long param_2)

{
  int iVar1;
  
  if (*(char *)(param_2 + 10) == '\0') {
    iVar1 = *(byte *)(param_2 + 0xb) + 5;
  }
  else {
    iVar1 = *(byte *)(param_2 + 0xb) + 6;
  }
  *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - (ulong)(uint)(iVar1 << 3);
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_2,(ulong)(uint)(iVar1 << 3),0)
  ;
  return;
}

