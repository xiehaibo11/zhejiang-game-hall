
void TIFFInitCCITTRLE(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_00dd5b0c();
  if (iVar1 != 0) {
    *(code **)(param_1 + 0x2f8) = FUN_00dd6cf4;
    *(code **)(param_1 + 0x308) = FUN_00dd6cf4;
    *(code **)(param_1 + 0x318) = FUN_00dd6cf4;
    TIFFSetField(param_1,0x10000,7);
    return;
  }
  return;
}

