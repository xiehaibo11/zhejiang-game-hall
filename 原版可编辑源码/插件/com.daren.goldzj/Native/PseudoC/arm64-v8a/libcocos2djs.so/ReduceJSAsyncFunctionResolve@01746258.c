
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceJSAsyncFunctionResolve(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceJSAsyncFunctionResolve
          (JSNativeContextSpecialization *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  AccessBuilder *this_00;
  Operator *pOVar8;
  Graph *pGVar9;
  SimplifiedOperatorBuilder *this_01;
  Node *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  Node *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  Node *local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,0);
  uVar3 = NodeProperties::GetValueInput(param_1,1);
  uVar4 = NodeProperties::GetContextInput(param_1);
  uVar5 = NodeProperties::GetFrameStateInput(param_1);
  uVar6 = NodeProperties::GetEffectInput(param_1,0);
  uVar7 = NodeProperties::GetControlInput(param_1,0);
  this_00 = (AccessBuilder *)
            CompilationDependencies::DependOnPromiseHookProtector
                      (*(CompilationDependencies **)(this + 0x38));
  if (((ulong)this_00 & 1) == 0) {
    pNVar2 = (Node *)0x0;
  }
  else {
    pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
    this_01 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForJSAsyncFunctionObjectPromise(this_00);
    pOVar8 = (Operator *)SimplifiedOperatorBuilder::LoadField(this_01,(FieldAccess *)&local_a0);
    local_b8 = pNVar2;
    uStack_b0 = uVar6;
    local_a8 = uVar7;
    pNVar2 = (Node *)Graph::NewNode(pGVar9,pOVar8,3,&local_b8,false);
    local_b8 = pNVar2;
    uVar5 = CreateStubBuiltinContinuationFrameState
                      (*(undefined8 *)(this + 0x10),0xd2,uVar4,&local_b8,1,uVar5,1);
    pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar8 = (Operator *)
             JSOperatorBuilder::ResolvePromise
                       ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e]);
    local_a0 = pNVar2;
    uStack_98 = uVar3;
    local_90 = uVar4;
    uStack_88 = uVar5;
    local_80 = pNVar2;
    uStack_78 = uVar7;
    uVar3 = Graph::NewNode(pGVar9,pOVar8,6,&local_a0,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar2,uVar3,uVar7);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return pNVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

