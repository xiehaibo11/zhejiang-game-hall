
undefined8 FUN_0139c0c0(undefined8 param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x26;
  
  lVar3 = *(long *)(unaff_x26 + 0xa0);
  if (param_2 == (int)lVar3) {
    if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 + -1) + 7) != 0x62) {
      uVar2 = FUN_013f9920(param_3,param_1,*(undefined8 *)(unaff_x26 + 0xc0));
      return uVar2;
    }
    uVar2 = FUN_0133fb80(1,unaff_x26 + (ulong)*(uint *)(param_3 + 0xb));
  }
  else {
    uVar1 = FUN_0133fb80(1);
    uVar2 = *(undefined8 *)(unaff_x26 + 0xa0);
    if ((int)lVar3 != (int)uVar2) {
      if (*(short *)(unaff_x26 + (ulong)*(uint *)(lVar3 + -1) + 7) != 0x62) {
        uVar2 = FUN_0139b2c0(lVar3,uVar1);
        return uVar2;
      }
      uVar2 = FUN_0133fb80(1,unaff_x26 + (ulong)*(uint *)(lVar3 + 7));
    }
  }
  return uVar2;
}

