
void FUN_00114b04(void)

{
  if (DAT_00140350 != 0) {
    return;
  }
  log2Console(4,"eup","Initiate native log.");
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00140358);
  if (DAT_00140350 == 0) {
    DAT_00140350 = createCircularQueue(0x7800);
    insertCircularQueue(DAT_00140350,&DAT_001281ab,3);
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00140358);
  log2Console(4,"eup","Initialization of native log have been completed.");
  return;
}

