
/* cocos2d::Node::childrenAlloc() */

void __thiscall cocos2d::Node::childrenAlloc(Node *this)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar2 = *(void **)(this + 0x178);
  if ((ulong)(*(long *)(this + 0x188) - (long)pvVar2 >> 3) < 4) {
    lVar3 = *(long *)(this + 0x180) - (long)pvVar2;
    pvVar1 = operator_new(0x20);
    if (0 < lVar3) {
      __memcpy_chk(pvVar1,pvVar2,lVar3,0x20);
      pvVar2 = *(void **)(this + 0x178);
    }
    *(void **)(this + 0x178) = pvVar1;
    *(long *)(this + 0x180) = (long)pvVar1 + lVar3;
    *(long *)(this + 0x188) = (long)pvVar1 + 0x20;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}

