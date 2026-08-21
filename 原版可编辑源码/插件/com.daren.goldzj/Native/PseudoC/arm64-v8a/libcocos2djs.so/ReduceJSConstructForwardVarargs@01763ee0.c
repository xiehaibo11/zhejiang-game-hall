
/* v8::internal::compiler::JSTypedLowering::ReduceJSConstructForwardVarargs(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSConstructForwardVarargs
          (JSTypedLowering *this,Node *param_1)

{
  uint uVar1;
  CommonOperatorBuilder *this_00;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  Node *pNVar6;
  ulong uVar7;
  Node *pNVar8;
  CallDescriptor *pCVar9;
  Operator *pOVar10;
  Zone *pZVar11;
  int *piVar12;
  undefined **local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  HeapObjectRef local_60 [16];
  int *local_38;
  
  puVar4 = (uint *)ConstructForwardVarargsParametersOf(*(Operator **)param_1);
  uVar2 = *puVar4;
  uVar1 = uVar2 & 0xffff;
  lVar5 = NodeProperties::GetValueInput(param_1,0);
  piVar12 = *(int **)(lVar5 + 8);
  iVar3 = uVar1 - 1;
  local_38 = piVar12;
  pNVar6 = (Node *)NodeProperties::GetValueInput(param_1,iVar3);
  if ((((ulong)piVar12 & 1) == 0) && (*piVar12 == 0)) {
    lVar5 = Type::AsHeapConstant((Type *)&local_38);
    uVar7 = ObjectRef::IsJSFunction((ObjectRef *)(lVar5 + 8));
    if ((uVar7 & 1) != 0) {
      lVar5 = Type::AsHeapConstant((Type *)&local_38);
      local_60 = (HeapObjectRef  [16])ObjectRef::AsJSFunction((ObjectRef *)(lVar5 + 8));
      local_78 = HeapObjectRef::map(local_60);
      uVar7 = MapRef::is_constructor((MapRef *)local_78);
      if ((uVar7 & 1) != 0) {
        CodeFactory::ConstructFunctionForwardVarargs(*(Isolate **)(*(long *)(this + 0x10) + 0x168));
        Node::RemoveInput(param_1,iVar3);
        pZVar11 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
        pNVar8 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_78._0_8_);
        Node::InsertInput(param_1,pZVar11,0,pNVar8);
        Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),2,pNVar6);
        pZVar11 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
        pNVar6 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(double)(int)(uVar1 - 2));
        Node::InsertInput(param_1,pZVar11,3,pNVar6);
        pZVar11 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
        pNVar6 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(double)(uVar2 >> 0x10));
        Node::InsertInput(param_1,pZVar11,4,pNVar6);
        pZVar11 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
        pNVar6 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
        Node::InsertInput(param_1,pZVar11,5,pNVar6);
        this_00 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1];
        local_88 = &PTR__CallInterfaceDescriptor_01ca0fc8;
        uStack_80 = local_68;
        pCVar9 = (CallDescriptor *)
                 Linkage::GetStubCallDescriptor
                           (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_88,iVar3,1,0,0);
        pOVar10 = (Operator *)CommonOperatorBuilder::Call(this_00,pCVar9);
        NodeProperties::ChangeOp(param_1,pOVar10);
        return param_1;
      }
    }
  }
  return (Node *)0x0;
}

