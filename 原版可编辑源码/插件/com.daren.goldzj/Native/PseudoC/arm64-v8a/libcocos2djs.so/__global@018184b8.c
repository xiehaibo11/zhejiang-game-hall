
/* std::__ndk1::locale::__global() */

undefined8 * std::__ndk1::locale::__global(void)

{
  int iVar1;
  
  if (((DAT_01d52df8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d52df8), iVar1 != 0)) {
    if (((DAT_01d52de0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d52de0), iVar1 != 0)) {
      FUN_0180fcb8(&DAT_01d53a00,1);
      DAT_01d52dd0 = (__shared_count *)&DAT_01d53a00;
      DAT_01d52dd8 = &DAT_01d52dd0;
      __cxa_guard_release(&DAT_01d52de0);
    }
    DAT_01d52de8 = DAT_01d52dd0;
    __shared_count::__add_shared(DAT_01d52dd0);
    DAT_01d52df0 = &DAT_01d52de8;
    __cxa_guard_release(&DAT_01d52df8);
  }
  return DAT_01d52df0;
}

