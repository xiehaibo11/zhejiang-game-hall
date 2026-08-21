
undefined8 TIFFSetCompressionScheme(long param_1,short param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long *plVar3;
  
  for (plVar3 = (long *)DAT_01d3e8b8; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    ppuVar2 = (undefined **)plVar3[1];
    if (*(short *)(ppuVar2 + 1) == param_2) goto LAB_00dd1764;
  }
  ppuVar2 = (undefined **)0x0;
  if (_TIFFBuiltinCODECS != (undefined *)0x0) {
    ppuVar2 = &_TIFFBuiltinCODECS;
    do {
      if (*(short *)(ppuVar2 + 1) == param_2) goto LAB_00dd1764;
      ppuVar2 = ppuVar2 + 3;
    } while (*ppuVar2 != (undefined *)0x0);
    ppuVar2 = (undefined **)0x0;
  }
LAB_00dd1764:
  *(undefined4 *)(param_1 + 0x2b8) = 1;
  *(undefined4 *)(param_1 + 0x2e0) = 1;
  *(code **)(param_1 + 0x2d0) = _TIFFNoPreCode;
  *(code **)(param_1 + 0x2e8) = _TIFFNoPreCode;
  *(code **)(param_1 + 0x2d8) = FUN_00dd1704;
  *(code **)(param_1 + 0x2f0) = FUN_00dd1704;
  *(code **)(param_1 + 0x2c8) = FUN_00dd1704;
  *(code **)(param_1 + 0x2c0) = _TIFFNoFixupTags;
  *(code **)(param_1 + 0x300) = _TIFFNoRowEncode;
  *(code **)(param_1 + 0x2f8) = _TIFFNoRowDecode;
  *(code **)(param_1 + 0x310) = _TIFFNoStripEncode;
  *(code **)(param_1 + 0x308) = _TIFFNoStripDecode;
  *(code **)(param_1 + 800) = _TIFFNoTileEncode;
  *(code **)(param_1 + 0x318) = _TIFFNoTileDecode;
  *(code **)(param_1 + 0x328) = FUN_00dd170c;
  *(code **)(param_1 + 0x330) = _TIFFNoSeek;
  *(code **)(param_1 + 0x338) = FUN_00dd170c;
  *(code **)(param_1 + 0x340) = _TIFFDefaultStripSize;
  *(code **)(param_1 + 0x348) = _TIFFDefaultTileSize;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffdfeff;
  if (ppuVar2 == (undefined **)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00dd1854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)ppuVar2[2])();
  return uVar1;
}

