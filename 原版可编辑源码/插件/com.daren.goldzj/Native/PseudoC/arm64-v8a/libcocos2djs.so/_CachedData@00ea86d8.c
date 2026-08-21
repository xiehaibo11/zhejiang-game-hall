
/* v8::ScriptCompiler::CachedData::~CachedData() */

void __thiscall v8::ScriptCompiler::CachedData::~CachedData(CachedData *this)

{
  if ((*(int *)(this + 0x10) == 1) && (*(void **)this != (void *)0x0)) {
    operator_delete__(*(void **)this);
    return;
  }
  return;
}

