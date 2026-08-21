
/* fairygui::RelationItem::releaseRefTarget(fairygui::GObject*) */

void __thiscall fairygui::RelationItem::releaseRefTarget(RelationItem *this,GObject *param_1)

{
  long lVar1;
  EventTag aEStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (GObject *)0x0) {
    EventTag::EventTag(aEStack_40,this);
    UIEventDispatcher::removeEventListener((UIEventDispatcher *)param_1,0x14,aEStack_40);
    EventTag::~EventTag(aEStack_40);
    EventTag::EventTag(aEStack_40,this);
    UIEventDispatcher::removeEventListener((UIEventDispatcher *)param_1,0x15,aEStack_40);
    EventTag::~EventTag(aEStack_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

