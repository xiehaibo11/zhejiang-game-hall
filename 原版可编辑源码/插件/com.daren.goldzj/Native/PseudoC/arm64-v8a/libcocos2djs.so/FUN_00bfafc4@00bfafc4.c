
void FUN_00bfafc4(void)

{
  uint uVar1;
  int iVar2;
  char *__nptr;
  ulong uVar3;
  
  DAT_01d3bd50 = 4;
  __nptr = getenv("UV_THREADPOOL_SIZE");
  if (__nptr != (char *)0x0) {
    DAT_01d3bd50 = atoi(__nptr);
  }
  uVar3 = (ulong)DAT_01d3bd50;
  if (DAT_01d3bd50 == 0) {
    DAT_01d3bd50 = 1;
    DAT_01d3bd58 = &DAT_01d3bd60;
  }
  else {
    if (DAT_01d3bd50 < 0x81) {
      DAT_01d3bd58 = &DAT_01d3bd60;
      if (DAT_01d3bd50 < 5) goto LAB_00bfb00c;
    }
    else {
      uVar3 = 0x80;
      DAT_01d3bd50 = 0x80;
    }
    DAT_01d3bd58 = &DAT_01d3bd60;
    DAT_01d3bd58 = (undefined *)uv__malloc(uVar3 << 3);
    if (DAT_01d3bd58 == (undefined *)0x0) {
      DAT_01d3bd58 = &DAT_01d3bd60;
      DAT_01d3bd50 = 4;
    }
  }
LAB_00bfb00c:
  iVar2 = uv_cond_init(&DAT_01d3bd80);
  if ((iVar2 == 0) && (iVar2 = uv_mutex_init(&DAT_01d3bdb0), iVar2 == 0)) {
    DAT_01d3bde0 = &DAT_01d3bde0;
    DAT_01d3bde8 = &DAT_01d3bde0;
    uVar1 = 0;
    if (DAT_01d3bd50 != 0) {
      do {
        iVar2 = uv_thread_create(DAT_01d3bd58 + (ulong)uVar1 * 8,FUN_00bfb0fc,0);
        if (iVar2 != 0) goto LAB_00bfb0e4;
        uVar1 = uVar1 + 1;
      } while (uVar1 < DAT_01d3bd50);
    }
    DAT_01d3bdf0 = 1;
    return;
  }
LAB_00bfb0e4:
                    /* WARNING: Subroutine does not return */
  abort();
}

