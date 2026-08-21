
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceElementLoadFromHeapConstant(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::AccessMode,
   v8::internal::KeyedAccessLoadMode) */

undefined8 __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceElementLoadFromHeapConstant
          (JSNativeContextSpecialization *this,Node *param_1,long *param_2,int param_4,
          undefined4 param_5)

{
  long lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  Node *pNVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  AccessBuilder *this_00;
  Operator *pOVar9;
  Node *pNVar10;
  Node *pNVar11;
  undefined8 uVar12;
  Graph *pGVar13;
  JSGraph *this_01;
  SimplifiedOperatorBuilder *this_02;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 local_108 [16];
  undefined8 uStack_f8;
  Node *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 uStack_98;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  pNVar5 = (Node *)NodeProperties::GetValueInput(param_1,0);
  uVar6 = NodeProperties::GetEffectInput(param_1,0);
  local_d8 = uVar6;
  uVar7 = NodeProperties::GetControlInput(param_1,0);
  if (*(short *)(*(long *)pNVar5 + 0x10) == 0x1e) {
    uVar12 = *(undefined8 *)(*(long *)pNVar5 + 0x30);
  }
  else {
    uVar12 = 0;
  }
  local_e0 = uVar7;
  ObjectRef::ObjectRef((ObjectRef *)local_a8,*(undefined8 *)(this + 0x18),uVar12,0);
  uVar8 = ObjectRef::IsHeapObject((ObjectRef *)local_a8);
  if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsHeapObject()");
  }
  local_f0 = (Node *)local_a8._0_8_;
  uStack_e8 = local_a8._8_8_;
  local_a8 = HeapObjectRef::map((HeapObjectRef *)&local_f0);
  cVar3 = MapRef::oddball_type((MapRef *)local_a8);
  if (cVar3 != '\x04') {
    local_d0 = HeapObjectRef::map((HeapObjectRef *)&local_f0);
    cVar3 = MapRef::oddball_type((MapRef *)local_d0);
    if (cVar3 != '\x03') {
      local_108 = HeapObjectRef::map((HeapObjectRef *)&local_f0);
      cVar3 = MapRef::oddball_type((MapRef *)local_108);
      if (cVar3 != '\x02') {
        uVar8 = ObjectRef::IsString((ObjectRef *)&local_f0);
        if ((param_4 != 3) || ((uVar8 & 1) == 0)) {
          auVar15 = local_108;
          if ((*(short *)(*param_2 + 0x10) == 0x1c) &&
             (((dVar14 = *(double *)(*param_2 + 0x30), (double)(long)dVar14 == dVar14 &&
               (0.0 <= dVar14)) && (dVar14 <= 4294967294.0)))) {
            ObjectRef::GetOwnConstantElement(local_108,&local_f0,(int)dVar14,0);
            auVar15 = local_108;
            if (local_108[0] == (MapRef)0x0) {
              uVar8 = ObjectRef::IsJSArray((ObjectRef *)&local_f0);
              if ((uVar8 & 1) == 0) {
LAB_0174dd08:
                auVar15 = local_108;
              }
              else {
                auVar15 = ObjectRef::AsJSArray((ObjectRef *)&local_f0);
                local_d0 = auVar15;
                this_00 = (AccessBuilder *)
                          JSArrayRef::GetOwnCowElement(local_a8,local_d0,(int)dVar14,0);
                uVar12 = local_108._0_8_;
                if (local_a8[0] == (ObjectRef)0x0) {
                  if (local_108[0] != (MapRef)0x0) {
                    auVar2[0xf] = 0;
                    auVar2._0_15_ = local_108._1_15_;
                    local_108 = auVar2 << 8;
                  }
                  goto LAB_0174dd08;
                }
                uStack_f8 = uStack_98;
                local_108._8_8_ = local_a8._8_8_;
                if (local_108[0] == (MapRef)0x0) {
                  local_108[0] = (MapRef)0x1;
                  uVar12 = local_108._0_8_;
                }
                local_108._0_8_ = uVar12;
                pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
                this_02 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
                AccessBuilder::ForJSObjectElements(this_00);
                pOVar9 = (Operator *)
                         SimplifiedOperatorBuilder::LoadField(this_02,(FieldAccess *)local_a8);
                local_d0._0_8_ = pNVar5;
                local_d0._8_8_ = uVar6;
                local_c0 = uVar7;
                pNVar10 = (Node *)Graph::NewNode(pGVar13,pOVar9,3,(Node **)local_d0,false);
                local_b8 = ObjectRef::AsJSArray((ObjectRef *)&local_f0);
                auVar15 = JSObjectRef::elements((JSObjectRef *)local_b8);
                local_a8 = auVar15;
                local_d0 = ObjectRef::AsFixedArray((ObjectRef *)local_a8);
                pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
                pOVar9 = (Operator *)
                         SimplifiedOperatorBuilder::ReferenceEqual
                                   ((SimplifiedOperatorBuilder *)
                                    (*(undefined8 **)(this + 0x10))[0x2f]);
                uVar6 = JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)local_d0);
                local_a8._0_8_ = pNVar10;
                local_a8._8_8_ = uVar6;
                pNVar11 = (Node *)Graph::NewNode(pGVar13,pOVar9,2,(Node **)local_a8,false);
                auVar15 = local_b8;
                pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
                local_b8._0_8_ = 0;
                local_b8._12_4_ = auVar15._12_4_;
                local_b8._8_4_ = 0xffffffff;
                pOVar9 = (Operator *)
                         SimplifiedOperatorBuilder::CheckIf
                                   ((SimplifiedOperatorBuilder *)
                                    (*(undefined8 **)(this + 0x10))[0x2f],2,local_b8);
                local_a8._0_8_ = pNVar11;
                local_a8._8_8_ = pNVar10;
                uStack_98 = uVar7;
                uVar6 = Graph::NewNode(pGVar13,pOVar9,3,(Node **)local_a8,false);
                auVar15._8_8_ = local_108._8_8_;
                auVar15._0_8_ = local_108._0_8_;
                local_d8 = uVar6;
              }
              if (local_108[0] == (MapRef)0x0) goto LAB_0174dc4c;
            }
            local_108 = auVar15;
            if (param_4 == 3) {
              uVar7 = JSGraph::TrueConstant(*(JSGraph **)(this + 0x10));
            }
            else {
              uVar7 = JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)(local_108 + 8));
            }
            (**(code **)(**(long **)(this + 8) + 0x20))
                      (*(long **)(this + 8),param_1,uVar7,uVar6,local_e0);
            goto LAB_0174dcc8;
          }
LAB_0174dc4c:
          local_108 = auVar15;
          uVar8 = ObjectRef::IsString((ObjectRef *)&local_f0);
          if ((uVar8 & 1) != 0) {
            this_01 = *(JSGraph **)(this + 0x10);
            auVar15 = ObjectRef::AsString((ObjectRef *)&local_f0);
            local_a8 = auVar15;
            iVar4 = StringRef::length((StringRef *)local_a8);
            uVar6 = JSGraph::Constant(this_01,(double)iVar4);
            uVar7 = BuildIndexedStringLoad(this,pNVar5,param_2,uVar6,&local_d8,&local_e0,param_5);
            (**(code **)(**(long **)(this + 8) + 0x20))
                      (*(long **)(this + 8),param_1,uVar7,local_d8,local_e0);
            goto LAB_0174dcc8;
          }
        }
      }
    }
  }
  uVar7 = 0;
LAB_0174dcc8:
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

