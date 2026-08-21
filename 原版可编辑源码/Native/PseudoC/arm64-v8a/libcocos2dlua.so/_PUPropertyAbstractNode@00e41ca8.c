
/* cocos2d::PUPropertyAbstractNode::~PUPropertyAbstractNode() */

void __thiscall
cocos2d::PUPropertyAbstractNode::~PUPropertyAbstractNode(PUPropertyAbstractNode *this)

{
  long lVar1;
  long lVar2;
  PUPropertyAbstractNode *pPVar3;
  PUPropertyAbstractNode *pPVar4;
  
  pPVar3 = *(PUPropertyAbstractNode **)(this + 0x60);
  *(undefined ***)this = &PTR__PUPropertyAbstractNode_016f2010;
                    /* try { // try from 00e41ccc to 00f41cd3 has its CatchHandler @ 00e41e2c */
  for (; this + 0x58 != pPVar3; pPVar3 = *(PUPropertyAbstractNode **)(pPVar3 + 8)) {
    if (*(long **)(pPVar3 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(pPVar3 + 0x10) + 8))();
    }
  }
  if (*(long *)(this + 0x68) != 0) {
    lVar1 = *(long *)(this + 0x58);
    pPVar3 = *(PUPropertyAbstractNode **)(this + 0x60);
    lVar2 = *(long *)pPVar3;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    *(undefined8 *)(this + 0x68) = 0;
    while (pPVar3 != this + 0x58) {
      pPVar4 = *(PUPropertyAbstractNode **)(pPVar3 + 8);
      operator_delete(pPVar3);
      pPVar3 = pPVar4;
    }
  }
  if (((byte)this[0x38] & 1) != 0) {
    operator_delete(*(void **)(this + 0x48));
  }
                    /* try { // try from 00e41d2c to 00f41d33 has its CatchHandler @ 00e41e14 */
                    /* try { // try from 00e41d34 to 00f41e43 has its CatchHandler @ 00e41b1c */
  *(undefined ***)this = &PTR__PUAbstractNode_016f20f8;
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
  return;
}

