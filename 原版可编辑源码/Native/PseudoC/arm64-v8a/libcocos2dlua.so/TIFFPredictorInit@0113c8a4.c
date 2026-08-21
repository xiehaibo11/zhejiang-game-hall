
bool TIFFPredictorInit(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x350);
  iVar1 = _TIFFMergeFields(param_1,&DAT_0172d0b0,1);
  if (iVar1 == 0) {
                    /* try { // try from 0113c964 to 0123ca1b has its CatchHandler @ 0113c730 */
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFPredictorInit",
                 "Merging Predictor codec-specific tags failed");
  }
  else {
    *(undefined8 *)(puVar2 + 0x16) = *(undefined8 *)(param_1 + 0x410);
    *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(param_1 + 0x408);
    *(code **)(param_1 + 0x410) = FUN_0113c980;
    *(code **)(param_1 + 0x408) = FUN_0113ca04;
    *(undefined8 *)(puVar2 + 0x1a) = *(undefined8 *)(param_1 + 0x418);
    *(code **)(param_1 + 0x418) = FUN_0113ca9c;
                    /* try { // try from 0113c91c to 0123c92b has its CatchHandler @ 0113c9a8 */
    *(undefined8 *)(puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x2c8);
    *(code **)(param_1 + 0x2c8) = FUN_0113cb7c;
    *(undefined8 *)(puVar2 + 0x1e) = *(undefined8 *)(param_1 + 0x2d8);
    *(code **)(param_1 + 0x2d8) = FUN_0113ccf8;
    *puVar2 = 1;
    *(undefined8 *)(puVar2 + 0xc) = 0;
    *(undefined8 *)(puVar2 + 0x14) = 0;
                    /* try { // try from 0113c94c to 0123c963 has its CatchHandler @ 0113c9a0 */
  }
  return iVar1 != 0;
}

