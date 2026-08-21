
undefined8 FUN_00a1ac98(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0x940) = 0;
  uVar1 = FUN_00a1ace8();
  if ((int)uVar1 == 0) {
    if (((*(byte *)(lVar2 + 0x978) >> 4 & 1) == 0) && (*(char *)(lVar2 + 0x970) == '\0')) {
      FUN_00a0ec44(*(undefined8 *)(lVar2 + 0x220),&DAT_018938a8);
    }
    uVar1 = 0;
    *(undefined4 *)(lVar2 + 0xac8) = 0;
  }
  return uVar1;
}

