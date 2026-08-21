
undefined8 isLegalUTF8String(long *param_1,byte *param_2)

{
  long lVar1;
  char cVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)*param_1;
  while( true ) {
    if (pbVar3 == param_2) {
      return 1;
    }
    lVar1 = (ulong)(byte)(&DAT_01868d7d)[*pbVar3] + 1;
    if (((long)param_2 - (long)pbVar3 < lVar1) ||
       (cVar2 = FUN_0091b894(pbVar3,lVar1), cVar2 == '\0')) break;
    pbVar3 = pbVar3 + lVar1;
    *param_1 = (long)pbVar3;
  }
  return 0;
}

