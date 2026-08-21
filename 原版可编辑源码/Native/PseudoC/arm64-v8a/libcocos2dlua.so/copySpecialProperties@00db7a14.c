
/* cocos2d::ui::ListView::copySpecialProperties(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::ListView::copySpecialProperties(ListView *this,Widget *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  Ref *this_00;
  undefined8 uVar6;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1 != (Widget *)0x0) &&
     (lVar2 = __dynamic_cast(param_1,&Widget::typeinfo,&typeinfo,0), lVar2 != 0)) {
    ScrollView::copySpecialProperties((Widget *)this);
    this_00 = *(Ref **)(lVar2 + 0x8b0);
    if (this_00 != (Ref *)0x0) {
      if (*(Ref **)(this + 0x8b0) != (Ref *)0x0) {
        Ref::release(*(Ref **)(this + 0x8b0));
        *(undefined8 *)(this + 0x8b0) = 0;
      }
      *(Ref **)(this + 0x8b0) = this_00;
      Ref::retain(this_00);
    }
    if (*(float *)(this + 0x8dc) != *(float *)(lVar2 + 0x8dc)) {
      *(float *)(this + 0x8dc) = *(float *)(lVar2 + 0x8dc);
      (**(code **)(*(long *)this + 0x6a8))(this);
    }
    if (*(int *)(this + 0x8d0) != *(int *)(lVar2 + 0x8d0)) {
      *(int *)(this + 0x8d0) = *(int *)(lVar2 + 0x8d0);
      (**(code **)(*(long *)this + 0x6a8))(this);
    }
    uVar6 = *(undefined8 *)(lVar2 + 0x908);
    uVar4 = *(undefined8 *)(lVar2 + 0x918);
    *(undefined8 *)(this + 0x910) = *(undefined8 *)(lVar2 + 0x910);
    *(undefined8 *)(this + 0x908) = uVar6;
    *(undefined8 *)(this + 0x918) = uVar4;
    plVar3 = *(long **)(lVar2 + 0x940);
    if (plVar3 == (long *)0x0) {
      local_50 = (long *)0x0;
    }
    else if ((long *)(lVar2 + 0x920) == plVar3) {
      local_50 = alStack_70;
      (**(code **)(*plVar3 + 0x18))(plVar3,alStack_70);
    }
    else {
      local_50 = (long *)(**(code **)(*plVar3 + 0x10))();
    }
    FUN_00db8378(alStack_70,this + 0x920);
    if (alStack_70 == local_50) {
      pcVar5 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_00db7b74;
      pcVar5 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar5)();
  }
LAB_00db7b74:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

