
/* fairygui::GList::removeChildAt(int) */

void __thiscall fairygui::GList::removeChildAt(GList *this,int param_1)

{
  long lVar1;
  UIEventDispatcher *this_00;
  EventTag aEStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = *(UIEventDispatcher **)(*(long *)(this + 0x1e0) + (long)param_1 * 8);
  EventTag::EventTag(aEStack_40,this);
  UIEventDispatcher::removeEventListener(this_00,0xd,aEStack_40);
  EventTag::~EventTag(aEStack_40);
  EventTag::EventTag(aEStack_40,this);
  UIEventDispatcher::removeEventListener(this_00,10,aEStack_40);
  EventTag::~EventTag(aEStack_40);
  EventTag::EventTag(aEStack_40,this);
  UIEventDispatcher::removeEventListener(this_00,0x11,aEStack_40);
  EventTag::~EventTag(aEStack_40);
  GComponent::removeChildAt((GComponent *)this,param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

