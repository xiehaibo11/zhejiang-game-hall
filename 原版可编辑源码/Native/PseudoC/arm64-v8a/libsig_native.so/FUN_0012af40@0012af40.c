
undefined8 FUN_0012af40(byte param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (param_1 != 0xff) {
    bVar1 = param_1 & 0x70;
    if (bVar1 == 0x20) {
      uVar2 = FUN_0012af38(param_2);
      return uVar2;
    }
    if (bVar1 < 0x21) {
      if (((param_1 & 0x70) != 0) && (bVar1 != 0x10)) {
LAB_0012afa8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (bVar1 == 0x40) {
        uVar2 = FUN_0012af00();
        return uVar2;
      }
      if (bVar1 != 0x50) {
        if (bVar1 == 0x30) {
          uVar2 = FUN_0012af30();
          return uVar2;
        }
        goto LAB_0012afa8;
      }
    }
  }
  return 0;
}

