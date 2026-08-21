
/* v8::internal::compiler::JSGenericLowering::LowerJSCreateClosure(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSCreateClosure
          (JSGenericLowering *this,Node *param_1)

{
  undefined8 *puVar1;
  Node *pNVar2;
  ulong uVar3;
  CallDescriptor *pCVar4;
  Operator *pOVar5;
  Zone *pZVar6;
  undefined8 local_58 [2];
  int *local_48;
  undefined **local_40;
  int *piStack_38;
  
  puVar1 = (undefined8 *)CreateClosureParametersOf(*(Operator **)param_1);
  pZVar6 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
  pNVar2 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),*puVar1);
  Node::InsertInput(param_1,pZVar6,0,pNVar2);
  pZVar6 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
  pNVar2 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),puVar1[1]);
  Node::InsertInput(param_1,pZVar6,1,pNVar2);
  Node::RemoveInput(param_1,4);
  if (*(char *)(puVar1 + 3) != '\0') {
    ReplaceWithRuntimeCall(this,param_1,0x134,0xffffffff);
    return;
  }
  Builtins::CallableFor((Builtins *)local_58,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),0x20);
  uVar3 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  local_40 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  piStack_38 = local_48;
  pCVar4 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_40,
                      local_48[2] - *local_48,uVar3 & 1,*(undefined1 *)(*(long *)param_1 + 0x12),0);
  pNVar2 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_58[0]);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar2);
  pOVar5 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar4);
  NodeProperties::ChangeOp(param_1,pOVar5);
  return;
}

