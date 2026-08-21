
void FUN_00bfbb90(long param_1,int param_2)

{
  **(undefined8 **)(param_1 + -0x138) = *(undefined8 *)(param_1 + -0x140);
  *(undefined8 *)(*(long *)(param_1 + -0x140) + 8) = *(undefined8 *)(param_1 + -0x138);
  if (param_2 == -0x7d) {
    *(undefined8 *)(param_1 + -0xf8) = 0xffffffffffffff83;
  }
  (**(code **)(param_1 + -0x100))(param_1 + -0x150);
  return;
}

