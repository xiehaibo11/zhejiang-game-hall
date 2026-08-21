
/* v8::internal::compiler::PipelineImpl::CreateGraph() */

undefined8 __thiscall v8::internal::compiler::PipelineImpl::CreateGraph(PipelineImpl *this)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  char *local_40 [2];
  bool local_14 [4];
  
  lVar3 = *(long *)this;
  if (*(PipelineStatistics **)(lVar3 + 0x38) != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhaseKind(*(PipelineStatistics **)(lVar3 + 0x38),"V8.TFGraphCreation");
  }
  Run<v8::internal::compiler::GraphBuilderPhase>(this);
  local_40[0] = "V8.TFBytecodeGraphBuilder";
  local_14[0] = true;
  if ((*(byte *)(*(long *)(*(long *)this + 0x18) + 1) & 0x60) != 0) {
    Run<v8::internal::compiler::PrintGraphPhase,char_const*&>(this,local_40);
  }
  if (FLAG_turbo_verify != '\0') {
    Run<v8::internal::compiler::VerifyGraphPhase,bool&>(this,local_14);
  }
  Run<v8::internal::compiler::InliningPhase>(this);
  local_40[0] = "V8.TFInlining";
  local_14[0] = true;
  if ((*(byte *)(*(long *)(*(long *)this + 0x18) + 1) & 0x60) != 0) {
    Run<v8::internal::compiler::PrintGraphPhase,char_const*&>(this,local_40);
  }
  if (FLAG_turbo_verify != '\0') {
    Run<v8::internal::compiler::VerifyGraphPhase,bool&>(this,local_14);
  }
  Run<v8::internal::compiler::EarlyGraphTrimmingPhase>(this);
  local_40[0] = "V8.TFEarlyTrimming";
  local_14[0] = true;
  if ((*(byte *)(*(long *)(*(long *)this + 0x18) + 1) & 0x60) != 0) {
    Run<v8::internal::compiler::PrintGraphPhase,char_const*&>(this,local_40);
  }
  if (FLAG_turbo_verify != '\0') {
    Run<v8::internal::compiler::VerifyGraphPhase,bool&>(this,local_14);
  }
  ObjectRef::ObjectRef
            ((ObjectRef *)local_40,*(undefined8 *)(lVar3 + 0x140),
             *(undefined8 *)(*(long *)(*(long *)this + 0x18) + 0x18),0);
  uVar2 = ObjectRef::IsSharedFunctionInfo((ObjectRef *)local_40);
  if ((uVar2 & 1) != 0) {
    uVar2 = SharedFunctionInfoRef::language_mode((SharedFunctionInfoRef *)local_40);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = SharedFunctionInfoRef::IsUserJavaScript((SharedFunctionInfoRef *)local_40),
       (uVar2 & 1) != 0)) {
      *(uint *)(lVar3 + 0x78) = *(uint *)(lVar3 + 0x78) | 1;
    }
    cVar1 = SharedFunctionInfoRef::kind((SharedFunctionInfoRef *)local_40);
    if ((byte)(cVar1 - 3U) < 4) {
      *(uint *)(lVar3 + 0x78) = *(uint *)(lVar3 + 0x78) | 2;
    }
    if (FLAG_concurrent_inlining == '\0') {
      Run<v8::internal::compiler::HeapBrokerInitializationPhase>(this);
      Run<v8::internal::compiler::CopyMetadataForConcurrentCompilePhase>(this);
      JSHeapBroker::StopSerializing(*(JSHeapBroker **)(lVar3 + 0x140));
    }
    if (*(PipelineStatistics **)(lVar3 + 0x38) != (PipelineStatistics *)0x0) {
      PipelineStatistics::EndPhaseKind(*(PipelineStatistics **)(lVar3 + 0x38));
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
}

