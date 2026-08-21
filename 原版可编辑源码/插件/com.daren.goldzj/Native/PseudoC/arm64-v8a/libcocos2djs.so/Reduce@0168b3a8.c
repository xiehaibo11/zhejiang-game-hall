
/* v8::internal::compiler::CommonOperatorReducer::Reduce(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::CommonOperatorReducer::Reduce(CommonOperatorReducer *this,Node *param_1)

{
  Node *pNVar1;
  uint uVar2;
  long lVar3;
  Node *pNVar4;
  Node *pNVar5;
  
  pNVar5 = (Node *)0x0;
  switch(*(undefined2 *)(*(long *)param_1 + 0x10)) {
  case 2:
    pNVar5 = (Node *)ReduceBranch(this,param_1);
    return pNVar5;
  case 3:
    pNVar5 = (Node *)ReduceSwitch(this,param_1);
    return pNVar5;
  case 10:
    pNVar5 = (Node *)ReduceMerge(this,param_1);
    return pNVar5;
  case 0xc:
  case 0xd:
    pNVar5 = (Node *)ReduceDeoptimizeConditional(this,param_1);
    return pNVar5;
  case 0x10:
    pNVar5 = (Node *)ReduceReturn(this,param_1);
    return pNVar5;
  case 0x22:
    pNVar5 = (Node *)ReduceSelect(this,param_1);
    return pNVar5;
  case 0x23:
    pNVar5 = (Node *)ReducePhi(this,param_1);
    return pNVar5;
  case 0x24:
    pNVar4 = param_1 + 0x20;
    uVar2 = (byte)param_1[0x17] & 0xf;
    if (uVar2 == 0xf) {
      uVar2 = *(uint *)(*(long *)pNVar4 + 8);
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar2 = uVar2 - 1;
    pNVar1 = pNVar4 + (long)(int)uVar2 * 8;
    pNVar5 = *(Node **)pNVar4;
    if (1 < (int)uVar2) {
      lVar3 = (ulong)uVar2 - 1;
      do {
        pNVar4 = pNVar4 + 8;
        if ((*(Node **)pNVar4 != param_1) && (*(Node **)pNVar4 != pNVar5)) {
          return (Node *)0x0;
        }
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),*(undefined8 *)pNVar1);
    break;
  case 0x3e:
    pNVar5 = (Node *)ReduceStaticAssert(this,param_1);
    return pNVar5;
  }
  return pNVar5;
}

