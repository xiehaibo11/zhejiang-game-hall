
/* fairygui::GTree::getSelectedNode() const */

undefined8 __thiscall fairygui::GTree::getSelectedNode(GTree *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = GList::getSelectedIndex((GList *)this);
  if (iVar1 == -1) {
    uVar3 = 0;
  }
  else {
    lVar2 = GComponent::getChildAt((GComponent *)this,iVar1);
    uVar3 = *(undefined8 *)(lVar2 + 0x1c0);
  }
  return uVar3;
}

