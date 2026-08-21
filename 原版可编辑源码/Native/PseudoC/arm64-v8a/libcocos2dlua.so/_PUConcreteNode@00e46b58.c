
/* cocos2d::PUConcreteNode::~PUConcreteNode() */

void __thiscall cocos2d::PUConcreteNode::~PUConcreteNode(PUConcreteNode *this)

{
  long lVar1;
  long lVar2;
  PUConcreteNode *pPVar3;
  PUConcreteNode *pPVar4;
  
  for (pPVar4 = *(PUConcreteNode **)(this + 0x40); this + 0x38 != pPVar4;
      pPVar4 = *(PUConcreteNode **)(pPVar4 + 8)) {
    pPVar3 = *(PUConcreteNode **)(pPVar4 + 0x10);
    if (pPVar3 != (PUConcreteNode *)0x0) {
      ~PUConcreteNode(pPVar3);
      operator_delete(pPVar3);
    }
  }
  if (*(long *)(this + 0x48) != 0) {
    lVar1 = *(long *)(this + 0x38);
    pPVar4 = *(PUConcreteNode **)(this + 0x40);
    lVar2 = *(long *)pPVar4;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    *(undefined8 *)(this + 0x48) = 0;
    while (pPVar4 != this + 0x38) {
      pPVar3 = *(PUConcreteNode **)(pPVar4 + 8);
      operator_delete(pPVar4);
      pPVar4 = pPVar3;
    }
  }
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  if (((byte)*this & 1) != 0) {
    operator_delete(*(void **)(this + 0x10));
    return;
  }
  return;
}

