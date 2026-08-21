
/* v8::internal::StubFrame::unchecked_code() const */

void __thiscall v8::internal::StubFrame::unchecked_code(StubFrame *this)

{
  Isolate::FindCodeObject(*(Isolate **)(this + 0x10),**(ulong **)(this + 0x28));
  return;
}

