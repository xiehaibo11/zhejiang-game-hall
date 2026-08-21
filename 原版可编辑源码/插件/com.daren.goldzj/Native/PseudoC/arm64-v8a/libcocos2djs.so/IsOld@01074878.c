
/* v8::internal::BytecodeArray::IsOld() const */

bool __thiscall v8::internal::BytecodeArray::IsOld(BytecodeArray *this)

{
  return '\x02' < *(char *)(*(long *)this + 0x20);
}

