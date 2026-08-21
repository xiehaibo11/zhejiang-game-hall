
long FUN_01346ea0(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  int unaff_w26;
  
  iVar3 = (int)param_2;
  if ((0 < iVar3) && (lVar1 = (long)((ulong)*(uint *)(param_1 + 0xb) << 0x20) >> 0x21, lVar1 != -1))
  {
    lVar4 = 0;
    while( true ) {
      if (lVar1 <= lVar4) {
        return param_2;
      }
      if ((ulong)((long)((ulong)*(uint *)(param_1 + 3) << 0x20) >> 0x21) <= lVar4 + 3U) break;
      if (iVar3 <= unaff_w26 + *(int *)(param_1 + lVar4 * 4 + 0x13)) {
        return param_2;
      }
      lVar4 = lVar4 + 1;
      param_2 = (long)((int)param_2 + -2);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x1346f1c);
    (*pcVar2)();
  }
  return 0;
}

