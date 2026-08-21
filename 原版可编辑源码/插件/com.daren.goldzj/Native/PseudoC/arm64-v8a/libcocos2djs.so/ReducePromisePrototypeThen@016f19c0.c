
/* v8::internal::compiler::JSCallReducer::ReducePromisePrototypeThen(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReducePromisePrototypeThen(JSCallReducer *this,Node *param_1)

{
  long lVar1;
  long lVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
  Node *pNVar6;
  Node *pNVar7;
  Node *pNVar8;
  undefined8 uVar9;
  ulong uVar10;
  Operator *pOVar11;
  Operator *pOVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  SimplifiedOperatorBuilder *pSVar15;
  Graph *pGVar16;
  Graph *pGVar17;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_f8 [16];
  Node *local_e8;
  undefined1 local_e0 [16];
  Node *local_d0;
  Node *pNStack_c8;
  Node *local_c0;
  undefined8 uStack_b8;
  Node *local_b0;
  Node *pNStack_a8;
  MapInference aMStack_a0 [48];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  lVar2 = CallParametersOf(*(Operator **)param_1);
  if ((*(byte *)(lVar2 + 3) >> 4 & 1) == 0) {
    pNVar3 = (Node *)NodeProperties::GetValueInput(param_1,1);
    if (*(int *)(*(long *)param_1 + 0x14) < 3) {
      pNVar4 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    }
    else {
      pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,2);
    }
    if (*(int *)(*(long *)param_1 + 0x14) < 4) {
      pNVar5 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    }
    else {
      pNVar5 = (Node *)NodeProperties::GetValueInput(param_1,3);
    }
    pNVar6 = (Node *)NodeProperties::GetContextInput(param_1);
    pNVar7 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    local_e8 = pNVar7;
    pNVar8 = (Node *)NodeProperties::GetControlInput(param_1,0);
    uVar9 = NodeProperties::GetFrameStateInput(param_1);
    MapInference::MapInference(aMStack_a0,*(JSHeapBroker **)(this + 0x18),pNVar3,pNVar7);
    uVar10 = DoPromiseChecks(this,aMStack_a0);
    if ((((uVar10 & 1) == 0) ||
        (uVar10 = CompilationDependencies::DependOnPromiseHookProtector
                            (*(CompilationDependencies **)(this + 0x30)), (uVar10 & 1) == 0)) ||
       (uVar10 = CompilationDependencies::DependOnPromiseSpeciesProtector
                           (*(CompilationDependencies **)(this + 0x30)), (uVar10 & 1) == 0)) {
      pNVar3 = (Node *)MapInference::NoChange(aMStack_a0);
    }
    else {
      MapInference::RelyOnMapsPreferStability
                (aMStack_a0,*(CompilationDependencies **)(this + 0x30),*(JSGraph **)(this + 0x10),
                 &local_e8,pNVar8,(FeedbackSource *)(lVar2 + 8));
      pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar11 = (Operator *)
                CommonOperatorBuilder::Select
                          ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,1);
      pGVar17 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar12 = (Operator *)
                SimplifiedOperatorBuilder::ObjectIsCallable
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_e0._0_8_ = pNVar4;
      pNVar7 = (Node *)Graph::NewNode(pGVar17,pOVar12,1,(Node **)local_e0,false);
      local_d0 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
      local_e0._0_8_ = pNVar7;
      local_e0._8_8_ = pNVar4;
      uVar13 = Graph::NewNode(pGVar16,pOVar11,3,(Node **)local_e0,false);
      pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar11 = (Operator *)
                CommonOperatorBuilder::Select
                          ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,1);
      pGVar17 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar12 = (Operator *)
                SimplifiedOperatorBuilder::ObjectIsCallable
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_e0._0_8_ = pNVar5;
      pNVar4 = (Node *)Graph::NewNode(pGVar17,pOVar12,1,(Node **)local_e0,false);
      local_d0 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
      local_e0._0_8_ = pNVar4;
      local_e0._8_8_ = pNVar5;
      uVar14 = Graph::NewNode(pGVar16,pOVar11,3,(Node **)local_e0,false);
      pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar11 = (Operator *)
                JSOperatorBuilder::CreatePromise
                          ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e]);
      local_e0._8_8_ = local_e8;
      local_e0._0_8_ = pNVar6;
      pNVar4 = (Node *)Graph::NewNode(pGVar16,pOVar11,2,(Node **)local_e0,false);
      pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
      local_e8 = pNVar4;
      pOVar11 = (Operator *)
                JSOperatorBuilder::PerformPromiseThen
                          ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e]);
      local_b0 = local_e8;
      local_e0._0_8_ = pNVar3;
      local_e0._8_8_ = uVar13;
      local_d0 = (Node *)uVar14;
      pNStack_c8 = pNVar4;
      local_c0 = pNVar6;
      uStack_b8 = uVar9;
      pNStack_a8 = pNVar8;
      pNVar3 = (Node *)Graph::NewNode(pGVar16,pOVar11,8,(Node **)local_e0,false);
      lVar2 = *(long *)(this + 0x18);
      local_e8 = pNVar3;
      if (*(char *)(lVar2 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","storage_.is_populated_");
      }
      uStack_108 = *(undefined8 *)(lVar2 + 0x28);
      local_110 = *(undefined8 *)(lVar2 + 0x20);
      local_e0 = NativeContextRef::promise_function((NativeContextRef *)&local_110);
      local_f8 = JSFunctionRef::initial_map((JSFunctionRef *)local_e0);
      pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
      pSVar15 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      uVar9 = MapRef::object((MapRef *)local_f8);
      pOVar11 = (Operator *)SimplifiedOperatorBuilder::MapGuard(pSVar15,uVar9);
      local_e0._8_8_ = local_e8;
      local_e0._0_8_ = pNVar3;
      local_d0 = pNVar8;
      local_e8 = (Node *)Graph::NewNode(pGVar16,pOVar11,3,(Node **)local_e0,false);
      (**(code **)(**(long **)(this + 8) + 0x20))
                (*(long **)(this + 8),param_1,pNVar3,local_e8,pNVar8);
    }
    MapInference::~MapInference(aMStack_a0);
  }
  else {
    pNVar3 = (Node *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return pNVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

