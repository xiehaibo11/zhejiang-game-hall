
/* v8::internal::compiler::WasmGraphBuilder::BranchNoHint(v8::internal::compiler::Node*,
   v8::internal::compiler::Node**, v8::internal::compiler::Node**) */

Node * __thiscall
v8::internal::compiler::WasmGraphBuilder::BranchNoHint
          (WasmGraphBuilder *this,Node *param_1,Node **param_2,Node **param_3)

{
  Graph *pGVar1;
  Operator *pOVar2;
  Node *pNVar3;
  Node *pNVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  Node *local_50;
  undefined8 uStack_48;
  
  puVar5 = *(undefined8 **)(this + 8);
  pGVar1 = (Graph *)*puVar5;
  uVar6 = **(undefined8 **)(this + 0x18);
  pOVar2 = (Operator *)CommonOperatorBuilder::Branch((CommonOperatorBuilder *)puVar5[1],0,1);
  local_50 = param_1;
  uStack_48 = uVar6;
  pNVar3 = (Node *)Graph::NewNode(pGVar1,pOVar2,2,&local_50,false);
  pGVar1 = (Graph *)*puVar5;
  pOVar2 = (Operator *)CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)puVar5[1]);
  local_50 = pNVar3;
  pNVar4 = (Node *)Graph::NewNode(pGVar1,pOVar2,1,&local_50,false);
  *param_2 = pNVar4;
  pGVar1 = (Graph *)*puVar5;
  pOVar2 = (Operator *)CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)puVar5[1]);
  local_50 = pNVar3;
  pNVar4 = (Node *)Graph::NewNode(pGVar1,pOVar2,1,&local_50,false);
  *param_3 = pNVar4;
  return pNVar3;
}

