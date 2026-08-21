
void FUN_00e764e8(undefined8 *param_1,long param_2,long param_3,long param_4,char param_5)

{
  long lVar1;
  
  *(undefined2 *)(param_1 + 0x10) = 0x100;
  param_1[1] = param_2;
  param_1[2] = param_4;
  *param_1 = *(undefined8 *)(param_2 + 0xb8);
  if (param_4 != 0) {
    lVar1 = **(long **)(param_4 + 0x128);
    param_1[3] = lVar1;
    param_1[4] = lVar1 + 0x18;
    param_1[5] = lVar1 + 0x60;
    FUN_00e13908();
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    if (((param_3 != 0) && (param_5 != '\0')) &&
       ((undefined8 *)**(long **)(param_3 + 0x50) != (undefined8 *)0x0)) {
      param_1[0x12] = *(undefined8 *)**(long **)(param_3 + 0x50);
      param_1[0x11] = *(undefined8 *)(*(long *)(param_4 + 0x128) + 0x40);
    }
  }
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[0x1a] = FUN_00e768e0;
  param_1[0x19] = FUN_00e767a0;
  param_1[0x18] = FUN_00e76710;
  param_1[0x17] = FUN_00e7665c;
  param_1[0x16] = FUN_00e76600;
  param_1[0x15] = FUN_00e765cc;
  param_1[0x14] = FUN_00e765a8;
  param_1[0x13] = FUN_00e764e8;
  return;
}

