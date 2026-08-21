
void FUN_00110bfc(void)

{
  log2Console(4,"CrashReport-Native","Initiate native log.");
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0013f300);
  if (DAT_0013f328 == 0) {
    DAT_0013f328 = createCircularQueue(0x7800);
    insertCircularQueue(DAT_0013f328,&DAT_001260e0,3);
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013f300);
  log2Console(4,"CrashReport-Native","Initialization of native log have been completed.");
  return;
}

