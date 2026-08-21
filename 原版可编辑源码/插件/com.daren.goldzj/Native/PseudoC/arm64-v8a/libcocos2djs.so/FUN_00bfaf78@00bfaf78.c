
void FUN_00bfaf78(long param_1)

{
  **(undefined8 **)(param_1 + -0x40) = *(undefined8 *)(param_1 + -0x48);
  *(undefined8 *)(*(long *)(param_1 + -0x48) + 8) = *(undefined8 *)(param_1 + -0x40);
  if (*(code **)(param_1 + -8) != (code *)0x0) {
    (**(code **)(param_1 + -8))(param_1 + -0x58);
  }
  return;
}

