
/* fairygui::FUIContainer::onEnter() */

void __thiscall fairygui::FUIContainer::onEnter(FUIContainer *this)

{
  long *plVar1;
  
  cocos2d::Node::onEnter((Node *)this);
  if ((*(long **)(this + 0x308) != (long *)0x0) &&
     (plVar1 = (long *)**(long **)(this + 0x308), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 800))();
  }
  if (*(long *)(this + 0x300) != 0) {
    *(undefined1 *)(*(long *)(this + 0x300) + 0x34) = 1;
  }
  return;
}

