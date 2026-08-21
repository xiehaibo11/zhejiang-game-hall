
void FUN_01136f34(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x350);
  uVar5 = *(uint *)(lVar6 + 0x48);
  uVar4 = *(uint *)(lVar6 + 0x4c);
  if (uVar4 < param_3) {
    param_3 = param_3 - uVar4;
    if (*(long *)(param_1 + 0x370) <= *(long *)(param_1 + 0x390)) {
      TIFFFlushData1(param_1);
    }
    pbVar2 = *(byte **)(param_1 + 0x388);
    *(byte **)(param_1 + 0x388) = pbVar2 + 1;
    *pbVar2 = (byte)(param_2 >> (ulong)(param_3 & 0x1f)) | (byte)uVar5;
    lVar1 = *(long *)(param_1 + 0x390) + 1;
    *(long *)(param_1 + 0x390) = lVar1;
                    /* try { // try from 01136fa8 to 012374f3 has its CatchHandler @ 01136fa8
                       catch() { ... } // from try @ 01136fa8 with catch @ 01136fa8
                       catch() { ... } // from try @ 01137500 with catch @ 01136fa8
                       catch() { ... } // from try @ 01137530 with catch @ 01136fa8 */
    while (8 < param_3) {
      param_3 = param_3 - 8;
      if (*(long *)(param_1 + 0x370) <= lVar1) {
        TIFFFlushData1(param_1);
      }
      puVar3 = *(undefined1 **)(param_1 + 0x388);
      *(undefined1 **)(param_1 + 0x388) = puVar3 + 1;
      *puVar3 = (char)(param_2 >> (ulong)(param_3 & 0x1f));
      lVar1 = *(long *)(param_1 + 0x390) + 1;
      *(long *)(param_1 + 0x390) = lVar1;
    }
    uVar5 = 0;
    uVar4 = 8;
  }
  uVar4 = uVar4 - param_3;
  uVar5 = (*(uint *)(&DAT_0147ec9c + (ulong)param_3 * 4) & param_2) << (ulong)(uVar4 & 0x1f) | uVar5
  ;
  if (uVar4 == 0) {
    if (*(long *)(param_1 + 0x370) <= *(long *)(param_1 + 0x390)) {
      TIFFFlushData1(param_1);
    }
    puVar3 = *(undefined1 **)(param_1 + 0x388);
    *(undefined1 **)(param_1 + 0x388) = puVar3 + 1;
    *puVar3 = (char)uVar5;
    uVar4 = 8;
    uVar5 = 0;
    *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x390) + 1;
  }
  *(uint *)(lVar6 + 0x48) = uVar5;
  *(uint *)(lVar6 + 0x4c) = uVar4;
  return;
}

