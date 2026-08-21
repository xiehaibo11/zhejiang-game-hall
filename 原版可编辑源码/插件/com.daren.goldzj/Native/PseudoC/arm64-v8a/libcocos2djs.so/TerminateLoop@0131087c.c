
/* v8::internal::compiler::WasmGraphBuilder::TerminateLoop(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::WasmGraphBuilder::TerminateLoop
          (WasmGraphBuilder *this,Node *param_1,Node *param_2)

{
  Graph *pGVar1;
  CommonOperatorBuilder *this_00;
  Operator *pOVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Node *local_40;
  Node *pNStack_38;
  
  pGVar1 = (Graph *)**(undefined8 **)(this + 8);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Terminate
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1]);
  local_40 = param_1;
  pNStack_38 = param_2;
  pNVar3 = (Node *)Graph::NewNode(pGVar1,pOVar2,2,&local_40,false);
  pGVar1 = (Graph *)**(undefined8 **)(this + 8);
  this_00 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1];
  if (*(long *)(pGVar1 + 0x10) == 0) {
    pOVar2 = (Operator *)CommonOperatorBuilder::End(this_00,1);
    local_40 = pNVar3;
    uVar4 = Graph::NewNode(pGVar1,pOVar2,1,&local_40,false);
    *(undefined8 *)(pGVar1 + 0x10) = uVar4;
  }
  else {
    NodeProperties::MergeControlToEnd(pGVar1,this_00,pNVar3);
  }
  return pNVar3;
}

