
/* v8::base::Semaphore::~Semaphore() */

int __thiscall v8::base::Semaphore::~Semaphore(Semaphore *this)

{
  int iVar1;
  
  iVar1 = sem_destroy((sem_t *)this);
  return iVar1;
}

