
/* v8::debug::Coverage::ScriptData::FunctionCount() const */

long __thiscall v8::debug::Coverage::ScriptData::FunctionCount(ScriptData *this)

{
  return (*(long *)(*(long *)this + 0x10) - *(long *)(*(long *)this + 8) >> 3) * 0x6db6db6db6db6db7;
}

