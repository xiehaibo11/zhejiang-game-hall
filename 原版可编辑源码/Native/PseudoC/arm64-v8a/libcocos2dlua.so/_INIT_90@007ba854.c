
void _INIT_90(void)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  DAT_01788500 = 0;
  DAT_01788508 = 0;
  DAT_01788510 = 0x3f0000003dcccccd;
  DAT_01788518 = 0x3f000000;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,"TextField");
  cocos2d::ObjectFactory::TInfo::TInfo
            ((TInfo *)cocos2d::ui::TextField::__Type,(basic_string *)local_40,
             cocos2d::ui::TextField::createInstance);
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  __cxa_atexit(cocos2d::ObjectFactory::TInfo::~TInfo,cocos2d::ui::TextField::__Type,
               &PTR_LOOP_016979c0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

