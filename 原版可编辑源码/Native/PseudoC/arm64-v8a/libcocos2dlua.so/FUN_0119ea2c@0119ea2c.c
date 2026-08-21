
void FUN_0119ea2c(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  uv_sem_post();
  while( true ) {
    uv_mutex_lock(&DAT_01793278);
    if ((long **)DAT_01793220 == &DAT_01793220) {
      do {
        DAT_01793238 = DAT_01793238 + 1;
        uv_cond_wait(&DAT_017932a0,&DAT_01793278);
        DAT_01793238 = DAT_01793238 + -1;
      } while ((long **)DAT_01793220 == &DAT_01793220);
    }
    plVar1 = DAT_01793220;
    if (DAT_01793220 == &DAT_01793248) break;
    *(long *)DAT_01793220[1] = *DAT_01793220;
    *(long *)(*plVar1 + 8) = plVar1[1];
    *plVar1 = (long)plVar1;
    plVar1[1] = (long)plVar1;
    uv_mutex_unlock(&DAT_01793278);
    plVar3 = plVar1 + -3;
    (*(code *)*plVar3)(plVar3);
    uv_mutex_lock(plVar1[-1] + 0x88);
    *plVar3 = 0;
    *plVar1 = plVar1[-1] + 0x78;
    puVar2 = *(undefined8 **)(plVar1[-1] + 0x80);
    plVar1[1] = (long)puVar2;
    *puVar2 = plVar1;
    *(long **)(plVar1[-1] + 0x80) = plVar1;
    uv_async_send(plVar1[-1] + 0xb0);
    uv_mutex_unlock(plVar1[-1] + 0x88);
  }
  uv_cond_signal(&DAT_017932a0);
  uv_mutex_unlock(&DAT_01793278);
  return;
}

