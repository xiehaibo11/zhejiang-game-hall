
void _INIT_40(void)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  DAT_01786478 = 0;
  DAT_01786480 = 0;
  DAT_01786488 = 0x3f0000003dcccccd;
  DAT_01786490 = 0x3f000000;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,"ListViewReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            ((TInfo *)cocostudio::ListViewReader::__Type,(basic_string *)local_40,
             cocostudio::ListViewReader::createInstance);
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  __cxa_atexit(cocos2d::ObjectFactory::TInfo::~TInfo,cocostudio::ListViewReader::__Type,
               &PTR_LOOP_016979c0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

