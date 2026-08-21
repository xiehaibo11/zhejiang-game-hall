
/* v8::internal::compiler::JSNativeContextSpecialization::BuildPropertyStore(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::NameRef
   const&, v8::internal::ZoneVector<v8::internal::compiler::Node*>*,
   v8::internal::compiler::PropertyAccessInfo const&, v8::internal::compiler::AccessMode) */

void v8::internal::compiler::JSNativeContextSpecialization::BuildPropertyStore
               (undefined8 *param_1_00,JSNativeContextSpecialization *param_1,AccessBuilder *param_2
               ,AccessBuilder *param_3,Node *param_4,Node *param_5,AccessBuilder *param_6,
               AccessBuilder *param_7,NameRef *param_8,ZoneVector *param_9,
               PropertyAccessInfo *param_11,int param_12)

{
  long lVar1;
  undefined2 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  Operator *pOVar7;
  AccessBuilder *pAVar8;
  AccessBuilder *pAVar9;
  AccessBuilder *pAVar10;
  Node *pNVar11;
  long lVar12;
  undefined2 uVar13;
  uint uVar14;
  undefined8 uVar15;
  Graph *pGVar16;
  JSGraph *this;
  CompilationDependencies *pCVar17;
  SimplifiedOperatorBuilder *pSVar18;
  undefined1 local_150 [16];
  ObjectRef aOStack_140 [16];
  undefined1 local_130 [8];
  AccessBuilder *local_128;
  AccessBuilder *pAStack_120;
  AccessBuilder *local_118;
  AccessBuilder *local_110;
  undefined1 local_108 [16];
  AccessBuilder *local_f8;
  Node *pNStack_f0;
  undefined2 local_e8;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  AccessBuilder *pAStack_c8;
  AccessBuilder *pAStack_c0;
  Node *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  Node *local_90;
  AccessBuilder *local_88;
  AccessBuilder *local_80;
  Node *pNStack_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_118 = param_7;
  local_110 = param_6;
  if (*(long *)(param_11 + 0x58) != 0) {
    pCVar17 = *(CompilationDependencies **)(param_1 + 0x38);
    ObjectRef::ObjectRef
              ((ObjectRef *)&local_d0,*(undefined8 *)(param_1 + 0x18),*(long *)(param_11 + 0x58),0);
    uVar6 = ObjectRef::IsJSObject((ObjectRef *)&local_d0);
    if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSObject()");
    }
    local_130[0] = 1;
    pAStack_120 = pAStack_c8;
    local_128 = local_d0;
    CompilationDependencies::
    DependOnStablePrototypeChains<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>
              (pCVar17,param_11 + 8,1,local_130);
  }
  if (*(int *)param_11 == 4) {
    InlinePropertySetterCall
              (param_1,(Node *)param_2,(Node *)param_3,param_4,param_5,(Node **)&local_110,
               (Node **)&local_118,param_9,param_11);
    param_7 = local_118;
    goto LAB_01751524;
  }
  pNVar11 = *(Node **)(param_11 + 0x70);
  uVar15 = *(undefined8 *)(param_11 + 0x60);
  uVar4 = PropertyAccessBuilder::ConvertRepresentation(param_11[0x68]);
  uVar14 = (uint)uVar15;
  pAVar8 = param_2;
  if ((uVar14 >> 0xd & 1) == 0) {
    pGVar16 = (Graph *)**(undefined8 **)(param_1 + 0x10);
    pSVar18 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f];
    AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(param_2);
    pOVar7 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar18,(FieldAccess *)&local_d0);
    local_108._8_8_ = local_110;
    local_108._0_8_ = param_2;
    local_f8 = param_7;
    pAVar8 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,3,(Node **)local_108,false);
    local_110 = pAVar8;
  }
  iVar5 = *(int *)param_11;
  lVar12 = *(long *)(param_11 + 0x50);
  pAVar9 = (AccessBuilder *)NameRef::object(param_8);
  uVar13 = 0x202;
  uVar2 = 0;
  switch(uVar4 & 0xff) {
  case 0:
    break;
  case 1:
    uVar2 = 0x101;
    break;
  case 2:
    goto switchD_01750d3c_caseD_2;
  case 3:
    uVar2 = 0x203;
    break;
  case 4:
    uVar2 = 0x204;
    break;
  case 5:
    uVar2 = 0x405;
    break;
  case 6:
    uVar2 = 0x206;
    break;
  case 7:
    uVar2 = 0x707;
    break;
  case 8:
    uVar2 = 0x708;
    break;
  case 9:
    uVar2 = 0x709;
    break;
  case 10:
    uVar2 = 0x70a;
    break;
  case 0xb:
    uVar2 = 0x60b;
    break;
  case 0xc:
    uVar2 = 0x60c;
    break;
  case 0xd:
    uVar2 = 0xd;
    break;
  default:
    goto switchD_01750d3c_default;
  }
  uVar13 = uVar2;
