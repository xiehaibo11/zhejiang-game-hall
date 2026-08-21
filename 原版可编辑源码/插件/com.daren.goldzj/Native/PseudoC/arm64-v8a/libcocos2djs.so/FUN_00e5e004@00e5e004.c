
undefined8 FUN_00e5e004(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int local_50 [2];
  undefined8 local_48;
  int local_40 [2];
  undefined8 local_38;
  
  uVar1 = FUN_00e5e098(param_1,"CHARSET_REGISTRY",local_50);
  if (((int)uVar1 == 0) &&
     (uVar1 = FUN_00e5e098(param_1,"CHARSET_ENCODING",local_40), (int)uVar1 == 0)) {
    if ((local_50[0] == 1) && (local_40[0] == 1)) {
      uVar1 = 0;
      *param_2 = local_38;
      *param_3 = local_48;
    }
    else {
      uVar1 = 6;
    }
  }
  return uVar1;
}

