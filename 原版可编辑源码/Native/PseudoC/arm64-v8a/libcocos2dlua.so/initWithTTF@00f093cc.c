
/* cocos2d::Label::initWithTTF(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float, cocos2d::Size
   const&, cocos2d::TextHAlignment, cocos2d::TextVAlignment) */

void cocos2d::Label::initWithTTF
               (undefined4 param_3,Label *param_1,undefined8 param_2,basic_string *param_4,
               float *param_5)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_54;
  long local_48;
  
                    /* try { // try from 00f093e8 to 01009483 has its CatchHandler @ 00f093e8
                       catch() { ... } // from try @ 00f093e8 with catch @ 00f093e8
                       catch() { ... } // from try @ 00f09524 with catch @ 00f093e8 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FileUtils::getInstance();
  uVar3 = (**(code **)(*plVar2 + 0x128))(plVar2,param_4);
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_80,param_4);
    local_64 = 0;
    local_60 = 0;
    local_58 = 0;
    local_54 = 0;
    local_68 = param_3;
    uVar3 = (**(code **)(*(long *)param_1 + 0x530))(param_1,local_80);
    if ((uVar3 & 1) != 0) {
      fVar5 = *param_5;
      fVar6 = 0.0;
      if (*(int *)(param_1 + 0x684) != 3) {
        fVar6 = param_5[1];
      }
      if ((fVar6 != *(float *)(param_1 + 0x44c)) || (*(float *)(param_1 + 0x448) != fVar5)) {
                    /* try { // try from 00f09484 to 010094fb has its CatchHandler @ 00f09604 */
        *(float *)(param_1 + 0x448) = fVar5;
        *(float *)(param_1 + 0x44c) = fVar6;
        *(float *)(param_1 + 0x440) = fVar5;
        *(float *)(param_1 + 0x444) = fVar6;
        *(float *)(param_1 + 0x43c) = fVar5;
        param_1[0x30c] = (Label)0x1;
        if ((*(int *)(param_1 + 0x684) == 2) && (0.0 < *(float *)(param_1 + 0x688))) {
          restoreFontSize(param_1);
        }
      }
      (**(code **)(*(long *)param_1 + 0x588))(param_1,param_2);
    }
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

