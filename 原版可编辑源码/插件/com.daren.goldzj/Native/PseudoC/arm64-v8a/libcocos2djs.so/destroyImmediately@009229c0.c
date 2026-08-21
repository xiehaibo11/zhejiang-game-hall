
/* cocos2d::renderer::NodeProxy::destroyImmediately() */

void __thiscall cocos2d::renderer::NodeProxy::destroyImmediately(NodeProxy *this)

{
  long *plVar1;
  long *plVar2;
  size_t __n;
  NodeProxy *pNVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(this + 0xe8);
  if (lVar7 != 0) {
    plVar1 = *(long **)(lVar7 + 0xf0);
    plVar2 = *(long **)(lVar7 + 0xf8);
    if (plVar1 != plVar2) {
      pNVar3 = (NodeProxy *)*plVar1;
      plVar4 = plVar1;
      while ((plVar5 = plVar4, pNVar3 != this &&
             (plVar4 = plVar4 + 1, plVar5 = plVar2, plVar2 != plVar4))) {
        pNVar3 = (NodeProxy *)*plVar4;
      }
      lVar6 = (long)plVar5 - (long)plVar1 >> 3;
      if (plVar5 == plVar2) {
        lVar6 = -1;
      }
      if (lVar6 != -1) {
        plVar1 = plVar1 + lVar6;
        *(undefined8 *)(this + 0xe8) = 0;
        Ref::release((Ref *)*plVar1);
        __n = *(long *)(lVar7 + 0xf8) - (long)(plVar1 + 1);
        if (__n != 0) {
          memmove(plVar1,plVar1 + 1,__n);
        }
        *(long **)(lVar7 + 0xf8) = plVar1 + ((long)__n >> 3);
      }
    }
  }
  RenderFlow::removeNodeLevel(RenderFlow::_instance,*(ulong *)(this + 0x78),*(Mat4 **)(this + 0x98))
  ;
  if (*(Ref **)(this + 0x108) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x108));
    *(undefined8 *)(this + 0x108) = 0;
  }
  *(undefined8 *)(this + 0x78) = 0xffffffff;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  return;
}

