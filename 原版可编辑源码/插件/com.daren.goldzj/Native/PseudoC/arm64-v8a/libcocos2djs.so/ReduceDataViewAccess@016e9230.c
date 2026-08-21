
/* v8::internal::compiler::JSCallReducer::ReduceDataViewAccess(v8::internal::compiler::Node*,
   v8::internal::compiler::JSCallReducer::DataViewAccess, v8::internal::ExternalArrayType) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceDataViewAccess
          (JSCallReducer *this,Node *param_1,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  Node *pNVar5;
  Node *pNVar6;
  Node *pNVar7;
  Node *pNVar8;
  Node *pNVar9;
  Node *pNVar10;
  ulong uVar11;
  AccessBuilder *pAVar12;
  ulong uVar13;
  long lVar14;
  Node *pNVar15;
  Operator *pOVar16;
  AccessBuilder *this_00;
  Operator *pOVar17;
  JSGraph *this_01;
  Graph *pGVar18;
  Graph *pGVar19;
  SimplifiedOperatorBuilder *pSVar20;
  int local_f4;
  undefined1 local_f0 [16];
  Node *local_e0;
  MapInference aMStack_d8 [48];
  Node *local_a8;
  Node *local_a0;
  Node *local_98;
  Node *local_90;
  Node *local_88;
  Node *local_80;
  Node *local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar2 = param_4 - 1;
  local_f4 = param_4;
  if (10 < uVar2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  lVar4 = CallParametersOf(*(Operator **)param_1);
  pNVar5 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  pNVar6 = (Node *)NodeProperties::GetControlInput(param_1,0);
  pNVar7 = (Node *)NodeProperties::GetValueInput(param_1,1);
  if (*(int *)(*(long *)param_1 + 0x14) < 3) {
    pNVar8 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
  }
  else {
    pNVar8 = (Node *)NodeProperties::GetValueInput(param_1,2);
  }
  if (param_3 == 0) {
    if (*(int *)(*(long *)param_1 + 0x14) < 4) {
      pNVar10 = (Node *)JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
    }
    else {
      pNVar10 = (Node *)NodeProperties::GetValueInput(param_1,3);
    }
    pNVar9 = (Node *)0x0;
    bVar1 = *(byte *)(lVar4 + 3);
  }
  else {
    if (*(int *)(*(long *)param_1 + 0x14) < 4) {
      pNVar9 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
    }
    else {
      pNVar9 = (Node *)NodeProperties::GetValueInput(param_1,3);
    }
    if (*(int *)(*(long *)param_1 + 0x14) < 5) {
      pNVar10 = (Node *)JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
      bVar1 = *(byte *)(lVar4 + 3);
    }
    else {
      pNVar10 = (Node *)NodeProperties::GetValueInput(param_1,4);
      bVar1 = *(byte *)(lVar4 + 3);
    }
  }
  if ((bVar1 >> 4 & 1) != 0) {
    pNVar9 = (Node *)0x0;
    goto LAB_016e942c;
  }
  MapInference::MapInference(aMStack_d8,*(JSHeapBroker **)(this + 0x18),pNVar7,pNVar5);
  uVar11 = MapInference::HaveMaps(aMStack_d8);
  if ((uVar11 & 1) == 0) {
LAB_016e9420:
    pNVar9 = (Node *)0x0;
  }
  else {
    pAVar12 = (AccessBuilder *)MapInference::AllOfInstanceTypesAre(aMStack_d8,0x41a);
    if (((ulong)pAVar12 & 1) == 0) goto LAB_016e9420;
    uVar11 = (ulong)*(uint *)(&DAT_01a5d43c + (long)(int)uVar2 * 4);
    if (*(short *)(*(long *)pNVar7 + 0x10) == 0x1e) {
      ObjectRef::ObjectRef
                ((ObjectRef *)&local_a8,*(undefined8 *)(this + 0x18),
                 *(undefined8 *)(*(long *)pNVar7 + 0x30),0);
      uVar13 = ObjectRef::IsHeapObject((ObjectRef *)&local_a8);
      if ((uVar13 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsHeapObject()");
      }
      local_f0 = ObjectRef::AsJSDataView((ObjectRef *)&local_a8);
      uVar13 = JSDataViewRef::byte_length((JSDataViewRef *)local_f0);
      if (uVar13 < uVar11) goto LAB_016e9420;
      this_01 = *(JSGraph **)(this + 0x10);
      lVar14 = JSDataViewRef::byte_length((JSDataViewRef *)local_f0);
      pNVar15 = (Node *)JSGraph::Constant(this_01,(double)((lVar14 - uVar11) + 1));
      pGVar18 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar16 = (Operator *)
                SimplifiedOperatorBuilder::CheckBounds
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                           (FeedbackSource *)(lVar4 + 8));
      local_a8 = pNVar8;
      local_a0 = pNVar15;
      local_98 = pNVar5;
      local_90 = pNVar6;
      pNVar5 = (Node *)Graph::NewNode(pGVar18,pOVar16,4,&local_a8,false);
    }
    else {
      pGVar18 = (Graph *)**(undefined8 **)(this + 0x10);
      pSVar20 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      AccessBuilder::ForJSArrayBufferViewByteLength(pAVar12);
      pOVar16 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar20,(FieldAccess *)&local_a8);
      local_f0._0_8_ = pNVar7;
      local_f0._8_8_ = pNVar5;
      local_e0 = pNVar6;
      pNVar15 = (Node *)Graph::NewNode(pGVar18,pOVar16,3,(Node **)local_f0,false);
      pNVar5 = pNVar15;
      if ((0x6fcUL >> ((long)(int)uVar2 & 0x3fU) & 1) != 0) {
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar16 = (Operator *)
                  SimplifiedOperatorBuilder::NumberMax
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        pNVar5 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
        pGVar18 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar17 = (Operator *)
                  SimplifiedOperatorBuilder::NumberSubtract
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        local_a0 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(double)(uVar11 - 1));
        local_a8 = pNVar15;
        local_a0 = (Node *)Graph::NewNode(pGVar18,pOVar17,2,&local_a8,false);
        local_a8 = pNVar5;
        pNVar5 = (Node *)Graph::NewNode(pGVar19,pOVar16,2,&local_a8,false);
      }
      pGVar18 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar16 = (Operator *)
                SimplifiedOperatorBuilder::CheckBounds
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                           (FeedbackSource *)(lVar4 + 8));
      local_a8 = pNVar8;
      local_a0 = pNVar5;
      local_98 = pNVar15;
      local_90 = pNVar6;
      pNVar5 = (Node *)Graph::NewNode(pGVar18,pOVar16,4,&local_a8,false);
    }
    pGVar18 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar16 = (Operator *)
              SimplifiedOperatorBuilder::ToBoolean
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_a8 = pNVar10;
    pNVar10 = (Node *)Graph::NewNode(pGVar18,pOVar16,1,&local_a8,false);
    pNVar8 = pNVar5;
    if (param_3 == 1) {
      pGVar18 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar16 = (Operator *)
                SimplifiedOperatorBuilder::SpeculativeToNumber
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],4,
                           lVar4 + 8);
      local_a8 = pNVar9;
      local_a0 = pNVar5;
      local_98 = pNVar6;
      pNVar9 = (Node *)Graph::NewNode(pGVar18,pOVar16,3,&local_a8,false);
      pNVar8 = pNVar9;
    }
    this_00 = (AccessBuilder *)
              CompilationDependencies::DependOnArrayBufferDetachingProtector
                        (*(CompilationDependencies **)(this + 0x30));
    pAVar12 = (AccessBuilder *)pNVar7;
    if (((ulong)this_00 & 1) == 0) {
      pGVar18 = (Graph *)**(undefined8 **)(this + 0x10);
      pSVar20 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      AccessBuilder::ForJSArrayBufferViewBuffer(this_00);
      pOVar16 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar20,(FieldAccess *)&local_a8);
      local_f0._0_8_ = pNVar7;
      local_f0._8_8_ = pNVar8;
      local_e0 = pNVar6;
      pAVar12 = (AccessBuilder *)Graph::NewNode(pGVar18,pOVar16,3,(Node **)local_f0,false);
      pGVar18 = (Graph *)**(undefined8 **)(this + 0x10);
      pSVar20 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      AccessBuilder::ForJSArrayBufferBitField(pAVar12);
      pOVar16 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar20,(FieldAccess *)&local_a8);
      local_f0._0_8_ = pAVar12;
      local_f0._8_8_ = pAVar12;
      local_e0 = pNVar6;
      pNVar8 = (Node *)Graph::NewNode(pGVar18,pOVar16,3,(Node **)local_f0,false);
      pGVar18 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar16 = (Operator *)
                SimplifiedOperatorBuilder::NumberEqual
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar17 = (Operator *)
                SimplifiedOperatorBuilder::NumberBitwiseAnd
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_a0 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),4.0);
      local_a8 = pNVar8;
      pNVar15 = (Node *)Graph::NewNode(pGVar19,pOVar17,2,&local_a8,false);
      local_a0 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
      local_a8 = pNVar15;
      pNVar15 = (Node *)Graph::NewNode(pGVar18,pOVar16,2,&local_a8,false);
      pGVar18 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar16 = (Operator *)
                SimplifiedOperatorBuilder::CheckIf
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],0,
                           lVar4 + 8);
      local_a8 = pNVar15;
      local_a0 = pNVar8;
      local_98 = pNVar6;
      this_00 = (AccessBuilder *)Graph::NewNode(pGVar18,pOVar16,3,&local_a8,false);
      pNVar8 = (Node *)this_00;
    }
    pGVar18 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar20 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForJSDataViewDataPointer(this_00);
    pOVar16 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar20,(FieldAccess *)&local_a8);
    local_f0._0_8_ = pNVar7;
    local_f0._8_8_ = pNVar8;
    local_e0 = pNVar6;
    pNVar7 = (Node *)Graph::NewNode(pGVar18,pOVar16,3,(Node **)local_f0,false);
    if (param_3 == 1) {
      pGVar18 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar16 = (Operator *)
                SimplifiedOperatorBuilder::StoreDataViewElement
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                           (ExternalArrayType *)&local_f4);
      local_a8 = (Node *)pAVar12;
      local_a0 = pNVar7;
      local_98 = pNVar5;
      local_90 = pNVar9;
      local_88 = pNVar10;
      local_80 = pNVar7;
      local_78 = pNVar6;
      pNVar7 = (Node *)Graph::NewNode(pGVar18,pOVar16,7,&local_a8,false);
      pNVar9 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    }
    else if (param_3 == 0) {
      pGVar18 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar16 = (Operator *)
                SimplifiedOperatorBuilder::LoadDataViewElement
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                           (ExternalArrayType *)&local_f4);
      local_a8 = (Node *)pAVar12;
      local_a0 = pNVar7;
      local_98 = pNVar5;
      local_90 = pNVar10;
      local_88 = pNVar7;
      local_80 = pNVar6;
      pNVar9 = (Node *)Graph::NewNode(pGVar18,pOVar16,6,&local_a8,false);
      pNVar7 = pNVar9;
    }
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar9,pNVar7,pNVar6);
  }
  MapInference::~MapInference(aMStack_d8);
LAB_016e942c:
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return pNVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

