
undefined8 FUN_0139c280(undefined8 param_1,int param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x26;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  plVar2 = &local_30;
  uVar3 = *(undefined8 *)(unaff_x26 + 0xa0);
  if (param_2 != (int)uVar3) {
    plVar2 = &local_40;
    local_40 = param_1;
    local_38 = uVar3;
    param_1 = FUN_0133fb80(1);
    uVar3 = *(undefined8 *)(unaff_x26 + 0xa0);
    param_3 = local_30;
    if ((int)local_30 == (int)uVar3) {
      return uVar3;
    }
  }
  if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 + -1) + 7) == 0x62) {
    uVar1 = *(uint *)(param_3 + 7);
    *(undefined8 *)((long)plVar2 + -0x10) = param_1;
    *(undefined8 *)((long)plVar2 + -8) = uVar3;
    uVar3 = FUN_0133fb80(1,unaff_x26 + (ulong)uVar1);
    return uVar3;
  }
  uVar3 = FUN_0139b2c0(param_3,param_1);
  return uVar3;
}

