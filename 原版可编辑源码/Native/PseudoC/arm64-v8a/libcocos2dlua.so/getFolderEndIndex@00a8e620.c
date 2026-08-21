
/* fairygui::GTree::getFolderEndIndex(int, int) */

int __thiscall fairygui::GTree::getFolderEndIndex(GTree *this,int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = GComponent::numChildren((GComponent *)this);
  do {
    param_1 = param_1 + 1;
    if (iVar1 <= param_1) {
      return iVar1;
    }
    lVar2 = GComponent::getChildAt((GComponent *)this,param_1);
  } while (param_2 < *(int *)(*(long *)(lVar2 + 0x1c0) + 0x40));
  return param_1;
}

