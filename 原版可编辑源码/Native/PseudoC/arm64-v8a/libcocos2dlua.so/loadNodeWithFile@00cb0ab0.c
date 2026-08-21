
/* cocos2d::CSLoader::loadNodeWithFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall cocos2d::CSLoader::loadNodeWithFile(CSLoader *this,basic_string *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ActionTimelineCache *this_00;
  basic_string local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar2 + 0x18))(local_50,plVar2,param_1);
  uVar3 = loadNodeWithContent(this,local_50);
  this_00 = (ActionTimelineCache *)cocostudio::timeline::ActionTimelineCache::getInstance();
  cocostudio::timeline::ActionTimelineCache::loadAnimationActionWithContent
            (this_00,param_1,local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

