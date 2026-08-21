
/* cocos2d::IMEDispatcher::dispatchKeyboardDidHide(cocos2d::IMEKeyboardNotificationInfo&) */

void __thiscall
cocos2d::IMEDispatcher::dispatchKeyboardDidHide
          (IMEDispatcher *this,IMEKeyboardNotificationInfo *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if ((lVar2 != 0) && (lVar3 = *(long *)(lVar2 + 8), lVar2 != lVar3)) {
    plVar1 = *(long **)(lVar3 + 0x10);
    while( true ) {
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x78))(plVar1,param_1);
      }
      lVar3 = *(long *)(lVar3 + 8);
      if (lVar2 == lVar3) break;
      plVar1 = *(long **)(lVar3 + 0x10);
    }
  }
  return;
}

