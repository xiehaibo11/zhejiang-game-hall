
void closeNativeLog(void)

{
  if (DAT_0013f328 != 0) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0013f300);
    freeCircularQueue(DAT_0013f328);
    DAT_0013f328 = 0;
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013f300);
    log2Console(4,"CrashReport-Native","Native log had closed.");
    return;
  }
  return;
}

