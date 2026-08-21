
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* v8::internal::BasicBlockProfiler::Get() */

undefined8 * v8::internal::BasicBlockProfiler::Get(void)

{
  int iVar1;
  
  if (((DAT_01d46b48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d46b48), iVar1 != 0)) {
    uRam0000000001d46b28 = 0;
    _DAT_01d46b20 = 0;
    DAT_01d46b40 = 0;
    uRam0000000001d46b38 = 0;
    _DAT_01d46b30 = 0;
    DAT_01d46b08 = &DAT_01d46b08;
    DAT_01d46b10 = &DAT_01d46b08;
    DAT_01d46b18 = 0;
    base::Mutex::Mutex((Mutex *)&DAT_01d46b20);
    __cxa_guard_release(&DAT_01d46b48);
  }
  return &DAT_01d46b08;
}

