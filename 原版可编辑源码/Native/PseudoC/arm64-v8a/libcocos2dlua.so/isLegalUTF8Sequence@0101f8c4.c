
undefined8 isLegalUTF8Sequence(byte *param_1,long param_2)

{
  undefined8 uVar1;
  
                    /* try { // try from 0101f8c8 to 0111f943 has its CatchHandler @ 0101f89c */
  if (param_2 - (long)param_1 < (long)((ulong)(byte)(&DAT_01458874)[*param_1] + 1)) {
    return 0;
  }
  uVar1 = FUN_0101f8f4();
  return uVar1;
}

