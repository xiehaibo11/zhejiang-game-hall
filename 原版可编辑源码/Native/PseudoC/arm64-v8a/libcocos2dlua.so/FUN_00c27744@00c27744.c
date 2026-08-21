
void FUN_00c27744(long param_1,uint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0x40000;
  if (*(int *)(param_1 + 4) == 0x28) {
    uVar1 = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x70) = 0x38c0;
    FUN_00c2593c();
    iVar2 = FUN_00c276a0(param_1);
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    if (*(int *)(param_1 + 4) != 0x29) {
                    /* WARNING: Subroutine does not return */
      FUN_00c258bc(param_1,0x29);
    }
    FUN_00c2593c(param_1);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = (((uint)LZCOUNT(iVar2) ^ 0x1f) & 0xf) << 0x10;
    }
  }
  *param_2 = *param_2 & 0xfff0ffff | 1 | uVar3;
  return;
}

