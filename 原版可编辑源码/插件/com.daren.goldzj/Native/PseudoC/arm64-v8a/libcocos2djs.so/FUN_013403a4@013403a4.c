
void FUN_013403a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long unaff_x26;
  
  uVar1 = FUN_013c0ba0(param_3,*(undefined8 *)(unaff_x26 + 0xc18),param_3,param_1,param_5,param_2);
  if (((uVar1 & 1) != 0) && ((*(byte *)(unaff_x26 + (ulong)*(uint *)(uVar1 - 1) + 9) >> 1 & 1) != 0)
     ) {
    lVar2 = FUN_0138c280(param_3,uVar1);
    if (3 < *(byte *)(unaff_x26 + (ulong)*(uint *)(lVar2 + -1) + 10) >> 3) {
      FUN_01340280(param_1,param_2);
      return;
    }
    FUN_01340380(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20e8));
}

