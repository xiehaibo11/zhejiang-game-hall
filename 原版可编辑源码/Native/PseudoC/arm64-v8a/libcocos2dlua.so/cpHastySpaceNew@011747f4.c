
void * cpHastySpaceNew(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x278);
  cpSpaceInit();
  pthread_mutex_init((pthread_mutex_t *)((long)pvVar1 + 0x1d0),(pthread_mutexattr_t *)0x0);
  pthread_cond_init((pthread_cond_t *)((long)pvVar1 + 0x1f8),(pthread_condattr_t *)0x0);
  pthread_cond_init((pthread_cond_t *)((long)pvVar1 + 0x228),(pthread_condattr_t *)0x0);
  *(undefined8 *)((long)pvVar1 + 0x1c8) = 0x32;
  *(undefined8 *)((long)pvVar1 + 0x1b8) = 1;
  cpHastySpaceSetThreads(pvVar1,1);
  return pvVar1;
}

