
undefined4 __cxa_uncaught_exceptions(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = __cxa_get_globals_fast();
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 8);
  }
  return uVar1;
}

