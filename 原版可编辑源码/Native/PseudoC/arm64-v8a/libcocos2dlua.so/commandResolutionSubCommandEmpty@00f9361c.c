
/* cocos2d::Console::commandResolutionSubCommandEmpty(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::Console::commandResolutionSubCommandEmpty(int param_1,basic_string *param_2)

{
  long lVar1;
  long lVar2;
  Director *this;
  Size *pSVar3;
  long *plVar4;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Director *)Director::getInstance();
  pSVar3 = (Size *)Director::getWinSize(this);
  Size::Size((Size *)&local_40,pSVar3);
  Director::getWinSizeInPixels();
  plVar4 = *(long **)(this + 0x108);
  pSVar3 = (Size *)(**(code **)(*plVar4 + 200))(plVar4);
  Size::Size((Size *)&local_50,pSVar3);
  lVar2 = plVar4[0xd];
  (**(code **)(*plVar4 + 0xb0))(&local_60,plVar4);
  Utility::mydprintf((int)param_2,
                     "Window Size:\n\t%d x %d (points)\n\t%d x %d (pixels)\n\t%d x %d (design resolution)\nResolution Policy: %d\nVisible Rect:\n\torigin: %d x %d\n\tsize: %d x %d\n"
                     ,(int)local_40,(int)fStack_3c,(int)local_48,(int)fStack_44,(int)local_50,
                     (int)fStack_4c,(int)lVar2,(int)local_60,(int)fStack_5c,(int)local_58,
                     (int)fStack_54);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

