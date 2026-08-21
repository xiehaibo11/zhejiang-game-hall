
void FUN_00bfe164(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (0xffe4 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfa980(param_1,5);
  }
  uVar2 = uVar1 + 1;
  if (uVar2 < 0xffdd) {
    uVar1 = uVar1 << 1;
    if ((uVar2 < uVar1) && (uVar2 = uVar1, 0xffdb < uVar1)) {
      uVar2 = 0xffdc;
    }
  }
  else {
    uVar2 = uVar1 + 0x29;
  }
  FUN_00bfdcd8(param_1,uVar2);
  if (0xffe4 < *(uint *)(param_1 + 0x58)) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfaf54(param_1,0x68);
  }
  return;
}

