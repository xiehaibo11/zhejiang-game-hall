
/* v8::internal::JSStackFrame::HasScript() const */

bool __thiscall v8::internal::JSStackFrame::HasScript(JSStackFrame *this)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = **(ulong **)(this + 0x18) & 0xffffffff00000000;
  uVar1 = uVar2 | *(uint *)((uVar2 | *(uint *)(**(ulong **)(this + 0x18) + 0xb)) + 0xf);
  if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x5b) {
    uVar1 = uVar2 | *(uint *)(uVar1 + 0xb);
  }
  return *(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x65;
}

