
/* cocos2d::MenuItemToggle::activate() */

void __thiscall cocos2d::MenuItemToggle::activate(MenuItemToggle *this)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int local_48 [2];
  MenuItemToggle **local_40;
  MenuItemToggle *local_38;
  undefined8 uStack_30;
  long local_28;
  
                    /* try { // try from 00f2153c to 01021547 has its CatchHandler @ 00f217d0 */
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00f2154c to 01021557 has its CatchHandler @ 00f217c8 */
  if (this[0x2f9] != (MenuItemToggle)0x0) {
                    /* try { // try from 00f2155c to 01021567 has its CatchHandler @ 00f217c0 */
                    /* try { // try from 00f2156c to 01021577 has its CatchHandler @ 00f217b8 */
    lVar5 = *(long *)(this + 0x348) - *(long *)(this + 0x340) >> 3;
    iVar1 = 0;
    if (lVar5 != 0) {
      iVar1 = (int)((long)(ulong)(*(int *)(this + 0x330) + 1U) / lVar5);
    }
    setSelectedIndex(this,(*(int *)(this + 0x330) + 1U) - iVar1 * (int)lVar5);
                    /* try { // try from 00f2157c to 01021587 has its CatchHandler @ 00f217b0 */
    if (this[0x2f9] != (MenuItemToggle)0x0) {
      plVar3 = *(long **)(this + 800);
      if (plVar3 != (long *)0x0) {
                    /* try { // try from 00f2158c to 01021593 has its CatchHandler @ 00f217a8 */
                    /* try { // try from 00f21598 to 0102159f has its CatchHandler @ 00f217a0 */
        local_38 = this;
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_38);
      }
                    /* try { // try from 00f215a4 to 010215ab has its CatchHandler @ 00f21798 */
      if (*(int *)(this + 0x208) == 1) {
        local_40 = &local_38;
                    /* try { // try from 00f215b0 to 010215b7 has its CatchHandler @ 00f21790 */
        uStack_30 = 0;
        local_48[0] = *(int *)(this + 0x208);
        local_38 = this;
                    /* try { // try from 00f215bc to 010215c3 has its CatchHandler @ 00f21788 */
        puVar4 = (undefined8 *)ScriptEngineManager::getInstance();
                    /* try { // try from 00f215c8 to 010215cf has its CatchHandler @ 00f21780 */
        (**(code **)(*(long *)*puVar4 + 0x78))((long *)*puVar4,local_48);
      }
    }
  }
                    /* try { // try from 00f215d4 to 010215db has its CatchHandler @ 00f21778 */
                    /* try { // try from 00f215e0 to 010215e7 has its CatchHandler @ 00f21770 */
  if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* try { // try from 00f215ec to 010215f3 has its CatchHandler @ 00f21768 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

