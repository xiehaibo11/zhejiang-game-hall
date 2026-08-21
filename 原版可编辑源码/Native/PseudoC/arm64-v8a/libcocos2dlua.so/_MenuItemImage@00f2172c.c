
/* cocos2d::MenuItemImage::~MenuItemImage() */

void __thiscall cocos2d::MenuItemImage::~MenuItemImage(MenuItemImage *this)

{
  MenuItemImage *pMVar1;
  code *pcVar2;
  
  pMVar1 = *(MenuItemImage **)(this + 800);
  *(undefined ***)this = &PTR__MenuItem_01704528;
                    /* catch() { ... } // from try @ 00f21604 with catch @ 00f21758 */
  if (this + 0x300 == pMVar1) {
                    /* catch() { ... } // from try @ 00f215e0 with catch @ 00f21770 */
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x20);
  }
  else {
    if (pMVar1 == (MenuItemImage *)0x0) goto LAB_00f21778;
                    /* catch() { ... } // from try @ 00f215f8 with catch @ 00f21760 */
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x28);
                    /* catch() { ... } // from try @ 00f215ec with catch @ 00f21768 */
  }
  (*pcVar2)();
LAB_00f21778:
                    /* catch() { ... } // from try @ 00f215d4 with catch @ 00f21778 */
  Node::~Node((Node *)this);
                    /* catch() { ... } // from try @ 00f215c8 with catch @ 00f21780 */
                    /* catch() { ... } // from try @ 00f215bc with catch @ 00f21788 */
  operator_delete(this);
  return;
}

