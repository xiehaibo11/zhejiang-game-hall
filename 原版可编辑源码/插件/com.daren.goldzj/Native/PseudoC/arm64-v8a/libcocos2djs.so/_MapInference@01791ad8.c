
/* v8::internal::compiler::MapInference::~MapInference() */

void __thiscall v8::internal::compiler::MapInference::~MapInference(MapInference *this)

{
  void *pvVar1;
  
  if (*(int *)(this + 0x28) == 2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","Safe()");
  }
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

