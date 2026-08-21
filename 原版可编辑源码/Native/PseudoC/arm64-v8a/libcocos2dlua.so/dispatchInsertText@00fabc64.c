
/* cocos2d::IMEDispatcher::dispatchInsertText(char const*, unsigned long) */

void __thiscall
cocos2d::IMEDispatcher::dispatchInsertText(IMEDispatcher *this,char *param_1,ulong param_2)

{
  long *plVar1;
  
  if ((((param_2 != 0) && (param_1 != (char *)0x0)) && (*(long *)this != 0)) &&
     (plVar1 = *(long **)(*(long *)this + 0x18), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00fabc84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x40))();
    return;
  }
  return;
}

