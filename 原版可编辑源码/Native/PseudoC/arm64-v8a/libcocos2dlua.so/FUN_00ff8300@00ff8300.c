
void FUN_00ff8300(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_1 + 8);
  local_2c = 0;
  glGetIntegerv(0x8ca7,&local_2c);
  glGenRenderbuffers(1,lVar2 + 0x30);
  glBindRenderbuffer(0x8d41,*(undefined4 *)(lVar2 + 0x30));
  glRenderbufferStorage(0x8d41,0x88f0,*(undefined4 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x2c));
  glBindRenderbuffer(0x8d41,local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

