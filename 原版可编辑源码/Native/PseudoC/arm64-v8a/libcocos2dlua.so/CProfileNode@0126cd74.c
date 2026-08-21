
/* CProfileNode::CProfileNode(char const*, CProfileNode*) */

void __thiscall CProfileNode::CProfileNode(CProfileNode *this,char *param_1,CProfileNode *param_2)

{
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(char **)this = param_1;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(CProfileNode **)(this + 0x20) = param_2;
  *(undefined8 *)(this + 0x28) = 0;
  Reset(this);
  return;
}

