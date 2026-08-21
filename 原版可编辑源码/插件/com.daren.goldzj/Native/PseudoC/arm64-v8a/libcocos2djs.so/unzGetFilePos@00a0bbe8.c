
undefined8 unzGetFilePos(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xffffff9a;
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    if (*(long *)(param_1 + 0x70) == 0) {
      return 0xffffff9c;
    }
    uVar1 = 0;
    auVar2 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x60),*(undefined1 (*) [16])(param_1 + 0x60),
                      8,1);
    param_2[1] = auVar2._8_8_;
    *param_2 = auVar2._0_8_;
  }
  return uVar1;
}

