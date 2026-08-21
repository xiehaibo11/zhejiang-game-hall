
/* v8::internal::interpreter::Interpreter::GetDispatchCounter(v8::internal::interpreter::Bytecode,
   v8::internal::interpreter::Bytecode) const */

undefined8 __thiscall
v8::internal::interpreter::Interpreter::GetDispatchCounter
          (Interpreter *this,ulong param_2,byte param_3)

{
  return *(undefined8 *)(*(long *)(this + 0x1810) + ((param_2 & 0xff) * 0xb7 + (ulong)param_3) * 8);
}

