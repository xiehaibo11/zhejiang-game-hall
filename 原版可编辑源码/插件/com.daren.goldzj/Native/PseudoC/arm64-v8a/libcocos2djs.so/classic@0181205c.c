
/* std::__ndk1::locale::classic() */

undefined8 * std::__ndk1::locale::classic(void)

{
  int iVar1;
  
  if (((DAT_01d52de0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d52de0), iVar1 != 0)) {
    FUN_0180fcb8(&DAT_01d53a00,1);
    DAT_01d52dd0 = &DAT_01d53a00;
    DAT_01d52dd8 = &DAT_01d52dd0;
    __cxa_guard_release(&DAT_01d52de0);
  }
  return DAT_01d52dd8;
}

