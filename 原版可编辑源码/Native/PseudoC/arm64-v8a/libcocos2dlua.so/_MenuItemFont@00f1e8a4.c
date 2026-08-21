
/* cocos2d::MenuItemFont::~MenuItemFont() */

void __thiscall cocos2d::MenuItemFont::~MenuItemFont(MenuItemFont *this)

{
  MenuItemFont *pMVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__MenuItemFont_01704a98;
  if (((byte)this[0x350] & 1) != 0) {
    operator_delete(*(void **)(this + 0x360));
  }
  pMVar1 = *(MenuItemFont **)(this + 800);
  *(undefined ***)this = &PTR__MenuItem_01704528;
  if (this + 0x300 == pMVar1) {
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x20);
  }
  else {
    if (pMVar1 == (MenuItemFont *)0x0) goto LAB_00f1e910;
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00f1e910:
  Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

