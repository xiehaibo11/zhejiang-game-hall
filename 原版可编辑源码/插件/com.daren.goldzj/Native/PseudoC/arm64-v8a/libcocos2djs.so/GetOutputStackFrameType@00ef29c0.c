
/* v8::internal::OptimizedCompilationInfo::GetOutputStackFrameType() const */

undefined4 __thiscall
v8::internal::OptimizedCompilationInfo::GetOutputStackFrameType(OptimizedCompilationInfo *this)

{
  uint uVar1;
  
  uVar1 = *(int *)(this + 8) - 1;
  if ((uVar1 < 0xb) && ((0x6f7U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    return *(undefined4 *)(&DAT_019a66fc + (long)(int)uVar1 * 4);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unimplemented code");
}

