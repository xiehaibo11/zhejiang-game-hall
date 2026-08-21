
void FUN_00e77fdc(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  memset(param_1,0,0x4f0);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  uVar4 = param_2[5];
  param_1[7] = param_2 + 7;
  param_1[6] = param_2 + 6;
  param_1[9] = param_2 + 10;
  param_1[8] = param_2 + 8;
  param_1[5] = uVar4;
  param_1[10] = param_2 + 0xc;
  if (param_3 != '\0') {
    uVar2 = *(undefined1 *)((long)param_2 + 0x86);
    uVar3 = *(undefined2 *)((long)param_2 + 0x84);
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(char *)((long)param_1 + 0x5c) = param_3;
    param_1[0x85] = param_2 + 0x175;
    *(undefined2 *)((long)param_1 + 0x59) = uVar3;
    *(undefined1 *)((long)param_1 + 0x5b) = uVar2;
    param_1[0xd] = FUN_00e7413c;
    param_1[0xc] = FUN_00e74070;
    param_1[0x91] = param_2[0x150];
    *(undefined4 *)(param_1 + 0x8d) = *(undefined4 *)(param_2 + 0x151);
    param_1[0x8c] = param_2[0x152];
    *(undefined4 *)((long)param_1 + 0x46c) = *(undefined4 *)(param_2 + 0x16d);
    param_1[0x9b] = param_2[0x16c];
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)((long)param_2 + 0xa9c);
    param_1[0x8a] = param_2[0x154];
    uVar4 = param_2[0x155];
    param_1[0x94] = param_2[0x156];
    param_1[0x93] = uVar4;
    param_1[0x9c] = param_2[0x173];
    *(undefined4 *)(param_1 + 0x9d) = *(undefined4 *)(param_2 + 0x174);
    *(undefined4 *)(param_1 + 0x92) = *(undefined4 *)(param_2 + 0x153);
    return;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xb) = uVar1;
  param_1[0xd] = FUN_00e7413c;
  param_1[0xc] = FUN_00e74070;
  lVar5 = param_2[0x1b];
  param_1[0x83] = lVar5;
  param_1[0x85] = lVar5 + 5000;
  param_1[0x84] = param_2[0xbb];
  uVar4 = param_2[0xb6];
  param_1[0x8b] = param_2[0xb7];
  param_1[0x8a] = uVar4;
  uVar6 = param_2[0xb5];
  uVar4 = param_2[0xb4];
  param_1[0x86] = param_2 + 0x91;
  param_1[0x89] = uVar6;
  param_1[0x88] = uVar4;
  *(undefined1 *)(param_1 + 0x87) = *(undefined1 *)((long)param_2 + 0x499);
  *(undefined4 *)((long)param_1 + 0x46c) = *(undefined4 *)((long)param_2 + 0x5cc);
  uVar4 = param_2[0xbc];
  param_1[0x90] = param_2[0xbd];
  param_1[0x8f] = uVar4;
  return;
}

