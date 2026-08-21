
undefined8
FUN_0011ecc4(undefined *param_1,ulong param_2,undefined8 param_3,undefined4 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  if (_Uaarch64_local_addr_space != param_1) {
    uVar1 = FUN_00123450(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  lVar2 = _U_dyn_info_list_addr();
  plVar3 = *(long **)(lVar2 + 8);
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return 0xfffffff6;
    }
    if (((ulong)plVar3[2] <= param_2) && (param_2 < (ulong)plVar3[3])) break;
    plVar3 = (long *)*plVar3;
  }
  uVar1 = FUN_001233e4(param_1,param_2,param_3,plVar3,param_4,param_5);
  return uVar1;
}

