
/* cocos2d::MenuItemToggle::cleanup() */

void __thiscall cocos2d::MenuItemToggle::cleanup(MenuItemToggle *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x348);
  for (puVar1 = *(undefined8 **)(this + 0x340); puVar1 != puVar2; puVar1 = puVar1 + 1) {
                    /* try { // try from 00f214d4 to 010214ff has its CatchHandler @ 00f214d4
                       catch() { ... } // from try @ 00f214d4 with catch @ 00f214d4
                       catch() { ... } // from try @ 00f21644 with catch @ 00f214d4 */
    (**(code **)(*(long *)*puVar1 + 0x340))();
  }
  Node::cleanup((Node *)this);
  return;
}

