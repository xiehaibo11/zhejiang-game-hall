
/* CProfileNode::Get_Sub_Node(char const*) */

CProfileNode * __thiscall CProfileNode::Get_Sub_Node(CProfileNode *this,char *param_1)

{
  CProfileNode *pCVar1;
  
  pCVar1 = *(CProfileNode **)(this + 0x28);
  while( true ) {
    if (pCVar1 == (CProfileNode *)0x0) {
      pCVar1 = operator_new(0x40);
      *(undefined4 *)(pCVar1 + 0x18) = 0;
      *(undefined8 *)(pCVar1 + 8) = 0;
      *(undefined8 *)(pCVar1 + 0x10) = 0;
      *(char **)pCVar1 = param_1;
      *(undefined8 *)(pCVar1 + 0x30) = 0;
      *(undefined8 *)(pCVar1 + 0x38) = 0;
      *(CProfileNode **)(pCVar1 + 0x20) = this;
      *(undefined8 *)(pCVar1 + 0x28) = 0;
      Reset(pCVar1);
      *(undefined8 *)(pCVar1 + 0x30) = *(undefined8 *)(this + 0x28);
      *(CProfileNode **)(this + 0x28) = pCVar1;
      return pCVar1;
    }
    if (*(char **)pCVar1 == param_1) break;
    pCVar1 = *(CProfileNode **)(pCVar1 + 0x30);
  }
  return pCVar1;
}

