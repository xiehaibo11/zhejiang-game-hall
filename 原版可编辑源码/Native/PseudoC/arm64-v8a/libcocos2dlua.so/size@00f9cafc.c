
/* cocos2d::EventDispatcher::EventListenerVector::size() const */

long __thiscall cocos2d::EventDispatcher::EventListenerVector::size(EventListenerVector *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 8);
  if (plVar2 == (long *)0x0) {
    lVar1 = 0;
    plVar2 = *(long **)this;
  }
  else {
    lVar1 = plVar2[1] - *plVar2 >> 3;
    plVar2 = *(long **)this;
  }
  if (plVar2 != (long *)0x0) {
    lVar1 = lVar1 + (plVar2[1] - *plVar2 >> 3);
  }
  return lVar1;
}

