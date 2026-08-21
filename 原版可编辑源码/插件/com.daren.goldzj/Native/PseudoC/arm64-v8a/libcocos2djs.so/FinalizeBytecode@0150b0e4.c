
/* v8::internal::interpreter::BytecodeGenerator::FinalizeBytecode(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Script>) */

long * v8::internal::interpreter::BytecodeGenerator::FinalizeBytecode(long param_1,Factory *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  void *local_38;
  undefined8 local_18;
  
  AllocateDeferredConstants();
  if (*(ZoneVector **)(param_1 + 0x208) != (ZoneVector *)0x0) {
    lVar4 = *(long *)(param_1 + 0x1d0);
    uVar2 = Factory::NewCoverageInfo(param_2,*(ZoneVector **)(param_1 + 0x208));
    *(undefined8 *)(lVar4 + 0x20) = uVar2;
    if (FLAG_trace_block_coverage != '\0') {
      local_18 = **(undefined8 **)(*(long *)(param_1 + 0x1d0) + 0x20);
      FunctionLiteral::GetDebugName();
      CoverageInfo::Print((CoverageInfo *)&local_18,&local_38);
      pvVar1 = local_38;
      local_38 = (void *)0x0;
      if (pvVar1 != (void *)0x0) {
        operator_delete__(pvVar1);
      }
    }
  }
  if (*(char *)(param_1 + 8) == '\0') {
    plVar3 = (long *)BytecodeArrayBuilder::ToBytecodeArray
                               ((BytecodeArrayBuilder *)(param_1 + 0x18),(Isolate *)param_2);
    if (*(int *)(param_1 + 0x308) != 0x7fffffff) {
      *(int *)(*plVar3 + 0x1b) = -5 - *(int *)(param_1 + 0x308);
    }
  }
  else {
    plVar3 = (long *)0x0;
  }
  return plVar3;
}

