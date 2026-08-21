
void png_chunk_report(long param_1,undefined1 *param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  undefined1 auStack_110 [216];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0x165) < '\0') {
    if ((1 < param_3) && ((*(byte *)(param_1 + 0x16a) >> 4 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      png_chunk_error(param_1,param_2);
    }
    FUN_010c2628(*(undefined4 *)(param_1 + 0x250),auStack_110,param_2);
    param_2 = auStack_110;
  }
  else {
    if (param_3 < 1) {
      uVar1 = *(uint *)(param_1 + 0x168) >> 0x15;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x168) >> 0x16;
    }
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,param_2);
    }
  }
  png_warning(param_1,param_2);
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010c278c with catch @ 010c2908
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

