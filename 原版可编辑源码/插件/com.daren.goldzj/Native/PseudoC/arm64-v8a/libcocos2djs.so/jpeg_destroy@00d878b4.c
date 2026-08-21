
void jpeg_destroy(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x50))(param_1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

