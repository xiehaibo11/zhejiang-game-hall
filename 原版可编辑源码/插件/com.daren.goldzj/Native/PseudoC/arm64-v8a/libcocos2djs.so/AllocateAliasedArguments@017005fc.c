
/* v8::internal::compiler::JSCreateLowering::AllocateAliasedArguments(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::SharedFunctionInfoRef const&, bool*) */

void __thiscall
v8::internal::compiler::JSCreateLowering::AllocateAliasedArguments
          (JSCreateLowering *this,Node *param_1,Node *param_2,Node *param_3,Node *param_4,
          Node *param_5,SharedFunctionInfoRef *param_6,bool *param_7)

{
  int iVar1;
  int iVar2;
  Operator *pOVar3;
  AccessBuilder *pAVar4;
  ulong uVar5;
  AccessBuilder *this_00;
  undefined8 uVar6;
  Operator *pOVar7;
  Node *pNVar8;
  Graph *this_01;
  int iVar9;
  Graph *pGVar10;
  double dVar11;
  ElementAccess aEStack_e0 [24];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8;
  Node *local_b0;
  AccessBuilder *local_a8;
  Node *local_a0;
  Node *local_98;
  Node *pNStack_90;
  Node *local_88;
  AccessBuilder *pAStack_80;
  Node *local_78;
  
  iVar1 = SharedFunctionInfoRef::internal_formal_parameter_count(param_6);
  local_98 = param_4;
  pNStack_90 = param_5;
  local_88 = param_1;
  if (iVar1 == 0) {
    pGVar10 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::NewArgumentsElements
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f],0);
    iVar1 = 3;
  }
  else {
    *param_7 = true;
    pGVar10 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::NewArgumentsElements
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f],iVar1);
    pAVar4 = (AccessBuilder *)Graph::NewNode(pGVar10,pOVar3,3,&local_98,false);
    local_b8 = *(undefined8 **)(this + 0x18);
    local_b0 = (Node *)0x0;
    local_a8 = pAVar4;
    local_a0 = param_2;
    ObjectRef::ObjectRef
              ((ObjectRef *)&local_c8,*(undefined8 *)(this + 0x20),local_b8[0x2d] + 0x270,0);
    uVar5 = ObjectRef::IsMap((ObjectRef *)&local_c8);
    if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    this_00 = (AccessBuilder *)
              AllocationBuilder::AllocateArray(&local_b8,iVar1 + 2,local_c8,uStack_c0,0);
    AccessBuilder::ForFixedArrayElement(this_00);
    dVar11 = 0.0;
    uVar6 = JSGraph::Constant(*(JSGraph **)(this + 0x18),0.0);
    pGVar10 = (Graph *)*local_b8;
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::StoreElement
                       ((SimplifiedOperatorBuilder *)local_b8[0x2f],aEStack_e0);
    local_98 = local_b0;
    pAStack_80 = local_a8;
    local_78 = local_a0;
    pNStack_90 = (Node *)uVar6;
    local_88 = param_3;
    local_a8 = (AccessBuilder *)Graph::NewNode(pGVar10,pOVar3,5,&local_98,false);
    AccessBuilder::ForFixedArrayElement(local_a8);
    uVar6 = JSGraph::Constant(*(JSGraph **)(this + 0x18),1.0);
    pGVar10 = (Graph *)*local_b8;
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::StoreElement
                       ((SimplifiedOperatorBuilder *)local_b8[0x2f],aEStack_e0);
    local_98 = local_b0;
    pAStack_80 = local_a8;
    local_78 = local_a0;
    pNStack_90 = (Node *)uVar6;
    local_88 = (Node *)pAVar4;
    local_a8 = (AccessBuilder *)Graph::NewNode(pGVar10,pOVar3,5,&local_98,false);
    iVar9 = iVar1 + -1;
    if (0 < iVar1) {
      iVar1 = 2;
      do {
        iVar2 = SharedFunctionInfoRef::context_header_size(param_6);
        pGVar10 = (Graph *)**(undefined8 **)(this + 0x18);
        pOVar3 = (Operator *)
                 CommonOperatorBuilder::Select
                           ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1],8,0);
        this_01 = (Graph *)**(undefined8 **)(this + 0x18);
        pOVar7 = (Operator *)
                 SimplifiedOperatorBuilder::NumberLessThan
                           ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f]);
        local_98 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x18),dVar11);
        pNStack_90 = param_5;
        pNVar8 = (Node *)Graph::NewNode(this_01,pOVar7,2,&local_98,false);
        uVar6 = JSGraph::Constant(*(JSGraph **)(this + 0x18),(double)(iVar2 + iVar9));
        local_88 = (Node *)JSGraph::TheHoleConstant(*(JSGraph **)(this + 0x18));
        local_98 = pNVar8;
        pNStack_90 = (Node *)uVar6;
        pAVar4 = (AccessBuilder *)Graph::NewNode(pGVar10,pOVar3,3,&local_98,false);
        AccessBuilder::ForFixedArrayElement(pAVar4);
        uVar6 = JSGraph::Constant(*(JSGraph **)(this + 0x18),(double)iVar1);
        pGVar10 = (Graph *)*local_b8;
        pOVar3 = (Operator *)
                 SimplifiedOperatorBuilder::StoreElement
                           ((SimplifiedOperatorBuilder *)local_b8[0x2f],aEStack_e0);
        local_98 = local_b0;
        pAStack_80 = local_a8;
        local_78 = local_a0;
        pNStack_90 = (Node *)uVar6;
        local_88 = (Node *)pAVar4;
        local_a8 = (AccessBuilder *)Graph::NewNode(pGVar10,pOVar3,5,&local_98,false);
        iVar9 = iVar9 + -1;
        dVar11 = dVar11 + 1.0;
        iVar1 = iVar1 + 1;
      } while (iVar9 != -1);
    }
    pGVar10 = (Graph *)*local_b8;
    pOVar3 = (Operator *)CommonOperatorBuilder::FinishRegion((CommonOperatorBuilder *)local_b8[1]);
    iVar1 = 2;
    local_98 = local_b0;
    pNStack_90 = (Node *)local_a8;
  }
  Graph::NewNode(pGVar10,pOVar3,iVar1,&local_98,false);
  return;
}

