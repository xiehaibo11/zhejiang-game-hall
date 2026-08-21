
void _INIT_32(void)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  DAT_01785808 = 0;
  DAT_01785810 = 0;
  DAT_01785818 = 0x3f0000003dcccccd;
  DAT_01785820 = 0x3f000000;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"ComAttribute");
  cocos2d::ObjectFactory::TInfo::TInfo
            ((TInfo *)cocostudio::ComAttribute::Type,(basic_string *)local_50,
             cocostudio::ComAttribute::createInstance);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  __cxa_atexit(cocos2d::ObjectFactory::TInfo::~TInfo,cocostudio::ComAttribute::Type,
               &PTR_LOOP_016979c0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &cocostudio::ComAttribute::COMPONENT_NAME,"CCComAttribute");
  __cxa_atexit(std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               ~basic_string,&cocostudio::ComAttribute::COMPONENT_NAME,&PTR_LOOP_016979c0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

