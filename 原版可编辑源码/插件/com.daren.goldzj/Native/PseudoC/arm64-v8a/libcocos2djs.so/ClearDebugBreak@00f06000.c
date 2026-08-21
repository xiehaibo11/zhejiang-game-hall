
/* v8::internal::BreakIterator::ClearDebugBreak() */

void __thiscall v8::internal::BreakIterator::ClearDebugBreak(BreakIterator *this)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = GetDebugBreakType(this);
  if (iVar1 != 1) {
    uVar2 = **(ulong **)this;
    *(undefined1 *)
     ((long)*(int *)(this + 0x38) + 0x21 +
     (uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0x13))) =
         *(undefined1 *)
          ((long)*(int *)(this + 0x38) + 0x21 +
          (uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xf)));
  }
  return;
}

