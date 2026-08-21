
/* fairygui::GRoot::~GRoot() */

void __thiscall fairygui::GRoot::~GRoot(GRoot *this)

{
  long lVar1;
  WeakPtr *pWVar2;
  InputProcessor *this_00;
  WeakPtr *pWVar3;
  WeakPtr *pWVar4;
  
  this_00 = *(InputProcessor **)(this + 0x288);
  *(undefined ***)this = &PTR__GRoot_016a65f8;
  if (this_00 != (InputProcessor *)0x0) {
    InputProcessor::~InputProcessor(this_00);
    operator_delete(this_00);
  }
  if (*(Ref **)(this + 0x298) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x298));
  }
  if (*(Ref **)(this + 0x2d8) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x2d8));
  }
  if (*(Ref **)(this + 0x290) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x290));
  }
  lVar1 = cocos2d::Director::getInstance();
  cocos2d::Scheduler::unschedule
            (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_doShowTooltipsWin);
  if (*(long *)(this + 0x280) != 0) {
    lVar1 = cocos2d::Director::getInstance();
    cocos2d::EventDispatcher::removeEventListener
              (*(EventDispatcher **)(lVar1 + 0xb0),*(EventListener **)(this + 0x280));
  }
  pWVar4 = *(WeakPtr **)(this + 0x2b8);
  if (pWVar4 != (WeakPtr *)0x0) {
    pWVar3 = *(WeakPtr **)(this + 0x2c0);
    pWVar2 = pWVar4;
    if (pWVar3 != pWVar4) {
      do {
        pWVar3 = pWVar3 + -8;
        WeakPtr::~WeakPtr(pWVar3);
      } while (pWVar4 != pWVar3);
      pWVar2 = *(WeakPtr **)(this + 0x2b8);
    }
    *(WeakPtr **)(this + 0x2c0) = pWVar4;
    operator_delete(pWVar2);
  }
  pWVar4 = *(WeakPtr **)(this + 0x2a0);
  if (pWVar4 != (WeakPtr *)0x0) {
    pWVar3 = *(WeakPtr **)(this + 0x2a8);
    pWVar2 = pWVar4;
    if (pWVar3 != pWVar4) {
      do {
        pWVar3 = pWVar3 + -8;
                    /* try { // try from 00a886ec to 00b88747 has its CatchHandler @ 00a89670 */
        WeakPtr::~WeakPtr(pWVar3);
      } while (pWVar4 != pWVar3);
      pWVar2 = *(WeakPtr **)(this + 0x2a0);
    }
    *(WeakPtr **)(this + 0x2a8) = pWVar4;
    operator_delete(pWVar2);
  }
  GComponent::~GComponent((GComponent *)this);
  return;
}

