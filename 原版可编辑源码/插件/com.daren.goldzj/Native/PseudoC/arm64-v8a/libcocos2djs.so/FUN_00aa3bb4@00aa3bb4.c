
void FUN_00aa3bb4(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x250) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x250) = *(undefined8 *)(param_1 + 600);
  }
  if (*(long *)(param_1 + 600) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 600) + 0x250) = *(undefined8 *)(param_1 + 0x250);
  }
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  return;
}

