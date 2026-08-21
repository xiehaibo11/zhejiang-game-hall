
undefined8 FUN_00ddc000(long param_1,long param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = TIFFScanlineSize();
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      iVar1 = (**(code **)(param_1 + 0x300))(param_1,param_2 + lVar3,lVar2,param_4);
      if (iVar1 != 1) {
        return 0;
      }
      lVar3 = lVar3 + lVar2;
    } while (param_3 != lVar3);
  }
  return 1;
}

