
void FUN_00e02d38(ulong *param_1,ulong param_2,ulong param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = param_3;
  if (7 < param_3) {
    uVar2 = 8;
  }
  param_1[2] = param_3;
  *param_1 = 0;
  param_1[4] = 0;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    uVar5 = 0;
    do {
      pbVar1 = (byte *)(param_2 + uVar5);
      uVar5 = uVar5 + 1;
      uVar3 = (ulong)*pbVar1 << (uVar4 & 0x3f) | uVar3;
      uVar4 = uVar4 + 8;
    } while (uVar5 < uVar2);
  }
  param_1[3] = uVar2;
  *param_1 = uVar3;
  param_1[1] = param_2;
  return;
}

