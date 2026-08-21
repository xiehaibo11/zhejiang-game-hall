
/* v8::internal::compiler::JSCallReducer::ReduceArrayPrototypeSlice(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceArrayPrototypeSlice(JSCallReducer *this,Node *param_1)

{
  Graph *this_00;
  undefined8 *puVar1;
  short sVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  Node *pNVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  Node *pNVar10;
  Node *pNVar11;
  ulong uVar12;
  CallDescriptor *pCVar13;
  Operator *pOVar14;
  long lVar15;
  byte bVar16;
  Node *pNVar17;
  undefined8 *puVar18;
  undefined8 local_e0 [2];
  int *local_d0;
  Node *local_c8;
  Node *local_c0;
  Node *pNStack_b8;
  undefined8 local_b0;
  Node *pNStack_a8;
  Node *local_a0;
  MapInference aMStack_98 [48];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((FLAG_turbo_inline_array_builtins != '\0') &&
     (lVar5 = CallParametersOf(*(Operator **)param_1), (*(byte *)(lVar5 + 3) >> 4 & 1) == 0)) {
    pNVar6 = (Node *)NodeProperties::GetValueInput(param_1,1);
    if (*(int *)(*(long *)param_1 + 0x14) < 3) {
      plVar7 = (long *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
    }
    else {
      plVar7 = (long *)NodeProperties::GetValueInput(param_1,2);
    }
    if (*(int *)(*(long *)param_1 + 0x14) < 4) {
      plVar8 = (long *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    }
    else {
      plVar8 = (long *)NodeProperties::GetValueInput(param_1,3);
    }
    uVar9 = NodeProperties::GetContextInput(param_1);
    pNVar10 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    local_c8 = pNVar10;
    pNVar11 = (Node *)NodeProperties::GetControlInput(param_1,0);
    if ((*(short *)(*plVar7 + 0x10) == 0x1c) && (*(double *)(*plVar7 + 0x30) == 0.0)) {
      sVar2 = *(short *)(*plVar8 + 0x10);
      if (sVar2 == 0x1e) {
        lVar15 = *(long *)(*plVar8 + 0x30);
      }
      else {
        lVar15 = 0;
      }
      pNVar17 = (Node *)0x0;
      if ((sVar2 == 0x1e) && (lVar15 == *(long *)(*(long *)(this + 0x10) + 0x168) + 0xa0)) {
        MapInference::MapInference(aMStack_98,*(JSHeapBroker **)(this + 0x18),pNVar6,pNVar10);
        uVar12 = MapInference::HaveMaps(aMStack_98);
        if ((uVar12 & 1) == 0) {
          pNVar17 = (Node *)0x0;
        }
        else {
          plVar7 = (long *)MapInference::GetMaps(aMStack_98);
          puVar18 = (undefined8 *)*plVar7;
          puVar1 = (undefined8 *)plVar7[1];
          if (puVar18 == puVar1) {
            bVar16 = 0;
          }
          else {
            bVar16 = 0;
            do {
              ObjectRef::ObjectRef((ObjectRef *)&local_c0,*(undefined8 *)(this + 0x18),*puVar18,0);
              uVar12 = ObjectRef::IsMap((ObjectRef *)&local_c0);
              if ((uVar12 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Check failed: %s.","IsMap()");
              }
              uVar12 = MapRef::supports_fast_array_iteration((MapRef *)&local_c0);
              if ((uVar12 & 1) == 0) goto LAB_016e7c24;
              bVar4 = MapRef::elements_kind((MapRef *)&local_c0);
              puVar18 = puVar18 + 1;
              bVar16 = bVar16 | bVar4 & bVar4 < 6;
            } while (puVar1 != puVar18);
          }
          uVar12 = CompilationDependencies::DependOnArraySpeciesProtector
                             (*(CompilationDependencies **)(this + 0x30));
          if ((uVar12 & 1) == 0) {
LAB_016e7c24:
            pNVar17 = (Node *)MapInference::NoChange(aMStack_98);
          }
          else {
            if ((bVar16 != 0) &&
               (uVar12 = CompilationDependencies::DependOnNoElementsProtector
                                   (*(CompilationDependencies **)(this + 0x30)), (uVar12 & 1) == 0))
            {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("unreachable code");
            }
            MapInference::RelyOnMapsPreferStability
                      (aMStack_98,*(CompilationDependencies **)(this + 0x30),
                       *(JSGraph **)(this + 0x10),&local_c8,pNVar11,(FeedbackSource *)(lVar5 + 8));
            Builtins::CallableFor
                      ((Builtins *)local_e0,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),0xbf);
            local_c0 = (Node *)&PTR__CallInterfaceDescriptor_01ca0fc8;
            pNStack_b8 = (Node *)local_d0;
            pCVar13 = (CallDescriptor *)
                      Linkage::GetStubCallDescriptor
                                (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_c0,
                                 local_d0[2] - *local_d0,0,0x60,0);
            this_00 = (Graph *)**(undefined8 **)(this + 0x10);
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::Call
                                ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pCVar13
                                );
            local_c0 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_e0[0]);
            pNStack_a8 = local_c8;
            pNStack_b8 = pNVar6;
            local_b0 = uVar9;
            local_a0 = pNVar11;
            pNVar17 = (Node *)Graph::NewNode(this_00,pOVar14,5,&local_c0,false);
            local_c8 = pNVar17;
            (**(code **)(**(long **)(this + 8) + 0x20))
                      (*(long **)(this + 8),param_1,pNVar17,pNVar17,pNVar11);
          }
        }
        MapInference::~MapInference(aMStack_98);
      }
      goto LAB_016e7a28;
    }
  }
  pNVar17 = (Node *)0x0;
LAB_016e7a28:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return pNVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

