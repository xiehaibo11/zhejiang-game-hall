
bool __cxa_uncaught_exception(void)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = __cxa_get_globals_fast();
  bVar1 = false;
  if (lVar2 != 0) {
    bVar1 = *(int *)(lVar2 + 8) != 0;
  }
  return bVar1;
}

