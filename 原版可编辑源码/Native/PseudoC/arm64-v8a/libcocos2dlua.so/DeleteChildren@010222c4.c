
/* tinyxml2::XMLNode::DeleteChildren() */

void __thiscall tinyxml2::XMLNode::DeleteChildren(XMLNode *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  XMLNode *pXVar5;
  
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
  return;
}

