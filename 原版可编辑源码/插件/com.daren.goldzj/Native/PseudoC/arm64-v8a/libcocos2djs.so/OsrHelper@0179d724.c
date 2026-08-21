
/* v8::internal::compiler::OsrHelper::OsrHelper(v8::internal::OptimizedCompilationInfo*) */

void __thiscall
v8::internal::compiler::OsrHelper::OsrHelper(OsrHelper *this,OptimizedCompilationInfo *param_1)

{
  int iVar1;
  int iVar2;
  
  *(long *)this = (long)((ulong)*(uint *)(**(long **)(param_1 + 0x10) + 0x17) << 0x20) >> 0x23;
  iVar1 = *(int *)(**(long **)(param_1 + 0x10) + 0x13);
  iVar2 = iVar1 + 7;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  iVar2 = InterpreterFrameConstants::RegisterStackSlotCount(iVar2 >> 3);
  *(long *)(this + 8) = (long)(iVar2 + 2);
  return;
}

