
void lwsl_emit_stderr(uint param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined1 auStack_6c [52];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (DAT_01792dd8 == 0) {
    iVar2 = isatty(2);
    DAT_01792dd8 = (byte)iVar2 | 2;
  }
  lwsl_timestamp(param_1,auStack_6c,0x32);
  if (DAT_01792dd8 == 3) {
    if ((param_1 >> 10 & 1) == 0) {
      uVar4 = 0x400;
      lVar3 = 10;
      do {
        uVar4 = (int)uVar4 >> 1;
        lVar3 = lVar3 + -1;
        if (uVar4 == 0) break;
      } while ((uVar4 & param_1) == 0);
    }
    else {
      lVar3 = 10;
    }
                    /* catch() { ... } // from try @ 01043668 with catch @ 01043618 */
    iVar2 = fprintf((FILE *)pthread_rwlock_tryrdlock,"%c%s%s%s%c[0m",0x1b,
                    (&PTR_s__31_1m_01727c60)[lVar3],auStack_6c,param_2,0x1b);
    if (*(long *)(lVar1 + 0x28) != local_38) {
LAB_01043650:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar2);
    }
  }
  else {
    iVar2 = fprintf((FILE *)pthread_rwlock_tryrdlock,"%s%s",auStack_6c,param_2);
    if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_01043650;
  }
  return;
}

