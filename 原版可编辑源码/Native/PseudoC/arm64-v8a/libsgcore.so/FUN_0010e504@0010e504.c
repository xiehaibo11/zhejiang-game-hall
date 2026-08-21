
void FUN_0010e504(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = (undefined8 *)(*(code *)PTR_malloc_00113048)(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    uVar5 = *param_2;
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    uVar9 = param_2[5];
    uVar8 = param_2[4];
    uVar3 = param_2[6];
    puVar2[1] = param_2[1];
    *puVar2 = uVar5;
    puVar2[3] = uVar7;
    puVar2[2] = uVar6;
    puVar2[6] = uVar3;
    puVar2[7] = 0;
    puVar2[5] = uVar9;
    puVar2[4] = uVar8;
    *puVar2 = 0;
    puVar2[1] = 0;
    *(uint *)(puVar2 + 3) = *(uint *)(puVar2 + 3) | 0x100;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if (*(undefined8 **)(param_1 + 0x10) == (undefined8 *)0x0) {
      *(undefined8 **)(param_1 + 0x10) = puVar2;
    }
    else {
      do {
        puVar4 = puVar1;
        puVar1 = (undefined8 *)*puVar4;
      } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
      *puVar4 = puVar2;
      puVar2[1] = puVar4;
    }
  }
  return;
}

