
/* cocostudio::timeline::ActionTimelineCache::loadAnimationActionWithFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall
cocostudio::timeline::ActionTimelineCache::loadAnimationActionWithFile
          (ActionTimelineCache *this,basic_string *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  basic_string local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar2 + 0x50))(local_50,plVar2,param_1);
  plVar2 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar2 + 0x18))(local_68,plVar2,local_50);
  uVar3 = loadAnimationActionWithContent(this,param_1,local_68);
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

