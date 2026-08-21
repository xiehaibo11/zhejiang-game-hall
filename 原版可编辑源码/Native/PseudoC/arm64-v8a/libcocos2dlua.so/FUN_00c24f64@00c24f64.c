
uint FUN_00c24f64(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = *(byte **)(param_1 + 8);
  do {
    bVar1 = *pbVar3;
    pbVar4 = pbVar3 + 1;
    if ((bVar1 != 0xd) && (bVar1 != 10)) {
      return *param_1;
    }
    *(byte **)(param_1 + 8) = pbVar4;
    bVar2 = pbVar3[1];
    if ((bVar2 == 0xd || bVar2 == 10) && (bVar1 != bVar2)) {
      pbVar4 = pbVar3 + 2;
    }
    pbVar3 = pbVar4 + 1;
    *(byte **)(param_1 + 8) = pbVar3;
    param_1[0x1a] = param_1[0x1a] + 1;
    bVar1 = *pbVar4;
    *param_1 = (uint)bVar1;
  } while (bVar1 == 0x5c);
  return (uint)bVar1;
}

