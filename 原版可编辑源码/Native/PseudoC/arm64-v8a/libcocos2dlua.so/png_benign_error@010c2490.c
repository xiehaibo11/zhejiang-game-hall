
void png_benign_error(long param_1,undefined1 *param_2)

{
  long lVar1;
  undefined1 auStack_110 [216];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x16a) >> 4 & 1) == 0) {
    if (((*(uint *)(param_1 + 0x164) >> 0xf & 1) != 0) && (*(int *)(param_1 + 0x250) != 0)) {
                    /* WARNING: Subroutine does not return */
      png_chunk_error(param_1,param_2);
    }
                    /* WARNING: Subroutine does not return */
    png_error(param_1,param_2);
  }
  if (((*(uint *)(param_1 + 0x164) >> 0xf & 1) != 0) && (*(int *)(param_1 + 0x250) != 0)) {
    FUN_010c2628(*(int *)(param_1 + 0x250),auStack_110,param_2);
    param_2 = auStack_110;
  }
  png_warning(param_1,param_2);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

