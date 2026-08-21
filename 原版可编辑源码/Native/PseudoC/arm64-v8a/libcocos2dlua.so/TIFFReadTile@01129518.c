
undefined8
TIFFReadTile(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(int *)((long)param_1 + 0xc) == 1) {
    TIFFErrorExt(param_1[0x77],*param_1,"File not open for reading");
  }
  else if ((*(byte *)((long)param_1 + 0x11) >> 2 & 1) == 0) {
    TIFFErrorExt(param_1[0x77],*param_1,"Can not read tiles from a stripped image");
  }
  else {
    iVar1 = TIFFCheckTile(param_1,param_3,param_4,param_5,param_6);
    if (iVar1 != 0) {
      uVar2 = TIFFComputeTile(param_1,param_3,param_4,param_5,param_6);
      uVar3 = TIFFReadEncodedTile(param_1,uVar2,param_2,0xffffffffffffffff);
      return uVar3;
    }
  }
  return 0xffffffffffffffff;
}

