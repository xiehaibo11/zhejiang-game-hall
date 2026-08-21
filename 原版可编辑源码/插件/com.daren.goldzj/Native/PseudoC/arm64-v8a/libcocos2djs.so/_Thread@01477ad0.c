
/* v8::base::Thread::~Thread() */

void __thiscall v8::base::Thread::~Thread(Thread *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 8);
  *(undefined ***)this = &PTR__Thread_01cc3fc0;
  if (pvVar1 != (void *)0x0) {
    Mutex::~Mutex((Mutex *)((long)pvVar1 + 8));
    operator_delete(pvVar1);
    return;
  }
  return;
}

