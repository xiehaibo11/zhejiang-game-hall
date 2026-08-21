
/* cocos2d::renderer::NodeProxy::removeChild(cocos2d::renderer::NodeProxy*) */

void __thiscall cocos2d::renderer::NodeProxy::removeChild(NodeProxy *this,NodeProxy *param_1)

{
  long *plVar1;
  long *plVar2;
  size_t __n;
  NodeProxy *pNVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar1 = *(long **)(this + 0xf0);
  plVar2 = *(long **)(this + 0xf8);
  if (plVar1 != plVar2) {
    pNVar3 = (NodeProxy *)*plVar1;
    plVar4 = plVar1;
    while ((plVar5 = plVar4, pNVar3 != param_1 &&
           (plVar4 = plVar4 + 1, plVar5 = plVar2, plVar2 != plVar4))) {
      pNVar3 = (NodeProxy *)*plVar4;
    }
    lVar6 = (long)plVar5 - (long)plVar1 >> 3;
    if (plVar5 == plVar2) {
      lVar6 = -1;
    }
    if (lVar6 != -1) {
      plVar1 = plVar1 + lVar6;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      Ref::release((Ref *)*plVar1);
      __n = *(long *)(this + 0xf8) - (long)(plVar1 + 1);
      if (__n != 0) {
        memmove(plVar1,plVar1 + 1,__n);
      }
      *(long **)(this + 0xf8) = plVar1 + ((long)__n >> 3);
    }
  }
  return;
}

