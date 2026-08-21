
/* fairygui::RelationItem::addRefTarget(fairygui::GObject*) */

void __thiscall fairygui::RelationItem::addRefTarget(RelationItem *this,GObject *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  EventTag aEStack_88 [8];
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  RelationItem *local_68;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 == (GObject *)0x0) goto LAB_00ac3644;
  if (*(GObject **)(*(long *)this + 0xa0) != param_1) {
    local_80 = &PTR_FUN_016aacd0;
    local_60 = &local_80;
    uStack_70 = 0;
    local_78 = onTargetXYChanged;
    local_68 = this;
    EventTag::EventTag(aEStack_88,this);
    UIEventDispatcher::addEventListener
              ((UIEventDispatcher *)param_1,0x14,(function *)&local_80,aEStack_88);
    EventTag::~EventTag(aEStack_88);
    if (&local_80 == local_60) {
      pcVar2 = (code *)(*local_60)[4];
    }
    else {
      if (local_60 == (undefined ***)0x0) goto LAB_00ac35c4;
      pcVar2 = (code *)(*local_60)[5];
    }
    (*pcVar2)();
  }
LAB_00ac35c4:
  local_80 = &PTR_FUN_016aacd0;
  local_60 = &local_80;
  uStack_70 = 0;
  local_78 = onTargetSizeChanged;
  local_68 = this;
  EventTag::EventTag(aEStack_88,this);
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)param_1,0x15,(function *)&local_80,aEStack_88);
  EventTag::~EventTag(aEStack_88);
  if (&local_80 == local_60) {
    pcVar2 = (code *)(*local_60)[4];
LAB_00ac3638:
    (*pcVar2)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_60)[5];
    goto LAB_00ac3638;
  }
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(this + 0x28) = uVar3;
LAB_00ac3644:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

