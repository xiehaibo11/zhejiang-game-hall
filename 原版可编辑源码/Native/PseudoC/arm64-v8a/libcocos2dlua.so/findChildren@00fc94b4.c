
/* cocos2d::utils::findChildren(cocos2d::Node const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::utils::findChildren(utils *this,Node *param_1,basic_string *param_2)

{
  long lVar1;
  undefined8 *in_x8;
  code *pcVar2;
  undefined **local_70 [4];
  long *local_50;
  long local_38;
  
  local_50 = (long *)local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  local_70[0] = &PTR_FUN_01723cf0;
  (**(code **)(*(long *)this + 0x238))(this,param_1,local_70);
  if (local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00fc952c;
    pcVar2 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar2)();
LAB_00fc952c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

