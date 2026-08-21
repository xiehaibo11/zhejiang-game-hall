
/* cocos2d::utils::getFileMD5Hash(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void cocos2d::utils::getFileMD5Hash(basic_string *param_1)

{
  long lVar1;
  long *plVar2;
  Data *extraout_x1;
  Data aDStack_58 [16];
  undefined **local_48;
  Data *pDStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Data::Data(aDStack_58);
  plVar2 = (long *)FileUtils::getInstance();
  local_48 = &PTR__ResizableBuffer_016a7778;
  pDStack_40 = aDStack_58;
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1,&local_48);
  getDataMD5Hash((utils *)aDStack_58,extraout_x1);
  Data::~Data(aDStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

