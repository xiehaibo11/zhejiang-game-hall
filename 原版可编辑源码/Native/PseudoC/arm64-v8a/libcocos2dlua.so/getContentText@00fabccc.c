
/* cocos2d::IMEDispatcher::getContentText() */

undefined1 * __thiscall cocos2d::IMEDispatcher::getContentText(IMEDispatcher *this)

{
  long *plVar1;
  undefined1 *puVar2;
  
  if ((*(long *)this != 0) && (plVar1 = *(long **)(*(long *)this + 0x18), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00fabce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined1 *)(**(code **)(*plVar1 + 0x58))();
    return puVar2;
  }
  return &STD_STRING_EMPTY;
}

