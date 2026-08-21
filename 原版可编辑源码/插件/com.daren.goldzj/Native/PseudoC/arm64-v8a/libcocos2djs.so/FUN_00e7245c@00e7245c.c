
void FUN_00e7245c(undefined8 *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)param_1[2];
  pbVar4 = (byte *)*param_1;
  while (pbVar4 < pbVar3) {
    bVar2 = *pbVar4;
    if (0x25 < bVar2) break;
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100003601U) == 0) {
      if ((ulong)bVar2 != 0x25) break;
      bVar1 = 0x25;
      while ((pbVar4 = pbVar4 + 1, bVar2 != 10 && (bVar1 != 0xd))) {
        if (pbVar3 <= pbVar4) goto LAB_00e72490;
        bVar1 = *pbVar4;
        bVar2 = bVar1;
      }
    }
    else {
LAB_00e72490:
      pbVar4 = pbVar4 + 1;
    }
  }
  *param_1 = pbVar4;
  FUN_00e775a0(param_1,pbVar3,(long)param_2);
  return;
}

