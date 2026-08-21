
/* cocos2d::FileUtils::getStringFromFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::FileUtils::getStringFromFile(basic_string *param_1)

{
  long lVar1;
  undefined8 in_x1;
  undefined8 *in_x8;
  undefined **local_38 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  local_38[0] = &PTR__ResizableBuffer_01c66df0;
  (**(code **)(*(long *)param_1 + 0x28))(param_1,in_x1,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

