
/* v8::internal::interpreter::Interpreter::IsDispatchTableInitialized() const */

bool __thiscall
v8::internal::interpreter::Interpreter::IsDispatchTableInitialized(Interpreter *this)

{
  return *(long *)(this + 0x10) != 0;
}

