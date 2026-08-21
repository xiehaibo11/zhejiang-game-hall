
undefined8 FUN_00e582b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x340))(param_1,0x6d617870,param_2,0);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_00e1dd74(param_2,&DAT_01977f08,param_1 + 0x1c8);
    if ((int)uVar1 == 0) {
      *(undefined8 *)(param_1 + 0x1da) = 0;
      *(undefined8 *)(param_1 + 0x1d2) = 0;
      *(undefined8 *)(param_1 + 0x1e2) = 0;
      *(undefined2 *)(param_1 + 0x1ea) = 0;
      if ((0xffff < *(long *)(param_1 + 0x1c8)) &&
         (uVar1 = FUN_00e1dd74(param_2,&DAT_01977f18,param_1 + 0x1c8), (int)uVar1 == 0)) {
        if (*(ushort *)(param_1 + 0x1e0) < 0x40) {
          *(undefined2 *)(param_1 + 0x1e0) = 0x40;
        }
        if (0xfffb < *(ushort *)(param_1 + 0x1dc)) {
          *(undefined2 *)(param_1 + 0x1dc) = 0xfffb;
          return 0;
        }
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

