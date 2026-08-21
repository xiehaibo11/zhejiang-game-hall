
/* v8::base::Semaphore::Semaphore(int) */

int __thiscall v8::base::Semaphore::Semaphore(Semaphore *this,int param_1)

{
  int iVar1;
  
  iVar1 = sem_init((sem_t *)this,0,param_1);
  return iVar1;
}

