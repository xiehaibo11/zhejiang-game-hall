
/* universe::CopyTask::onSchedule() */

undefined8 __thiscall universe::CopyTask::onSchedule(CopyTask *this)

{
  long lVar1;
  long *plVar2;
  void *__ptr;
  CopyTask *__filename;
  FILE *__s;
  size_t sVar3;
  size_t local_50;
  long local_48;
  
                    /* try { // try from 009e7d2c to 00ae7d53 has its CatchHandler @ 009e7e04 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)TanGaoXiong::getInstance();
                    /* try { // try from 009e7d54 to 00ae7de7 has its CatchHandler @ 009e7cd4 */
  __ptr = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,this + 0x20,&local_50);
  if (__ptr != (void *)0x0) {
    if (((byte)this[0x38] & 1) == 0) {
      __filename = this + 0x39;
    }
    else {
      __filename = *(CopyTask **)(this + 0x48);
    }
    __s = fopen((char *)__filename,"wb");
    if (__s != (FILE *)0x0) {
      sVar3 = fwrite(__ptr,1,local_50,__s);
      fclose(__s);
      if (sVar3 != 0) {
        this[0x70] = (CopyTask)0x1;
      }
    }
    free(__ptr);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 009e7de8 to 00ae7dfb has its CatchHandler @ 009e7e04 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

