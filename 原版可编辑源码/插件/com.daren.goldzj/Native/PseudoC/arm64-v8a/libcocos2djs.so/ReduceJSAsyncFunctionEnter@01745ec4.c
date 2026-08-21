
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceJSAsyncFunctionEnter(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceJSAsyncFunctionEnter
          (JSNativeContextSpecialization *this,Node *param_1)

{
  int iVar1;
  int iVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Node *pNVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  Operator *pOVar10;
  long lVar11;
  undefined8 uVar12;
  Graph *pGVar13;
  ObjectRef aOStack_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  Node *pNStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pNVar3 = (Node *)NodeProperties::GetValueInput(param_1,0);
  uVar4 = NodeProperties::GetValueInput(param_1,1);
  pNVar5 = (Node *)NodeProperties::GetContextInput(param_1);
  puVar6 = (undefined8 *)NodeProperties::GetFrameStateInput(param_1);
  uVar7 = NodeProperties::GetEffectInput(param_1,0);
  uVar8 = NodeProperties::GetControlInput(param_1,0);
  uVar9 = CompilationDependencies::DependOnPromiseHookProtector
                    (*(CompilationDependencies **)(this + 0x38));
  if ((uVar9 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              JSOperatorBuilder::CreatePromise
                        ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e]);
    local_90._0_8_ = pNVar5;
    local_90._8_8_ = uVar7;
    uVar7 = Graph::NewNode(pGVar13,pOVar10,2,(Node **)local_90,false);
    uVar12 = *(undefined8 *)(this + 0x18);
    lVar11 = FrameStateInfoOf((Operator *)*puVar6);
    if ((*(long *)(lVar11 + 0x10) == 0) ||
       (lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + 0x10), lVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    ObjectRef::ObjectRef(aOStack_a0,uVar12,lVar11,0);
    uVar9 = ObjectRef::IsSharedFunctionInfo(aOStack_a0);
    if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
    }
    iVar1 = SharedFunctionInfoRef::internal_formal_parameter_count
                      ((SharedFunctionInfoRef *)aOStack_a0);
    local_90 = SharedFunctionInfoRef::GetBytecodeArray((SharedFunctionInfoRef *)aOStack_a0);
    iVar2 = BytecodeArrayRef::register_count((BytecodeArrayRef *)local_90);
    pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar10 = (Operator *)
              JSOperatorBuilder::CreateAsyncFunctionObject
                        ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e],iVar2 + iVar1);
    local_90._0_8_ = pNVar3;
    local_90._8_8_ = uVar4;
    local_80 = uVar7;
    pNStack_78 = pNVar5;
    local_70 = uVar7;
    uStack_68 = uVar8;
    uVar4 = Graph::NewNode(pGVar13,pOVar10,6,(Node **)local_90,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar4,uVar4,uVar8);
  }
  return uVar4;
}

