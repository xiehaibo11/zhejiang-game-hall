
/* v8::internal::HandleScopeImplementer::Free() */

void __thiscall v8::internal::HandleScopeImplementer::Free(HandleScopeImplementer *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  pvVar1 = *(void **)(this + 0x20);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  pvVar1 = *(void **)(this + 0x38);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  pvVar1 = *(void **)(this + 0x50);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  if (*(void **)(this + 0x68) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x68));
    *(undefined8 *)(this + 0x68) = 0;
  }
  return;
}

