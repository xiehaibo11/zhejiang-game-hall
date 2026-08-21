
undefined8 FUN_0109e328(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x330))(param_1,0x6d617870,param_2,0);
  if ((int)uVar1 == 0) {
    uVar1 = FT_Stream_ReadFields(param_2,&DAT_01460324,param_1 + 0x1c8);
    if ((int)uVar1 == 0) {
      *(undefined2 *)(param_1 + 0x1ea) = 0;
      *(undefined8 *)(param_1 + 0x1e2) = 0;
      *(undefined8 *)(param_1 + 0x1da) = 0;
      *(undefined8 *)(param_1 + 0x1d2) = 0;
      if ((0xffff < *(long *)(param_1 + 0x1c8)) &&
         (uVar1 = FT_Stream_ReadFields(param_2,&DAT_01460334,param_1 + 0x1c8), (int)uVar1 == 0)) {
        if (*(ushort *)(param_1 + 0x1e0) < 0x40) {
          *(undefined2 *)(param_1 + 0x1e0) = 0x40;
        }
        if (0xfffb < *(ushort *)(param_1 + 0x1dc)) {
          *(undefined2 *)(param_1 + 0x1dc) = 0xfffb;
        }
        if (*(ushort *)(param_1 + 0x1ea) < 0x65) {
          uVar1 = 0;
        }
        else {
          uVar1 = 0;
          *(undefined2 *)(param_1 + 0x1ea) = 100;
        }
      }
    }
  }
  return uVar1;
}

