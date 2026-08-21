
/* cocos2d::TimerTargetCallback::~TimerTargetCallback() */

void __thiscall cocos2d::TimerTargetCallback::~TimerTargetCallback(TimerTargetCallback *this)

{
  TimerTargetCallback *pTVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__TimerTargetCallback_01723780;
  if (((byte)this[0x90] & 1) != 0) {
    operator_delete(*(void **)(this + 0xa0));
  }
  pTVar1 = *(TimerTargetCallback **)(this + 0x80);
  if (this + 0x60 == pTVar1) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x20);
  }
  else {
    if (pTVar1 == (TimerTargetCallback *)0x0) goto LAB_00fb6aa4;
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00fb6aa4:
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

