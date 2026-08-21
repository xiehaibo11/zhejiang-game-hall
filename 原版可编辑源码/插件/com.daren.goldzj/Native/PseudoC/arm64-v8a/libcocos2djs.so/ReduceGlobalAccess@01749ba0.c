
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceGlobalAccess(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::NameRef
   const&, v8::internal::compiler::AccessMode, v8::internal::compiler::Node*,
   v8::internal::compiler::PropertyCellRef const&) */

Node * __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceGlobalAccess
          (JSNativeContextSpecialization *this,Node *param_1,Node *param_2,Node *param_3,
          ObjectRef *param_4,int param_6,long param_7,PropertyCellRef *param_8)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  Node *pNVar6;
  Node *pNVar7;
  ulong uVar8;
  Operator *pOVar9;
  Node *pNVar10;
  undefined8 uVar11;
  int iVar12;
  Node **ppNVar13;
  undefined1 uVar14;
  undefined2 uVar15;
  Graph *pGVar16;
  SimplifiedOperatorBuilder *pSVar17;
  undefined1 auVar18 [16];
  ObjectRef local_f8 [16];
  undefined1 local_e8 [16];
  Node *local_d8;
  Node *local_d0;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_90 [16];
  Node *local_80;
  Node *pNStack_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  pNVar6 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  pNVar7 = (Node *)NodeProperties::GetControlInput(param_1,0);
  local_f8 = (ObjectRef  [16])PropertyCellRef::value(param_8);
  uVar8 = ObjectRef::IsHeapObject(local_f8);
  if ((uVar8 & 1) != 0) {
    local_90 = ObjectRef::AsHeapObject(local_f8);
    local_e8 = HeapObjectRef::map((HeapObjectRef *)local_90);
    cVar3 = MapRef::oddball_type((MapRef *)local_e8);
    if (cVar3 != '\x04') goto LAB_01749c50;
LAB_01749ccc:
    param_3 = (Node *)0x0;
    goto LAB_0174a188;
  }
