
/* fairygui::Window::setCloseButton(fairygui::GObject*) */

void __thiscall fairygui::Window::setCloseButton(Window *this,GObject *param_1)

{
  long lVar1;
  code *pcVar2;
  UIEventDispatcher *pUVar3;
  EventTag aEStack_78 [8];
  undefined **local_70;
  code *local_68;
  undefined8 uStack_60;
  Window *local_58;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pUVar3 = *(UIEventDispatcher **)(this + 0x2a0);
  if (pUVar3 != (UIEventDispatcher *)0x0) {
    EventTag::EventTag((EventTag *)&local_70,this);
    UIEventDispatcher::removeEventListener(pUVar3,0xd,(EventTag *)&local_70);
    EventTag::~EventTag((EventTag *)&local_70);
    cocos2d::Ref::release(*(Ref **)(this + 0x2a0));
  }
  *(GObject **)(this + 0x2a0) = param_1;
  if (param_1 != (GObject *)0x0) {
    cocos2d::Ref::retain((Ref *)param_1);
    pUVar3 = *(UIEventDispatcher **)(this + 0x2a0);
                    /* try { // try from 00aa521c to 00ba524f has its CatchHandler @ 00aa531c */
    local_50 = &local_70;
    local_70 = &PTR_FUN_016a7900;
    uStack_60 = 0;
    local_68 = closeEventHandler;
    local_58 = this;
    EventTag::EventTag(aEStack_78,this);
                    /* try { // try from 00aa5250 to 00ba5263 has its CatchHandler @ 00aa52e8 */
    UIEventDispatcher::addEventListener(pUVar3,0xd,(function *)&local_70,aEStack_78);
    EventTag::~EventTag(aEStack_78);
                    /* try { // try from 00aa5268 to 00ba529b has its CatchHandler @ 00aa52ec */
    if (&local_70 == local_50) {
      pcVar2 = (code *)(*local_50)[4];
    }
    else {
      if (local_50 == (undefined ***)0x0) goto LAB_00aa5290;
      pcVar2 = (code *)(*local_50)[5];
    }
    (*pcVar2)();
  }
LAB_00aa5290:
                    /* try { // try from 00aa529c to 00ba5337 has its CatchHandler @ 00aa50a4 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

