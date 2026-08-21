
/* cocos2d::MenuItemSprite::~MenuItemSprite() */

void __thiscall cocos2d::MenuItemSprite::~MenuItemSprite(MenuItemSprite *this)

{
  MenuItemSprite *pMVar1;
  code *pcVar2;
  
  pMVar1 = *(MenuItemSprite **)(this + 800);
  *(undefined ***)this = &PTR__MenuItem_01704528;
  if (this + 0x300 == pMVar1) {
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x20);
  }
  else {
    if (pMVar1 == (MenuItemSprite *)0x0) goto LAB_00f21714;
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00f21714:
  Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

