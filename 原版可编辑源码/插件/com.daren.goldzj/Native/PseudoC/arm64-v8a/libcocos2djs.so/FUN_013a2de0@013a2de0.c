
ulong FUN_013a2de0(long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long unaff_x26;
  
  lVar1 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_1 + 0xb) + 0x13);
  iVar3 = FUN_01345880(param_2,lVar1);
  if (iVar3 == -2) {
    param_4 = *(ulong *)(unaff_x26 + 0xb0);
  }
  else {
    iVar2 = *(int *)(lVar1 + 7);
    *(undefined4 *)(param_4 + 7) = 4;
    *(int *)(param_4 + 0xb) = (int)param_2;
    if (((((uint)*(undefined8 *)((param_4 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((param_2 & 1) != 0)) &&
       (param_2 = unaff_x26 + (param_2 & 0xffffffff),
       ((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
      FUN_0133eb00(param_4,param_4 + 0xb,0,2);
    }
    *(int *)(param_4 + 0xf) = (int)param_2;
    if (((((uint)*(undefined8 *)((param_4 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((param_2 & 1) != 0)) &&
       (((uint)*(undefined8 *)((unaff_x26 + (param_2 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 &
        1) != 0)) {
      FUN_0133eb00(param_4,param_4 + 0xf,0,2);
    }
    *(int *)(param_4 + 0x13) = iVar3;
    *(int *)(param_4 + 0x17) = iVar3 + iVar2 * 2;
  }
  return param_4;
}

