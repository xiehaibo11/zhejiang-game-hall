
/* cocos2d::ui::PageView::setDirection(cocos2d::ui::ScrollView::Direction) */

void __thiscall cocos2d::ui::PageView::setDirection(PageView *this,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ListView::setDirection();
  if (param_2 == 2) {
    uVar3 = 0x3dcccccd3f000000;
  }
  else {
    if (param_2 != 1) goto LAB_00db8ac4;
    uVar3 = 0x3f0000003dcccccd;
  }
  *(undefined8 *)(this + 0x958) = uVar3;
LAB_00db8ac4:
  if ((*(PageViewIndicator **)(this + 0x950) != (PageViewIndicator *)0x0) &&
     (PageViewIndicator::setDirection(*(PageViewIndicator **)(this + 0x950),param_2),
     *(long *)(this + 0x950) != 0)) {
    puVar2 = (undefined8 *)(**(code **)(*(long *)this + 0x168))(this);
    local_40 = CONCAT44((float)((ulong)*puVar2 >> 0x20) *
                        (float)((ulong)*(undefined8 *)(this + 0x958) >> 0x20),
                        (float)*puVar2 * (float)*(undefined8 *)(this + 0x958));
    (**(code **)(**(long **)(this + 0x950) + 0x98))(*(long **)(this + 0x950),&local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

