
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceJSPromiseResolve(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceJSPromiseResolve
          (JSNativeContextSpecialization *this,Node *param_1)

{
  long lVar1;
  long *plVar2;
  Node *pNVar3;
  Node *pNVar4;
  undefined8 uVar5;
  Node *pNVar6;
  undefined8 uVar7;
  ulong uVar8;
  Operator *pOVar9;
  long lVar10;
  Graph *pGVar11;
  undefined8 local_e0;
  undefined8 uStack_d8;
  Node *local_c8;
  Node *pNStack_c0;
  Node *local_b8;
  undefined8 uStack_b0;
  Node *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [3] [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)NodeProperties::GetValueInput(param_1,0);
  pNVar3 = (Node *)NodeProperties::GetValueInput(param_1,1);
  pNVar4 = (Node *)NodeProperties::GetContextInput(param_1);
  uVar5 = NodeProperties::GetFrameStateInput(param_1);
  pNVar6 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  uVar7 = NodeProperties::GetControlInput(param_1,0);
  if (*(short *)(*plVar2 + 0x10) == 0x1e) {
    ObjectRef::ObjectRef
              ((ObjectRef *)&local_c8,*(undefined8 *)(this + 0x18),*(undefined8 *)(*plVar2 + 0x30),0
              );
    uVar8 = ObjectRef::IsHeapObject((ObjectRef *)&local_c8);
    if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    lVar10 = *(long *)(this + 0x18);
    if (*(char *)(lVar10 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","storage_.is_populated_");
    }
    uStack_d8 = *(undefined8 *)(lVar10 + 0x28);
    local_e0 = *(undefined8 *)(lVar10 + 0x20);
    local_98[0] = NativeContextRef::promise_function((NativeContextRef *)&local_e0);
    uVar8 = ObjectRef::equals((ObjectRef *)&local_c8,(ObjectRef *)local_98);
    if ((uVar8 & 1) != 0) {
      MapInference::MapInference
                ((MapInference *)local_98,*(JSHeapBroker **)(this + 0x18),pNVar3,pNVar6);
      uVar8 = MapInference::HaveMaps((MapInference *)local_98);
      if ((((uVar8 & 1) == 0) ||
          (uVar8 = MapInference::AnyOfInstanceTypesAre((MapInference *)local_98,0x42d),
          (uVar8 & 1) != 0)) ||
         (uVar8 = CompilationDependencies::DependOnPromiseHookProtector
                            (*(CompilationDependencies **)(this + 0x38)), (uVar8 & 1) == 0)) {
        pNVar6 = (Node *)0x0;
      }
      else {
        pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar9 = (Operator *)
                 JSOperatorBuilder::CreatePromise
                           ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e]);
        local_c8 = pNVar4;
        pNStack_c0 = pNVar6;
        pNVar6 = (Node *)Graph::NewNode(pGVar11,pOVar9,2,&local_c8,false);
        pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar9 = (Operator *)
                 JSOperatorBuilder::ResolvePromise
                           ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e]);
        local_c8 = pNVar6;
        pNStack_c0 = pNVar3;
        local_b8 = pNVar4;
        uStack_b0 = uVar5;
        local_a8 = pNVar6;
        uStack_a0 = uVar7;
        uVar5 = Graph::NewNode(pGVar11,pOVar9,6,&local_c8,false);
        (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar6,uVar5,uVar7)
        ;
      }
      MapInference::~MapInference((MapInference *)local_98);
      goto LAB_017477cc;
    }
  }
  pNVar6 = (Node *)0x0;
LAB_017477cc:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return pNVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

