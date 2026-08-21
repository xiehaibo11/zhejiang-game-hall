
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreateEmptyLiteralArray(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSCreateEmptyLiteralArray
          (JSCreateLowering *this,Node *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FeedbackSource *pFVar3;
  ProcessedFeedback *this_00;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  
  pFVar3 = (FeedbackSource *)FeedbackParameterOf(*(Operator **)param_1);
  this_00 = (ProcessedFeedback *)
            JSHeapBroker::GetFeedbackForArrayOrObjectLiteral(*(JSHeapBroker **)(this + 0x20),pFVar3)
  ;
  if (*(int *)this_00 == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = ProcessedFeedback::AsLiteral(this_00);
    uStack_58 = *(undefined8 *)(lVar4 + 0x10);
    local_60 = *(undefined8 *)(lVar4 + 8);
    lVar4 = *(long *)(this + 0x20);
    if (*(char *)(lVar4 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","storage_.is_populated_");
    }
    uStack_78 = *(undefined8 *)(lVar4 + 0x28);
    local_80 = *(undefined8 *)(lVar4 + 0x20);
    uVar1 = AllocationSiteRef::GetElementsKind((AllocationSiteRef *)&local_60);
    local_70 = NativeContextRef::GetInitialJSArrayMap((NativeContextRef *)&local_80,uVar1);
    uVar7 = local_70._8_8_;
    uVar6 = local_70._0_8_;
    uVar1 = CompilationDependencies::DependOnPretenureMode
                      (*(CompilationDependencies **)(this + 0x10),(AllocationSiteRef *)&local_60);
    CompilationDependencies::DependOnElementsKind
              (*(CompilationDependencies **)(this + 0x10),(AllocationSiteRef *)&local_60);
    uVar5 = JSGraph::ZeroConstant(*(JSGraph **)(this + 0x18));
    uVar2 = MapRef::instance_size((MapRef *)local_70);
    SlackTrackingPrediction::SlackTrackingPrediction
              ((SlackTrackingPrediction *)&local_80,uVar6,uVar7,uVar2);
    uVar7 = local_70._8_8_;
    uVar6 = local_70._0_8_;
    uVar2 = MapRef::elements_kind((MapRef *)local_70);
    uVar6 = ReduceNewArray(this,param_1,uVar5,0,uVar6,uVar7,uVar2,uVar1,&local_80);
  }
  return uVar6;
}

