
long cpSpaceAddDefaultCollisionHandler(long param_1)

{
  if (*(char *)(param_1 + 0xa4) != '\0') {
    return param_1 + 0xb0;
  }
  *(undefined1 *)(param_1 + 0xa4) = 1;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(code **)(param_1 + 200) = FUN_01162d44;
  *(code **)(param_1 + 0xc0) = FUN_01162cf4;
  *(code **)(param_1 + 0xd8) = FUN_01162dc0;
  *(code **)(param_1 + 0xd0) = FUN_01162d94;
  *(undefined8 *)(param_1 + 0xb8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xb0) = 0xffffffffffffffff;
  return param_1 + 0xb0;
}

