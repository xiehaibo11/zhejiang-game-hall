
/* cocos2d::FileUtils::getDataFromFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void cocos2d::FileUtils::getDataFromFile(basic_string *param_1)

{
  long lVar1;
  Data *in_x8;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  Data::Data(in_x8);
  (**(code **)(*(long *)param_1 + 0x38))(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

