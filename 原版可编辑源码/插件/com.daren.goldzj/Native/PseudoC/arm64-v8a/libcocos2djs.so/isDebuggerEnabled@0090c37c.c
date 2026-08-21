
/* se::ScriptEngine::isDebuggerEnabled() const */

bool __thiscall se::ScriptEngine::isDebuggerEnabled(ScriptEngine *this)

{
  if (((byte)this[0x1e8] & 1) == 0) {
    if ((byte)this[0x1e8] >> 1 == 0) {
      return false;
    }
  }
  else if (*(long *)(this + 0x1f0) == 0) {
    return false;
  }
  return *(int *)(this + 0x200) != 0;
}

