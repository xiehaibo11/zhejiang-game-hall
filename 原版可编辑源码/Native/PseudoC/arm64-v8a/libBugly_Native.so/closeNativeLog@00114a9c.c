
void closeNativeLog(void)

{
  if (DAT_00140350 != 0) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_00140358);
    freeCircularQueue(DAT_00140350);
    DAT_00140350 = 0;
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00140358);
    log2Console(4,"eup","Native log had closed.");
    return;
  }
  return;
}

