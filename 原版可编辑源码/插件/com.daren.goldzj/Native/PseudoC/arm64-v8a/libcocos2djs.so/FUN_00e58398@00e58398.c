
undefined8 FUN_00e58398(long param_1,undefined8 param_2)

{
  ushort *puVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(param_1 + 0x340))(param_1,0x4f532f32,param_2,0);
  if ((int)uVar2 == 0) {
    puVar1 = (ushort *)(param_1 + 0x268);
    uVar2 = FUN_00e1dd74(param_2,&DAT_01977f54,puVar1);
    if ((int)uVar2 == 0) {
      *(undefined8 *)(param_1 + 0x2d8) = 0;
      *(undefined8 *)(param_1 + 0x2d0) = 0;
      *(undefined4 *)(param_1 + 0x2e8) = 0;
      *(undefined8 *)(param_1 + 0x2e0) = 0;
      *(undefined2 *)(param_1 + 0x2ec) = 0xffff;
      if (*(short *)(param_1 + 0x268) != 0) {
        uVar2 = FUN_00e1dd74(param_2,&DAT_01978004,puVar1);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        if (1 < *puVar1) {
          uVar2 = FUN_00e1dd74(param_2,&DAT_01978014,puVar1);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (4 < *puVar1) {
            uVar2 = FUN_00e1dd74(param_2,&DAT_01978030,puVar1);
            return uVar2;
          }
        }
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

