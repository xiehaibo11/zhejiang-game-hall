
/* CProfileNode::~CProfileNode() */

void __thiscall CProfileNode::~CProfileNode(CProfileNode *this)

{
  CProfileNode *pCVar1;
  
  pCVar1 = *(CProfileNode **)(this + 0x28);
  if (pCVar1 != (CProfileNode *)0x0) {
    ~CProfileNode(pCVar1);
    operator_delete(pCVar1);
  }
  pCVar1 = *(CProfileNode **)(this + 0x30);
  if (pCVar1 != (CProfileNode *)0x0) {
    ~CProfileNode(pCVar1);
    operator_delete(pCVar1);
    return;
  }
  return;
}

