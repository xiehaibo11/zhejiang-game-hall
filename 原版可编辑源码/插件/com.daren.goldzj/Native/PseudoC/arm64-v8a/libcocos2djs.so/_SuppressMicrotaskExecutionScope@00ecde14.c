
/* v8::Isolate::SuppressMicrotaskExecutionScope::~SuppressMicrotaskExecutionScope() */

void __thiscall
v8::Isolate::SuppressMicrotaskExecutionScope::~SuppressMicrotaskExecutionScope
          (SuppressMicrotaskExecutionScope *this)

{
  *(int *)(*(long *)(this + 8) + 0x44) = *(int *)(*(long *)(this + 8) + 0x44) + -1;
  *(undefined8 *)(*(long *)this + 0x2c08) = *(undefined8 *)(this + 0x10);
  return;
}

