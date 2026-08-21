
/* cocos2d::ui::PageView::setIndicatorPosition(cocos2d::Vec2 const&) */

void __thiscall cocos2d::ui::PageView::setIndicatorPosition(PageView *this,Vec2 *param_1)

{
  undefined8 *puVar1;
  
  if (*(long *)(this + 0x950) != 0) {
    puVar1 = (undefined8 *)(**(code **)(*(long *)this + 0x168))();
    *(ulong *)(this + 0x958) =
         CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) / (float)((ulong)*puVar1 >> 0x20),
                  (float)*(undefined8 *)param_1 / (float)*puVar1);
                    /* WARNING: Could not recover jumptable at 0x00db9b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x950) + 0x98))(*(long **)(this + 0x950),param_1);
    return;
  }
  return;
}

