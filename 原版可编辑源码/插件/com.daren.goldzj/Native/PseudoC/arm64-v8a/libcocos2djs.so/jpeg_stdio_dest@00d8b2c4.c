
void jpeg_stdio_dest(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    lVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x38);
    *(long *)(param_1 + 0x28) = lVar1;
  }
  *(code **)(lVar1 + 0x10) = FUN_00d8b328;
  *(code **)(lVar1 + 0x18) = FUN_00d8b364;
  *(code **)(lVar1 + 0x20) = FUN_00d8b3c4;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  return;
}

