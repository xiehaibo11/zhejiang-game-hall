
/* cocos2d::PUObjectAbstractNode::~PUObjectAbstractNode() */

void __thiscall cocos2d::PUObjectAbstractNode::~PUObjectAbstractNode(PUObjectAbstractNode *this)

{
  long lVar1;
  byte bVar2;
  PUObjectAbstractNode PVar3;
  byte *pbVar4;
  void *pvVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  PUObjectAbstractNode *pPVar10;
  PUObjectAbstractNode *pPVar11;
  
  pPVar10 = *(PUObjectAbstractNode **)(this + 0xb8);
  *(undefined ***)this = &PTR__PUObjectAbstractNode_016f1fe0;
  for (; this + 0xb0 != pPVar10; pPVar10 = *(PUObjectAbstractNode **)(pPVar10 + 8)) {
    if (*(long **)(pPVar10 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(pPVar10 + 0x10) + 8))();
    }
  }
  for (pPVar10 = *(PUObjectAbstractNode **)(this + 0xd0); this + 200 != pPVar10;
      pPVar10 = *(PUObjectAbstractNode **)(pPVar10 + 8)) {
    if (*(long **)(pPVar10 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(pPVar10 + 0x10) + 8))();
    }
  }
  for (pPVar10 = *(PUObjectAbstractNode **)(this + 0xe8); this + 0xe0 != pPVar10;
      pPVar10 = *(PUObjectAbstractNode **)(pPVar10 + 8)) {
    if (*(long **)(pPVar10 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(pPVar10 + 0x10) + 8))();
    }
  }
  if (*(long *)(this + 0xf0) != 0) {
    lVar1 = *(long *)(this + 0xe0);
    pPVar10 = *(PUObjectAbstractNode **)(this + 0xe8);
    lVar7 = *(long *)pPVar10;
    *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar7;
    *(undefined8 *)(this + 0xf0) = 0;
    while (pPVar10 != this + 0xe0) {
      pPVar11 = *(PUObjectAbstractNode **)(pPVar10 + 8);
      operator_delete(pPVar10);
      pPVar10 = pPVar11;
    }
  }
  if (*(long *)(this + 0xd8) != 0) {
    lVar1 = *(long *)(this + 200);
    pPVar10 = *(PUObjectAbstractNode **)(this + 0xd0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e419a4 with catch @ 00e41950
                        */
    lVar7 = *(long *)pPVar10;
    *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar7;
    *(undefined8 *)(this + 0xd8) = 0;
    while (pPVar10 != this + 200) {
      pPVar11 = *(PUObjectAbstractNode **)(pPVar10 + 8);
      operator_delete(pPVar10);
      pPVar10 = pPVar11;
    }
  }
  if (*(long *)(this + 0xc0) != 0) {
    lVar1 = *(long *)(this + 0xb0);
    pPVar10 = *(PUObjectAbstractNode **)(this + 0xb8);
    lVar7 = *(long *)pPVar10;
    *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar1 + 8);
                    /* try { // try from 00e4199c to 00f419a3 has its CatchHandler @ 00e41b18 */
    **(long **)(lVar1 + 8) = lVar7;
                    /* try { // try from 00e419a4 to 00f41b1b has its CatchHandler @ 00e41950 */
    *(undefined8 *)(this + 0xc0) = 0;
    while (pPVar10 != this + 0xb0) {
      pPVar11 = *(PUObjectAbstractNode **)(pPVar10 + 8);
      operator_delete(pPVar10);
      pPVar10 = pPVar11;
    }
  }
  pbVar8 = *(byte **)(this + 0x90);
  if (pbVar8 != (byte *)0x0) {
    pbVar6 = *(byte **)(this + 0x98);
    pbVar4 = pbVar8;
    if (pbVar6 != pbVar8) {
      bVar2 = pbVar6[-0x18];
      pbVar4 = pbVar6 + -0x18;
      while( true ) {
        if ((bVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + -8));
        }
        if (pbVar8 == pbVar4) break;
        bVar2 = pbVar4[-0x18];
        pbVar6 = pbVar4;
        pbVar4 = pbVar4 + -0x18;
      }
      pbVar4 = *(byte **)(this + 0x90);
    }
    *(byte **)(this + 0x98) = pbVar8;
    operator_delete(pbVar4);
  }
  if (((byte)this[0x78] & 1) == 0) {
    PVar3 = this[0x60];
  }
  else {
    operator_delete(*(void **)(this + 0x88));
    PVar3 = this[0x60];
  }
  if (((byte)PVar3 & 1) == 0) {
    puVar9 = *(undefined8 **)(this + 0x48);
  }
  else {
    operator_delete(*(void **)(this + 0x70));
    puVar9 = *(undefined8 **)(this + 0x48);
  }
  while (puVar9 != (void *)0x0) {
    pvVar5 = (void *)*puVar9;
    if ((*(byte *)(puVar9 + 5) & 1) != 0) {
      operator_delete((void *)puVar9[7]);
    }
    if ((*(byte *)(puVar9 + 2) & 1) != 0) {
      operator_delete((void *)puVar9[4]);
    }
    operator_delete(puVar9);
    puVar9 = pvVar5;
  }
  pvVar5 = *(void **)(this + 0x38);
  *(undefined8 *)(this + 0x38) = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  *(undefined ***)this = &PTR__PUAbstractNode_016f20f8;
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
  return;
}

