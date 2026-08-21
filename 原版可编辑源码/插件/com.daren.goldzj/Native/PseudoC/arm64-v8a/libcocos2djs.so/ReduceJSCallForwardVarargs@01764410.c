
/* v8::internal::compiler::JSTypedLowering::ReduceJSCallForwardVarargs(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSCallForwardVarargs
          (JSTypedLowering *this,Node *param_1)

{
  uint uVar1;
  CommonOperatorBuilder *this_00;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  Node *pNVar6;
  CallDescriptor *pCVar7;
  Operator *pOVar8;
  Zone *pZVar9;
  undefined **local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  long local_48;
  
  puVar3 = (uint *)CallForwardVarargsParametersOf(*(Operator **)param_1);
  uVar2 = *puVar3;
  lVar4 = NodeProperties::GetValueInput(param_1,0);
  local_48 = *(long *)(lVar4 + 8);
  if ((local_48 == 0x200001) || (uVar5 = Type::SlowIs((Type *)&local_48,0x200001), (uVar5 & 1) != 0)
     ) {
    uVar1 = uVar2 & 0x7fff;
    CodeFactory::CallFunctionForwardVarargs(*(Isolate **)(*(long *)(this + 0x10) + 0x168));
    pZVar9 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
    pNVar6 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_60);
    Node::InsertInput(param_1,pZVar9,0,pNVar6);
    pZVar9 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
    pNVar6 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(double)(int)(uVar1 - 2));
    Node::InsertInput(param_1,pZVar9,2,pNVar6);
    pZVar9 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
    pNVar6 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(double)(uVar2 >> 0xf & 0x7fff));
    Node::InsertInput(param_1,pZVar9,3,pNVar6);
    this_00 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1];
    local_70 = &PTR__CallInterfaceDescriptor_01ca0fc8;
    uStack_68 = local_50;
    pCVar7 = (CallDescriptor *)
             Linkage::GetStubCallDescriptor
                       (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_70,uVar1 - 1,1,0,0);
    pOVar8 = (Operator *)CommonOperatorBuilder::Call(this_00,pCVar7);
    NodeProperties::ChangeOp(param_1,pOVar8);
  }
  else {
    param_1 = (Node *)0x0;
  }
  return param_1;
}

