
undefined8 FUN_0109e414(long param_1,undefined8 param_2)

{
  ushort *puVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(param_1 + 0x330))(param_1,0x4f532f32,param_2,0);
  if ((int)uVar2 == 0) {
    puVar1 = (ushort *)(param_1 + 600);
    uVar2 = FT_Stream_ReadFields(param_2,&DAT_01460370,puVar1);
    if ((int)uVar2 == 0) {
      *(undefined4 *)(param_1 + 0x2d8) = 0;
      *(undefined8 *)(param_1 + 0x2d0) = 0;
      *(undefined8 *)(param_1 + 0x2c8) = 0;
      *(undefined8 *)(param_1 + 0x2c0) = 0;
      *(undefined2 *)(param_1 + 0x2dc) = 0xffff;
      if (*(short *)(param_1 + 600) != 0) {
        uVar2 = FT_Stream_ReadFields(param_2,&DAT_01460420,puVar1);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        if (1 < *puVar1) {
          uVar2 = FT_Stream_ReadFields(param_2,&DAT_01460430,puVar1);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (4 < *puVar1) {
            uVar2 = FT_Stream_ReadFields(param_2,&DAT_0146044c,puVar1);
            return uVar2;
          }
        }
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

