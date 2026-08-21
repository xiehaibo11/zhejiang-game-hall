
/* fairygui::GObject::initDrag() */

void __thiscall fairygui::GObject::initDrag(GObject *this)

{
  long lVar1;
  code *pcVar2;
  EventTag aEStack_78 [8];
  undefined **local_70;
  code *local_68;
  undefined8 uStack_60;
  GObject *local_58;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0xfa] == (GObject)0x0) {
    EventTag::EventTag((EventTag *)&local_70,this);
    UIEventDispatcher::removeEventListener((UIEventDispatcher *)this,10,(EventTag *)&local_70);
    EventTag::~EventTag((EventTag *)&local_70);
                    /* try { // try from 00a845d0 to 00b8461b has its CatchHandler @ 00a845d0
                       catch() { ... } // from try @ 00a845d0 with catch @ 00a845d0
                       catch() { ... } // from try @ 00a84638 with catch @ 00a845d0 */
    EventTag::EventTag((EventTag *)&local_70,this);
    UIEventDispatcher::removeEventListener((UIEventDispatcher *)this,0xb,(EventTag *)&local_70);
    EventTag::~EventTag((EventTag *)&local_70);
    EventTag::EventTag((EventTag *)&local_70,this);
    UIEventDispatcher::removeEventListener((UIEventDispatcher *)this,0xc,(EventTag *)&local_70);
    EventTag::~EventTag((EventTag *)&local_70);
    goto LAB_00a84718;
  }
  local_50 = &local_70;
  local_70 = &PTR_FUN_016a6310;
  uStack_60 = 0;
  local_68 = onTouchBegin;
  local_58 = this;
  EventTag::EventTag(aEStack_78,this);
  UIEventDispatcher::addEventListener((UIEventDispatcher *)this,10,(function *)&local_70,aEStack_78)
  ;
  EventTag::~EventTag(aEStack_78);
  if (&local_70 == local_50) {
                    /* try { // try from 00a8461c to 00b84637 has its CatchHandler @ 00a846b4 */
    pcVar2 = (code *)(*local_50)[4];
LAB_00a84624:
    (*pcVar2)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_50)[5];
    goto LAB_00a84624;
  }
  local_70 = &PTR_FUN_016a6310;
                    /* try { // try from 00a84638 to 00b846eb has its CatchHandler @ 00a845d0 */
  local_50 = &local_70;
  uStack_60 = 0;
  local_68 = onTouchMove;
  local_58 = this;
  EventTag::EventTag(aEStack_78,this);
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this,0xb,(function *)&local_70,aEStack_78);
  EventTag::~EventTag(aEStack_78);
  if (&local_70 == local_50) {
    pcVar2 = (code *)(*local_50)[4];
LAB_00a8469c:
    (*pcVar2)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_50)[5];
    goto LAB_00a8469c;
  }
  local_70 = &PTR_FUN_016a6310;
  local_50 = &local_70;
                    /* catch() { ... } // from try @ 00a8461c with catch @ 00a846b4 */
  uStack_60 = 0;
  local_68 = onTouchEnd;
  local_58 = this;
  EventTag::EventTag(aEStack_78,this);
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this,0xc,(function *)&local_70,aEStack_78);
  EventTag::~EventTag(aEStack_78);
  if (&local_70 == local_50) {
    pcVar2 = (code *)(*local_50)[4];
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_00a84718;
    pcVar2 = (code *)(*local_50)[5];
  }
  (*pcVar2)();
LAB_00a84718:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

