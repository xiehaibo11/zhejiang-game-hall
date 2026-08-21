
/* v8::internal::compiler::JSGenericLowering::LowerJSStoreDataPropertyInLiteral(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSStoreDataPropertyInLiteral
          (JSGenericLowering *this,Node *param_1)

{
  Node *pNVar1;
  int iVar2;
  FeedbackSource *this_00;
  Node *pNVar3;
  Node *pNVar4;
  JSGraph *this_01;
  Use *pUVar5;
  Node *pNVar6;
  
  this_00 = (FeedbackSource *)FeedbackParameterOf(*(Operator **)param_1);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,param_1,0);
  Node::InsertInputs(param_1,*(Zone **)**(undefined8 **)(this + 0x10),4,2);
  pNVar3 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),*(undefined8 *)this_00);
  pNVar1 = param_1 + 0x20;
  pNVar6 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar4 = *(Node **)(pNVar6 + 0x20);
  if (pNVar4 != pNVar3) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar5 = (Use *)(*(long *)pNVar1 + -0x78);
    }
    else {
      pUVar5 = (Use *)(param_1 + -0x78);
    }
    if (pNVar4 != (Node *)0x0) {
      Node::RemoveUse(pNVar4,pUVar5);
    }
    *(Node **)(pNVar6 + 0x20) = pNVar3;
    if (pNVar3 != (Node *)0x0) {
      Node::AppendUse(pNVar3,pUVar5);
    }
  }
  this_01 = *(JSGraph **)(this + 0x10);
  iVar2 = FeedbackSource::index(this_00);
  pNVar3 = (Node *)JSGraph::Constant(this_01,(double)iVar2);
  pNVar6 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar4 = *(Node **)(pNVar6 + 0x28);
  if (pNVar4 != pNVar3) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar5 = (Use *)(*(long *)pNVar1 + -0x90);
    }
    else {
      pUVar5 = (Use *)(param_1 + -0x90);
    }
    if (pNVar4 != (Node *)0x0) {
      Node::RemoveUse(pNVar4,pUVar5);
    }
    *(Node **)(pNVar6 + 0x28) = pNVar3;
    if (pNVar3 != (Node *)0x0) {
      Node::AppendUse(pNVar3,pUVar5);
    }
  }
  ReplaceWithRuntimeCall(this,param_1,0xda,0xffffffff);
  return;
}

