
/* v8::platform::tracing::TraceObject::~TraceObject() */

void __thiscall v8::platform::tracing::TraceObject::~TraceObject(TraceObject *this)

{
  long *plVar1;
  
  if (*(void **)(this + 0x78) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x78));
  }
  plVar1 = *(long **)(this + 0x70);
  *(undefined8 *)(this + 0x70) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(this + 0x68);
  *(undefined8 *)(this + 0x68) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0147a5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}

