
undefined8 cpHashSetRemove(int *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar5 = (ulong)(uint)param_1[1];
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = param_2 / uVar5;
  }
  puVar2 = (undefined8 *)(*(long *)(param_1 + 6) + (param_2 - uVar1 * uVar5) * 8);
  do {
    puVar7 = puVar2;
    puVar6 = (undefined8 *)*puVar7;
    if (puVar6 == (undefined8 *)0x0) {
      return 0;
    }
    cVar3 = (**(code **)(param_1 + 2))(param_3,*puVar6);
    puVar2 = puVar6 + 2;
  } while (cVar3 == '\0');
  *puVar7 = puVar6[2];
  *param_1 = *param_1 + -1;
  uVar4 = *puVar6;
  puVar6[2] = *(undefined8 *)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar6;
  *puVar6 = 0;
  return uVar4;
}

