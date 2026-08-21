
/* v8::debug::TypeProfile::ScriptCount() const */

long __thiscall v8::debug::TypeProfile::ScriptCount(TypeProfile *this)

{
  return (*(long **)this)[1] - **(long **)this >> 5;
}

