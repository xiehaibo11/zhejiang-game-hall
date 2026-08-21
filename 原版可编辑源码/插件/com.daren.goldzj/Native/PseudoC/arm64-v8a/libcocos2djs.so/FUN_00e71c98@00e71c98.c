
void FUN_00e71c98(undefined8 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)*param_1;
  while (pbVar3 < (byte *)param_1[2]) {
    bVar2 = *pbVar3;
    if (0x25 < bVar2) break;
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100003601U) == 0) {
      if ((ulong)bVar2 != 0x25) break;
      bVar1 = 0x25;
      while ((pbVar3 = pbVar3 + 1, bVar2 != 10 && (bVar1 != 0xd))) {
        if ((byte *)param_1[2] <= pbVar3) goto LAB_00e71ccc;
        bVar1 = *pbVar3;
        bVar2 = bVar1;
      }
    }
    else {
LAB_00e71ccc:
      pbVar3 = pbVar3 + 1;
    }
  }
  *param_1 = pbVar3;
  return;
}

