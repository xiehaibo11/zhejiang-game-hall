
/* cocos2d::renderer::NodeProxy::removeAllChildren() */

void __thiscall cocos2d::renderer::NodeProxy::removeAllChildren(NodeProxy *this)

{
  long *plVar1;
  long *plVar3;
  long *plVar4;
  long *plVar2;
  
  plVar4 = *(long **)(this + 0xf0);
  plVar3 = *(long **)(this + 0xf8);
  plVar1 = plVar4;
  if (plVar4 != plVar3) {
    do {
      plVar2 = plVar1 + 1;
      *(undefined8 *)(*plVar1 + 0xe8) = 0;
      plVar1 = plVar2;
    } while (plVar3 != plVar2);
    if (plVar4 != plVar3) {
      do {
        plVar3 = plVar4 + 1;
        Ref::release((Ref *)*plVar4);
        plVar4 = plVar3;
      } while (plVar3 != *(long **)(this + 0xf8));
      plVar4 = *(long **)(this + 0xf0);
    }
  }
  *(long **)(this + 0xf8) = plVar4;
  return;
}

