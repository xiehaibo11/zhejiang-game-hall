
/* tinyxml2::XMLDocument::~XMLDocument() */

void __thiscall tinyxml2::XMLDocument::~XMLDocument(XMLDocument *this)

{
  XMLDocument *pXVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar4 = *(long **)(this + 0x30);
  *(undefined ***)this = &PTR_ToElement_01c68f48;
  while (plVar4 != (long *)0x0) {
    lVar5 = plVar4[9];
    *(long *)(this + 0x30) = lVar5;
    if (*(long **)(this + 0x38) == plVar4) {
      lVar3 = plVar4[8];
      *(long *)(this + 0x38) = lVar3;
    }
    else {
      lVar3 = plVar4[8];
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x48) = lVar5;
      lVar5 = plVar4[9];
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x40) = lVar3;
    }
    plVar4[2] = 0;
    plVar6 = (long *)plVar4[10];
    (**(code **)(*plVar4 + 0x80))(plVar4);
    (**(code **)(*plVar6 + 0x20))(plVar6,plVar4);
    plVar4 = *(long **)(this + 0x30);
  }
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  if (*(void **)(this + 0x78) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x78));
  }
  iVar2 = *(int *)(this + 0x264);
  pXVar1 = *(XMLDocument **)(this + 0x208);
  *(undefined ***)(this + 0x200) = &PTR__MemPoolT_01c692e8;
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      if (*(void **)(pXVar1 + lVar5 * 8) != (void *)0x0) {
        operator_delete(*(void **)(pXVar1 + lVar5 * 8));
        iVar2 = *(int *)(this + 0x264);
        pXVar1 = *(XMLDocument **)(this + 0x208);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  if ((pXVar1 != this + 0x210) && (pXVar1 != (XMLDocument *)0x0)) {
    operator_delete__(pXVar1);
  }
  iVar2 = *(int *)(this + 0x1e4);
  pXVar1 = *(XMLDocument **)(this + 0x188);
  *(undefined ***)(this + 0x180) = &PTR__MemPoolT_01c69290;
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      if (*(void **)(pXVar1 + lVar5 * 8) != (void *)0x0) {
        operator_delete(*(void **)(pXVar1 + lVar5 * 8));
        iVar2 = *(int *)(this + 0x1e4);
        pXVar1 = *(XMLDocument **)(this + 0x188);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  if ((pXVar1 != this + 400) && (pXVar1 != (XMLDocument *)0x0)) {
    operator_delete__(pXVar1);
  }
  iVar2 = *(int *)(this + 0x164);
  pXVar1 = *(XMLDocument **)(this + 0x108);
  *(undefined ***)(this + 0x100) = &PTR__MemPoolT_01c69238;
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      if (*(void **)(pXVar1 + lVar5 * 8) != (void *)0x0) {
        operator_delete(*(void **)(pXVar1 + lVar5 * 8));
        iVar2 = *(int *)(this + 0x164);
        pXVar1 = *(XMLDocument **)(this + 0x108);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  if ((pXVar1 != this + 0x110) && (pXVar1 != (XMLDocument *)0x0)) {
    operator_delete__(pXVar1);
  }
  iVar2 = *(int *)(this + 0xe4);
  pXVar1 = *(XMLDocument **)(this + 0x88);
  *(undefined ***)(this + 0x80) = &PTR__MemPoolT_01c691d0;
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      if (*(void **)(pXVar1 + lVar5 * 8) != (void *)0x0) {
        operator_delete(*(void **)(pXVar1 + lVar5 * 8));
        iVar2 = *(int *)(this + 0xe4);
        pXVar1 = *(XMLDocument **)(this + 0x88);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  if ((pXVar1 != this + 0x90) && (pXVar1 != (XMLDocument *)0x0)) {
    operator_delete__(pXVar1);
  }
  XMLNode::~XMLNode((XMLNode *)this);
  return;
}

