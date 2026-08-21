
long FUN_00e1edd4(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)*param_1;
  bVar2 = *pbVar3;
  if (bVar2 != 0) {
    lVar1 = 0;
    do {
      pbVar3 = pbVar3 + 1;
      lVar1 = lVar1 * 0x1f + (ulong)bVar2;
      bVar2 = *pbVar3;
    } while (bVar2 != 0);
    return lVar1;
  }
  return 0;
}

