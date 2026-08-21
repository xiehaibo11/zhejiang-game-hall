
undefined8 FUN_00e4bfec(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  ushort uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_00e1bb5c(param_2,*param_1);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_00e1dd74(param_2,&DAT_01977582,param_1 + 1), (int)uVar3 == 0)) {
    uVar2 = *(ushort *)(param_1 + 1);
    if ((uVar2 | 0x100) != 0x300) {
      return 2;
    }
    uVar1 = 0x94;
    if (uVar2 != 0x300) {
      uVar1 = 0x76;
    }
    if ((ulong)param_1[2] < uVar1) {
      return 2;
    }
    if (uVar2 == 0x200) {
      param_1[0x15] = 0;
      param_1[0x16] = 0;
    }
    if ((*(byte *)((long)param_1 + 0x54) & 1) != 0) {
      return 2;
    }
    uVar3 = FUN_00e1bb5c(param_2,*param_1);
    if ((int)uVar3 == 0) {
      uVar3 = FUN_00e1d5c4(param_2,param_1[2],param_1 + 0x1b);
      return uVar3;
    }
  }
  return uVar3;
}

