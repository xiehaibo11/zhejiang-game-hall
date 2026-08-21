
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceJSStoreGlobal(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceJSStoreGlobal
          (JSNativeContextSpecialization *this,Node *param_1)

{
  long lVar1;
  int iVar2;
  Node *pNVar3;
  long lVar4;
  ProcessedFeedback *this_00;
  GlobalAccessFeedback *this_01;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Operator *pOVar9;
  JSGraph *this_02;
  Graph *this_03;
  JSOperatorBuilder *this_04;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pNVar3 = (Node *)NodeProperties::GetValueInput(param_1,0);
  lVar4 = StoreGlobalParametersOf(*(Operator **)param_1);
  if ((*(long *)(lVar4 + 0x10) != 0) && (*(int *)(lVar4 + 0x18) != -1)) {
    local_88._0_8_ = *(long *)(lVar4 + 0x10);
    local_88._8_4_ = *(undefined4 *)(lVar4 + 0x18);
    this_00 = (ProcessedFeedback *)
              JSHeapBroker::GetFeedbackForGlobalAccess
                        (*(JSHeapBroker **)(this + 0x18),(FeedbackSource *)local_88);
    if (*(int *)this_00 != 0) {
      this_01 = (GlobalAccessFeedback *)ProcessedFeedback::AsGlobalAccess(this_00);
      uVar5 = GlobalAccessFeedback::IsScriptContextSlot(this_01);
      if ((uVar5 & 1) == 0) {
        uVar5 = GlobalAccessFeedback::IsPropertyCell(this_01);
        if ((uVar5 & 1) != 0) {
          ObjectRef::ObjectRef
                    ((ObjectRef *)local_88,*(undefined8 *)(this + 0x18),*(undefined8 *)(lVar4 + 8),0
                    );
          uVar5 = ObjectRef::IsName((ObjectRef *)local_88);
          if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","IsName()");
          }
          local_98 = GlobalAccessFeedback::property_cell(this_01);
          pNVar3 = (Node *)ReduceGlobalAccess(this,param_1,0,pNVar3,local_88,1,0,local_98);
          goto LAB_017480e0;
        }
      }
      else {
        uVar5 = GlobalAccessFeedback::immutable(this_01);
        if ((uVar5 & 1) == 0) {
          uVar6 = NodeProperties::GetEffectInput(param_1,0);
          uVar7 = NodeProperties::GetControlInput(param_1,0);
          this_02 = *(JSGraph **)(this + 0x10);
          local_88 = GlobalAccessFeedback::script_context(this_01);
          uVar8 = JSGraph::Constant(this_02,(ObjectRef *)local_88);
          this_03 = (Graph *)**(undefined8 **)(this + 0x10);
          this_04 = (JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e];
          iVar2 = GlobalAccessFeedback::slot_index(this_01);
          pOVar9 = (Operator *)JSOperatorBuilder::StoreContext(this_04,0,(long)iVar2);
          local_88._0_8_ = pNVar3;
          local_88._8_8_ = uVar8;
          local_78 = uVar6;
          uStack_70 = uVar7;
          uVar6 = Graph::NewNode(this_03,pOVar9,4,(Node **)local_88,false);
          (**(code **)(**(long **)(this + 8) + 0x20))
                    (*(long **)(this + 8),param_1,pNVar3,uVar6,uVar7);
          goto LAB_017480e0;
        }
      }
    }
  }
  pNVar3 = (Node *)0x0;
LAB_017480e0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return pNVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

