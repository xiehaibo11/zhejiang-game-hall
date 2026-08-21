
void lua_insert(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_2 < 1) {
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    puVar2 = puVar3 + param_2;
LAB_00c035c4:
    puVar4 = puVar3;
    if (puVar3 <= puVar2) goto LAB_00c035e0;
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)param_2 * 8 + -8);
    puVar4 = puVar3;
    if (puVar3 <= puVar2) {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0xe8);
      goto LAB_00c035c4;
    }
  }
  do {
    puVar1 = puVar3 + -1;
    *puVar3 = puVar3[-1];
    puVar3 = puVar1;
  } while (puVar2 < puVar1);
LAB_00c035e0:
  *puVar2 = *puVar4;
  return;
}

