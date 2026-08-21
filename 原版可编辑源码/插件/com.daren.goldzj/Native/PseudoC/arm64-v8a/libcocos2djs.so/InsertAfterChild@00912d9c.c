
/* tinyxml2::XMLNode::InsertAfterChild(tinyxml2::XMLNode*, tinyxml2::XMLNode*) */

XMLNode * __thiscall
tinyxml2::XMLNode::InsertAfterChild(XMLNode *this,XMLNode *param_1,XMLNode *param_2)

{
  long lVar1;
  long *plVar2;
  
  if (*(XMLNode **)(param_1 + 0x10) == this) {
    lVar1 = *(long *)(param_1 + 0x48);
    if (lVar1 == 0) {
      lVar1 = *(long *)(this + 0x38);
      if (lVar1 == 0) {
        *(XMLNode **)(this + 0x30) = param_2;
        *(XMLNode **)(this + 0x38) = param_2;
        *(undefined8 *)(param_2 + 0x40) = 0;
      }
      else {
        *(XMLNode **)(lVar1 + 0x48) = param_2;
        *(long *)(param_2 + 0x40) = lVar1;
        *(XMLNode **)(this + 0x38) = param_2;
      }
      plVar2 = *(long **)(param_2 + 0x50);
      *(undefined8 *)(param_2 + 0x48) = 0;
    }
    else {
      *(XMLNode **)(param_2 + 0x40) = param_1;
      *(long *)(param_2 + 0x48) = lVar1;
      *(XMLNode **)(*(long *)(param_1 + 0x48) + 0x40) = param_2;
      *(XMLNode **)(param_1 + 0x48) = param_2;
      plVar2 = *(long **)(param_2 + 0x50);
    }
    *(XMLNode **)(param_2 + 0x10) = this;
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  else {
    param_2 = (XMLNode *)0x0;
  }
  return param_2;
}

