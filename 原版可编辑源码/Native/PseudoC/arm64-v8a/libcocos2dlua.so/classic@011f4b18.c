
/* std::__ndk1::locale::classic() */

undefined8 * std::__ndk1::locale::classic(void)

{
  int iVar1;
  
  if (((DAT_017942f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_017942f0), iVar1 != 0)) {
    FUN_011f2770(&DAT_01794f10,1);
    DAT_017942e0 = &DAT_01794f10;
    DAT_017942e8 = &DAT_017942e0;
    __cxa_guard_release(&DAT_017942f0);
  }
  return DAT_017942e8;
}

