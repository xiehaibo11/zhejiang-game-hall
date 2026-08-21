
bool TIFFPredictorInit(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x350);
  iVar1 = _TIFFMergeFields(param_1,&DAT_01c92710,1);
  if (iVar1 == 0) {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFPredictorInit",
                 "Merging Predictor codec-specific tags failed");
  }
  else {
    *(undefined8 *)(puVar2 + 0x16) = *(undefined8 *)(param_1 + 0x410);
    *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(param_1 + 0x408);
    *(code **)(param_1 + 0x410) = FUN_00de04d8;
    *(code **)(param_1 + 0x408) = FUN_00de055c;
    *(undefined8 *)(puVar2 + 0x1a) = *(undefined8 *)(param_1 + 0x418);
    *(code **)(param_1 + 0x418) = FUN_00de05f4;
    *(undefined8 *)(puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x2c8);
    *(code **)(param_1 + 0x2c8) = FUN_00de06d4;
    *(undefined8 *)(puVar2 + 0x1e) = *(undefined8 *)(param_1 + 0x2d8);
    *(code **)(param_1 + 0x2d8) = FUN_00de0850;
    *puVar2 = 1;
    *(undefined8 *)(puVar2 + 0xc) = 0;
    *(undefined8 *)(puVar2 + 0x14) = 0;
  }
  return iVar1 != 0;
}

