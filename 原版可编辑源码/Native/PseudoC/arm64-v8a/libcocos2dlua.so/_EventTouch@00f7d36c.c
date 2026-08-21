
/* cocos2d::EventTouch::~EventTouch() */

void __thiscall cocos2d::EventTouch::~EventTouch(EventTouch *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x40);
  *(undefined ***)this = &PTR__EventTouch_01721fe8;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar1;
    operator_delete(pvVar1);
  }
  Event::~Event((Event *)this);
  operator_delete(this);
  return;
}

