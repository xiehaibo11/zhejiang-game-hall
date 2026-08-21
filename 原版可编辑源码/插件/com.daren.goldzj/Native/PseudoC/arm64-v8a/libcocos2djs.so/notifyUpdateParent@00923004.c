
/* cocos2d::renderer::NodeProxy::notifyUpdateParent() */

void __thiscall cocos2d::renderer::NodeProxy::notifyUpdateParent(NodeProxy *this)

{
  long *plVar1;
  long *plVar2;
  size_t sVar3;
  long lVar4;
  NodeProxy *pNVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  NodeProxy *pNVar9;
  NodeProxy *pNVar10;
  
  if ((*(uint **)(this + 0xa0))[1] == 0xffffffff) {
    lVar4 = *(long *)(this + 0xe8);
    if (lVar4 != 0) {
      plVar1 = *(long **)(lVar4 + 0xf0);
      plVar2 = *(long **)(lVar4 + 0xf8);
      if (plVar1 != plVar2) {
        pNVar9 = (NodeProxy *)*plVar1;
        plVar6 = plVar1;
        while ((plVar7 = plVar6, pNVar9 != this &&
               (plVar6 = plVar6 + 1, plVar7 = plVar2, plVar2 != plVar6))) {
          pNVar9 = (NodeProxy *)*plVar6;
        }
        lVar8 = (long)plVar7 - (long)plVar1 >> 3;
        if (plVar7 == plVar2) {
          lVar8 = -1;
        }
        if (lVar8 != -1) {
          plVar1 = plVar1 + lVar8;
          *(undefined8 *)(this + 0xe8) = 0;
          Ref::release((Ref *)*plVar1);
          sVar3 = *(long *)(lVar4 + 0xf8) - (long)(plVar1 + 1);
          if (sVar3 != 0) {
            memmove(plVar1,plVar1 + 1,sVar3);
          }
          *(long **)(lVar4 + 0xf8) = plVar1 + ((long)sVar3 >> 3);
        }
      }
    }
  }
  else {
    lVar4 = NodeMemPool::getUnit(NodeMemPool::_instance,(ulong)**(uint **)(this + 0xa0));
    pNVar10 = *(NodeProxy **)(this + 0xe8);
    pNVar9 = *(NodeProxy **)
              (*(long *)(lVar4 + 0xf0) + (ulong)*(uint *)(*(long *)(this + 0xa0) + 4) * 8);
    if (pNVar9 == pNVar10) {
      return;
    }
    if (pNVar10 != (NodeProxy *)0x0) {
      plVar1 = *(long **)(pNVar10 + 0xf0);
      plVar2 = *(long **)(pNVar10 + 0xf8);
      if (plVar1 != plVar2) {
        pNVar5 = (NodeProxy *)*plVar1;
        plVar6 = plVar1;
        while ((plVar7 = plVar6, pNVar5 != this &&
               (plVar6 = plVar6 + 1, plVar7 = plVar2, plVar2 != plVar6))) {
          pNVar5 = (NodeProxy *)*plVar6;
        }
        lVar4 = (long)plVar7 - (long)plVar1 >> 3;
        if (plVar7 == plVar2) {
          lVar4 = -1;
        }
        if (lVar4 != -1) {
          plVar1 = plVar1 + lVar4;
          *(undefined8 *)(this + 0xe8) = 0;
          Ref::release((Ref *)*plVar1);
          sVar3 = *(long *)(pNVar10 + 0xf8) - (long)(plVar1 + 1);
          if (sVar3 != 0) {
            memmove(plVar1,plVar1 + 1,sVar3);
          }
          *(long **)(pNVar10 + 0xf8) = plVar1 + ((long)sVar3 >> 3);
        }
      }
    }
    addChild(pNVar9,this);
  }
  updateLevel(this);
  return;
}

