
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceJSLoadGlobal(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceJSLoadGlobal
          (JSNativeContextSpecialization *this,Node *param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  ProcessedFeedback *this_00;
  GlobalAccessFeedback *this_01;
  ulong uVar5;
  undefined8 uVar6;
  Node *pNVar7;
  Operator *pOVar8;
  JSGraph *this_02;
  Graph *this_03;
  JSOperatorBuilder *this_04;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)LoadGlobalParametersOf(*(Operator **)param_1);
  if ((puVar4[1] != 0) && (*(int *)(puVar4 + 2) != -1)) {
    local_78._0_8_ = puVar4[1];
    local_78._8_4_ = *(undefined4 *)(puVar4 + 2);
    this_00 = (ProcessedFeedback *)
              JSHeapBroker::GetFeedbackForGlobalAccess
                        (*(JSHeapBroker **)(this + 0x18),(FeedbackSource *)local_78);
    if (*(int *)this_00 != 0) {
      this_01 = (GlobalAccessFeedback *)ProcessedFeedback::AsGlobalAccess(this_00);
      uVar5 = GlobalAccessFeedback::IsScriptContextSlot(this_01);
      if ((uVar5 & 1) != 0) {
        uVar6 = NodeProperties::GetEffectInput(param_1,0);
        this_02 = *(JSGraph **)(this + 0x10);
        local_78 = GlobalAccessFeedback::script_context(this_01);
        pNVar7 = (Node *)JSGraph::Constant(this_02,(ObjectRef *)local_78);
        this_03 = (Graph *)**(undefined8 **)(this + 0x10);
        this_04 = (JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e];
        iVar3 = GlobalAccessFeedback::slot_index(this_01);
        bVar2 = GlobalAccessFeedback::immutable(this_01);
        pOVar8 = (Operator *)JSOperatorBuilder::LoadContext(this_04,0,(long)iVar3,(bool)(bVar2 & 1))
        ;
        local_78._0_8_ = pNVar7;
        local_78._8_8_ = uVar6;
        uVar6 = Graph::NewNode(this_03,pOVar8,2,(Node **)local_78,false);
        (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar6,uVar6,0);
        goto LAB_01747ed4;
      }
      uVar5 = GlobalAccessFeedback::IsPropertyCell(this_01);
      if ((uVar5 & 1) != 0) {
        ObjectRef::ObjectRef((ObjectRef *)local_78,*(undefined8 *)(this + 0x18),*puVar4,0);
        uVar5 = ObjectRef::IsName((ObjectRef *)local_78);
        if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsName()");
        }
        local_88 = GlobalAccessFeedback::property_cell(this_01);
        uVar6 = ReduceGlobalAccess(this,param_1,0,0,local_78,0,0,local_88);
        goto LAB_01747ed4;
      }
    }
  }
  uVar6 = 0;
LAB_01747ed4:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

