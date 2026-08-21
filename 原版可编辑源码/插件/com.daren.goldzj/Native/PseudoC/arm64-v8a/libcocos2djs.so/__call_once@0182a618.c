
/* std::__ndk1::__call_once(unsigned long volatile&, void*, void (*)(void*)) */

int std::__ndk1::__call_once(ulong *param_1,void *param_2,_func_void_void_ptr *param_3)

{
  int iVar1;
  ulong uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_01d53dc0);
  uVar2 = *param_1;
  while (uVar2 == 1) {
    pthread_cond_wait((pthread_cond_t *)&DAT_01d53de8,(pthread_mutex_t *)&DAT_01d53dc0);
    uVar2 = *param_1;
  }
  if (*param_1 != 0) {
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_01d53dc0);
    return iVar1;
  }
  *param_1 = 1;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_01d53dc0);
  (*param_3)(param_2);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_01d53dc0);
  *param_1 = 0xffffffffffffffff;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_01d53dc0);
  iVar1 = pthread_cond_broadcast((pthread_cond_t *)&DAT_01d53de8);
  return iVar1;
}

