
/* v8::internal::compiler::Int64Lowering::ReplaceNodeWithProjections(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::Int64Lowering::ReplaceNodeWithProjections(Int64Lowering *this,Node *param_1)

{
  Operator *pOVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Graph *pGVar4;
  Node *local_40;
  undefined8 uStack_38;
  
  pGVar4 = *(Graph **)(this + 8);
  pOVar1 = (Operator *)CommonOperatorBuilder::Projection(*(CommonOperatorBuilder **)(this + 0x18),0)
  ;
  uStack_38 = *(undefined8 *)(*(long *)(this + 8) + 8);
  local_40 = param_1;
  uVar2 = Graph::NewNode(pGVar4,pOVar1,2,&local_40,false);
  pGVar4 = *(Graph **)(this + 8);
  pOVar1 = (Operator *)CommonOperatorBuilder::Projection(*(CommonOperatorBuilder **)(this + 0x18),1)
  ;
  uStack_38 = *(undefined8 *)(*(long *)(this + 8) + 8);
  local_40 = param_1;
  uVar3 = Graph::NewNode(pGVar4,pOVar1,2,&local_40,false);
  *(undefined8 *)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
       uVar2;
  *(undefined8 *)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 8)
       = uVar3;
  return;
}

