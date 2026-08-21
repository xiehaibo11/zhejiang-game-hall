
/* v8::internal::UnoptimizedCompilationInfo::SourcePositionRecordingMode() const */

undefined4 __thiscall
v8::internal::UnoptimizedCompilationInfo::SourcePositionRecordingMode
          (UnoptimizedCompilationInfo *this)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if (((byte)*this >> 3 & 1) == 0) {
    uVar1 = FunctionLiteral::AllowsLazyCompilation(*(FunctionLiteral **)(this + 0x10));
    uVar2 = 1;
    if ((uVar1 & 1) == 0) {
      uVar2 = 2;
    }
    return uVar2;
  }
  return 2;
}

