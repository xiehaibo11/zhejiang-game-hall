
undefined8 FUN_01412600(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x26;
  
  uVar1 = (param_2 << 0x20) >> 0x21;
  uVar2 = *(undefined8 *)(unaff_x26 + 200);
  while( true ) {
    if ((uVar1 & 1) != 0) {
      uVar2 = FUN_013bf600(uVar2,param_1);
    }
    uVar1 = (long)uVar1 >> 1;
    if (uVar1 == 0) break;
    param_1 = FUN_013bf600(param_1,param_1);
  }
  return uVar2;
}

