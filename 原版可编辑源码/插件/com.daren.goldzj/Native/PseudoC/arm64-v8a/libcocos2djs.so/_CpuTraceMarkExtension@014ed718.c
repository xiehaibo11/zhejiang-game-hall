
/* v8::internal::CpuTraceMarkExtension::~CpuTraceMarkExtension() */

void __thiscall
v8::internal::CpuTraceMarkExtension::~CpuTraceMarkExtension(CpuTraceMarkExtension *this)

{
  *(undefined ***)this = &PTR__Extension_01c98268;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  operator_delete(this);
  return;
}

