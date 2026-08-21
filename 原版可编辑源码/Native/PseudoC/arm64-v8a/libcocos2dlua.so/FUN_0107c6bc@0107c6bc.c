
long FUN_0107c6bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = ft_service_list_lookup(&PTR_s_xf86_driver_name_01729050);
  if (lVar1 == 0) {
    if (param_1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = 0;
      if ((*(long *)(param_1 + 8) != 0) &&
         (plVar2 = (long *)FT_Get_Module(*(long *)(param_1 + 8),&DAT_0145cf10), lVar1 = 0,
         plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0107c71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
        return lVar1;
      }
    }
  }
  return lVar1;
}

