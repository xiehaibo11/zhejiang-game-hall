
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
    lVar1 = (ulong)(byte)(&DAT_01458874)[*pbVar3] + 1;
                    /* catch() { ... } // from try @ 0101f97c with catch @ 0101fadc */
    if (((long)param_2 - (long)pbVar3 < lVar1) ||
       (cVar2 = FUN_0101f8f4(pbVar3,lVar1), cVar2 == '\0')) break;
    pbVar3 = pbVar3 + lVar1;
    *param_1 = (long)pbVar3;
  }
  return 0;
}

