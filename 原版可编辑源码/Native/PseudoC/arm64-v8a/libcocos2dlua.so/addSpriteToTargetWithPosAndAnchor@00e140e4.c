
/* cocos2d::extension::ControlUtils::addSpriteToTargetWithPosAndAnchor(char const*, cocos2d::Node*,
   cocos2d::Vec2, cocos2d::Vec2) */

long * cocos2d::extension::ControlUtils::addSpriteToTargetWithPosAndAnchor
                 (undefined4 param_1_00,undefined4 param_2_00,undefined4 param_3,undefined4 param_4,
                 char *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_3;
  uStack_44 = param_4;
  local_40 = param_1_00;
  uStack_3c = param_2_00;
                    /* try { // try from 00e14114 to 00f141b7 has its CatchHandler @ 00e13e58 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,param_1);
  plVar2 = (long *)Sprite::createWithSpriteFrameName((basic_string *)local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (plVar2 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00e140b8 with catch @ 00e14140 */
                    /* catch() { ... } // from try @ 00e140dc with catch @ 00e1414c */
    (**(code **)(*plVar2 + 0x98))(plVar2,&local_40);
    (**(code **)(*plVar2 + 0x148))(plVar2,&local_48);
    (**(code **)(*param_2 + 0x208))(param_2,plVar2);
  }
                    /* catch() { ... } // from try @ 00e13fa8 with catch @ 00e14180 */
                    /* catch() { ... } // from try @ 00e13f3c with catch @ 00e14184 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00e13f20 with catch @ 00e14194 */
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

