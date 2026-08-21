
/* cocos2d::extension::TableView::_offsetFromIndex(long) */

undefined4 __thiscall cocos2d::extension::TableView::_offsetFromIndex(TableView *this,long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  Size aSStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00e18e44 with catch @ 00e18ea0 */
  Size::Size(aSStack_50);
                    /* catch() { ... } // from try @ 00e18eec with catch @ 00e18ebc */
  uVar2 = *(undefined4 *)(*(long *)(this + 0x488) + param_1 * 4);
  if (*(int *)(this + 0x330) != 0) {
    uVar2 = 0;
  }
  (**(code **)(**(long **)(this + 0x4d0) + 0x10))(aSStack_50,*(long **)(this + 0x4d0),this,param_1);
                    /* try { // try from 00e18ee4 to 00f18eeb has its CatchHandler @ 00e18f34 */
  if (*(int *)(this + 0x478) == 0) {
                    /* try { // try from 00e18eec to 00f18f4f has its CatchHandler @ 00e18ebc */
    plVar3 = (long *)ScrollView::getContainer((ScrollView *)this);
    (**(code **)(*plVar3 + 0x168))();
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00e18ee4 with catch @ 00e18f34 */
  return uVar2;
}

