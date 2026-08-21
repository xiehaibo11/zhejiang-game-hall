
/* cocos2d::ui::PageView::setIndicatorEnabled(bool) */

void __thiscall cocos2d::ui::PageView::setIndicatorEnabled(PageView *this,bool param_1)

{
  long lVar1;
  undefined4 uVar2;
  PageViewIndicator *pPVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(this + 0x950) == 0) == param_1) {
    if (param_1) {
      pPVar3 = (PageViewIndicator *)PageViewIndicator::create();
      *(PageViewIndicator **)(this + 0x950) = pPVar3;
      uVar2 = ScrollView::getDirection((ScrollView *)this);
      PageViewIndicator::setDirection(pPVar3,uVar2);
      (**(code **)(*(long *)this + 0x538))(this,*(undefined8 *)(this + 0x950),10000);
      Color3B::Color3B((Color3B *)&local_40,'d','d',0xff);
      if ((*(long *)(this + 0x950) != 0) &&
         (plVar4 = *(long **)(*(long *)(this + 0x950) + 0x330),
         (**(code **)(*plVar4 + 0x4c0))(plVar4,&local_40), *(long *)(this + 0x950) != 0)) {
        puVar5 = (undefined8 *)(**(code **)(*(long *)this + 0x168))(this);
        local_40 = CONCAT44((float)((ulong)*puVar5 >> 0x20) *
                            (float)((ulong)*(undefined8 *)(this + 0x958) >> 0x20),
                            (float)*puVar5 * (float)*(undefined8 *)(this + 0x958));
        (**(code **)(**(long **)(this + 0x950) + 0x98))(*(long **)(this + 0x950),&local_40);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x550))(this,*(long *)(this + 0x950),1);
      *(undefined8 *)(this + 0x950) = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

