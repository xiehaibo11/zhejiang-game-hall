
undefined8 get_libraray_function(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = open_library();
    uVar1 = get_opened_libraray_function(uVar1,param_2);
    return uVar1;
  }
  return 0;
}

