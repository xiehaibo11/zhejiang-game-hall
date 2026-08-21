
uint EC_KEY_can_sign(long param_1)

{
  uint *puVar1;
  
  if ((*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) &&
     (puVar1 = (uint *)**(undefined8 **)(param_1 + 0x18), puVar1 != (uint *)0x0)) {
    return (*puVar1 >> 2 ^ 0xffffffff) & 1;
  }
  return 0;
}

