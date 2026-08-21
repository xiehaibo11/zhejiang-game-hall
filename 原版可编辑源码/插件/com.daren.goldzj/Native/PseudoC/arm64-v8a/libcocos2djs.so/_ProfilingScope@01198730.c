
/* v8::internal::ProfilingScope::~ProfilingScope() */

void __thiscall v8::internal::ProfilingScope::~ProfilingScope(ProfilingScope *this)

{
  long lVar1;
  
  Logger::RemoveCodeEventListener
            (*(Logger **)(*(long *)this + 0x9558),*(CodeEventListener **)(this + 8));
  lVar1 = *(long *)(*(long *)this + 0xb800) + -1;
  *(long *)(*(long *)this + 0xb800) = lVar1;
  if (lVar1 == 0) {
    *(undefined1 *)(*(long *)this + 0xb7fc) = 0;
  }
  return;
}

