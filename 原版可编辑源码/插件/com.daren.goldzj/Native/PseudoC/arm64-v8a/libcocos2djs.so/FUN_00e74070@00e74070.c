
void FUN_00e74070(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  uVar5 = param_2[5];
  param_1[7] = param_2 + 7;
  param_1[6] = param_2 + 6;
  param_1[9] = param_2 + 10;
  param_1[8] = param_2 + 8;
  param_1[5] = uVar5;
  param_1[10] = param_2 + 0xc;
  if (param_3 == '\0') {
    uVar4 = *(undefined1 *)(param_2 + 0x10);
    lVar6 = 0x83;
    lVar7 = 0x82;
    lVar8 = 0x81;
  }
  else {
    uVar4 = 0;
    lVar6 = 0x86;
    lVar7 = 0x85;
    lVar8 = 0x84;
  }
  uVar1 = *(undefined1 *)((long)param_2 + lVar6);
  uVar2 = *(undefined1 *)((long)param_2 + lVar7);
  uVar3 = *(undefined1 *)((long)param_2 + lVar8);
  *(undefined1 *)(param_1 + 0xb) = uVar4;
  *(undefined1 *)((long)param_1 + 0x59) = uVar3;
  *(undefined1 *)((long)param_1 + 0x5a) = uVar2;
  *(undefined1 *)((long)param_1 + 0x5b) = uVar1;
  *(char *)((long)param_1 + 0x5c) = param_3;
  param_1[0xd] = FUN_00e7413c;
  param_1[0xc] = FUN_00e74070;
  return;
}

