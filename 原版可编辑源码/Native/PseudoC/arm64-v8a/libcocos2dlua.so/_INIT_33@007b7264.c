
void _INIT_33(void)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  DAT_01785898 = 0;
  DAT_017858a0 = 0;
  DAT_017858a8 = 0x3f0000003dcccccd;
  DAT_017858b0 = 0x3f000000;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"ComAudio");
  cocos2d::ObjectFactory::TInfo::TInfo
            ((TInfo *)cocostudio::ComAudio::Type,(basic_string *)local_50,
             cocostudio::ComAudio::createInstance);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  __cxa_atexit(cocos2d::ObjectFactory::TInfo::~TInfo,cocostudio::ComAudio::Type,&PTR_LOOP_016979c0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &cocostudio::ComAudio::COMPONENT_NAME,"CCComAudio");
  __cxa_atexit(std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               ~basic_string,&cocostudio::ComAudio::COMPONENT_NAME,&PTR_LOOP_016979c0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

