
/* v8::base::Semaphore::Signal() */

void __thiscall v8::base::Semaphore::Signal(Semaphore *this)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = sem_post((sem_t *)this);
  if (iVar1 == 0) {
    return;
  }
  puVar2 = (uint *)__errno();
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Error when signaling semaphore, errno: %d",(ulong)*puVar2);
}

