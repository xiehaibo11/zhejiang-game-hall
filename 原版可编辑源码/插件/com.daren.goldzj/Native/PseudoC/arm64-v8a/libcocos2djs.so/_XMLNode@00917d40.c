
/* tinyxml2::XMLNode::~XMLNode() */

void __thiscall tinyxml2::XMLNode::~XMLNode(XMLNode *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = *(long **)(this + 0x30);
  *(undefined ***)this = &PTR_ToElement_01c68c28;
  while (plVar4 != (long *)0x0) {
    lVar3 = plVar4[9];
    *(long *)(this + 0x30) = lVar3;
    if (*(long **)(this + 0x38) == plVar4) {
      lVar2 = plVar4[8];
      *(long *)(this + 0x38) = lVar2;
    }
    else {
      lVar2 = plVar4[8];
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x48) = lVar3;
      lVar3 = plVar4[9];
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x40) = lVar2;
    }
    plVar4[2] = 0;
    plVar5 = (long *)plVar4[10];
    (**(code **)(*plVar4 + 0x80))(plVar4);
    (**(code **)(*plVar5 + 0x20))(plVar5,plVar4);
    plVar4 = *(long **)(this + 0x30);
  }
  lVar3 = *(long *)(this + 0x10);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  if (lVar3 != 0) {
    if (*(XMLNode **)(lVar3 + 0x30) == this) {
      *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(this + 0x48);
    }
    if (*(XMLNode **)(lVar3 + 0x38) == this) {
      lVar2 = *(long *)(this + 0x40);
      *(long *)(lVar3 + 0x38) = lVar2;
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
  if ((((byte)this[0x19] >> 1 & 1) != 0) &&
     (pvVar1 = *(void **)(this + 0x20), pvVar1 != (void *)0x0)) {
    operator_delete__(pvVar1);
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}

