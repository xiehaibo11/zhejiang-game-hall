
/* tinyxml2::XMLDocument::~XMLDocument() */

void __thiscall tinyxml2::XMLDocument::~XMLDocument(XMLDocument *this)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  XMLDocument *pXVar7;
  
  *(undefined ***)this = &PTR_ToElement_017276a0;
  pXVar7 = this + 0x30;
  plVar5 = *(long **)pXVar7;
  while (plVar5 != (long *)0x0) {
    lVar1 = plVar5[9];
    *(long *)(this + 0x30) = lVar1;
    if (*(long **)(this + 0x38) == plVar5) {
      lVar4 = plVar5[8];
      *(long *)(this + 0x38) = lVar4;
    }
    else {
      lVar4 = plVar5[8];
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x48) = lVar1;
      lVar1 = plVar5[9];
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x40) = lVar4;
    }
    plVar5[2] = 0;
    plVar6 = (long *)plVar5[10];
    (**(code **)(*plVar5 + 0x80))(plVar5);
    (**(code **)(*plVar6 + 0x20))(plVar6,plVar5);
    plVar5 = *(long **)pXVar7;
  }
  *(long *)pXVar7 = 0;
  *(undefined8 *)(this + 0x38) = 0;
  if (*(void **)(this + 0x78) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x78));
  }
  pXVar7 = *(XMLDocument **)(this + 0x208);
  *(undefined ***)(this + 0x200) = &PTR__MemPoolT_01727a40;
  iVar3 = *(int *)(this + 0x264);
  if (0 < iVar3) {
    lVar1 = 0;
    pvVar2 = *(void **)pXVar7;
    while( true ) {
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        iVar3 = *(int *)(this + 0x264);
        pXVar7 = *(XMLDocument **)(this + 0x208);
      }
      lVar1 = lVar1 + 1;
      if (iVar3 <= lVar1) break;
      pvVar2 = *(void **)(pXVar7 + lVar1 * 8);
    }
  }
  if ((pXVar7 != this + 0x210) && (pXVar7 != (XMLDocument *)0x0)) {
    operator_delete__(pXVar7);
  }
  pXVar7 = *(XMLDocument **)(this + 0x188);
  *(undefined ***)(this + 0x180) = &PTR__MemPoolT_017279e8;
  iVar3 = *(int *)(this + 0x1e4);
  if (0 < iVar3) {
    lVar1 = 0;
    pvVar2 = *(void **)pXVar7;
    while( true ) {
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        iVar3 = *(int *)(this + 0x1e4);
        pXVar7 = *(XMLDocument **)(this + 0x188);
      }
      lVar1 = lVar1 + 1;
      if (iVar3 <= lVar1) break;
      pvVar2 = *(void **)(pXVar7 + lVar1 * 8);
    }
  }
  if ((pXVar7 != this + 400) && (pXVar7 != (XMLDocument *)0x0)) {
    operator_delete__(pXVar7);
  }
  pXVar7 = *(XMLDocument **)(this + 0x108);
  *(undefined ***)(this + 0x100) = &PTR__MemPoolT_01727990;
  iVar3 = *(int *)(this + 0x164);
  if (0 < iVar3) {
    lVar1 = 0;
    pvVar2 = *(void **)pXVar7;
    while( true ) {
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        iVar3 = *(int *)(this + 0x164);
        pXVar7 = *(XMLDocument **)(this + 0x108);
      }
      lVar1 = lVar1 + 1;
      if (iVar3 <= lVar1) break;
      pvVar2 = *(void **)(pXVar7 + lVar1 * 8);
    }
  }
  if ((pXVar7 != this + 0x110) && (pXVar7 != (XMLDocument *)0x0)) {
    operator_delete__(pXVar7);
  }
  iVar3 = *(int *)(this + 0xe4);
  pXVar7 = *(XMLDocument **)(this + 0x88);
  *(undefined ***)(this + 0x80) = &PTR__MemPoolT_01727928;
  if (0 < iVar3) {
    lVar1 = 0;
    pvVar2 = *(void **)pXVar7;
    while( true ) {
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        iVar3 = *(int *)(this + 0xe4);
        pXVar7 = *(XMLDocument **)(this + 0x88);
      }
      lVar1 = lVar1 + 1;
      if (iVar3 <= lVar1) break;
      pvVar2 = *(void **)(pXVar7 + lVar1 * 8);
    }
  }
  if ((pXVar7 != this + 0x90) && (pXVar7 != (XMLDocument *)0x0)) {
    operator_delete__(pXVar7);
  }
  XMLNode::~XMLNode((XMLNode *)this);
  return;
}

