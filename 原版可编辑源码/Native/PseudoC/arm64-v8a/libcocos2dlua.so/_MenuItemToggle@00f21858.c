
/* cocos2d::MenuItemToggle::~MenuItemToggle() */

void __thiscall cocos2d::MenuItemToggle::~MenuItemToggle(MenuItemToggle *this)

{
  MenuItemToggle *pMVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = *(undefined8 **)(this + 0x340);
  puVar4 = *(undefined8 **)(this + 0x348);
  *(undefined ***)this = &PTR__MenuItemToggle_017060c8;
  if (puVar3 != puVar4) {
    do {
      Ref::release((Ref *)*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar4 != puVar3);
    puVar3 = *(undefined8 **)(this + 0x340);
  }
  *(undefined8 **)(this + 0x348) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x348) = puVar3;
    operator_delete(puVar3);
  }
  pMVar1 = *(MenuItemToggle **)(this + 800);
  *(undefined ***)this = &PTR__MenuItem_01704528;
  if (this + 0x300 == pMVar1) {
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x20);
  }
  else {
    if (pMVar1 == (MenuItemToggle *)0x0) goto LAB_00f218f8;
                    /* catch() { ... } // from try @ 00f2192c with catch @ 00f218e0 */
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00f218f8:
  Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

