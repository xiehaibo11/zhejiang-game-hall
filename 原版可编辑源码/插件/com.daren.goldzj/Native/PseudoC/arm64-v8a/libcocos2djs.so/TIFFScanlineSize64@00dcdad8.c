
ulong TIFFScanlineSize64(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  ushort local_24;
  ushort local_22;
  
  if (*(short *)(param_1 + 0xaa) == 1) {
    sVar5 = *(short *)(param_1 + 0x82);
    if ((*(short *)(param_1 + 0x7a) == 6) && (sVar5 == 3)) {
      if ((*(byte *)(param_1 + 0x11) >> 6 & 1) == 0) {
        TIFFGetFieldDefaulted(param_1,0x212,&local_24,(ulong)&local_24 | 2);
        if ((((4 < local_24) || (uVar6 = (uint)local_24, (1 << (ulong)(uVar6 & 0x1f) & 0x16U) == 0))
            || (4 < local_22)) || ((1 << (ulong)(local_22 & 0x1f) & 0x16U) == 0)) {
          TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFScanlineSize64",
                       "Invalid YCbCr subsampling");
          return 0;
        }
        if (*(uint *)(param_1 + 0x58) < -uVar6) {
          uVar4 = 0;
          if (local_24 != 0) {
            uVar4 = ((uVar6 + *(uint *)(param_1 + 0x58)) - 1) / (uint)local_24;
          }
        }
        else {
          uVar4 = 0;
        }
        uVar2 = _TIFFMultiply64(param_1,uVar4,local_22 * uVar6 + 2 & 0xffff,"TIFFScanlineSize64");
        lVar3 = _TIFFMultiply64(param_1,uVar2,*(undefined2 *)(param_1 + 0x74),"TIFFScanlineSize64");
        if ((ulong)local_22 == 0) {
          return 0;
        }
        return (lVar3 + 7U >> 3) / (ulong)local_22;
      }
      sVar5 = 3;
    }
    uVar1 = _TIFFMultiply64(param_1,*(undefined4 *)(param_1 + 0x58),sVar5,"TIFFScanlineSize64");
  }
  else {
    uVar1 = (ulong)*(uint *)(param_1 + 0x58);
  }
  lVar3 = _TIFFMultiply64(param_1,uVar1,*(undefined2 *)(param_1 + 0x74),"TIFFScanlineSize64");
  return lVar3 + 7U >> 3;
}

