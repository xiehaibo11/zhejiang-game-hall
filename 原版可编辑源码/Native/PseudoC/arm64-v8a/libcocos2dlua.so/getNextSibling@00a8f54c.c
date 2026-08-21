
/* fairygui::GTreeNode::getNextSibling() const */

undefined8 __thiscall fairygui::GTreeNode::getNextSibling(GTreeNode *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = *(long *)(this + 0x30);
  if (lVar4 != 0) {
    puVar2 = *(undefined8 **)(lVar4 + 0x58);
    puVar3 = *(undefined8 **)(lVar4 + 0x60);
    if (puVar2 != puVar3) {
      puVar5 = puVar2;
      if ((GTreeNode *)*puVar2 != this) {
        do {
          if (puVar3 + -1 == puVar5) {
            return 0;
          }
          puVar1 = puVar5 + 1;
          puVar5 = puVar5 + 1;
        } while ((GTreeNode *)*puVar1 != this);
      }
      lVar4 = (long)puVar5 - (long)puVar2 >> 3;
      if (puVar5 == puVar3) {
        lVar4 = -1;
      }
      if ((-1 < lVar4) && (lVar4 < ((long)puVar3 - (long)puVar2 >> 3) + -1)) {
        return puVar2[lVar4 + 1];
      }
    }
  }
  return 0;
}