LAB_01749c50:
  uVar4 = PropertyCellRef::property_details(param_8);
  uVar5 = uVar4 >> 6 & 3;
  if (param_6 == 3) {
    if ((((uVar4 ^ 0xffffffff) & 0x28) != 0) && (1 < uVar5)) goto LAB_01749ccc;
  }
  else if (param_6 == 1) {
    if (((uVar4 >> 3 & 1) != 0) || (uVar5 == 0)) goto LAB_01749ccc;
    if (uVar5 == 2) {
      uVar8 = ObjectRef::IsHeapObject(local_f8);
      if ((uVar8 & 1) != 0) {
        auVar18 = ObjectRef::AsHeapObject(local_f8);
        local_90 = auVar18;
        auVar18 = HeapObjectRef::map((HeapObjectRef *)local_90);
        local_e8 = auVar18;
        uVar8 = MapRef::is_stable((MapRef *)local_e8);
        if ((uVar8 & 1) == 0) goto LAB_01749ccc;
      }
    }
  }
  if (param_7 != 0) {
    uVar8 = ObjectRef::IsSymbol(param_4);
    if ((uVar8 & 1) == 0) {
      pOVar9 = (Operator *)
               SimplifiedOperatorBuilder::CheckEqualsInternalizedString
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    }
    else {
      pOVar9 = (Operator *)
               SimplifiedOperatorBuilder::CheckEqualsSymbol
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    }
    pGVar16 = *(Graph **)*(JSGraph **)(this + 0x10);
    pNVar10 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),param_4);
    local_e8._0_8_ = pNVar10;
    local_e8._8_8_ = param_7;
    local_d8 = pNVar6;
    local_d0 = pNVar7;
    pNVar6 = (Node *)Graph::NewNode(pGVar16,pOVar9,4,(Node **)local_e8,false);
  }
  if (param_2 == (Node *)0x0) {
    if (param_6 != 3) goto LAB_01749de0;
LAB_01749ea0:
    if (((uVar4 >> 3 & 1) == 0) || ((uVar4 >> 5 & 1) == 0)) {
      if (((uVar4 >> 5 & 1) == 0) || (uVar5 != 3)) {
        CompilationDependencies::DependOnGlobalProperty
                  (*(CompilationDependencies **)(this + 0x38),param_8);
        if (uVar5 < 2) goto LAB_01749ea8;
        if (uVar5 != 2) goto LAB_01749ecc;
        uVar8 = ObjectRef::IsSmi(local_f8);
        if ((uVar8 & 1) == 0) {
          uVar8 = ObjectRef::IsHeapNumber(local_f8);
          if ((uVar8 & 1) == 0) {
            auVar18 = ObjectRef::AsHeapObject(local_f8);
            local_90 = auVar18;
            auVar18 = HeapObjectRef::map((HeapObjectRef *)local_90);
            local_e8 = auVar18;
            uVar5 = BitsetType::Lub<v8::internal::compiler::MapRef>(local_e8);
            uVar5 = BitsetType::ExpandInternals(uVar5);
            uVar5 = uVar5 | 1;
            uVar8 = MapRef::is_stable((MapRef *)local_e8);
            if ((uVar8 & 1) == 0) {
              pNVar10 = (Node *)0x0;
            }
            else {
              CompilationDependencies::DependOnStableMap
                        (*(CompilationDependencies **)(this + 0x38),local_e8);
              pNVar10 = (Node *)MapRef::object((MapRef *)local_e8);
            }
          }
          else {
            pNVar10 = (Node *)0x0;
            uVar5 = 0x1c5f;
          }
          local_c8 = 0x707;
          local_c6 = 3;
          pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
          pSVar17 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
        }
        else {
          uVar5 = BitsetType::SignedSmall();
          pNVar10 = (Node *)0x0;
          local_c6 = 0;
          pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
          pSVar17 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
          uVar5 = uVar5 | 1;
          local_c8 = 0x206;
        }
      }
      else {
LAB_01749ecc:
        pNVar10 = (Node *)0x0;
        pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
        pSVar17 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
        local_c8 = 0x708;
        local_c6 = 5;
        uVar5 = 0xc7f7fff;
      }
      uVar11 = NameRef::object((NameRef *)param_4);
      local_c0 = 0;
      local_e8[0] = 1;
      local_e8._4_4_ = 0xc;
      local_c4 = 1;
      local_b8 = 0;
      local_e8._8_8_ = uVar11;
      local_d8 = pNVar10;
      local_d0 = (Node *)(ulong)uVar5;
      pOVar9 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar17,(FieldAccess *)local_e8);
      pNVar10 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)param_8);
      local_90._0_8_ = pNVar10;
      local_90._8_8_ = pNVar6;
      local_80 = pNVar7;
      pNVar6 = (Node *)Graph::NewNode(pGVar16,pOVar9,3,(Node **)local_90,false);
      param_3 = pNVar6;
    }
    else {
LAB_01749ea8:
      if (param_6 == 3) {
        param_3 = (Node *)JSGraph::TrueConstant(*(JSGraph **)(this + 0x10));
      }
      else {
        param_3 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),local_f8);
      }
    }
  }
  else {
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar17 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    ObjectRef::ObjectRef
              ((ObjectRef *)&local_a0,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x30),0);
    uVar8 = ObjectRef::IsHeapObject((ObjectRef *)&local_a0);
    if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    auVar18 = HeapObjectRef::map((HeapObjectRef *)&local_a0);
    local_90 = auVar18;
    uVar11 = MapRef::object((MapRef *)local_90);
    local_b0 = 0;
    local_a8 = 0xffffffff;
    pOVar9 = (Operator *)SimplifiedOperatorBuilder::CheckMaps(pSVar17,0,uVar11,&local_b0);
    local_e8._0_8_ = param_2;
    local_e8._8_8_ = pNVar6;
    local_d8 = pNVar7;
    pNVar6 = (Node *)Graph::NewNode(pGVar16,pOVar9,3,(Node **)local_e8,false);
    if (param_6 == 3) goto LAB_01749ea0;
