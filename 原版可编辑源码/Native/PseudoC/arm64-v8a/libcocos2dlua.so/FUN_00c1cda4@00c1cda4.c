
undefined8 FUN_00c1cda4(ulong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  puVar1 = puVar3 + 4;
  uVar4 = *(undefined8 *)(lVar2 + -8);
  *(undefined8 *)(lVar2 + -0x10) = *param_2;
  *puVar3 = 0;
  puVar3[1] = uVar4;
  puVar3[2] = param_1 | 0xfffc800000000000;
  puVar3[3] = (long)puVar1 + (2 - lVar2);
  *(undefined8 **)(param_1 + 0x28) = puVar1;
  *(undefined8 **)(param_1 + 0x20) = puVar1;
  return 0;
}

