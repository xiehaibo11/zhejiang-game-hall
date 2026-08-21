
void FT_List_Insert(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (undefined8 *)0x0)) {
    puVar2 = (undefined8 *)*param_1;
    puVar1 = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = param_1 + 1;
    }
    *param_2 = 0;
    param_2[1] = puVar2;
    *puVar1 = param_2;
    *param_1 = param_2;
  }
  return;
}

