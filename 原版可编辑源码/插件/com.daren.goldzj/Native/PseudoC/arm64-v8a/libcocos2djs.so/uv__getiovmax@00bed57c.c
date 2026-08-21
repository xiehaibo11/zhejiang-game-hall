
void uv__getiovmax(void)

{
  long lVar1;
  
  if (DAT_01d289c0 == -1) {
    lVar1 = sysconf(0x26);
    if ((int)lVar1 != -1) {
      DAT_01d289c0 = (int)lVar1;
      return;
    }
    DAT_01d289c0 = 1;
  }
  return;
}

