
int FUN_00e6be04(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int local_24;
  
  *param_2 = 0;
  puVar1 = (undefined8 *)FUN_00e1388c(param_1,8,&local_24);
  if (local_24 == 0) {
    *puVar1 = param_1;
    *param_2 = puVar1;
  }
  return local_24;
}

