
/* cocos2d::MenuItemToggle::selected() */

void __thiscall cocos2d::MenuItemToggle::selected(MenuItemToggle *this)

{
                    /* try { // try from 00f21500 to 01021507 has its CatchHandler @ 00f217f0 */
  this[0x2f8] = (MenuItemToggle)0x1;
                    /* try { // try from 00f2150c to 01021517 has its CatchHandler @ 00f217e8 */
                    /* WARNING: Could not recover jumptable at 0x00f21510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(this + 0x340) + (ulong)*(uint *)(this + 0x330) * 8) + 0x538))()
  ;
  return;
}

