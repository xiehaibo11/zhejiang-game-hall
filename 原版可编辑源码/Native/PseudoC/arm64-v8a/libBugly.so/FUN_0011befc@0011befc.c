
void FUN_0011befc(undefined *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 == 0) {
    if (param_1 != _Uaarch64_local_addr_space) {
      FUN_00121800();
      return;
    }
  }
  else if ((-1 < iVar1) && (iVar1 < 3)) {
    (**(code **)(param_1 + 8))();
  }
  return;
}

