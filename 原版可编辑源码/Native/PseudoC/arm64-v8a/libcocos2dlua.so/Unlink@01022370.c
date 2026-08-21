
/* tinyxml2::XMLNode::Unlink(tinyxml2::XMLNode*) */

void __thiscall tinyxml2::XMLNode::Unlink(XMLNode *this,XMLNode *param_1)

{
  long lVar1;
  
  if (*(XMLNode **)(this + 0x30) == param_1) {
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x48);
  }
  if (*(XMLNode **)(this + 0x38) == param_1) {
    lVar1 = *(long *)(param_1 + 0x40);
    *(long *)(this + 0x38) = lVar1;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x40);
  }
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(param_1 + 0x48);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(*(long *)(param_1 + 0x48) + 0x40) = lVar1;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

