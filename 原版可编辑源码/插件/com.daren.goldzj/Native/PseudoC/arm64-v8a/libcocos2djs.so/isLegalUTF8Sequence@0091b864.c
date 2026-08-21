
undefined8 isLegalUTF8Sequence(byte *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 - (long)param_1 < (long)((ulong)(byte)(&DAT_01868d7d)[*param_1] + 1)) {
    return 0;
  }
  uVar1 = FUN_0091b894();
  return uVar1;
}

