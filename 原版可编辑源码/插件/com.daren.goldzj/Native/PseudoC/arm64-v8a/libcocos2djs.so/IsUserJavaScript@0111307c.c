
/* v8::internal::Script::IsUserJavaScript() const */

bool __thiscall v8::internal::Script::IsUserJavaScript(Script *this)

{
  return (*(uint *)(*(long *)this + 0x17) & 0xfffffffe) == 4;
}

