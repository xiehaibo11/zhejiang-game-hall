
void FUN_00e74830(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_1[2];
  uVar3 = *param_1;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)param_1[4];
    uVar7 = puVar2[1];
    uVar6 = *puVar2;
    uVar5 = puVar2[3];
    uVar4 = puVar2[2];
    *(undefined8 *)(lVar1 + 0xe8) = puVar2[4];
    *(undefined8 *)(lVar1 + 0xe0) = uVar5;
    *(undefined8 *)(lVar1 + 0xd8) = uVar4;
    *(undefined8 *)(lVar1 + 0xd0) = uVar7;
    *(undefined8 *)(lVar1 + 200) = uVar6;
  }
  if ((code *)param_1[0x176] != (code *)0x0) {
    (*(code *)param_1[0x176])(param_1[0x175]);
    FUN_00e139fc(uVar3,param_1[0x175]);
    param_1[0x175] = 0;
  }
  return;
}

