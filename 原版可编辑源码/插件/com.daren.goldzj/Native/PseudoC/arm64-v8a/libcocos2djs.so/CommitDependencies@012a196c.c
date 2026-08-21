
/* v8::internal::compiler::PipelineImpl::CommitDependencies(v8::internal::Handle<v8::internal::Code>)
    */

undefined8 v8::internal::compiler::PipelineImpl::CommitDependencies(long *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(*param_1 + 0x138) != 0) {
    uVar1 = CompilationDependencies::Commit();
    return uVar1;
  }
  return 1;
}

