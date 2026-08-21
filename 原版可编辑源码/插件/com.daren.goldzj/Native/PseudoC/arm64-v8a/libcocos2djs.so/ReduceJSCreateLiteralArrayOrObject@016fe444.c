
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreateLiteralArrayOrObject(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSCreateLiteralArrayOrObject
          (JSCreateLowering *this,Node *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ProcessedFeedback *this_00;
  ulong uVar5;
  char local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar2 = CreateLiteralParametersOf(*(Operator **)param_1);
  uVar3 = NodeProperties::GetEffectInput(param_1,0);
  uVar4 = NodeProperties::GetControlInput(param_1,0);
  this_00 = (ProcessedFeedback *)
            JSHeapBroker::GetFeedbackForArrayOrObjectLiteral
                      (*(JSHeapBroker **)(this + 0x20),(FeedbackSource *)(lVar2 + 8));
  if (*(int *)this_00 != 0) {
    lVar2 = ProcessedFeedback::AsLiteral(this_00);
    uStack_48 = *(undefined8 *)(lVar2 + 0x10);
    local_50 = *(undefined8 *)(lVar2 + 8);
    uVar5 = AllocationSiteRef::IsFastLiteral((AllocationSiteRef *)&local_50);
    if ((uVar5 & 1) != 0) {
      if (FLAG_allocation_site_pretenuring == '\0') {
        uVar1 = 0;
      }
      else {
        uVar1 = CompilationDependencies::DependOnPretenureMode
                          (*(CompilationDependencies **)(this + 0x10),(AllocationSiteRef *)&local_50
                          );
      }
      CompilationDependencies::DependOnElementsKinds
                (*(CompilationDependencies **)(this + 0x10),(AllocationSiteRef *)&local_50);
      AllocationSiteRef::boilerplate();
      if (local_68 == '\x01') {
        uVar3 = AllocateFastLiteral(this,uVar3,uVar4,local_60,uStack_58,uVar1);
        (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar3,uVar3,uVar4);
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","storage_.is_populated_");
    }
  }
  return 0;
}

