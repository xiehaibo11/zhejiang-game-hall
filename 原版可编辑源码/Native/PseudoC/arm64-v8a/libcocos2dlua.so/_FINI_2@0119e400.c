
void _FINI_2(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (DAT_01793230 != 0) {
    uv_mutex_lock(&DAT_01793278);
    DAT_01793248 = &DAT_01793220;
    DAT_01793250 = DAT_01793228;
    *DAT_01793228 = &DAT_01793248;
    DAT_01793228 = &DAT_01793248;
    if (DAT_01793238 != 0) {
      uv_cond_signal(&DAT_017932a0);
    }
    uv_mutex_unlock(&DAT_01793278);
    if (DAT_01793230 != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        iVar1 = uv_thread_join(DAT_01793240 + lVar2);
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 8;
      } while (uVar3 < DAT_01793230);
    }
    if (DAT_01793240 != &DAT_01793258) {
      FUN_0119f27c();
    }
    uv_mutex_destroy(&DAT_01793278);
    uv_cond_destroy(&DAT_017932a0);
    DAT_01793240 = (undefined *)0x0;
    DAT_01793230 = 0;
  }
  return;
}

