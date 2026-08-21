
/* std::__ndk1::__thread_struct::~__thread_struct() */

void __thiscall std::__ndk1::__thread_struct::~__thread_struct(__thread_struct *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    FUN_01212984(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

