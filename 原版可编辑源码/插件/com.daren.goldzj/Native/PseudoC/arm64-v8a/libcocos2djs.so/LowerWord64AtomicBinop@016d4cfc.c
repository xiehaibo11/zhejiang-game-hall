
/* v8::internal::compiler::Int64Lowering::LowerWord64AtomicBinop(v8::internal::compiler::Node*,
   v8::internal::compiler::Operator const*) */

void __thiscall
v8::internal::compiler::Int64Lowering::LowerWord64AtomicBinop
          (Int64Lowering *this,Node *param_1,Operator *param_2)

{
  Node *pNVar1;
  uint uVar2;
  Node *this_00;
  Operator *pOVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Node *pNVar6;
  Graph *pGVar7;
  Node *this_01;
  Use *pUVar8;
  long lVar9;
  Node *local_60;
  undefined8 uStack_58;
  
  LowerMemoryBaseAndIndex(this,param_1);
  pNVar1 = param_1 + 0x20;
  uVar2 = *(uint *)(param_1 + 0x14) & 0xf000000;
  pNVar6 = pNVar1;
  if (uVar2 == 0xf000000) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  lVar9 = *(long *)(pNVar6 + 0x10);
  this_01 = *(Node **)(*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar9 + 0x14) & 0xffffff) * 0x10);
  pNVar6 = pNVar1;
  if (uVar2 == 0xf000000) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this_00 = *(Node **)(pNVar6 + 0x10);
  if (this_00 != this_01) {
    if (uVar2 == 0xf000000) {
      pUVar8 = (Use *)(*(long *)pNVar1 + -0x48);
    }
    else {
      pUVar8 = (Use *)(param_1 + -0x48);
    }
    if (this_00 != (Node *)0x0) {
      Node::RemoveUse(this_00,pUVar8);
    }
    *(Node **)(pNVar6 + 0x10) = this_01;
    if (this_01 != (Node *)0x0) {
      Node::AppendUse(this_01,pUVar8);
    }
  }
  Node::InsertInput(param_1,*(Zone **)this,3,
                    *(Node **)(*(long *)(this + 0x78) +
                               ((ulong)*(uint *)(lVar9 + 0x14) & 0xffffff) * 0x10 + 8));
  NodeProperties::ChangeOp(param_1,param_2);
  pGVar7 = *(Graph **)(this + 8);
  pOVar3 = (Operator *)CommonOperatorBuilder::Projection(*(CommonOperatorBuilder **)(this + 0x18),0)
  ;
  uStack_58 = *(undefined8 *)(*(long *)(this + 8) + 8);
  local_60 = param_1;
  uVar4 = Graph::NewNode(pGVar7,pOVar3,2,&local_60,false);
  pGVar7 = *(Graph **)(this + 8);
  pOVar3 = (Operator *)CommonOperatorBuilder::Projection(*(CommonOperatorBuilder **)(this + 0x18),1)
  ;
  uStack_58 = *(undefined8 *)(*(long *)(this + 8) + 8);
  local_60 = param_1;
  uVar5 = Graph::NewNode(pGVar7,pOVar3,2,&local_60,false);
  *(undefined8 *)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
       uVar4;
  *(undefined8 *)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 8)
       = uVar5;
  return;
}

