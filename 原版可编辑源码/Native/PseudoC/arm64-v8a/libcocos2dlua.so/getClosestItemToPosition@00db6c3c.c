
/* cocos2d::ui::ListView::getClosestItemToPosition(cocos2d::Vec2 const&, cocos2d::Vec2 const&) const
    */

void __thiscall
cocos2d::ui::ListView::getClosestItemToPosition(ListView *this,Vec2 *param_1,Vec2 *param_2)

{
  long lVar1;
  ulong uVar2;
  Size *pSVar3;
  long lVar4;
  Widget *pWVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(undefined8 **)(this + 0x8b8) == *(undefined8 **)(this + 0x8c0)) {
    uVar8 = 0;
  }
  else {
    pWVar5 = (Widget *)**(undefined8 **)(this + 0x8b8);
    fVar6 = (float)Widget::getLeftBoundary(pWVar5);
    fVar7 = (float)Widget::getBottomBoundary(pWVar5);
    pSVar3 = (Size *)(**(code **)(*(long *)pWVar5 + 0x168))(pWVar5);
    Size::Size((Size *)&local_60,pSVar3);
    uVar2 = (ulong)local_60 >> 0x20;
    local_60._0_4_ =
         (float)*(undefined8 *)param_1 - (fVar6 + (float)local_60 * (float)*(undefined8 *)param_2);
    local_60._4_4_ =
         (float)((ulong)*(undefined8 *)param_1 >> 0x20) -
         (fVar7 + (float)uVar2 * (float)((ulong)*(undefined8 *)param_2 >> 0x20));
    uVar8 = Vec2::length((Vec2 *)&local_60);
    lVar4 = (*(long *)(this + 0x8c0) - *(long *)(this + 0x8b8) >> 3) + -1;
    pWVar5 = *(Widget **)(*(long *)(this + 0x8b8) + lVar4 * 8);
    fVar6 = (float)Widget::getLeftBoundary(pWVar5);
    fVar7 = (float)Widget::getBottomBoundary(pWVar5);
    pSVar3 = (Size *)(**(code **)(*(long *)pWVar5 + 0x168))(pWVar5);
    Size::Size((Size *)&local_60,pSVar3);
    local_60 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) -
                        (fVar7 + local_60._4_4_ * (float)((ulong)*(undefined8 *)param_2 >> 0x20)),
                        (float)*(undefined8 *)param_1 -
                        (fVar6 + (float)local_60 * (float)*(undefined8 *)param_2));
    uVar9 = Vec2::length((Vec2 *)&local_60);
    uVar8 = FUN_00db6dbc(uVar8,uVar9,param_1,this + 0x8b8,param_2,0,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

