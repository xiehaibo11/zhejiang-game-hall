
/* v8::internal::Isolate::PopPromise() */

void __thiscall v8::internal::Isolate::PopPromise(Isolate *this)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x2c40);
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = (ulong *)*puVar3;
    uVar2 = puVar3[1];
    operator_delete(puVar3);
    *(undefined8 *)(this + 0x2c40) = uVar2;
    GlobalHandles::Destroy(puVar1);
    return;
  }
  return;
}

