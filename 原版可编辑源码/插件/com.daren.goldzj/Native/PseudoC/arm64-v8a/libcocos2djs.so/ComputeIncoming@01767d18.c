
/* v8::internal::compiler::Linkage::ComputeIncoming(v8::internal::Zone*,
   v8::internal::OptimizedCompilationInfo*) */

undefined8
v8::internal::compiler::Linkage::ComputeIncoming(Zone *param_1,OptimizedCompilationInfo *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(ulong **)(param_2 + 0x20) != (ulong *)0x0) {
    uVar2 = **(ulong **)(param_2 + 0x20);
    uVar1 = GetJSCallDescriptor(param_1,*(int *)(param_2 + 0x38) != -1,
                                *(ushort *)
                                 ((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xb)) +
                                 0x15) + 1,4);
    return uVar1;
  }
  return 0;
}

