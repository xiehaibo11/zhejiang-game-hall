
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AttachCurrentThread() */

void AttachCurrentThread(void)

{
  long lVar1;
  int iVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = (**(code **)(*DAT_00103000 + 0x20))(DAT_00103000,&local_30,0);
  LOG("Attach current thread %d",iVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}

