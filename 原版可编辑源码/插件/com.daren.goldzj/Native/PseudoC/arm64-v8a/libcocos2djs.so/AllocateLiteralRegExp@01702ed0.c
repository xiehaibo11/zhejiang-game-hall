
/* v8::internal::compiler::JSCreateLowering::AllocateLiteralRegExp(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::JSRegExpRef) */

void v8::internal::compiler::JSCreateLowering::AllocateLiteralRegExp
               (long param_1,Node *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  Operator *pOVar3;
  undefined8 uVar4;
  AccessBuilder *this;
  AccessBuilder *pAVar5;
  JSGraph *this_00;
  Graph *pGVar6;
  undefined1 auVar7 [16];
  ObjectRef local_e0 [16];
  ObjectRef local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  AccessBuilder *local_b0;
  undefined8 uStack_a8;
  AccessBuilder *local_a0;
  undefined8 uStack_98;
  Node *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_c0 = param_4;
  uStack_b8 = param_5;
  local_d0 = (ObjectRef  [16])HeapObjectRef::map((HeapObjectRef *)&local_c0);
  this_00 = *(JSGraph **)(param_1 + 0x18);
  uVar2 = BitsetType::Lub<v8::internal::compiler::MapRef>(local_d0);
  uVar2 = BitsetType::ExpandInternals(uVar2);
  pGVar6 = *(Graph **)this_00;
  pOVar3 = (Operator *)
           CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(this_00 + 8),1);
  local_90 = param_2;
  uVar4 = Graph::NewNode(pGVar6,pOVar3,1,&local_90,false);
  pGVar6 = *(Graph **)this_00;
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::Allocate
                     (*(SimplifiedOperatorBuilder **)(this_00 + 0x178),uVar2 | 1,0);
  local_90 = (Node *)JSGraph::Constant(this_00,28.0);
  uStack_88 = uVar4;
  local_80 = param_3;
  this = (AccessBuilder *)Graph::NewNode(pGVar6,pOVar3,3,&local_90,false);
  AccessBuilder::ForMap(this);
  uVar4 = JSGraph::Constant(this_00,local_d0);
  pGVar6 = *(Graph **)this_00;
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(this_00 + 0x178),(FieldAccess *)&local_90);
  local_b0 = this;
  uStack_a8 = uVar4;
  local_a0 = this;
  uStack_98 = param_3;
  pAVar5 = (AccessBuilder *)Graph::NewNode(pGVar6,pOVar3,4,(Node **)&local_b0,false);
  AccessBuilder::ForJSObjectPropertiesOrHash(pAVar5);
  local_e0 = (ObjectRef  [16])JSRegExpRef::raw_properties_or_hash((JSRegExpRef *)&local_c0);
  uVar4 = JSGraph::Constant(this_00,local_e0);
  pGVar6 = *(Graph **)this_00;
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(this_00 + 0x178),(FieldAccess *)&local_90);
  local_b0 = this;
  uStack_a8 = uVar4;
  local_a0 = pAVar5;
  uStack_98 = param_3;
  pAVar5 = (AccessBuilder *)Graph::NewNode(pGVar6,pOVar3,4,(Node **)&local_b0,false);
  AccessBuilder::ForJSObjectElements(pAVar5);
  auVar7 = JSObjectRef::elements((JSObjectRef *)&local_c0);
  local_e0 = (ObjectRef  [16])auVar7;
  uVar4 = JSGraph::Constant(this_00,local_e0);
  pGVar6 = *(Graph **)this_00;
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(this_00 + 0x178),(FieldAccess *)&local_90);
  local_b0 = this;
  uStack_a8 = uVar4;
  local_a0 = pAVar5;
  uStack_98 = param_3;
  pAVar5 = (AccessBuilder *)Graph::NewNode(pGVar6,pOVar3,4,(Node **)&local_b0,false);
  AccessBuilder::ForJSRegExpData(pAVar5);
  auVar7 = JSRegExpRef::data((JSRegExpRef *)&local_c0);
  local_e0 = (ObjectRef  [16])auVar7;
  uVar4 = JSGraph::Constant(this_00,local_e0);
  pGVar6 = *(Graph **)this_00;
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(this_00 + 0x178),(FieldAccess *)&local_90);
  local_b0 = this;
  uStack_a8 = uVar4;
  local_a0 = pAVar5;
  uStack_98 = param_3;
  pAVar5 = (AccessBuilder *)Graph::NewNode(pGVar6,pOVar3,4,(Node **)&local_b0,false);
  AccessBuilder::ForJSRegExpSource(pAVar5);
  auVar7 = JSRegExpRef::source((JSRegExpRef *)&local_c0);
  local_e0 = (ObjectRef  [16])auVar7;
  uVar4 = JSGraph::Constant(this_00,local_e0);
  pGVar6 = *(Graph **)this_00;
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(this_00 + 0x178),(FieldAccess *)&local_90);
  local_b0 = this;
  uStack_a8 = uVar4;
  local_a0 = pAVar5;
  uStack_98 = param_3;
  pAVar5 = (AccessBuilder *)Graph::NewNode(pGVar6,pOVar3,4,(Node **)&local_b0,false);
  AccessBuilder::ForJSRegExpFlags(pAVar5);
  auVar7 = JSRegExpRef::flags((JSRegExpRef *)&local_c0);
  local_e0 = (ObjectRef  [16])auVar7;
  uVar4 = JSGraph::Constant(this_00,local_e0);
  pGVar6 = *(Graph **)this_00;
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(this_00 + 0x178),(FieldAccess *)&local_90);
  local_b0 = this;
  uStack_a8 = uVar4;
  local_a0 = pAVar5;
  uStack_98 = param_3;
  pAVar5 = (AccessBuilder *)Graph::NewNode(pGVar6,pOVar3,4,(Node **)&local_b0,false);
  AccessBuilder::ForJSRegExpLastIndex(pAVar5);
  auVar7 = JSRegExpRef::last_index((JSRegExpRef *)&local_c0);
  local_e0 = (ObjectRef  [16])auVar7;
  uVar4 = JSGraph::Constant(this_00,local_e0);
  pGVar6 = *(Graph **)this_00;
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     (*(SimplifiedOperatorBuilder **)(this_00 + 0x178),(FieldAccess *)&local_90);
  local_b0 = this;
  uStack_a8 = uVar4;
  local_a0 = pAVar5;
  uStack_98 = param_3;
  uVar4 = Graph::NewNode(pGVar6,pOVar3,4,(Node **)&local_b0,false);
  pGVar6 = *(Graph **)this_00;
  pOVar3 = (Operator *)CommonOperatorBuilder::FinishRegion(*(CommonOperatorBuilder **)(this_00 + 8))
  ;
  local_90 = (Node *)this;
  uStack_88 = uVar4;
  Graph::NewNode(pGVar6,pOVar3,2,&local_90,false);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

