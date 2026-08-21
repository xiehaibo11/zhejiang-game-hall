
void fpconv_init(void)

{
  long lVar1;
  char local_30;
  undefined1 local_2f;
  char local_2e;
  char local_2d;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_009d0728(0x3fe0000000000000,&local_30,8,8,&DAT_012f093a);
  if (((local_30 == '0') && (local_2e == '5')) && (local_2d == '\0')) {
    DAT_017696e0 = local_2f;
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  fwrite(&DAT_012f093d,0x2d,1,(FILE *)pthread_rwlock_tryrdlock);
                    /* WARNING: Subroutine does not return */
  abort();
}

