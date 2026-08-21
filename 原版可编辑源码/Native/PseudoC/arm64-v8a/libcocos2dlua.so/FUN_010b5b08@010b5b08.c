
undefined8 FUN_010b5b08(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    if ((ulong)*(uint *)(lVar1 + 8) <
        (ulong)((long)*(short *)(lVar1 + 0x1a) + (long)param_2 + (long)*(short *)(lVar1 + 0x62))) {
      uVar2 = FT_GlyphLoader_CheckPoints(lVar1,param_2,0);
      return uVar2;
    }
  }
  return 0;
}

