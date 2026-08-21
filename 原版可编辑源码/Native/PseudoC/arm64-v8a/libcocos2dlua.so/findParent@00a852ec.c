
/* fairygui::GObject::findParent() const */

void __thiscall fairygui::GObject::findParent(GObject *this)

{
  long *plVar1;
  long lVar2;
  
                    /* try { // try from 00a852f0 to 00b8534f has its CatchHandler @ 00a85198 */
  if (*(long *)(this + 0xa0) == 0) {
    plVar1 = (long *)(**(code **)(**(long **)(this + 0xa8) + 0x260))();
    while ((plVar1 != (long *)0x0 &&
           ((lVar2 = __dynamic_cast(plVar1,&cocos2d::Node::typeinfo,&FUIContainer::typeinfo,0),
            lVar2 == 0 || (*(long *)(lVar2 + 0x2f8) == 0))))) {
      plVar1 = (long *)(**(code **)(*plVar1 + 0x260))(plVar1);
    }
  }
  return;
}

