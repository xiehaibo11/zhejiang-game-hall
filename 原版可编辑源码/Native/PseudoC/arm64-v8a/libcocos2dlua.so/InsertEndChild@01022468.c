
/* tinyxml2::XMLNode::InsertEndChild(tinyxml2::XMLNode*) */

XMLNode * __thiscall tinyxml2::XMLNode::InsertEndChild(XMLNode *this,XMLNode *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x38);
  if (lVar1 == 0) {
    *(XMLNode **)(this + 0x30) = param_1;
    *(XMLNode **)(this + 0x38) = param_1;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    *(XMLNode **)(lVar1 + 0x48) = param_1;
    *(long *)(param_1 + 0x40) = lVar1;
    *(XMLNode **)(this + 0x38) = param_1;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(XMLNode **)(param_1 + 0x10) = this;
  (**(code **)(**(long **)(param_1 + 0x50) + 0x28))(*(long **)(param_1 + 0x50));
  return param_1;
}

