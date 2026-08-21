
/* v8::base::Thread::Join() */

int __thiscall v8::base::Thread::Join(Thread *this)

{
  int iVar1;
  
  iVar1 = pthread_join(**(pthread_t **)(this + 8),(void **)0x0);
  return iVar1;
}

