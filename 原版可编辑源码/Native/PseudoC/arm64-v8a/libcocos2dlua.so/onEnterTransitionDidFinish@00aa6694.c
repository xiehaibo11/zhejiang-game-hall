
/* fairygui::FUIContainer::onEnterTransitionDidFinish() */

void __thiscall fairygui::FUIContainer::onEnterTransitionDidFinish(FUIContainer *this)

{
  long *plVar1;
  
  cocos2d::Node::onEnterTransitionDidFinish((Node *)this);
  if ((*(long **)(this + 0x308) != (long *)0x0) &&
     (plVar1 = (long *)**(long **)(this + 0x308), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00aa66c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x328))();
    return;
  }
  return;
}

