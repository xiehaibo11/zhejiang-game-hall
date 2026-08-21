
undefined8 FUN_01091294(long *param_1,int *param_2)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = *param_1;
  lVar5 = *(long *)(param_2 + 4);
  lVar6 = *(long *)(lVar2 + 0xf8);
  if (param_2[7] != 0) {
    lVar5 = (long)(lVar5 * (ulong)(uint)param_2[7] + 0x24) / 0x48;
  }
  if (*param_2 == 1) {
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x6c);
  }
  else {
    if (*param_2 != 0) {
      return 7;
    }
    uVar4 = *(long *)(*(long *)(lVar2 + 0x40) + 0x18) + 0x20 >> 6;
  }
  if (lVar5 + 0x20 >> 6 == uVar4) {
    FT_Select_Metrics(lVar2,0);
    uVar1 = *(ushort *)(lVar6 + 0x5c);
    uVar3 = 0;
                    /* catch() { ... } // from try @ 01091254 with catch @ 0109131c */
    param_1[6] = (ulong)uVar1 << 6;
    param_1[7] = (long)(int)(((uint)uVar1 - (uint)*(ushort *)(lVar6 + 0x6c)) * 0x40);
    param_1[9] = (ulong)*(ushort *)(lVar6 + 0x72) << 6;
  }
  else {
    uVar3 = 0x17;
  }
  return uVar3;
}

