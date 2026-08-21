
/* fairygui::PopupMenu::~PopupMenu() */

void __thiscall fairygui::PopupMenu::~PopupMenu(PopupMenu *this)

{
  *(undefined ***)this = &PTR__PopupMenu_016a7218;
  if (*(Ref **)(this + 0x28) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x28));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

