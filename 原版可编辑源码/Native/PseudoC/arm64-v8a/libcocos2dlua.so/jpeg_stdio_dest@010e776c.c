
void jpeg_stdio_dest(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
                    /* catch() { ... } // from try @ 010e7800 with catch @ 010e7794 */
    lVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x38);
    *(long *)(param_1 + 0x28) = lVar1;
  }
  *(code **)(lVar1 + 0x10) = FUN_010e77d0;
  *(code **)(lVar1 + 0x18) = FUN_010e780c;
  *(code **)(lVar1 + 0x20) = FUN_010e786c;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  return;
}