switchD_01750d3c_caseD_2:
  uStack_a8 = PropertyAccessInfo::GetConstFieldInfo(param_11);
  bVar3 = param_12 == 2;
  uVar15 = CONCAT44(uVar14,(undefined4)local_d0);
  pAStack_c0 = (AccessBuilder *)0x0;
  local_d0 = (AccessBuilder *)CONCAT71((uint7)((ulong)uVar15 >> 8) & 0x1fffffffff,1);
  local_b0._0_3_ = CONCAT12(5,uVar13);
  local_b0 = CONCAT44(1,(undefined4)local_b0);
  pAStack_c8 = pAVar9;
  local_b8 = pNVar11;
  local_a0 = bVar3;
  if ((uVar4 & 0xff) < 0xe) {
    if ((1 << (ulong)(uVar4 & 0x1f) & 0x1c0U) != 0) {
      if ((param_12 == 1 && iVar5 == 3) && lVar12 == 0) {
        pGVar16 = (Graph *)**(undefined8 **)(param_1 + 0x10);
        pOVar7 = (Operator *)
                 SimplifiedOperatorBuilder::LoadField
                           ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f],
                            (FieldAccess *)&local_d0);
        param_7 = local_118;
        local_108._8_8_ = local_110;
        local_f8 = local_118;
        local_108._0_8_ = pAVar8;
        pAVar8 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,3,(Node **)local_108,false);
        pGVar16 = (Graph *)**(undefined8 **)(param_1 + 0x10);
        local_110 = pAVar8;
        pOVar7 = (Operator *)
                 SimplifiedOperatorBuilder::SameValueNumbersOnly
                           ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f]);
        local_108._0_8_ = pAVar8;
        local_108._8_8_ = param_3;
        pAVar8 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,2,(Node **)local_108,false);
        pGVar16 = (Graph *)**(undefined8 **)(param_1 + 0x10);
        local_90 = (Node *)0x0;
        local_88 = (AccessBuilder *)CONCAT44(local_88._4_4_,0xffffffff);
        pOVar7 = (Operator *)
                 SimplifiedOperatorBuilder::CheckIf
                           ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f],
                            0x28,&local_90);
        local_108._8_8_ = local_110;
        local_f8 = param_7;
        local_108._0_8_ = pAVar8;
        local_110 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,3,(Node **)local_108,false);
        goto LAB_01751524;
      }
      if ((uVar4 & 0xff) == 7) {
        pGVar16 = (Graph *)**(undefined8 **)(param_1 + 0x10);
        pSVar18 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f];
        if (*(long *)(param_11 + 0x80) == 0) {
          pOVar7 = (Operator *)SimplifiedOperatorBuilder::CheckHeapObject(pSVar18);
          local_108._8_8_ = local_110;
          local_108._0_8_ = param_3;
          local_f8 = param_7;
          local_110 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,3,(Node **)local_108,false);
          param_3 = local_110;
        }
        else {
          local_90 = (Node *)0x0;
          local_88 = (AccessBuilder *)CONCAT44(local_88._4_4_,0xffffffff);
          pOVar7 = (Operator *)
                   SimplifiedOperatorBuilder::CheckMaps
                             (pSVar18,0,*(long *)(param_11 + 0x80),&local_90);
          local_108._8_8_ = local_110;
          local_108._0_8_ = param_3;
          local_f8 = param_7;
          local_110 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,3,(Node **)local_108,false);
        }
        local_b0._0_3_ = CONCAT12(3,(ushort)local_b0);
        lVar12 = *(long *)(param_11 + 0x50);
      }
      else {
        if ((uVar4 & 0xff) == 6) {
          pGVar16 = (Graph *)**(undefined8 **)(param_1 + 0x10);
          local_90 = (Node *)0x0;
          local_88 = (AccessBuilder *)CONCAT44(local_88._4_4_,0xffffffff);
          pOVar7 = (Operator *)
                   SimplifiedOperatorBuilder::CheckSmi
                             ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f],
                              (FeedbackSource *)&local_90);
          local_108._8_8_ = local_110;
          local_108._0_8_ = param_3;
          local_f8 = param_7;
          param_3 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,3,(Node **)local_108,false);
          local_b0._0_3_ = (uint3)(ushort)local_b0;
          local_110 = param_3;
        }
        lVar12 = *(long *)(param_11 + 0x50);
      }
      goto joined_r0x01751324;
    }
    if ((uVar4 & 0xff) != 0xc) {
switchD_01750d3c_default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pGVar16 = (Graph *)**(undefined8 **)(param_1 + 0x10);
    local_90 = (Node *)0x0;
    local_88 = (AccessBuilder *)CONCAT44(local_88._4_4_,0xffffffff);
    pOVar7 = (Operator *)
             SimplifiedOperatorBuilder::CheckNumber
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f],
                        (FeedbackSource *)&local_90);
    local_108._8_8_ = local_110;
    local_108._0_8_ = param_3;
    local_f8 = param_7;
    param_3 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,3,(Node **)local_108,false);
    local_110 = param_3;
    if (*(long *)(param_11 + 0x50) == 0) {
      pAVar9 = (AccessBuilder *)NameRef::object(param_8);
      uStack_e0 = PropertyAccessInfo::GetConstFieldInfo(param_11);
      local_108._1_7_ = (uint7)(CONCAT44(uVar14,local_108._0_4_) >> 8) & 0x1fffffffff;
      local_f8 = (AccessBuilder *)0x0;
      pNStack_f0 = (Node *)0x1000001;
      uStack_e6 = 3;
      local_108[0] = 1;
      local_e8 = 0x707;
      uStack_e4 = 1;
      pGVar16 = (Graph *)**(undefined8 **)(param_1 + 0x10);
      local_108._8_8_ = pAVar9;
      local_d8 = bVar3;
      pOVar7 = (Operator *)
               SimplifiedOperatorBuilder::LoadField
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f],
                          (FieldAccess *)local_108);
      local_88 = local_110;
      local_90 = (Node *)pAVar8;
      local_80 = param_7;
      pAVar8 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,3,&local_90,false);
      pAStack_c8 = (AccessBuilder *)0x0;
      local_d0 = (AccessBuilder *)CONCAT44(4,(undefined4)local_d0);
      local_b0 = CONCAT62(local_b0._2_6_,0x60c);
      local_110 = pAVar8;
    }
    else {
      this = *(JSGraph **)(param_1 + 0x10);
      pGVar16 = *(Graph **)this;
      pOVar7 = (Operator *)
               CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(this + 8),1);
      local_108._0_8_ = param_3;
      pAVar9 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,1,(Node **)local_108,false);
      pGVar16 = *(Graph **)this;
      pOVar7 = (Operator *)
               SimplifiedOperatorBuilder::Allocate
                         (*(SimplifiedOperatorBuilder **)(this + 0x178),0x1000001,0);
      local_108._0_8_ = JSGraph::Constant(this,12.0);
      local_108._8_8_ = pAVar9;
      local_f8 = param_7;
      pAVar9 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,3,(Node **)local_108,false);
      AccessBuilder::ForMap(pAVar9);
      ObjectRef::ObjectRef
                (aOStack_140,*(undefined8 *)(param_1 + 0x18),
                 *(long *)(*(long *)(param_1 + 0x10) + 0x168) + 0x140,0);
      uVar6 = ObjectRef::IsMap(aOStack_140);
      if ((uVar6 & 1) == 0) goto LAB_017515d8;
      uVar15 = JSGraph::Constant(this,aOStack_140);
      pGVar16 = *(Graph **)this;
      pOVar7 = (Operator *)
               SimplifiedOperatorBuilder::StoreField
                         (*(SimplifiedOperatorBuilder **)(this + 0x178),(FieldAccess *)local_108);
      local_90 = (Node *)pAVar9;
      local_88 = (AccessBuilder *)uVar15;
      local_80 = pAVar9;
      pNStack_78 = (Node *)param_7;
      pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,4,&local_90,false);
      AccessBuilder::ForHeapNumberValue(pAVar10);
      uStack_e0 = uStack_a8;
      pGVar16 = *(Graph **)this;
      pOVar7 = (Operator *)
               SimplifiedOperatorBuilder::StoreField
                         (*(SimplifiedOperatorBuilder **)(this + 0x178),(FieldAccess *)local_108);
      local_90 = (Node *)pAVar9;
      local_88 = param_3;
      local_80 = pAVar10;
      pNStack_78 = (Node *)param_7;
      pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,4,&local_90,false);
      pGVar16 = *(Graph **)this;
      pOVar7 = (Operator *)
               CommonOperatorBuilder::FinishRegion(*(CommonOperatorBuilder **)(this + 8));
      local_90 = (Node *)pAVar9;
      local_88 = pAVar10;
      param_3 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,2,&local_90,false);
      local_b8 = (Node *)&DAT_ffffffff;
      local_b0 = CONCAT53(local_b0._3_5_,0x30707);
      local_110 = param_3;
    }
    if ((param_12 != 1 || iVar5 != 3) || lVar12 != 0) {
      lVar12 = *(long *)(param_11 + 0x50);
      if (lVar12 != 0) goto LAB_01750f48;
      goto LAB_01751328;
    }
    pGVar16 = (Graph *)**(undefined8 **)(param_1 + 0x10);
    pOVar7 = (Operator *)
             SimplifiedOperatorBuilder::LoadField
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f],
                        (FieldAccess *)&local_d0);
    local_108._8_8_ = local_110;
    local_108._0_8_ = pAVar8;
    local_f8 = param_7;
    pAVar8 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,3,(Node **)local_108,false);
    pGVar16 = (Graph *)**(undefined8 **)(param_1 + 0x10);
    local_110 = pAVar8;
    pOVar7 = (Operator *)
             SimplifiedOperatorBuilder::SameValue
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f]);
    local_108._0_8_ = pAVar8;
    local_108._8_8_ = param_3;
    pAVar8 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,2,(Node **)local_108,false);
    pGVar16 = (Graph *)**(undefined8 **)(param_1 + 0x10);
    local_90 = (Node *)0x0;
    local_88 = (AccessBuilder *)CONCAT44(local_88._4_4_,0xffffffff);
    pOVar7 = (Operator *)
             SimplifiedOperatorBuilder::CheckIf
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f],0x28,
                        &local_90);
    iVar5 = 3;
    local_108._8_8_ = local_110;
    local_108._0_8_ = pAVar8;
    local_f8 = param_7;
  }
  else {
    lVar12 = *(long *)(param_11 + 0x50);
joined_r0x01751324:
    if (lVar12 == 0) {
LAB_01751328:
      pGVar16 = (Graph *)**(undefined8 **)(param_1 + 0x10);
      pOVar7 = (Operator *)
               SimplifiedOperatorBuilder::StoreField
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f],
                          (FieldAccess *)&local_d0);
      local_f8 = local_110;
      iVar5 = 4;
      local_108._0_8_ = pAVar8;
      local_108._8_8_ = param_3;
      pNStack_f0 = (Node *)param_7;
    }
    else {
LAB_01750f48:
      ObjectRef::ObjectRef(aOStack_140,*(undefined8 *)(param_1 + 0x18),lVar12,0);
      uVar6 = ObjectRef::IsMap(aOStack_140);
      if ((uVar6 & 1) == 0) {
LAB_017515d8:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsMap()");
      }
      local_108 = MapRef::GetBackPointer((MapRef *)aOStack_140);
      local_150 = ObjectRef::AsMap((ObjectRef *)local_108);
      iVar5 = MapRef::UnusedPropertyFields((MapRef *)local_150);
      pAVar9 = param_3;
      if (iVar5 == 0) {
        pAVar9 = (AccessBuilder *)
                 BuildExtendPropertiesBackingStore
                           (param_1,local_150,(Node *)pAVar8,(Node *)local_110,(Node *)param_7);
        pGVar16 = (Graph *)**(undefined8 **)(param_1 + 0x10);
        local_110 = pAVar9;
        pOVar7 = (Operator *)
                 SimplifiedOperatorBuilder::StoreField
                           ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f],
                            (FieldAccess *)&local_d0);
        local_f8 = local_110;
        local_108._0_8_ = pAVar9;
        local_108._8_8_ = param_3;
        pNStack_f0 = (Node *)param_7;
        local_110 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,4,(Node **)local_108,false);
        AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(local_110);
        local_b0 = CONCAT44(uStack_e4,CONCAT13(uStack_e5,CONCAT12(uStack_e6,local_e8)));
        pAStack_c8 = (AccessBuilder *)local_108._8_8_;
        local_d0 = (AccessBuilder *)local_108._0_8_;
        local_b8 = pNStack_f0;
        pAStack_c0 = local_f8;
        uStack_a8 = uStack_e0;
        local_a0 = local_d8;
        pAVar8 = param_2;
      }
      pGVar16 = (Graph *)**(undefined8 **)(param_1 + 0x10);
      pOVar7 = (Operator *)
               CommonOperatorBuilder::BeginRegion
                         ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[1],0);
      local_108._0_8_ = local_110;
      local_110 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,1,(Node **)local_108,false);
      pGVar16 = (Graph *)**(undefined8 **)(param_1 + 0x10);
      pSVar18 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f];
      AccessBuilder::ForMap(local_110);
      pOVar7 = (Operator *)SimplifiedOperatorBuilder::StoreField(pSVar18,(FieldAccess *)local_108);
      local_88 = (AccessBuilder *)JSGraph::Constant(*(JSGraph **)(param_1 + 0x10),aOStack_140);
      local_80 = local_110;
      local_90 = (Node *)param_2;
      pNStack_78 = (Node *)param_7;
      local_110 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,4,&local_90,false);
      pGVar16 = (Graph *)**(undefined8 **)(param_1 + 0x10);
      pOVar7 = (Operator *)
               SimplifiedOperatorBuilder::StoreField
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f],
                          (FieldAccess *)&local_d0);
      local_f8 = local_110;
      local_108._0_8_ = pAVar8;
      local_108._8_8_ = pAVar9;
      pNStack_f0 = (Node *)param_7;
      local_110 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,4,(Node **)local_108,false);
      pGVar16 = (Graph *)**(undefined8 **)(param_1 + 0x10);
      pOVar7 = (Operator *)
               CommonOperatorBuilder::FinishRegion
                         ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[1]);
      local_108._0_8_ = JSGraph::UndefinedConstant(*(JSGraph **)(param_1 + 0x10));
      iVar5 = 2;
      local_108._8_8_ = local_110;
      param_3 = pAVar9;
    }
  }
  local_110 = (AccessBuilder *)Graph::NewNode(pGVar16,pOVar7,iVar5,(Node **)local_108,false);
LAB_01751524:
  *param_1_00 = param_3;
  param_1_00[1] = local_110;
  param_1_00[2] = param_7;
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

