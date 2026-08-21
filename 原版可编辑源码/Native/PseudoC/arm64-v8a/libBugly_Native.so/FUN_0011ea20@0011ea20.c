
void FUN_0011ea20(void)

{
  if (DAT_00176e98 == 0) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_00176e9c);
    if (DAT_00176e98 == 0) {
      FUN_0011e620(&DAT_00177490,0x80,0);
      DAT_00176e98 = 1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00176e9c);
  }
  FUN_0011e7d4(&DAT_00177490);
  return;
}

