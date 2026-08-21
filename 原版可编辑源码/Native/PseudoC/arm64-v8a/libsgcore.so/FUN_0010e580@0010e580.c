
void FUN_0010e580(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)(*(code *)PTR_malloc_00113048)(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = *param_3;
    uVar5 = param_3[3];
    uVar4 = param_3[2];
    uVar7 = param_3[5];
    uVar6 = param_3[4];
    uVar2 = param_3[6];
    puVar1[1] = param_3[1];
    *puVar1 = uVar3;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
    puVar1[6] = uVar2;
    puVar1[7] = 0;
    puVar1[5] = uVar7;
    puVar1[4] = uVar6;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(uint *)(puVar1 + 3) = *(uint *)(puVar1 + 3) | 0x100;
  }
  FUN_0010e468(param_1,param_2);
  return;
}

