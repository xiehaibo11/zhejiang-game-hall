
/* v8::debug::Coverage::ScriptCount() const */

long __thiscall v8::debug::Coverage::ScriptCount(Coverage *this)

{
  return (*(long **)this)[1] - **(long **)this >> 5;
}

