
int FUN_00117d18(void)

{
  int iVar1;
  
  sigfillset((sigset_t *)&DAT_001773f8);
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_001403b0);
  if (DAT_001773e0 == 0) {
    FUN_001193a4(iVar1);
    FUN_0011dc88();
    FUN_00117e0c();
    DAT_001773e0 = 1;
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_001403b0);
  return iVar1;
}

