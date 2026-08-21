
/* cocos2d::EventDispatcher::EventListenerVector::empty() const */

bool __thiscall cocos2d::EventDispatcher::EventListenerVector::empty(EventListenerVector *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 8);
  if ((plVar1 != (long *)0x0) && (*plVar1 != plVar1[1])) {
    return false;
  }
  plVar1 = *(long **)this;
  if (plVar1 != (long *)0x0) {
    return *plVar1 == plVar1[1];
  }
  return true;
}

