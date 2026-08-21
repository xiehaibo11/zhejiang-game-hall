
void _INIT_35(void)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  DAT_017859b8 = 0;
  DAT_017859c0 = 0;
  DAT_017859c8 = 0x3f0000003dcccccd;
  DAT_017859d0 = 0x3f000000;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"ComRender");
  cocos2d::ObjectFactory::TInfo::TInfo
            ((TInfo *)cocostudio::ComRender::Type,(basic_string *)local_50,
             cocostudio::ComRender::createInstance);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  __cxa_atexit(cocos2d::ObjectFactory::TInfo::~TInfo,cocostudio::ComRender::Type,&PTR_LOOP_016979c0)
  ;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &cocostudio::ComRender::COMPONENT_NAME,"CCComRender");
  __cxa_atexit(std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               ~basic_string,&cocostudio::ComRender::COMPONENT_NAME,&PTR_LOOP_016979c0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

