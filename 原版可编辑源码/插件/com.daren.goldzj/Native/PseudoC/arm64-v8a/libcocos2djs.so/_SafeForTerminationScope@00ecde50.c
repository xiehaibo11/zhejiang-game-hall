
/* v8::Isolate::SafeForTerminationScope::~SafeForTerminationScope() */

void __thiscall
v8::Isolate::SafeForTerminationScope::~SafeForTerminationScope(SafeForTerminationScope *this)

{
  *(SafeForTerminationScope *)(*(long *)this + 0xb828) = this[8];
  return;
}

