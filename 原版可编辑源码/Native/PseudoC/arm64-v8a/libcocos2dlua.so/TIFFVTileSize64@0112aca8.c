
undefined8 TIFFVTileSize64(long param_1,uint param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort local_34;
  ushort local_32;
  
  if (((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 100) != 0)) &&
     (*(int *)(param_1 + 0x6c) != 0)) {
    if (((*(short *)(param_1 + 0xaa) != 1) || (*(short *)(param_1 + 0x7a) != 6)) ||
       ((*(short *)(param_1 + 0x82) != 3 || ((*(byte *)(param_1 + 0x11) >> 6 & 1) != 0)))) {
      uVar3 = _TIFFMultiply64(param_1,*(undefined2 *)(param_1 + 0x74),*(int *)(param_1 + 100),
                              "TIFFTileRowSize");
      if (*(short *)(param_1 + 0xaa) == 1) {
        uVar3 = _TIFFMultiply64(param_1,uVar3,*(undefined2 *)(param_1 + 0x82),"TIFFTileRowSize");
      }
      uVar2 = uVar3 >> 3;
      if ((uVar3 & 7) != 0) {
        uVar2 = uVar2 + 1;
      }
      uVar1 = _TIFFMultiply64(param_1,param_2,uVar2,"TIFFVTileSize64");
      return uVar1;
    }
    TIFFGetFieldDefaulted(param_1,0x212,&local_34,(ulong)&local_34 | 2);
    if (((local_34 < 5) && (uVar5 = (uint)local_34, (1 << (ulong)(uVar5 & 0x1f) & 0x16U) != 0)) &&
       ((local_32 < 5 && (uVar6 = (uint)local_32, (1 << (ulong)(uVar6 & 0x1f) & 0x16U) != 0)))) {
      if (*(uint *)(param_1 + 100) < -uVar5) {
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = ((uVar5 + *(uint *)(param_1 + 100)) - 1) / (uint)local_34;
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
      uVar1 = _TIFFMultiply64(param_1,uVar4,uVar6 * local_34 + 2 & 0xffff,"TIFFVTileSize64");
      uVar2 = _TIFFMultiply64(param_1,uVar1,*(undefined2 *)(param_1 + 0x74),"TIFFVTileSize64");
      uVar3 = _TIFFMultiply64(param_1,uVar1,*(undefined2 *)(param_1 + 0x74),"TIFFVTileSize64");
      uVar3 = uVar3 >> 3;
      if ((uVar2 & 7) != 0) {
        uVar3 = uVar3 + 1;
      }
      uVar1 = _TIFFMultiply64(param_1,uVar3,uVar5,"TIFFVTileSize64");
      return uVar1;
    }
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFVTileSize64",
                 "Invalid YCbCr subsampling (%dx%d)",local_34,local_32);
  }
  return 0;
}

