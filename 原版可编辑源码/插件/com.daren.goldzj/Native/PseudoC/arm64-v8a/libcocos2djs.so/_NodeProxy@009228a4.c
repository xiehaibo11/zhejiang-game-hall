
/* cocos2d::renderer::NodeProxy::~NodeProxy() */

void __thiscall cocos2d::renderer::NodeProxy::~NodeProxy(NodeProxy *this)

{
  NodeProxy *pNVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar6;
  long *plVar5;
  
  *(undefined ***)this = &PTR__NodeProxy_01c694b8;
  plVar6 = *(long **)(this + 0xf0);
  plVar2 = *(long **)(this + 0xf8);
  plVar4 = plVar6;
  if (plVar6 != plVar2) {
    do {
      plVar5 = plVar4 + 1;
      *(undefined8 *)(*plVar4 + 0xe8) = 0;
      plVar4 = plVar5;
    } while (plVar2 != plVar5);
    if (plVar6 != plVar2) {
      do {
        Ref::release((Ref *)*plVar6);
        plVar6 = plVar6 + 1;
      } while (plVar6 != *(long **)(this + 0xf8));
      plVar6 = *(long **)(this + 0xf0);
    }
  }
  *(long **)(this + 0xf8) = plVar6;
  if (plVar6 != (long *)0x0) {
    *(long **)(this + 0xf8) = plVar6;
    operator_delete(plVar6);
  }
  if (((byte)this[0x60] & 1) != 0) {
    operator_delete(*(void **)(this + 0x70));
  }
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  pNVar1 = *(NodeProxy **)(this + 0x30);
  if (this + 0x10 == pNVar1) {
    pcVar3 = *(code **)(*(long *)pNVar1 + 0x20);
  }
  else {
    if (pNVar1 == (NodeProxy *)0x0) goto LAB_00922974;
    pcVar3 = *(code **)(*(long *)pNVar1 + 0x28);
  }
  (*pcVar3)();
LAB_00922974:
  Ref::~Ref((Ref *)this);
  return;
}

