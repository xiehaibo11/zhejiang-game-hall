
/* fairygui::GList::addChildAt(fairygui::GObject*, int) */

GObject * __thiscall fairygui::GList::addChildAt(GList *this,GObject *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  EventTag aEStack_88 [8];
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  GList *local_68;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  GComponent::addChildAt((GComponent *)this,param_1,param_2);
  if ((param_1 != (GObject *)0x0) &&
     (lVar2 = __dynamic_cast(param_1,&GObject::typeinfo,&GButton::typeinfo,0), lVar2 != 0)) {
    GButton::setSelected((GButton *)param_1,false);
    param_1[0x34c] = (GObject)0x0;
  }
  local_60 = &local_80;
  local_80 = &PTR_FUN_016a5d10;
  uStack_70 = 0;
  local_78 = onItemTouchBegin;
  local_68 = this;
  EventTag::EventTag(aEStack_88,this);
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)param_1,10,(function *)&local_80,aEStack_88);
  EventTag::~EventTag(aEStack_88);
  if (&local_80 == local_60) {
    pcVar3 = (code *)(*local_60)[4];
LAB_00a77e10:
    (*pcVar3)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar3 = (code *)(*local_60)[5];
    goto LAB_00a77e10;
  }
  local_80 = &PTR_FUN_016a5d10;
  local_60 = &local_80;
  uStack_70 = 0;
  local_78 = onClickItem;
  local_68 = this;
  EventTag::EventTag(aEStack_88,this);
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)param_1,0xd,(function *)&local_80,aEStack_88);
  EventTag::~EventTag(aEStack_88);
                    /* try { // try from 00a77e6c to 00b77e9f has its CatchHandler @ 00a77f6c */
  if (&local_80 == local_60) {
    pcVar3 = (code *)(*local_60)[4];
LAB_00a77e88:
    (*pcVar3)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar3 = (code *)(*local_60)[5];
    goto LAB_00a77e88;
  }
  local_80 = &PTR_FUN_016a5d10;
  local_60 = &local_80;
                    /* try { // try from 00a77ea0 to 00b77eb3 has its CatchHandler @ 00a77f38 */
  uStack_70 = 0;
  local_78 = onClickItem;
  local_68 = this;
  EventTag::EventTag(aEStack_88,this);
                    /* try { // try from 00a77eb8 to 00b77eeb has its CatchHandler @ 00a77f3c */
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)param_1,0x11,(function *)&local_80,aEStack_88);
  EventTag::~EventTag(aEStack_88);
  if (&local_80 == local_60) {
    pcVar3 = (code *)(*local_60)[4];
  }
  else {
    if (local_60 == (undefined ***)0x0) goto LAB_00a77efc;
    pcVar3 = (code *)(*local_60)[5];
                    /* try { // try from 00a77eec to 00b77f87 has its CatchHandler @ 00a77cac */
  }
  (*pcVar3)();
LAB_00a77efc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

