
/* fairygui::GTreeNode::~GTreeNode() */

void __thiscall fairygui::GTreeNode::~GTreeNode(GTreeNode *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  GTreeNode *this_00;
  int iVar3;
  long *plVar4;
  undefined8 *puVar6;
  GTreeNode *pGVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar5;
  
  *(undefined ***)this = &PTR__GTreeNode_016a71a8;
  pGVar7 = this + 0x58;
  plVar8 = *(long **)pGVar7;
  plVar10 = *(long **)(this + 0x60);
  plVar4 = plVar8;
  if (plVar8 != plVar10) {
    do {
      plVar5 = plVar4 + 1;
      *(undefined8 *)(*plVar4 + 0x30) = 0;
      plVar4 = plVar5;
    } while (plVar10 != plVar5);
    if (plVar8 != plVar10) {
      do {
        cocos2d::Ref::release((Ref *)*plVar8);
        plVar8 = plVar8 + 1;
      } while (plVar10 != plVar8);
      plVar8 = *(long **)pGVar7;
    }
  }
  this_00 = *(GTreeNode **)(this + 0x30);
  *(long **)(this + 0x60) = plVar8;
  if (this_00 != (GTreeNode *)0x0) {
    puVar9 = *(undefined8 **)(this_00 + 0x58);
    puVar2 = *(undefined8 **)(this_00 + 0x60);
    if (puVar2 != puVar9) {
                    /* try { // try from 00a8ed8c to 00b8edd7 has its CatchHandler @ 00a8ed8c
                       catch() { ... } // from try @ 00a8ed8c with catch @ 00a8ed8c
                       catch() { ... } // from try @ 00a8eddc with catch @ 00a8ed8c */
      puVar6 = puVar9;
      if ((GTreeNode *)*puVar9 != this) {
        do {
          if (puVar2 + -1 == puVar6) goto LAB_00a8ede8;
          puVar1 = puVar6 + 1;
          puVar6 = puVar6 + 1;
        } while ((GTreeNode *)*puVar1 != this);
      }
                    /* try { // try from 00a8edd8 to 00b8eddb has its CatchHandler @ 00a8ee10 */
                    /* try { // try from 00a8eddc to 00b8ee23 has its CatchHandler @ 00a8ed8c */
      if ((puVar6 != puVar2) &&
         (iVar3 = (int)((ulong)((long)puVar6 - (long)puVar9) >> 3), iVar3 != -1)) {
        removeChildAt(this_00,iVar3);
      }
    }
  }
LAB_00a8ede8:
  if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x38));
  }
  if (((byte)this[0x70] & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  puVar9 = *(undefined8 **)(this + 0x58);
  puVar2 = *(undefined8 **)(this + 0x60);
  if (puVar9 != puVar2) {
    do {
                    /* catch() { ... } // from try @ 00a8edd8 with catch @ 00a8ee10 */
      cocos2d::Ref::release((Ref *)*puVar9);
      puVar9 = puVar9 + 1;
    } while (puVar2 != puVar9);
                    /* try { // try from 00a8ee24 to 00b8eef3 has its CatchHandler @ 00a8ee24
                       catch() { ... } // from try @ 00a8ee24 with catch @ 00a8ee24
                       catch() { ... } // from try @ 00a8ef74 with catch @ 00a8ee24 */
    puVar9 = *(undefined8 **)pGVar7;
  }
  *(undefined8 **)(this + 0x60) = puVar9;
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x60) = puVar9;
    operator_delete(puVar9);
  }
  cocos2d::Value::~Value((Value *)(this + 0x48));
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