LAB_01749de0:
    if (param_6 == 0) goto LAB_01749ea0;
    switch(uVar5) {
    case 0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case 1:
      CompilationDependencies::DependOnGlobalProperty
                (*(CompilationDependencies **)(this + 0x38),param_8);
      pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar9 = (Operator *)
               SimplifiedOperatorBuilder::ReferenceEqual
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      uVar11 = JSGraph::Constant(*(JSGraph **)(this + 0x10),local_f8);
      local_e8._0_8_ = param_3;
      local_e8._8_8_ = uVar11;
      pNVar10 = (Node *)Graph::NewNode(pGVar16,pOVar9,2,(Node **)local_e8,false);
      auVar18 = local_90;
      pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
      local_90._0_8_ = (Node *)0x0;
      local_90._12_4_ = auVar18._12_4_;
      local_90._8_4_ = 0xffffffff;
      pOVar9 = (Operator *)
               SimplifiedOperatorBuilder::CheckIf
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],0x22,
                          local_90);
      ppNVar13 = (Node **)local_e8;
      iVar12 = 3;
      local_e8._0_8_ = pNVar10;
      local_e8._8_8_ = pNVar6;
      local_d8 = pNVar7;
      break;
    case 2:
      CompilationDependencies::DependOnGlobalProperty
                (*(CompilationDependencies **)(this + 0x38),param_8);
      uVar8 = ObjectRef::IsHeapObject(local_f8);
      auVar18 = local_90;
      bVar1 = (uVar8 & 1) == 0;
      if (bVar1) {
        pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
        local_90._0_8_ = (Node *)0x0;
        local_90._12_4_ = auVar18._12_4_;
        local_90._8_4_ = 0xffffffff;
        pOVar9 = (Operator *)
                 SimplifiedOperatorBuilder::CheckSmi
                           ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                            (FeedbackSource *)local_90);
        local_e8._0_8_ = param_3;
        local_e8._8_8_ = pNVar6;
        local_d8 = pNVar7;
        pNVar6 = (Node *)Graph::NewNode(pGVar16,pOVar9,3,(Node **)local_e8,false);
        uVar5 = BitsetType::SignedSmall();
        uVar5 = uVar5 | 1;
        param_3 = pNVar6;
      }
      else {
        auVar18 = ObjectRef::AsHeapObject(local_f8);
        local_e8 = auVar18;
        auVar18 = HeapObjectRef::map((HeapObjectRef *)local_e8);
        local_90 = auVar18;
        CompilationDependencies::DependOnStableMap
                  (*(CompilationDependencies **)(this + 0x38),local_90);
        pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar9 = (Operator *)
                 SimplifiedOperatorBuilder::CheckHeapObject
                           ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        local_e8._0_8_ = param_3;
        local_e8._8_8_ = pNVar6;
        local_d8 = pNVar7;
        param_3 = (Node *)Graph::NewNode(pGVar16,pOVar9,3,(Node **)local_e8,false);
        pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
        pSVar17 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
        uVar11 = MapRef::object((MapRef *)local_90);
        local_a0 = 0;
        local_98 = 0xffffffff;
        pOVar9 = (Operator *)SimplifiedOperatorBuilder::CheckMaps(pSVar17,0,uVar11,&local_a0);
        local_e8._0_8_ = param_3;
        local_e8._8_8_ = param_3;
        local_d8 = pNVar7;
        pNVar6 = (Node *)Graph::NewNode(pGVar16,pOVar9,3,(Node **)local_e8,false);
        uVar5 = 0x1000001;
      }
      pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
      pSVar17 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      uVar14 = 3;
      if (bVar1) {
        uVar14 = 0;
      }
      uVar15 = 0x707;
      if (bVar1) {
        uVar15 = 0x206;
      }
      local_e8._8_8_ = NameRef::object((NameRef *)param_4);
      local_d8 = (Node *)0x0;
      local_c0 = 0;
      local_e8[0] = 1;
      local_e8._4_4_ = 0xc;
      local_c4 = 1;
      local_b8 = 0;
      local_d0 = (Node *)(ulong)uVar5;
      local_c8 = uVar15;
      local_c6 = uVar14;
      pOVar9 = (Operator *)SimplifiedOperatorBuilder::StoreField(pSVar17,(FieldAccess *)local_e8);
      pNVar10 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)param_8);
      local_90._0_8_ = pNVar10;
      local_90._8_8_ = param_3;
      local_80 = pNVar6;
      pNStack_78 = pNVar7;
      pNVar6 = (Node *)Graph::NewNode(pGVar16,pOVar9,4,(Node **)local_90,false);
      goto LAB_0174a168;
    case 3:
      CompilationDependencies::DependOnGlobalProperty
                (*(CompilationDependencies **)(this + 0x38),param_8);
      pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
      pSVar17 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      pNVar10 = (Node *)NameRef::object((NameRef *)param_4);
      local_d8 = (Node *)0x0;
      local_e8._4_4_ = 0xc;
      local_c0 = 0;
      local_e8[0] = 1;
      local_d0 = (Node *)0xc7f7fff;
      local_c8 = 0x708;
      local_c6 = 5;
      local_c4 = 1;
      local_b8 = 0;
      local_e8._8_8_ = pNVar10;
      pOVar9 = (Operator *)SimplifiedOperatorBuilder::StoreField(pSVar17,(FieldAccess *)local_e8);
      pNVar10 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)param_8);
      ppNVar13 = (Node **)local_90;
      iVar12 = 4;
      local_90._0_8_ = pNVar10;
      local_90._8_8_ = param_3;
      local_80 = pNVar6;
      pNStack_78 = pNVar7;
    }
    pNVar6 = (Node *)Graph::NewNode(pGVar16,pOVar9,iVar12,ppNVar13,false);
  }
LAB_0174a168:
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_3,pNVar6,pNVar7);
LAB_0174a188:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}

