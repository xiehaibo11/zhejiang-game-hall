
void FUN_00bfb0fc(void)

{
  long *plVar1;
  undefined8 *puVar2;
  
  while( true ) {
    uv_mutex_lock(&DAT_01d3bdb0);
    if ((long **)DAT_01d3bde0 == &DAT_01d3bde0) {
      do {
        DAT_01d3bdf4 = DAT_01d3bdf4 + 1;
        uv_cond_wait(&DAT_01d3bd80,&DAT_01d3bdb0);
        DAT_01d3bdf4 = DAT_01d3bdf4 + -1;
      } while ((long **)DAT_01d3bde0 == &DAT_01d3bde0);
    }
    plVar1 = DAT_01d3bde0;
    if (DAT_01d3bde0 == &DAT_01d3be00) break;
    *(long *)DAT_01d3bde0[1] = *DAT_01d3bde0;
    *(long *)(*plVar1 + 8) = plVar1[1];
    *plVar1 = (long)plVar1;
    plVar1[1] = (long)plVar1;
    uv_mutex_unlock(&DAT_01d3bdb0);
    (*(code *)plVar1[-3])(plVar1 + -3);
    uv_mutex_lock(plVar1[-1] + 0x88);
    plVar1[-3] = 0;
    *plVar1 = plVar1[-1] + 0x78;
    puVar2 = *(undefined8 **)(plVar1[-1] + 0x80);
    plVar1[1] = (long)puVar2;
    *puVar2 = plVar1;
    *(long **)(plVar1[-1] + 0x80) = plVar1;
    uv_async_send(plVar1[-1] + 0xb0);
    uv_mutex_unlock(plVar1[-1] + 0x88);
  }
  uv_cond_signal(&DAT_01d3bd80);
  uv_mutex_unlock(&DAT_01d3bdb0);
  return;
}

