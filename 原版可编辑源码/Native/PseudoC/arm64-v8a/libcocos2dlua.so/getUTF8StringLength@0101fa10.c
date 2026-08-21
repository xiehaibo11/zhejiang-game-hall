
int getUTF8StringLength(byte *param_1)

{
  long lVar1;
  byte *pbVar2;
  char cVar3;
  size_t sVar4;
  int iVar5;
  
  sVar4 = strlen((char *)param_1);
  iVar5 = 0;
  if (sVar4 != 0) {
    pbVar2 = param_1 + sVar4;
    do {
      lVar1 = (ulong)(byte)(&DAT_01458874)[*param_1] + 1;
                    /* catch() { ... } // from try @ 0101f99c with catch @ 0101fa50 */
      if (((long)pbVar2 - (long)param_1 < lVar1) ||
         (cVar3 = FUN_0101f8f4(param_1,lVar1), cVar3 == '\0')) {
        return 0;
      }
      param_1 = param_1 + lVar1;
      iVar5 = iVar5 + 1;
    } while (param_1 != pbVar2);
  }
  return iVar5;
}

