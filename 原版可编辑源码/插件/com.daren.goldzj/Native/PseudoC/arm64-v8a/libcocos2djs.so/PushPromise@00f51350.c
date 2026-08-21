
/* v8::internal::Isolate::PushPromise(v8::internal::Handle<v8::internal::JSObject>) */

void __thiscall v8::internal::Isolate::PushPromise(Isolate *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x2c40);
  uVar1 = GlobalHandles::Create(*(GlobalHandles **)(this + 0x95e0),*param_2);
  puVar2 = operator_new(0x10);
  *puVar2 = uVar1;
  puVar2[1] = uVar3;
  *(undefined8 **)(this + 0x2c40) = puVar2;
  return;
}

