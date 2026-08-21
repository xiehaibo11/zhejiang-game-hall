
bool FUN_0113ce08(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 0x350);
  iVar1 = *piVar6;
                    /* try { // try from 0113ce1c to 0123ce27 has its CatchHandler @ 0113cef8 */
  if (iVar1 == 1) {
    return true;
  }
                    /* try { // try from 0113ce28 to 0123ce47 has its CatchHandler @ 0113cee0 */
  if (iVar1 == 3) {
    if (*(short *)(param_1 + 0x76) == 3) {
LAB_0113ce88:
      if (*(short *)(param_1 + 0xaa) == 1) {
                    /* try { // try from 0113ce94 to 0123ce97 has its CatchHandler @ 0113ced4 */
        uVar5 = (ulong)*(ushort *)(param_1 + 0x82);
                    /* try { // try from 0113ce98 to 0123cf17 has its CatchHandler @ 0113cd70 */
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0113ce94 with catch @ 0113ced4
                        */
      *(long *)(piVar6 + 4) = lVar3;
      return lVar3 != 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0113cdc4 with catch @ 0113ced8
                        */
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0113ce28 with catch @ 0113cee0
                        */
    uVar2 = *(undefined8 *)(param_1 + 0x3b8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0113cde4 with catch @ 0113cee4
                        */
    pcVar4 = "Floating point \"Predictor\" not supported with %d data format";
  }
  else if (iVar1 == 2) {
    if ((*(ushort *)(param_1 + 0x74) < 0x21) &&
       ((1L << ((ulong)*(ushort *)(param_1 + 0x74) & 0x3f) & 0x100010100U) != 0)) goto LAB_0113ce88;
    uVar2 = *(undefined8 *)(param_1 + 0x3b8);
                    /* try { // try from 0113ce64 to 0123ce77 has its CatchHandler @ 0113cef8 */
    pcVar4 = "Horizontal differencing \"Predictor\" not supported with %d-bit samples";
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar4 = "\"Predictor\" value %d not supported";
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0113cddc with catch @ 0113cef4
                        */
  TIFFErrorExt(uVar2,"PredictorSetup",pcVar4);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0113ce1c with catch @ 0113cef8
                       catch(type#1 @ 00000000) { ... } // from try @ 0113ce64 with catch @ 0113cef8
                        */
  return false;
}

