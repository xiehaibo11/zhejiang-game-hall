
/* v8::internal::JavaScriptFrame::GetCallerStackPointer() const */

long __thiscall v8::internal::JavaScriptFrame::GetCallerStackPointer(JavaScriptFrame *this)

{
  return *(long *)(this + 0x20) + 0x10;
}

