
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreateEmptyLiteralObject(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSCreateEmptyLiteralObject
          (JSCreateLowering *this,Node *param_1)

{
  long lVar1;
  int iVar2;
  Node *pNVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Operator *pOVar7;
  undefined8 uVar8;
  AccessBuilder *this_00;
  AccessBuilder *pAVar9;
  long lVar10;
  uint uVar11;
  JSGraph *this_01;
  Graph *pGVar12;
  JSGraph *local_f0;
  AccessBuilder *local_e8;
  Node *local_e0;
  undefined8 local_d8;
  ObjectRef local_d0 [16];
  Node *local_c0;
  undefined8 uStack_b8;
  AccessBuilder *local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pNVar3 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  uVar4 = NodeProperties::GetControlInput(param_1,0);
  lVar10 = *(long *)(this + 0x20);
  if (*(char *)(lVar10 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","storage_.is_populated_");
  }
  uStack_b8 = *(undefined8 *)(lVar10 + 0x28);
  local_c0 = *(Node **)(lVar10 + 0x20);
  local_a0 = NativeContextRef::object_function((NativeContextRef *)&local_c0);
  local_d0 = (ObjectRef  [16])JSFunctionRef::initial_map((JSFunctionRef *)local_a0);
  uVar5 = JSGraph::Constant(*(JSGraph **)(this + 0x18),local_d0);
  uVar6 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
  this_01 = *(JSGraph **)(this + 0x18);
  local_e8 = (AccessBuilder *)0x0;
  local_f0 = this_01;
  local_e0 = pNVar3;
  local_d8 = uVar4;
  iVar2 = MapRef::instance_size((MapRef *)local_d0);
  pGVar12 = *(Graph **)this_01;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(this_01 + 8),1);
  local_a0._0_8_ = pNVar3;
  uVar8 = Graph::NewNode(pGVar12,pOVar7,1,(Node **)local_a0,false);
  pGVar12 = *(Graph **)this_01;
  local_e0 = (Node *)uVar8;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::Allocate
                     (*(SimplifiedOperatorBuilder **)(this_01 + 0x178),0xffffffff,0);
  local_a0._0_8_ = JSGraph::Constant(this_01,(double)iVar2);
  local_a0._8_8_ = uVar8;
  local_90 = uVar4;
  this_00 = (AccessBuilder *)Graph::NewNode(pGVar12,pOVar7,3,(Node **)local_a0,false);
  local_e8 = this_00;
  local_e0 = (Node *)this_00;
  AccessBuilder::ForMap(this_00);
  pGVar12 = *(Graph **)this_01;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(this_01 + 0x178),(FieldAccess *)local_a0);
  local_c0 = (Node *)this_00;
  uStack_b8 = uVar5;
  local_b0 = this_00;
  uStack_a8 = uVar4;
  pAVar9 = (AccessBuilder *)Graph::NewNode(pGVar12,pOVar7,4,&local_c0,false);
  local_e0 = (Node *)pAVar9;
  AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(pAVar9);
  uVar5 = JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
  pGVar12 = *(Graph **)this_01;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(this_01 + 0x178),(FieldAccess *)local_a0);
  local_c0 = (Node *)this_00;
  uStack_b8 = uVar5;
  local_b0 = pAVar9;
  uStack_a8 = uVar4;
  pAVar9 = (AccessBuilder *)Graph::NewNode(pGVar12,pOVar7,4,&local_c0,false);
  local_e0 = (Node *)pAVar9;
  AccessBuilder::ForJSObjectElements(pAVar9);
  pGVar12 = *(Graph **)local_f0;
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(local_f0 + 0x178),(FieldAccess *)local_a0);
  uVar4 = 4;
  uStack_a8 = local_d8;
  local_c0 = (Node *)this_00;
  uStack_b8 = uVar6;
  local_b0 = pAVar9;
  local_e0 = (Node *)Graph::NewNode(pGVar12,pOVar7,4,&local_c0,false);
  iVar2 = MapRef::GetInObjectProperties((MapRef *)local_d0);
  if (0 < iVar2) {
    uVar11 = 0;
    do {
      AccessBuilder::ForJSObjectInObjectProperty
                ((AccessBuilder *)local_d0,(MapRef *)(ulong)uVar11,(int)uVar4);
      uVar5 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x18));
      pGVar12 = *(Graph **)local_f0;
      pOVar7 = (Operator *)
               SimplifiedOperatorBuilder::StoreField
                         (*(SimplifiedOperatorBuilder **)(local_f0 + 0x178),(FieldAccess *)local_a0)
      ;
      uVar4 = 4;
      local_c0 = (Node *)local_e8;
      local_b0 = (AccessBuilder *)local_e0;
      uStack_a8 = local_d8;
      uStack_b8 = uVar5;
      local_e0 = (Node *)Graph::NewNode(pGVar12,pOVar7,4,&local_c0,false);
      uVar11 = uVar11 + 1;
      iVar2 = MapRef::GetInObjectProperties((MapRef *)local_d0);
    } while ((int)uVar11 < iVar2);
  }
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,param_1,0);
  AllocationBuilder::FinishAndChange((AllocationBuilder *)&local_f0,param_1);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

