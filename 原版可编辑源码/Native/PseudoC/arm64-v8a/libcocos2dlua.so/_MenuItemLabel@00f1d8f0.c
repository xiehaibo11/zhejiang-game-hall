
/* cocos2d::MenuItemLabel::~MenuItemLabel() */

void __thiscall cocos2d::MenuItemLabel::~MenuItemLabel(MenuItemLabel *this)

{
  MenuItemLabel *pMVar1;
  code *pcVar2;
  
  pMVar1 = *(MenuItemLabel **)(this + 800);
  *(undefined ***)this = &PTR__MenuItem_01704528;
  if (this + 0x300 == pMVar1) {
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x20);
  }
  else {
    if (pMVar1 == (MenuItemLabel *)0x0) goto LAB_00f1d93c;
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00f1d93c:
  Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

