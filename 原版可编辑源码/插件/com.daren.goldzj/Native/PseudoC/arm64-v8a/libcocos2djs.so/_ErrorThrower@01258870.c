
/* v8::internal::wasm::ErrorThrower::~ErrorThrower() */

void __thiscall v8::internal::wasm::ErrorThrower::~ErrorThrower(ErrorThrower *this)

{
  undefined8 *puVar1;
  Isolate *pIVar2;
  
  if (*(int *)(this + 0x10) != 0) {
    pIVar2 = *(Isolate **)this;
    if (((*(ulong *)(pIVar2 + 0x2bd8) & 1) != 0) &&
       ((int)*(ulong *)(pIVar2 + 0x2bd8) == *(int *)(pIVar2 + 0xa8))) {
      puVar1 = (undefined8 *)Reify(this);
      Isolate::Throw(pIVar2,*puVar1,0);
    }
  }
  if (((byte)this[0x18] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x28));
  return;
}

