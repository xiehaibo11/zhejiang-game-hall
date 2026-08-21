
void uv_free_interface_addresses(undefined8 *param_1,uint param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (0 < (int)param_2) {
    uVar1 = (ulong)param_2;
    puVar2 = param_1;
    do {
      FUN_0119f27c(*puVar2);
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 10;
    } while (uVar1 != 0);
  }
  FUN_0119f27c(param_1);
  return;
}

