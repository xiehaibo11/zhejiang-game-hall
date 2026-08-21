
undefined8 * FUN_00c1a64c(undefined8 *param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  if ((int)param_1[1] != (int)puVar1) {
    *puVar1 = param_2;
    *param_1 = puVar1 + 1;
    return param_1;
  }
  puVar1 = (undefined1 *)FUN_00c1a4a8(param_1,1);
  *puVar1 = param_2;
  *param_1 = puVar1 + 1;
  return param_1;
}

