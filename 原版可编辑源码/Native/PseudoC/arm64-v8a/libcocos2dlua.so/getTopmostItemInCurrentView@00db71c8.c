
/* cocos2d::ui::ListView::getTopmostItemInCurrentView() const */

void __thiscall cocos2d::ui::ListView::getTopmostItemInCurrentView(ListView *this)

{
  long lVar1;
  Size *pSVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_38;
  Size local_30 [8];
  long local_28;
  
                    /* catch() { ... } // from try @ 00db7150 with catch @ 00db71d0 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00db7120 with catch @ 00db71e0 */
  if (*(int *)(this + 0x7c0) == 1) {
    pSVar2 = (Size *)(**(code **)(*(long *)this + 0x168))();
    Size::Size(local_30,pSVar2);
    puVar3 = (undefined8 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
                    /* try { // try from 00db7238 to 00eb723b has its CatchHandler @ 00db72d0 */
    local_38 = CONCAT44(local_30._4_4_ * 1.0 - (float)((ulong)*puVar3 >> 0x20),
                        local_30._0_4_ * 0.5 - (float)*puVar3);
    uVar4 = getClosestItemToPosition(this,(Vec2 *)&local_38,(Vec2 *)&Vec2::ANCHOR_MIDDLE);
  }
  else {
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00db7278 to 00eb727b has its CatchHandler @ 00db72bc */
  __stack_chk_fail(uVar4);
}

