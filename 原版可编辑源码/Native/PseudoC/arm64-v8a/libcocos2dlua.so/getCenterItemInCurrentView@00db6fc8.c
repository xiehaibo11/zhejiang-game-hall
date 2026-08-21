
/* cocos2d::ui::ListView::getCenterItemInCurrentView() const */

void __thiscall cocos2d::ui::ListView::getCenterItemInCurrentView(ListView *this)

{
  long lVar1;
  Size *pSVar2;
  undefined8 *puVar3;
  undefined8 local_38;
  Size local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pSVar2 = (Size *)(**(code **)(*(long *)this + 0x168))();
  Size::Size(local_30,pSVar2);
                    /* try { // try from 00db7004 to 00eb700f has its CatchHandler @ 00db70b0 */
  puVar3 = (undefined8 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
                    /* try { // try from 00db7018 to 00eb703f has its CatchHandler @ 00db70b4 */
  local_38 = CONCAT44(local_30._4_4_ * 0.5 - (float)((ulong)*puVar3 >> 0x20),
                      local_30._0_4_ * 0.5 - (float)*puVar3);
  getClosestItemToPosition(this,(Vec2 *)&local_38,(Vec2 *)&Vec2::ANCHOR_MIDDLE);
                    /* try { // try from 00db7040 to 00eb70c7 has its CatchHandler @ 00db6f40 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

