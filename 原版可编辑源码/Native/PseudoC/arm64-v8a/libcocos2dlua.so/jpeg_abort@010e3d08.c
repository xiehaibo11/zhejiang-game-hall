
void jpeg_abort(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x48))(param_1,1);
    if (*(int *)(param_1 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x24) = 100;
    }
    else {
      *(undefined4 *)(param_1 + 0x24) = 200;
      *(undefined8 *)(param_1 + 0x198) = 0;
    }
  }
  return;
}

