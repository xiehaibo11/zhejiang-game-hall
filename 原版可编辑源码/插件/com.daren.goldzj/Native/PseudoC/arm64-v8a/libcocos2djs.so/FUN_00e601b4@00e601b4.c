
void FUN_00e601b4(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ushort *puVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  
  iVar1 = FUN_00e6266c(param_2,param_3);
  if ((iVar1 == 0) && (0 < *(int *)(param_2 + 0x2c))) {
    puVar2 = *(ushort **)(param_2 + 0x30);
    puVar3 = *(undefined8 **)(param_3 + 8);
    puVar5 = puVar2 + (long)*(int *)(param_2 + 0x2c) * 0x28;
    puVar4 = *(undefined1 **)(param_3 + 0x10);
    do {
      uVar7 = *(undefined8 *)(puVar2 + 0x10);
      puVar3[1] = *(undefined8 *)(puVar2 + 0x14);
      *puVar3 = uVar7;
      if ((*puVar2 & 1) == 0) {
        uVar6 = 1;
        if ((*puVar2 & 2) != 0) {
          uVar6 = 2;
        }
      }
      else {
        uVar6 = 0;
      }
      puVar2 = puVar2 + 0x28;
      *puVar4 = uVar6;
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 1;
    } while (puVar2 < puVar5);
  }
  return;
}

