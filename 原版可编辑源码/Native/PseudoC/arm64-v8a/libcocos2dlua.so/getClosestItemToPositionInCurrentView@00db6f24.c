
/* cocos2d::ui::ListView::getClosestItemToPositionInCurrentView(cocos2d::Vec2 const&, cocos2d::Vec2
   const&) const */

void __thiscall
cocos2d::ui::ListView::getClosestItemToPositionInCurrentView
          (ListView *this,Vec2 *param_1,Vec2 *param_2)

{
  long lVar1;
  Size *pSVar2;
  undefined8 *puVar3;
  undefined8 local_48;
  Size local_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00db6f40 to 00eb6fbb has its CatchHandler @ 00db6f40
                       catch() { ... } // from try @ 00db6f40 with catch @ 00db6f40
                       catch() { ... } // from try @ 00db6fc4 with catch @ 00db6f40
                       catch() { ... } // from try @ 00db7040 with catch @ 00db6f40 */
  pSVar2 = (Size *)(**(code **)(*(long *)this + 0x168))();
  Size::Size(local_40,pSVar2);
  puVar3 = (undefined8 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
  local_48 = CONCAT44(local_40._4_4_ * (float)((ulong)*(undefined8 *)param_1 >> 0x20) -
                      (float)((ulong)*puVar3 >> 0x20),
                      local_40._0_4_ * (float)*(undefined8 *)param_1 - (float)*puVar3);
  getClosestItemToPosition(this,(Vec2 *)&local_48,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00db6fbc to 00eb6fc3 has its CatchHandler @ 00db709c */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00db6fc4 to 00eb7003 has its CatchHandler @ 00db6f40 */
  __stack_chk_fail();
}

