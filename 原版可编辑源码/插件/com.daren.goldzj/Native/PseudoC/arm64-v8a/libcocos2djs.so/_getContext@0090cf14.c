
/* se::ScriptEngine::_getContext() const */

undefined8 __thiscall se::ScriptEngine::_getContext(ScriptEngine *this)

{
  undefined8 uVar1;
  
  if (*(ulong **)(this + 0x80) != (ulong *)0x0) {
    uVar1 = v8::HandleScope::CreateHandle(*(Isolate **)(this + 0x90),**(ulong **)(this + 0x80));
    return uVar1;
  }
  return 0;
}

