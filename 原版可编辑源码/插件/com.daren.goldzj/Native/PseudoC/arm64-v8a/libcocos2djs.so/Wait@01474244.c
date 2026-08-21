
/* v8::base::Semaphore::Wait() */

void __thiscall v8::base::Semaphore::Wait(Semaphore *this)

{
  int iVar1;
  
  do {
    iVar1 = sem_wait((sem_t *)this);
  } while (iVar1 != 0);
  return;
}

