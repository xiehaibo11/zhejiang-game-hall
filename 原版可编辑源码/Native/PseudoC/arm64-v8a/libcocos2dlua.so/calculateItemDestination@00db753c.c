
/* cocos2d::ui::ListView::calculateItemDestination(cocos2d::Vec2 const&, cocos2d::ui::Widget*,
   cocos2d::Vec2 const&) */

void cocos2d::ui::ListView::calculateItemDestination(Vec2 *param_1,Widget *param_2,Vec2 *param_3)

{
  long lVar1;
  Size *pSVar2;
  Size local_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_1 + 0x168))();
  Widget::getLeftBoundary((Widget *)param_3);
  Widget::getBottomBoundary((Widget *)param_3);
  pSVar2 = (Size *)(**(code **)(*(long *)param_3 + 0x168))(param_3);
  Size::Size(local_50,pSVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

