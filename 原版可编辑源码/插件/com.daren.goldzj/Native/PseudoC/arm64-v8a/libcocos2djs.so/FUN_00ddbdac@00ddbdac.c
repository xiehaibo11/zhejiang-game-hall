
undefined8 FUN_00ddbdac(long param_1,long param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = TIFFScanlineSize();
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      uVar2 = (**(code **)(param_1 + 0x2f8))(param_1,param_2 + lVar3,lVar1,param_4);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      lVar3 = lVar3 + lVar1;
    } while (param_3 != lVar3);
  }
  return 1;
}

