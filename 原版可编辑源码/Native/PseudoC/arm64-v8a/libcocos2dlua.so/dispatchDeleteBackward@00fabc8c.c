
/* cocos2d::IMEDispatcher::dispatchDeleteBackward() */

void __thiscall cocos2d::IMEDispatcher::dispatchDeleteBackward(IMEDispatcher *this)

{
  long *plVar1;
  
  if ((*(long *)this != 0) && (plVar1 = *(long **)(*(long *)this + 0x18), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00fabca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x48))();
    return;
  }
  return;
}

