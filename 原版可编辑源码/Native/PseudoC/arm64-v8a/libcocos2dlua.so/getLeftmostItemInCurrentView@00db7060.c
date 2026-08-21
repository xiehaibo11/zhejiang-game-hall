
/* cocos2d::ui::ListView::getLeftmostItemInCurrentView() const */

void __thiscall cocos2d::ui::ListView::getLeftmostItemInCurrentView(ListView *this)

{
  long lVar1;
  Size *pSVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_38;
  Size local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x7c0) == 2) {
    pSVar2 = (Size *)(**(code **)(*(long *)this + 0x168))();
                    /* catch() { ... } // from try @ 00db6fbc with catch @ 00db709c */
    Size::Size(local_30,pSVar2);
                    /* catch() { ... } // from try @ 00db7004 with catch @ 00db70b0 */
    puVar3 = (undefined8 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
                    /* catch() { ... } // from try @ 00db7018 with catch @ 00db70b4 */
                    /* try { // try from 00db70c8 to 00eb711f has its CatchHandler @ 00db70c8
                       catch() { ... } // from try @ 00db70c8 with catch @ 00db70c8
                       catch() { ... } // from try @ 00db7158 with catch @ 00db70c8 */
    local_38 = CONCAT44(local_30._4_4_ * 0.5 - (float)((ulong)*puVar3 >> 0x20),
                        local_30._0_4_ * 0.0 - (float)*puVar3);
    uVar4 = getClosestItemToPosition(this,(Vec2 *)&local_38,(Vec2 *)&Vec2::ANCHOR_MIDDLE);
  }
  else {
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

