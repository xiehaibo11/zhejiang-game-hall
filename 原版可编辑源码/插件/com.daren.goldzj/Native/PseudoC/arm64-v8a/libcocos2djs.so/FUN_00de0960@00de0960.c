
bool FUN_00de0960(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 0x350);
  iVar1 = *piVar6;
  if (iVar1 == 1) {
    return true;
  }
  if (iVar1 == 3) {
    if (*(short *)(param_1 + 0x76) == 3) {
LAB_00de09e0:
      if (*(short *)(param_1 + 0xaa) == 1) {
        uVar5 = (ulong)*(ushort *)(param_1 + 0x82);
      }
      else {
        uVar5 = 1;
      }
      *(ulong *)(piVar6 + 2) = uVar5;
      if ((*(byte *)(param_1 + 0x11) >> 2 & 1) == 0) {
        lVar3 = TIFFScanlineSize();
      }
      else {
        lVar3 = TIFFTileRowSize();
      }
      *(long *)(piVar6 + 4) = lVar3;
      return lVar3 != 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar4 = "Floating point \"Predictor\" not supported with %d data format";
  }
  else if (iVar1 == 2) {
    if ((*(ushort *)(param_1 + 0x74) < 0x21) &&
       ((1L << ((ulong)*(ushort *)(param_1 + 0x74) & 0x3f) & 0x100010100U) != 0)) goto LAB_00de09e0;
    uVar2 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar4 = "Horizontal differencing \"Predictor\" not supported with %d-bit samples";
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar4 = "\"Predictor\" value %d not supported";
  }
  TIFFErrorExt(uVar2,"PredictorSetup",pcVar4);
  return false;
}

