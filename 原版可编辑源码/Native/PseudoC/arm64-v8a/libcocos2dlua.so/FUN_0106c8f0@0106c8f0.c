
long FUN_0106c8f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = ft_service_list_lookup(&PTR_s_xf86_driver_name_017283a0);
  if (lVar1 == 0) {
    if (param_1 != 0) {
      if (*(long *)(param_1 + 8) == 0) {
        return 0;
      }
      plVar2 = (long *)FT_Get_Module(*(long *)(param_1 + 8),&DAT_0145cf10);
      if (plVar2 == (long *)0x0) {
        return 0;
      }
      if (*(long *)(*plVar2 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0106c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (**(code **)(*(long *)(*plVar2 + 0x28) + 0x20))(param_1,param_2);
        return lVar1;
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}

