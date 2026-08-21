
/* v8::internal::compiler::JSGenericLowering::ReplaceWithRuntimeCall(v8::internal::compiler::Node*,
   v8::internal::Runtime::FunctionId, int) */

void __thiscall
v8::internal::compiler::JSGenericLowering::ReplaceWithRuntimeCall
          (JSGenericLowering *this,Node *param_1,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  CallDescriptor *pCVar4;
  undefined8 uVar5;
  Node *pNVar6;
  Node *pNVar7;
  Node *pNVar8;
  Operator *pOVar9;
  MachineGraph *pMVar10;
  Zone *pZVar11;
  
  uVar2 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  uVar1 = *(undefined1 *)(*(long *)param_1 + 0x12);
  lVar3 = Runtime::FunctionForId(param_3);
  if (param_4 < 0) {
    param_4 = (int)*(char *)(lVar3 + 0x18);
  }
  pCVar4 = (CallDescriptor *)
           Linkage::GetRuntimeCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),param_3,param_4,uVar1,uVar2 & 1)
  ;
  pMVar10 = *(MachineGraph **)(this + 0x10);
  uVar5 = ExternalReference::Create(param_3);
  pNVar6 = (Node *)MachineGraph::ExternalConstant(pMVar10,uVar5);
  pNVar7 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),param_4);
  pZVar11 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
  pNVar8 = (Node *)JSGraph::CEntryStubConstant
                             (*(JSGraph **)(this + 0x10),(long)*(char *)(lVar3 + 0x19),0,0,0);
  Node::InsertInput(param_1,pZVar11,0,pNVar8);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),param_4 + 1,pNVar6);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),param_4 + 2,pNVar7);
  pOVar9 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar4);
  NodeProperties::ChangeOp(param_1,pOVar9);
  return;
}

