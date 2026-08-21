
undefined8 FUN_00c1339c(long param_1)

{
  int iVar1;
  undefined1 auStack_80 [32];
  long local_60;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  undefined4 local_c;
  
  local_60 = FUN_00c29ac0(param_1,1);
  local_60 = local_60 + 0x18;
  local_30 = *(long *)(*(long *)(param_1 + 0x10) + 0x168);
  local_28 = *(long *)(param_1 + 0x20) + 8;
  *(long *)(local_30 + 0x10) = param_1;
  local_c = 5;
  local_38 = param_1;
  local_20 = local_60;
  iVar1 = FUN_00c29398(auStack_80);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfa980(param_1,iVar1);
  }
  if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x20) < *(ulong *)(*(long *)(param_1 + 0x10) + 0x28)) {
    return 0;
  }
  FUN_00c19f80(param_1);
  return 0;
}

