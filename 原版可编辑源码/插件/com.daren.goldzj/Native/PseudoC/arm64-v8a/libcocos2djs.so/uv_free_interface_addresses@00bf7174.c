
void uv_free_interface_addresses(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    do {
      puVar2 = puVar1 + 10;
      uv__free(*puVar1);
      puVar1 = puVar2;
    } while (puVar2 != param_1 + ((ulong)(param_2 - 1) + 1) * 10);
  }
  uv__free(param_1);
  return;
}

