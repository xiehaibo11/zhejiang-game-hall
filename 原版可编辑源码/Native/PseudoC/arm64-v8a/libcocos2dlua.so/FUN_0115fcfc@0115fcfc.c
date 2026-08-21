
bool FUN_0115fcfc(undefined8 *param_1)

{
  if ((pthread_mutex_t *)*param_1 != (pthread_mutex_t *)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)*param_1);
    if (1 < *(uint *)(param_1 + 1)) {
      do {
        pthread_cond_wait((pthread_cond_t *)((pthread_mutex_t *)*param_1 + 1),
                          (pthread_mutex_t *)*param_1);
      } while (*(int *)(param_1 + 1) != 1);
    }
    pthread_mutex_unlock((pthread_mutex_t *)*param_1);
  }
  return *(int *)(param_1 + 5) == 0;
}

