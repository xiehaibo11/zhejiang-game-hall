
/* cocos2d::ui::ScrollView::initRenderer() */

void __thiscall cocos2d::ui::ScrollView::initRenderer(ScrollView *this)

{
  long lVar1;
  long *plVar2;
  Color3B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Widget::initRenderer();
  plVar2 = (long *)Layout::create();
  *(long **)(this + 0x7b8) = plVar2;
  Color3B::Color3B(aCStack_40,0xff,0xff,0xff);
  (**(code **)(*plVar2 + 0x4c0))(plVar2,aCStack_40);
                    /* try { // try from 00dbb1dc to 00ebb1eb has its CatchHandler @ 00dbb280 */
  (**(code **)(**(long **)(this + 0x7b8) + 0x490))(*(long **)(this + 0x7b8),0xff);
                    /* try { // try from 00dbb1f4 to 00ebb20f has its CatchHandler @ 00dbb284 */
  (**(code **)(**(long **)(this + 0x7b8) + 0x4d8))(*(long **)(this + 0x7b8),1);
  (**(code **)(**(long **)(this + 0x7b8) + 0x4a8))(*(long **)(this + 0x7b8),1);
                    /* try { // try from 00dbb220 to 00ebb223 has its CatchHandler @ 00dbb28c */
                    /* try { // try from 00dbb224 to 00ebb2a7 has its CatchHandler @ 00dbaff0 */
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x7b8),1,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

