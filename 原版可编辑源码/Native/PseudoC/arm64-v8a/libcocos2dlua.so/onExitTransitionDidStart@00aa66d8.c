
/* fairygui::FUIContainer::onExitTransitionDidStart() */

void __thiscall fairygui::FUIContainer::onExitTransitionDidStart(FUIContainer *this)

{
  long *plVar1;
  
  if ((*(long **)(this + 0x308) != (long *)0x0) &&
     (plVar1 = (long *)**(long **)(this + 0x308), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x338))();
  }
  cocos2d::Node::onExitTransitionDidStart((Node *)this);
  return;
}

