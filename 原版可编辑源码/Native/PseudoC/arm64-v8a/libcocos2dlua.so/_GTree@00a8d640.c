
/* fairygui::GTree::~GTree() */

void __thiscall fairygui::GTree::~GTree(GTree *this)

{
  GTree *pGVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__GTree_016a6fc8;
  if (*(Ref **)(this + 1000) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 1000));
  }
  pGVar1 = *(GTree **)(this + 0x3d0);
  if (this + 0x3b0 == pGVar1) {
    pcVar2 = *(code **)(*(long *)pGVar1 + 0x20);
LAB_00a8d694:
    (*pcVar2)();
  }
  else if (pGVar1 != (GTree *)0x0) {
    pcVar2 = *(code **)(*(long *)pGVar1 + 0x28);
    goto LAB_00a8d694;
  }
  pGVar1 = *(GTree **)(this + 0x3a0);
  if (this + 0x380 == pGVar1) {
    pcVar2 = *(code **)(*(long *)pGVar1 + 0x20);
  }
  else {
    if (pGVar1 == (GTree *)0x0) goto LAB_00a8d6c4;
    pcVar2 = *(code **)(*(long *)pGVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00a8d6c4:
  GList::~GList((GList *)this);
  return;
}

