
void FUN_010f9918(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
  iVar1 = (*(code *)puVar3[3])();
  if (iVar1 == 0) {
    puVar2 = (undefined8 *)**(long **)(param_1 + 0xd8);
    *(undefined4 *)(puVar2 + 5) = 0x19;
    (*(code *)*puVar2)();
  }
  uVar4 = *puVar3;
  *(undefined8 *)(param_1 + 0xd0) = puVar3[1];
  *(undefined8 *)(param_1 + 200) = uVar4;
  return;
}

