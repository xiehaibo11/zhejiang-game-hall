
void uv__free(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)__errno();
  uVar1 = *puVar2;
  (*(code *)PTR_free_01d289b8)(param_1);
  *puVar2 = uVar1;
  return;
}

