
undefined8 TIFFInitCCITTFax3(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_01131fb4();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = _TIFFMergeFields(param_1,&DAT_0172cf00,1);
    if (iVar1 != 0) {
      uVar2 = TIFFSetField(param_1,0x10000,1);
      return uVar2;
    }
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFInitCCITTFax3",
                 "Merging CCITT Fax 3 codec-specific tags failed");
    uVar2 = 0;
  }
  return uVar2;
}

