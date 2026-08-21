
/* v8::internal::compiler::Pipeline::NewCompilationJob(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSFunction>, bool) */

void v8::internal::compiler::Pipeline::NewCompilationJob
               (undefined8 *param_1_00,undefined8 param_1,ulong *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  PipelineCompilationJob *pPVar3;
  ulong uVar4;
  
  pIVar1 = (Isolate *)(*param_3 & 0xffffffff00000000);
  uVar4 = (ulong)pIVar1 | (ulong)*(uint *)(*param_3 + 0xb);
  if (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar4;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8),uVar4);
  }
  pPVar3 = operator_new(0x360);
  PipelineCompilationJob::PipelineCompilationJob(pPVar3,param_1,puVar2,param_3);
  *param_1_00 = pPVar3;
  return;
}

