
/* fairygui::ScrollPane::~ScrollPane() */

void __thiscall fairygui::ScrollPane::~ScrollPane(ScrollPane *this)

{
  long lVar1;
  
  *(undefined ***)this = &PTR__ScrollPane_016a7300;
  lVar1 = cocos2d::Director::getInstance();
  cocos2d::Scheduler::unschedule(*(_func_void_float **)(lVar1 + 0xa0),(Ref *)tweenUpdate);
  lVar1 = cocos2d::Director::getInstance();
  cocos2d::Scheduler::unschedule(*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_refresh);
  if (*(Ref **)(this + 0x110) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x110));
  }
  if (*(Ref **)(this + 0x118) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x118));
  }
  if (*(Ref **)(this + 0x120) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x120));
  }
  if (*(Ref **)(this + 0x128) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x128));
  }
  if (_draggingPane == this) {
    _draggingPane = (ScrollPane *)0x0;
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

