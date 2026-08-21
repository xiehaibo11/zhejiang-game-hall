
/* cocos2d::MenuItem::~MenuItem() */

void __thiscall cocos2d::MenuItem::~MenuItem(MenuItem *this)

{
  MenuItem *pMVar1;
  code *pcVar2;
  
                    /* catch() { ... } // from try @ 00f21634 with catch @ 00f21674 */
  pMVar1 = *(MenuItem **)(this + 800);
                    /* catch() { ... } // from try @ 00f21628 with catch @ 00f21684 */
                    /* catch() { ... } // from try @ 00f2161c with catch @ 00f21694 */
  *(undefined ***)this = &PTR__MenuItem_01704528;
  if (this + 0x300 == pMVar1) {
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x20);
  }
  else {
    if (pMVar1 == (MenuItem *)0x0) goto LAB_00f216b8;
                    /* catch() { ... } // from try @ 00f21610 with catch @ 00f216a4 */
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00f216b8:
  Node::~Node((Node *)this);
  return;
}

