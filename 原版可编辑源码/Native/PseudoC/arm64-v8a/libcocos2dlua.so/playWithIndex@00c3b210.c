
/* cocostudio::ArmatureAnimation::playWithIndex(int, int, int) */

void __thiscall
cocostudio::ArmatureAnimation::playWithIndex
          (ArmatureAnimation *this,int param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(this + 0x58);
  if (-1 < param_1) {
    lVar2 = *(long *)(lVar4 + 0x68);
    uVar3 = (*(long *)(lVar4 + 0x70) - lVar2 >> 3) * -0x5555555555555555;
    if ((uint)param_1 <= uVar3 && uVar3 - (uint)param_1 != 0) goto LAB_00c3b2b0;
  }
  __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                      "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/cocostudio/CCArmatureAnimation.cpp"
                      ,"playWithIndex",0x10c);
  lVar2 = *(long *)(lVar4 + 0x68);
  uVar3 = (*(long *)(lVar4 + 0x70) - lVar2 >> 3) * -0x5555555555555555;
LAB_00c3b2b0:
  if (uVar3 <= (ulong)(long)param_1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_60,(basic_string *)(lVar2 + (long)param_1 * 0x18));
  (**(code **)(*(long *)this + 0xd0))(this,local_60,param_2,param_3);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

