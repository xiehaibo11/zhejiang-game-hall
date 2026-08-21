
/* cocos2d::MenuItemToggle::unselected() */

void __thiscall cocos2d::MenuItemToggle::unselected(MenuItemToggle *this)

{
                    /* try { // try from 00f2151c to 01021527 has its CatchHandler @ 00f217e0 */
  this[0x2f8] = (MenuItemToggle)0x0;
                    /* WARNING: Could not recover jumptable at 0x00f2152c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00f2152c to 01021537 has its CatchHandler @ 00f217d8 */
  (**(code **)(**(long **)(*(long *)(this + 0x340) + (ulong)*(uint *)(this + 0x330) * 8) + 0x540))()
  ;
  return;
}

