
void lua_remove(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 < 1) {
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    puVar1 = puVar3 + param_2;
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)param_2 * 8 + -8);
    if (puVar3 <= puVar1) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0xe8);
    }
  }
  while (puVar2 = puVar1 + 1, puVar2 < puVar3) {
    *puVar1 = *puVar2;
    puVar1 = puVar2;
  }
  *(undefined8 **)(param_1 + 0x28) = puVar3 + -1;
  return;
}

