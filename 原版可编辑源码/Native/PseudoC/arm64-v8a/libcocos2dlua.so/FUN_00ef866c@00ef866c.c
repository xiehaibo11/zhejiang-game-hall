
void FUN_00ef866c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = puVar3;
  if (puVar2 != puVar3) {
    do {
      puVar2 = puVar2 + -0xf;
      (**(code **)*puVar2)(puVar2);
    } while (puVar3 != puVar2);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar3;
  operator_delete(puVar1);
  return;
}

