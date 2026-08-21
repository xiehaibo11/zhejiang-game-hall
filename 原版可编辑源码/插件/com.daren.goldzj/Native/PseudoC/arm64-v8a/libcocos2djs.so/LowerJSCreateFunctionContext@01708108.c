
/* v8::internal::compiler::JSGenericLowering::LowerJSCreateFunctionContext(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSCreateFunctionContext
          (JSGenericLowering *this,Node *param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  Node *pNVar5;
  CallDescriptor *pCVar6;
  Operator *pOVar7;
  int iVar8;
  Zone *pZVar9;
  undefined8 uVar10;
  undefined8 local_68 [2];
  int *local_58;
  undefined **local_50;
  int *piStack_48;
  
  puVar3 = (undefined8 *)CreateFunctionContextParametersOf(*(Operator **)param_1);
  uVar10 = *puVar3;
  iVar1 = *(int *)(puVar3 + 1);
  uVar2 = *(undefined1 *)((long)puVar3 + 0xc);
  uVar4 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  iVar8 = 0x7ffb;
  if (FLAG_test_small_max_function_context_stub_size != '\0') {
    iVar8 = 10;
  }
  if (iVar8 < iVar1) {
    pZVar9 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
    pNVar5 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),uVar10);
    Node::InsertInput(param_1,pZVar9,0,pNVar5);
    ReplaceWithRuntimeCall(this,param_1,0x135,0xffffffff);
    return;
  }
  CodeFactory::FastNewFunctionContext
            (local_68,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),uVar2);
  pZVar9 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
  pNVar5 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),uVar10);
  Node::InsertInput(param_1,pZVar9,0,pNVar5);
  pZVar9 = (Zone *)**(undefined8 **)*(MachineGraph **)(this + 0x10);
  pNVar5 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),iVar1);
  Node::InsertInput(param_1,pZVar9,1,pNVar5);
  local_50 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  piStack_48 = local_58;
  pCVar6 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_50,
                      local_58[2] - *local_58,uVar4 & 1,*(undefined1 *)(*(long *)param_1 + 0x12),0);
  pNVar5 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_68[0]);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar5);
  pOVar7 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar6);
  NodeProperties::ChangeOp(param_1,pOVar7);
  return;
}

