
/* v8::internal::compiler::PipelineImpl::ComputeScheduledGraph() */

void __thiscall v8::internal::compiler::PipelineImpl::ComputeScheduledGraph(PipelineImpl *this)

{
  long lVar1;
  bool local_2c [4];
  char *local_28;
  
  lVar1 = *(long *)this;
  Run<v8::internal::compiler::LateGraphTrimmingPhase>(this);
  local_28 = "V8.TFLateGraphTrimming";
  local_2c[0] = true;
  if ((*(byte *)(*(long *)(*(long *)this + 0x18) + 1) & 0x60) != 0) {
    Run<v8::internal::compiler::PrintGraphPhase,char_const*&>(this,&local_28);
  }
  if (FLAG_turbo_verify != '\0') {
    Run<v8::internal::compiler::VerifyGraphPhase,bool&>(this,local_2c);
  }
  Run<v8::internal::compiler::ComputeSchedulePhase>(this);
  FUN_012a9278(*(undefined8 *)(lVar1 + 0x18),lVar1,*(undefined8 *)(lVar1 + 0xe8),"schedule");
  return;
}

