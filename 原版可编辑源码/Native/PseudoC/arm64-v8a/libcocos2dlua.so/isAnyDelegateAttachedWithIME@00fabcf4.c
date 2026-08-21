
/* cocos2d::IMEDispatcher::isAnyDelegateAttachedWithIME() const */

bool __thiscall cocos2d::IMEDispatcher::isAnyDelegateAttachedWithIME(IMEDispatcher *this)

{
  if (*(long *)this != 0) {
    return *(long *)(*(long *)this + 0x18) != 0;
  }
  return false;
}

