
/* cocos2d::MenuItemToggle::setEnabled(bool) */

void __thiscall cocos2d::MenuItemToggle::setEnabled(MenuItemToggle *this,bool param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* try { // try from 00f215f8 to 010215ff has its CatchHandler @ 00f21760 */
                    /* try { // try from 00f21604 to 0102160b has its CatchHandler @ 00f21758 */
                    /* try { // try from 00f21610 to 01021617 has its CatchHandler @ 00f216a4 */
  if (this[0x2f9] != (MenuItemToggle)param_1) {
    puVar1 = *(undefined8 **)(this + 0x340);
                    /* try { // try from 00f2161c to 01021623 has its CatchHandler @ 00f21694 */
    puVar2 = *(undefined8 **)(this + 0x348);
    this[0x2f9] = (MenuItemToggle)param_1;
                    /* try { // try from 00f21628 to 0102162f has its CatchHandler @ 00f21684 */
    for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
                    /* try { // try from 00f21634 to 0102163b has its CatchHandler @ 00f21674 */
                    /* try { // try from 00f21640 to 01021643 has its CatchHandler @ 00f21664 */
      (**(code **)(*(long *)*puVar1 + 0x550))((long *)*puVar1,param_1);
                    /* try { // try from 00f21644 to 010217f7 has its CatchHandler @ 00f214d4 */
    }
  }
  return;
}

