
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::__time_get_c_storage<char>::__c() const */

undefined1 * std::__ndk1::__time_get_c_storage<char>::__c(void)

{
  int iVar1;
  
  if (((DAT_01d52f80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d52f80), iVar1 != 0)) {
    DAT_01d52f78._6_2_ = 0;
    DAT_01d52f68 = 0x28;
    DAT_01d52f78._1_4_ = 0x59252053;
    DAT_01d52f70._1_7_ = 0x3a4d253a482520;
    DAT_01d52f78._0_1_ = 0x25;
    _DAT_01d52f69 = 0x25206225206125;
    DAT_01d52f70._0_1_ = 100;
    DAT_01d52f78._5_1_ = 0;
    __cxa_atexit(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01d52f68,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d52f80);
  }
  return &DAT_01d52f68;
}

