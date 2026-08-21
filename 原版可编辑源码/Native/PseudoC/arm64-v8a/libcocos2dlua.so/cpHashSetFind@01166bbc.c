
undefined8 cpHashSetFind(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar3 = (ulong)*(uint *)(param_1 + 4);
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = param_2 / uVar3;
  }
  for (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x18) + (param_2 - uVar1 * uVar3) * 8);
      puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)puVar4[2]) {
    cVar2 = (**(code **)(param_1 + 8))(param_3,*puVar4);
    if (cVar2 != '\0') goto LAB_01166c10;
  }
  puVar4 = (undefined8 *)(param_1 + 0x10);
LAB_01166c10:
  return *puVar4;
}

