
/* v8::internal::compiler::CommonOperatorReducer::ReduceEffectPhi(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::CommonOperatorReducer::ReduceEffectPhi
          (CommonOperatorReducer *this,Node *param_1)

{
  Node *pNVar1;
  uint uVar2;
  Node *pNVar3;
  long lVar4;
  Node *pNVar5;
  
  pNVar3 = param_1 + 0x20;
  uVar2 = (byte)param_1[0x17] & 0xf;
  if (uVar2 == 0xf) {
    uVar2 = *(uint *)(*(long *)pNVar3 + 8);
    pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
  }
  uVar2 = uVar2 - 1;
  pNVar1 = pNVar3 + (long)(int)uVar2 * 8;
  pNVar5 = *(Node **)pNVar3;
  if (1 < (int)uVar2) {
    lVar4 = (ulong)uVar2 - 1;
    do {
      pNVar3 = pNVar3 + 8;
      if ((*(Node **)pNVar3 != param_1) && (*(Node **)pNVar3 != pNVar5)) {
        return (Node *)0x0;
      }
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),*(undefined8 *)pNVar1);
  return pNVar5;
}

