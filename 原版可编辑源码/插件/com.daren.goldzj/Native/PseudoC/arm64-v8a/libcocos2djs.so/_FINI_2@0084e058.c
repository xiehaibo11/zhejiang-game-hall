
void _FINI_2(void)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  if (DAT_01d3bdf0 != 0) {
    uv_mutex_lock(&DAT_01d3bdb0);
    DAT_01d3be08 = DAT_01d3bde8;
    DAT_01d3be00 = &DAT_01d3bde0;
    *DAT_01d3bde8 = &DAT_01d3be00;
    DAT_01d3bde8 = &DAT_01d3be00;
    if (DAT_01d3bdf4 != 0) {
      uv_cond_signal(&DAT_01d3bd80);
    }
    uVar3 = 0;
    uv_mutex_unlock(&DAT_01d3bdb0);
    if (DAT_01d3bd50 != 0) {
      do {
        iVar2 = uv_thread_join(DAT_01d3bd58 + uVar3 * 8);
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (int)uVar3 + 1;
        uVar3 = (ulong)uVar1;
      } while (uVar1 < DAT_01d3bd50);
    }
    if (DAT_01d3bd58 != &DAT_01d3bd60) {
      uv__free();
    }
    uv_mutex_destroy(&DAT_01d3bdb0);
    uv_cond_destroy(&DAT_01d3bd80);
    DAT_01d3bd58 = (undefined *)0x0;
    DAT_01d3bd50 = 0;
    DAT_01d3bdf0 = 0;
  }
  return;
}

