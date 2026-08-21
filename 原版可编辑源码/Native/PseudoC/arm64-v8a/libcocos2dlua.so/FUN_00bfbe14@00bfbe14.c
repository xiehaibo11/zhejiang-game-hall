
void FUN_00bfbe14(long param_1,long param_2)

{
  long lVar1;
  
  if (*(char *)(param_2 + 10) == '\0') {
    lVar1 = *(long *)(param_2 + 0x18);
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(*(long *)(param_2 + 0x10) + 0x18) = lVar1;
  }
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x30;
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_2,0x30,0);
  return;
}

