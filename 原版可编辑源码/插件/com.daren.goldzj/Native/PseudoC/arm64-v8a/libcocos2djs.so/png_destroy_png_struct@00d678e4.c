
void png_destroy_png_struct(void *param_1)

{
  long lVar1;
  undefined1 auStack_598 [1128];
  code *local_130;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (void *)0x0) {
    memcpy(auStack_598,param_1,0x560);
    memset(param_1,0,0x560);
    if (local_130 == (code *)0x0) {
      free(param_1);
    }
    else {
      (*local_130)(auStack_598,param_1);
    }
    png_free_jmpbuf(auStack_598);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

