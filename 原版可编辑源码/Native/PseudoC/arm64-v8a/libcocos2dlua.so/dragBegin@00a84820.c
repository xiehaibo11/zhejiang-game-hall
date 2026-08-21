
/* fairygui::GObject::dragBegin(int) */

void fairygui::GObject::dragBegin(int param_1)

{
  long lVar1;
  UIEventDispatcher *this;
  GObject *this_00;
  int in_w1;
  code *pcVar2;
  undefined4 in_s1;
  Rect aRStack_90 [16];
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  GObject *local_68;
  undefined ***local_60;
  long local_48;
  
  this = (UIEventDispatcher *)_draggingObject;
  this_00 = (GObject *)(ulong)(uint)param_1;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (_draggingObject != (GObject *)0x0) {
    *(UIEventDispatcher *)(_draggingObject + 0x1b8) = (UIEventDispatcher)0x0;
    _draggingObject = (GObject *)0x0;
    UIEventDispatcher::dispatchEvent(this,0x3e,(void *)0x0,(Value *)&cocos2d::Value::Null);
  }
  DAT_01782604 = GRoot::getTouchPosition(GRoot::_inst,in_w1);
  DAT_01782608 = in_s1;
  cocos2d::Rect::Rect(aRStack_90,(Vec2 *)&cocos2d::Vec2::ZERO,(Size *)(this_00 + 200));
  localToGlobal(this_00);
  cocos2d::Rect::operator=((Rect *)&DAT_017825f0,(Rect *)&local_80);
  _draggingObject = this_00;
  this_00[0x1b8] = (GObject)0x1;
  InputProcessor::addTouchMonitor(*(InputProcessor **)(GRoot::_inst + 0x288),in_w1,this_00);
  local_80 = &PTR_FUN_016a6310;
  uStack_70 = 0;
  local_78 = onTouchMove;
  local_68 = this_00;
  local_60 = &local_80;
  EventTag::EventTag((EventTag *)aRStack_90,this_00);
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this_00,0xb,(function *)&local_80,(EventTag *)aRStack_90);
  EventTag::~EventTag((EventTag *)aRStack_90);
  if (&local_80 == local_60) {
    pcVar2 = (code *)(*local_60)[4];
LAB_00a84970:
    (*pcVar2)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_60)[5];
    goto LAB_00a84970;
  }
  local_80 = &PTR_FUN_016a6310;
  local_60 = &local_80;
  uStack_70 = 0;
  local_78 = onTouchEnd;
  local_68 = this_00;
  EventTag::EventTag((EventTag *)aRStack_90,this_00);
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this_00,0xc,(function *)&local_80,(EventTag *)aRStack_90);
  EventTag::~EventTag((EventTag *)aRStack_90);
  if (&local_80 == local_60) {
    pcVar2 = (code *)(*local_60)[4];
  }
  else {
    if (local_60 == (undefined ***)0x0) goto LAB_00a849ec;
    pcVar2 = (code *)(*local_60)[5];
  }
  (*pcVar2)();
LAB_00a849ec:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

