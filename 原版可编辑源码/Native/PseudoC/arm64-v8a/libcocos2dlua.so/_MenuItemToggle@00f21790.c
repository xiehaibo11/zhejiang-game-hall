
/* cocos2d::MenuItemToggle::~MenuItemToggle() */

void __thiscall cocos2d::MenuItemToggle::~MenuItemToggle(MenuItemToggle *this)

{
  MenuItemToggle *pMVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
                    /* catch() { ... } // from try @ 00f215b0 with catch @ 00f21790 */
                    /* catch() { ... } // from try @ 00f215a4 with catch @ 00f21798 */
                    /* catch() { ... } // from try @ 00f21598 with catch @ 00f217a0 */
  puVar3 = *(undefined8 **)(this + 0x340);
                    /* catch() { ... } // from try @ 00f2158c with catch @ 00f217a8 */
  puVar4 = *(undefined8 **)(this + 0x348);
                    /* catch() { ... } // from try @ 00f2157c with catch @ 00f217b0 */
                    /* catch() { ... } // from try @ 00f2156c with catch @ 00f217b8 */
  *(undefined ***)this = &PTR__MenuItemToggle_017060c8;
                    /* catch() { ... } // from try @ 00f2155c with catch @ 00f217c0 */
  if (puVar3 != puVar4) {
    do {
                    /* catch() { ... } // from try @ 00f2154c with catch @ 00f217c8 */
      Ref::release((Ref *)*puVar3);
                    /* catch() { ... } // from try @ 00f2153c with catch @ 00f217d0 */
      puVar3 = puVar3 + 1;
                    /* catch() { ... } // from try @ 00f2152c with catch @ 00f217d8 */
    } while (puVar4 != puVar3);
    puVar3 = *(undefined8 **)(this + 0x340);
  }
                    /* catch() { ... } // from try @ 00f2151c with catch @ 00f217e0 */
  *(undefined8 **)(this + 0x348) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 00f2150c with catch @ 00f217e8 */
    *(undefined8 **)(this + 0x348) = puVar3;
                    /* catch() { ... } // from try @ 00f21500 with catch @ 00f217f0 */
    operator_delete(puVar3);
  }
  pMVar1 = *(MenuItemToggle **)(this + 800);
  *(undefined ***)this = &PTR__MenuItem_01704528;
  if (this + 0x300 == pMVar1) {
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x20);
  }
  else {
    if (pMVar1 == (MenuItemToggle *)0x0) goto LAB_00f21830;
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00f21830:
  Node::~Node((Node *)this);
  return;
}

