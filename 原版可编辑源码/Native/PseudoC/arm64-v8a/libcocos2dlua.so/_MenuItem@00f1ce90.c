
/* cocos2d::MenuItem::~MenuItem() */

void __thiscall cocos2d::MenuItem::~MenuItem(MenuItem *this)

{
  MenuItem *pMVar1;
  code *pcVar2;
  
  pMVar1 = *(MenuItem **)(this + 800);
  *(undefined ***)this = &PTR__MenuItem_01704528;
  if (this + 0x300 == pMVar1) {
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x20);
  }
  else {
    if (pMVar1 == (MenuItem *)0x0) goto LAB_00f1cedc;
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00f1cedc:
  Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

