
/* tinyxml2::XMLNode::~XMLNode() */

void __thiscall tinyxml2::XMLNode::~XMLNode(XMLNode *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  XMLNode *pXVar5;
  
  *(undefined ***)this = &PTR_ToElement_01727380;
  pXVar5 = this + 0x30;
  plVar3 = *(long **)pXVar5;
  while (plVar3 != (long *)0x0) {
    lVar1 = plVar3[9];
    *(long *)(this + 0x30) = lVar1;
    if (*(long **)(this + 0x38) == plVar3) {
      lVar2 = plVar3[8];
      *(long *)(this + 0x38) = lVar2;
    }
    else {
      lVar2 = plVar3[8];
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x48) = lVar1;
      lVar1 = plVar3[9];
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x40) = lVar2;
    }
    plVar3[2] = 0;
    plVar4 = (long *)plVar3[10];
    (**(code **)(*plVar3 + 0x80))(plVar3);
    (**(code **)(*plVar4 + 0x20))(plVar4,plVar3);
    plVar3 = *(long **)pXVar5;
  }
  *(long *)pXVar5 = 0;
  *(undefined8 *)(this + 0x38) = 0;
  lVar1 = *(long *)(this + 0x10);
  if (lVar1 != 0) {
    if (*(XMLNode **)(lVar1 + 0x30) == this) {
      *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(this + 0x48);
    }
    if (*(XMLNode **)(lVar1 + 0x38) == this) {
      lVar2 = *(long *)(this + 0x40);
      *(long *)(lVar1 + 0x38) = lVar2;
    }
    else {
      lVar2 = *(long *)(this + 0x40);
    }
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(this + 0x48);
    }
    if (*(long *)(this + 0x48) != 0) {
      *(long *)(*(long *)(this + 0x48) + 0x40) = lVar2;
    }
    *(undefined8 *)(this + 0x10) = 0;
  }
  if ((((byte)this[0x19] >> 1 & 1) != 0) && (*(void **)(this + 0x20) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x20));
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}

