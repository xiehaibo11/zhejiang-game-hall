
undefined8 FUN_013f3f60(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long unaff_x26;
  
  lVar2 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_1 + 0xb) + 0xf);
  if ((*(short *)(unaff_x26 + (ulong)*(uint *)(lVar2 + -1) + 7) == 0x5b) &&
     ((*(uint *)(lVar2 + 0x1b) >> 3 & 1) != 0)) {
    lVar2 = unaff_x26 + (ulong)*(uint *)(lVar2 + 0x1f);
    uVar3 = (long)((ulong)(param_2 * 4 + 4) << 0x20) >> 0x21;
    if ((ulong)((long)((ulong)*(uint *)(lVar2 + 3) << 0x20) >> 0x21) <= uVar3) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x13f3fb4);
      (*pcVar4)();
    }
    lVar1 = uVar3 * 4 + 7;
    *(int *)(lVar2 + lVar1) = (int)unaff_x26 + *(int *)(lVar2 + lVar1) + 2;
    return *(undefined8 *)(unaff_x26 + 0xa0);
  }
  return *(undefined8 *)(unaff_x26 + 0xa0);
}

