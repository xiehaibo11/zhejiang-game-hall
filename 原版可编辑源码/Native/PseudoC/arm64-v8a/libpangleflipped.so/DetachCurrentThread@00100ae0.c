
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DetachCurrentThread() */

undefined8 DetachCurrentThread(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_00103000 + 0x28))();
  LOG("Detach current thread %d",iVar1);
  return 0;
}

