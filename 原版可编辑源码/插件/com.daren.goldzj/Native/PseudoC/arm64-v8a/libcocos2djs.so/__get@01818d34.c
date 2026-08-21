
/* std::__ndk1::locale::id::__get() */

long __thiscall std::__ndk1::locale::id::__get(id *this)

{
  long lVar1;
  id *local_50;
  code *local_48;
  undefined8 uStack_40;
  undefined1 **local_38;
  undefined1 *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_40 = 0;
  local_48 = __init;
  local_50 = this;
  if (*(long *)this != -1) {
    local_38 = &local_30;
    local_30 = (undefined1 *)&local_50;
    __call_once((ulong *)this,&local_38,FUN_01828620);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return (long)*(int *)(this + 8) + -1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

