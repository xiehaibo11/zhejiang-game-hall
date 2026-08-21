
/* cocos2d::MenuItemImage::initWithNormalImage(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Ref*)) */

undefined8
cocos2d::MenuItemImage::initWithNormalImage
          (basic_string *param_1,basic_string *param_2,basic_string *param_3,Ref *param_4,
          _func_void_Ref_ptr *param_5)

{
  long lVar1;
  code *pcVar2;
  undefined **local_60 [3];
  _func_void_Ref_ptr *p_Stack_48;
  long *local_40;
  long local_28;
  
                    /* try { // try from 00f20384 to 0102038b has its CatchHandler @ 00f20668 */
  local_40 = (long *)local_60;
                    /* try { // try from 00f2038c to 010204e3 has its CatchHandler @ 00f20334 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60[0] = &PTR_FUN_016d1d18;
  p_Stack_48 = param_5;
  initWithNormalImage((MenuItemImage *)param_1,param_2,param_3,(basic_string *)param_4,
                      (function *)local_60);
  if (local_60 == (undefined ***)local_40) {
    pcVar2 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00f203ec;
    pcVar2 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar2)();
LAB_00f203ec:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

