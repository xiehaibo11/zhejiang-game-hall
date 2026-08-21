
undefined8 TIFFVStripSize64(long param_1,uint param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort local_34;
  ushort local_32;
  
  if (param_2 == 0xffffffff) {
    param_2 = *(uint *)(param_1 + 0x5c);
  }
  if (((*(short *)(param_1 + 0xaa) == 1) && (*(short *)(param_1 + 0x7a) == 6)) &&
     ((*(byte *)(param_1 + 0x11) >> 6 & 1) == 0)) {
    if (*(short *)(param_1 + 0x82) == 3) {
      TIFFGetFieldDefaulted(param_1,0x212,&local_34,(ulong)&local_34 | 2);
      if (((local_34 < 5) && (uVar5 = (uint)local_34, (1 << (ulong)(uVar5 & 0x1f) & 0x16U) != 0)) &&
         ((local_32 < 5 && (uVar6 = (uint)local_32, (1 << (ulong)(uVar6 & 0x1f) & 0x16U) != 0)))) {
        if (*(uint *)(param_1 + 0x58) < -uVar5) {
          uVar4 = 0;
          if (uVar5 != 0) {
            uVar4 = ((uVar5 + *(uint *)(param_1 + 0x58)) - 1) / (uint)local_34;
          }
        }
        else {
          uVar4 = 0;
        }
        if (param_2 < -uVar6) {
          uVar5 = 0;
          if (local_32 != 0) {
            uVar5 = ((param_2 + uVar6) - 1) / (uint)local_32;
          }
        }
        else {
          uVar5 = 0;
        }
        uVar1 = _TIFFMultiply64(param_1,uVar4,uVar6 * local_34 + 2 & 0xffff,"TIFFVStripSize64");
        uVar2 = _TIFFMultiply64(param_1,uVar1,*(undefined2 *)(param_1 + 0x74),"TIFFVStripSize64");
        uVar3 = _TIFFMultiply64(param_1,uVar1,*(undefined2 *)(param_1 + 0x74),"TIFFVStripSize64");
        uVar3 = uVar3 >> 3;
        if ((uVar2 & 7) != 0) {
          uVar3 = uVar3 + 1;
        }
        uVar1 = _TIFFMultiply64(param_1,uVar3,uVar5,"TIFFVStripSize64");
        return uVar1;
      }
      TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFVStripSize64",
                   "Invalid YCbCr subsampling (%dx%d)",local_34,local_32);
    }
    else {
      TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFVStripSize64",
                   "Invalid td_samplesperpixel value");
    }
    return 0;
  }
  uVar1 = TIFFScanlineSize64(param_1);
  uVar1 = _TIFFMultiply64(param_1,param_2,uVar1,"TIFFVStripSize64");
  return uVar1;
}

