
/* CProfileNode::CleanupMemory() */

void __thiscall CProfileNode::CleanupMemory(CProfileNode *this)

{
  CProfileNode *pCVar1;
  
  pCVar1 = *(CProfileNode **)(this + 0x28);
  if (pCVar1 != (CProfileNode *)0x0) {
    ~CProfileNode(pCVar1);
    operator_delete(pCVar1);
  }
  pCVar1 = *(CProfileNode **)(this + 0x30);
  *(undefined8 *)(this + 0x28) = 0;
  if (pCVar1 != (CProfileNode *)0x0) {
    ~CProfileNode(pCVar1);
    operator_delete(pCVar1);
  }
  *(undefined8 *)(this + 0x30) = 0;
  return;
}

