
void FUN_00ff840c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_1 + 8);
  if (*(char *)(lVar2 + 0x60) == '\0') {
    glGetIntegerv(0x8ca6,&local_3c);
    glGenFramebuffers(1,lVar2 + 0x24);
    glBindFramebuffer(0x8d40,*(undefined4 *)(lVar2 + 0x24));
    glBindFramebuffer(0x8d40,local_3c);
    *(undefined1 *)(lVar2 + 0x2c) = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

