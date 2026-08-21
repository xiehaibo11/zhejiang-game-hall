
/* v8::internal::compiler::JSCreateLowering::AllocateAliasedArguments(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::SharedFunctionInfoRef const&, bool*) */

void __thiscall
v8::internal::compiler::JSCreateLowering::AllocateAliasedArguments
          (JSCreateLowering *this,Node *param_1,Node *param_2,Node *param_3,Node *param_4,
          SharedFunctionInfoRef *param_5,bool *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  AccessBuilder *pAVar8;
  AccessBuilder *pAVar9;
  Operator *pOVar10;
  undefined8 uVar11;
  Node *pNVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  Graph *pGVar16;
  double dVar17;
  ElementAccess aEStack_290 [24];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 *local_268;
  Node *local_260;
  AccessBuilder *local_258;
  Node *local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 *local_238;
  Node *local_230;
  AccessBuilder *local_228;
  Node *local_220;
  Node *local_218;
  AccessBuilder *pAStack_210;
  AccessBuilder *local_208;
  AccessBuilder *pAStack_200;
  Node *local_1f8;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_80;
  
  lVar13 = tpidr_el0;
  local_80 = *(long *)(lVar13 + 0x28);
  lVar5 = FrameStateInfoOf(*(Operator **)param_3);
  if (*(long *)(lVar5 + 0x10) == 0) {
    iVar15 = -1;
LAB_01700a10:
    iVar4 = SharedFunctionInfoRef::internal_formal_parameter_count(param_5);
    if (iVar4 != 0) {
      *param_6 = true;
      iVar2 = iVar15;
      if (iVar4 <= iVar15) {
        iVar2 = iVar4;
      }
      pNVar12 = param_3 + 0x20;
      if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
        pNVar12 = (Node *)(*(long *)pNVar12 + 0x10);
      }
      StateValuesAccess::iterator::iterator((iterator *)&local_218,*(Node **)pNVar12);
      puVar6 = (undefined8 *)StateValuesAccess::iterator::operator++((iterator *)&local_218);
      uStack_148 = puVar6[1];
      local_150 = *puVar6;
      uStack_138 = puVar6[3];
      local_140 = puVar6[2];
      uStack_128 = puVar6[5];
      uStack_130 = puVar6[4];
      uStack_118 = puVar6[7];
      local_120 = puVar6[6];
      uStack_108 = puVar6[9];
      uStack_110 = puVar6[8];
      uStack_f8 = puVar6[0xb];
      local_100 = puVar6[10];
      uStack_e8 = puVar6[0xd];
      uStack_f0 = puVar6[0xc];
      uStack_d8 = puVar6[0xf];
      local_e0 = puVar6[0xe];
      uStack_c8 = puVar6[0x11];
      uStack_d0 = puVar6[0x10];
      uStack_b8 = puVar6[0x13];
      local_c0 = puVar6[0x12];
      uStack_a8 = puVar6[0x15];
      uStack_b0 = puVar6[0x14];
      local_90 = puVar6[0x18];
      uStack_98 = puVar6[0x17];
      local_a0 = puVar6[0x16];
      local_238 = *(undefined8 **)(this + 0x18);
      local_230 = (Node *)0x0;
      local_228 = (AccessBuilder *)param_1;
      local_220 = param_2;
      ObjectRef::ObjectRef
                ((ObjectRef *)&local_248,*(undefined8 *)(this + 0x20),local_238[0x2d] + 0xe0,0);
      uVar7 = ObjectRef::IsMap((ObjectRef *)&local_248);
      if ((uVar7 & 1) == 0) {
LAB_01700e68:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsMap()");
      }
      pAVar8 = (AccessBuilder *)
               AllocationBuilder::AllocateArray(&local_238,iVar15,local_248,uStack_240,0);
      iVar1 = iVar2;
      iVar3 = iVar4;
      if (0 < iVar2) {
        iVar14 = 0;
        dVar17 = 0.0;
        do {
          AccessBuilder::ForFixedArrayElement(pAVar8);
          pAVar8 = (AccessBuilder *)JSGraph::Constant(*(JSGraph **)(this + 0x18),dVar17);
          pAVar9 = (AccessBuilder *)JSGraph::TheHoleConstant(*(JSGraph **)(this + 0x18));
          pGVar16 = (Graph *)*local_238;
          pOVar10 = (Operator *)
                    SimplifiedOperatorBuilder::StoreElement
                              ((SimplifiedOperatorBuilder *)local_238[0x2f],
                               (ElementAccess *)&local_268);
          local_218 = local_230;
          pAStack_200 = local_228;
          local_1f8 = local_220;
          pAStack_210 = pAVar8;
          local_208 = pAVar9;
          local_228 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar10,5,&local_218,false);
          dVar17 = dVar17 + 1.0;
          iVar14 = iVar14 + 1;
          pAVar8 = (AccessBuilder *)StateValuesAccess::iterator::operator++((iterator *)&local_150);
        } while (iVar14 < iVar2);
      }
      while (iVar3 < iVar15) {
        AccessBuilder::ForFixedArrayElement(pAVar8);
        pAVar8 = (AccessBuilder *)JSGraph::Constant(*(JSGraph **)(this + 0x18),(double)iVar1);
        pAVar9 = (AccessBuilder *)StateValuesAccess::iterator::operator*((iterator *)&local_150);
        pGVar16 = (Graph *)*local_238;
        pOVar10 = (Operator *)
                  SimplifiedOperatorBuilder::StoreElement
                            ((SimplifiedOperatorBuilder *)local_238[0x2f],
                             (ElementAccess *)&local_268);
        local_218 = local_230;
        pAStack_200 = local_228;
        local_1f8 = local_220;
        pAStack_210 = pAVar8;
        local_208 = pAVar9;
        local_228 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar10,5,&local_218,false);
        pAVar8 = (AccessBuilder *)StateValuesAccess::iterator::operator++((iterator *)&local_150);
        iVar1 = iVar1 + 1;
        iVar3 = iVar1;
      }
      pGVar16 = (Graph *)*local_238;
      pOVar10 = (Operator *)
                CommonOperatorBuilder::FinishRegion((CommonOperatorBuilder *)local_238[1]);
      local_218 = local_230;
      pAStack_210 = local_228;
      pAVar8 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar10,2,&local_218,false);
      local_268 = *(undefined8 **)(this + 0x18);
      local_260 = (Node *)0x0;
      local_258 = pAVar8;
      local_250 = param_2;
      ObjectRef::ObjectRef
                ((ObjectRef *)&local_278,*(undefined8 *)(this + 0x20),local_268[0x2d] + 0x270,0);
      uVar7 = ObjectRef::IsMap((ObjectRef *)&local_278);
      if ((uVar7 & 1) == 0) goto LAB_01700e68;
      pAVar9 = (AccessBuilder *)
               AllocationBuilder::AllocateArray(&local_268,iVar2 + 2,local_278,uStack_270,0);
      AccessBuilder::ForFixedArrayElement(pAVar9);
      uVar11 = JSGraph::Constant(*(JSGraph **)(this + 0x18),0.0);
      pGVar16 = (Graph *)*local_268;
      pOVar10 = (Operator *)
                SimplifiedOperatorBuilder::StoreElement
                          ((SimplifiedOperatorBuilder *)local_268[0x2f],aEStack_290);
      local_218 = local_260;
      pAStack_200 = local_258;
      local_1f8 = local_250;
      pAStack_210 = (AccessBuilder *)uVar11;
      local_208 = (AccessBuilder *)param_4;
      local_258 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar10,5,&local_218,false);
      AccessBuilder::ForFixedArrayElement(local_258);
      uVar11 = JSGraph::Constant(*(JSGraph **)(this + 0x18),1.0);
      pGVar16 = (Graph *)*local_268;
      pOVar10 = (Operator *)
                SimplifiedOperatorBuilder::StoreElement
                          ((SimplifiedOperatorBuilder *)local_268[0x2f],aEStack_290);
      local_218 = local_260;
      pAStack_200 = local_258;
      local_1f8 = local_250;
      pAStack_210 = (AccessBuilder *)uVar11;
      local_208 = pAVar8;
      local_258 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar10,5,&local_218,false);
      if (0 < iVar2) {
        iVar15 = 0;
        do {
          iVar4 = iVar4 + -1;
          pAVar8 = (AccessBuilder *)SharedFunctionInfoRef::context_header_size(param_5);
          AccessBuilder::ForFixedArrayElement(pAVar8);
          uVar11 = JSGraph::Constant(*(JSGraph **)(this + 0x18),(double)(iVar15 + 2));
          pAVar8 = (AccessBuilder *)
                   JSGraph::Constant(*(JSGraph **)(this + 0x18),(double)((int)pAVar8 + iVar4));
          pGVar16 = (Graph *)*local_268;
          pOVar10 = (Operator *)
                    SimplifiedOperatorBuilder::StoreElement
                              ((SimplifiedOperatorBuilder *)local_268[0x2f],aEStack_290);
          local_218 = local_260;
          pAStack_200 = local_258;
          local_1f8 = local_250;
          pAStack_210 = (AccessBuilder *)uVar11;
          local_208 = pAVar8;
          local_258 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar10,5,&local_218,false);
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar2);
      }
      pGVar16 = (Graph *)*local_268;
      pOVar10 = (Operator *)
                CommonOperatorBuilder::FinishRegion((CommonOperatorBuilder *)local_268[1]);
      local_218 = local_260;
      pAStack_210 = local_258;
      Graph::NewNode(pGVar16,pOVar10,2,&local_218,false);
      lVar13 = *(long *)(lVar13 + 0x28);
      goto LAB_01700e34;
    }
    AllocateArguments(this,param_1,param_2,param_3);
  }
  else {
    iVar15 = *(int *)(*(long *)(lVar5 + 0x10) + 4) + -1;
    if (iVar15 != 0) goto LAB_01700a10;
    JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
  }
  lVar13 = *(long *)(lVar13 + 0x28);
LAB_01700e34:
  if (lVar13 != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

