
/* cocos2d::ui::Widget::setPositionPercent(cocos2d::Vec2 const&) */

void __thiscall cocos2d::ui::Widget::setPositionPercent(Widget *this,Vec2 *param_1)

{
  long lVar1;
  LayoutComponent *this_00;
  long lVar2;
  long *plVar3;
  Size *pSVar4;
  undefined8 uVar5;
  undefined8 local_48;
  Size local_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x380] == (Widget)0x0) {
    *(undefined8 *)(this + 0x3ac) = *(undefined8 *)param_1;
    if (((this[0x1f8] != (Widget)0x0) &&
        (lVar2 = (**(code **)(*(long *)this + 0x260))(this), lVar2 != 0)) &&
       (plVar3 = (long *)__dynamic_cast(lVar2,&Node::typeinfo,&typeinfo,0), plVar3 != (long *)0x0))
    {
      pSVar4 = (Size *)(**(code **)(*plVar3 + 0x168))();
      Size::Size(local_40,pSVar4);
      uVar5 = *(undefined8 *)(this + 0x3ac);
      local_48 = CONCAT44(local_40._4_4_ * (float)((ulong)uVar5 >> 0x20),
                          local_40._0_4_ * (float)uVar5);
      (**(code **)(*(long *)this + 0x98))(this,&local_48);
    }
  }
  else {
    this_00 = (LayoutComponent *)getOrCreateLayoutComponent(this);
    LayoutComponent::setPositionPercentX(this_00,*(float *)param_1);
    LayoutComponent::setPositionPercentY(this_00,*(float *)(param_1 + 4));
    LayoutComponent::refreshLayout(this_00);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

