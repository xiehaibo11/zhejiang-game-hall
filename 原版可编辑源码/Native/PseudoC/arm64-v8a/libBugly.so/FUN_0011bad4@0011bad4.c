
void FUN_0011bad4(void)

{
  if (DAT_00175e30 == 0) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_00175e38);
    if (DAT_00175e30 == 0) {
      FUN_0011b85c(&DAT_001763e0,0x80,0);
      DAT_00175e30 = 1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00175e38);
  }
  FUN_0011b930(&DAT_001763e0);
  return;
}

