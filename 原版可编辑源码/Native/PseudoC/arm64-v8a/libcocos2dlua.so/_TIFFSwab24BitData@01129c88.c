
void _TIFFSwab24BitData(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = SUB168(SEXT816(param_3) * SEXT816(0x5555555555555556),8);
  TIFFSwabArrayOfTriples(param_2,lVar1 - (lVar1 >> 0x3f));
  return;
}

