
void FUN_00e7413c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    uVar6 = puVar2[1];
    uVar5 = *puVar2;
    uVar4 = puVar2[3];
    uVar3 = puVar2[2];
    *(undefined8 *)(lVar1 + 0xe8) = puVar2[4];
    *(undefined8 *)(lVar1 + 0xe0) = uVar4;
    *(undefined8 *)(lVar1 + 0xd8) = uVar3;
    *(undefined8 *)(lVar1 + 0xd0) = uVar6;
    *(undefined8 *)(lVar1 + 200) = uVar5;
  }
  return;
}

