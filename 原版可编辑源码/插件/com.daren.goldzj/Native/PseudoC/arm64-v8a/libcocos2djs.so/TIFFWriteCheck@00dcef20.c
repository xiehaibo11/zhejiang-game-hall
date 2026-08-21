
undefined8 TIFFWriteCheck(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  uint uVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar3 = "File not open for writing";
LAB_00dcef98:
    TIFFErrorExt(uVar2,param_3,pcVar3);
    return 0;
  }
  if ((*(uint *)(param_1 + 0x10) >> 10 & 1) != param_2) {
    uVar2 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar3 = "Can not write tiles to a stripped image";
    if (param_2 == 0) {
      pcVar3 = "Can not write scanlines to a tiled image";
    }
    goto LAB_00dcef98;
  }
  _TIFFFillStriles(param_1);
  uVar4 = (uint)*(undefined8 *)(param_1 + 0x38);
  if ((uVar4 >> 1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar3 = "Must set \"ImageWidth\" before writing data";
    goto LAB_00dcef98;
  }
  if (*(short *)(param_1 + 0x82) == 1) {
    if ((uVar4 >> 0x14 & 1) == 0) {
      *(undefined2 *)(param_1 + 0xaa) = 1;
      lVar5 = *(long *)(param_1 + 0xe8);
      goto joined_r0x00dcefcc;
    }
  }
  else if ((uVar4 >> 0x14 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar3 = "Must set \"PlanarConfiguration\" before writing data";
    goto LAB_00dcef98;
  }
  lVar5 = *(long *)(param_1 + 0xe8);
joined_r0x00dcefcc:
  if ((lVar5 == 0) && (iVar1 = TIFFSetupStrips(param_1), iVar1 == 0)) {
    pcVar3 = "tile";
    if ((*(uint *)(param_1 + 0x10) & 0x400) == 0) {
      pcVar3 = "strip";
    }
    *(undefined4 *)(param_1 + 0xe4) = 0;
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),param_3,"No space for %s arrays",pcVar3);
    return 0;
  }
  if ((*(byte *)(param_1 + 0x11) >> 2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x2b0) = 0xffffffffffffffff;
  }
  else {
    lVar5 = TIFFTileSize(param_1);
    *(long *)(param_1 + 0x2b0) = lVar5;
    if (lVar5 == 0) {
      return 0;
    }
  }
  lVar5 = TIFFScanlineSize(param_1);
  *(long *)(param_1 + 0x358) = lVar5;
  if (lVar5 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40;
  return 1;
}

