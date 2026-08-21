
/* cocos2d::IMEDispatcher::dispatchControlKey(cocos2d::EventKeyboard::KeyCode) */

void cocos2d::IMEDispatcher::dispatchControlKey(long *param_1)

{
  long *plVar1;
  
  if ((*param_1 != 0) && (plVar1 = *(long **)(*param_1 + 0x18), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00fabcc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))();
    return;
  }
  return;
}

