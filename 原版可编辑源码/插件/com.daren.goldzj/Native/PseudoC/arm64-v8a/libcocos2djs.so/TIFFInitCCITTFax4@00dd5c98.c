
undefined8 TIFFInitCCITTFax4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00dd5b0c();
  if (iVar1 != 0) {
    iVar1 = _TIFFMergeFields(param_1,&DAT_01c92590,1);
    if (iVar1 != 0) {
      *(code **)(param_1 + 0x300) = FUN_00dd6b74;
      *(code **)(param_1 + 0x2f8) = FUN_00dd5d44;
      *(code **)(param_1 + 0x310) = FUN_00dd6b74;
      *(code **)(param_1 + 0x308) = FUN_00dd5d44;
      *(code **)(param_1 + 800) = FUN_00dd6b74;
      *(code **)(param_1 + 0x318) = FUN_00dd5d44;
      *(code **)(param_1 + 0x2f0) = FUN_00dd6c18;
      uVar2 = TIFFSetField(param_1,0x10000,1);
      return uVar2;
    }
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFInitCCITTFax4",
                 "Merging CCITT Fax 4 codec-specific tags failed");
  }
  return 0;
}

