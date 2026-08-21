
void _TIFFSetDefaultCompressionState(long param_1)

{
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
  return;
}

