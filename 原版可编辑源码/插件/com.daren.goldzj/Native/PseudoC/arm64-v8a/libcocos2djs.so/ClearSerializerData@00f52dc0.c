
/* v8::internal::Isolate::ClearSerializerData() */

void __thiscall v8::internal::Isolate::ClearSerializerData(Isolate *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 0xb7b0);
  if (puVar1 != (undefined8 *)0x0) {
    free((void *)*puVar1);
    operator_delete(puVar1);
  }
  *(undefined8 *)(this + 0xb7b0) = 0;
  return;
}

