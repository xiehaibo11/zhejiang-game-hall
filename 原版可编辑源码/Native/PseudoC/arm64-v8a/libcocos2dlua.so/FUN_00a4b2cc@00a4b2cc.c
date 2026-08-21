
long FUN_00a4b2cc(byte *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  byte *pbVar2;
  ulong uVar4;
  byte *pbVar3;
  
  if (param_2 < 1) {
    uVar4 = 0x1505;
  }
  else {
    uVar4 = 0x1505;
    pbVar3 = param_1;
    do {
      pbVar2 = pbVar3 + 1;
      uVar4 = uVar4 * 0x21 ^ (ulong)*pbVar3;
      pbVar3 = pbVar2;
    } while (pbVar2 < param_1 + param_2);
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar4 / param_3;
  }
  return uVar4 - uVar1 * param_3;
}

