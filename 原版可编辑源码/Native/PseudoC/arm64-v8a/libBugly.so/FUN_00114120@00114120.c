
/* WARNING: Removing unreachable block (ram,0x0011419c) */

int FUN_00114120(void)

{
  int iVar1;
  
  sigfillset((sigset_t *)&DAT_00176348);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0013f350);
  if (DAT_00176330 == 0) {
    FUN_001159a4();
    FUN_0011ac58();
    FUN_00114534();
    DAT_00176330 = 1;
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013f350);
  return iVar1;
}

