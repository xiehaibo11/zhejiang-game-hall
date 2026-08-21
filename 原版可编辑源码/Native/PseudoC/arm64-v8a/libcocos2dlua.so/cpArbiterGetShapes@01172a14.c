
void cpArbiterGetShapes(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_1 + 0x88) == '\0') {
    *param_2 = *(undefined8 *)(param_1 + 0x18);
    puVar1 = (undefined8 *)(param_1 + 0x20);
  }
  else {
    *param_2 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = (undefined8 *)(param_1 + 0x18);
  }
  *param_3 = *puVar1;
  return;
}

