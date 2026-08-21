
void TIFFInitCCITTRLE(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_01131fb4();
  if (iVar1 != 0) {
    *(code **)(param_1 + 0x2f8) = FUN_0113319c;
    *(code **)(param_1 + 0x308) = FUN_0113319c;
    *(code **)(param_1 + 0x318) = FUN_0113319c;
    TIFFSetField(param_1,0x10000,7);
    return;
  }
  return;
}

