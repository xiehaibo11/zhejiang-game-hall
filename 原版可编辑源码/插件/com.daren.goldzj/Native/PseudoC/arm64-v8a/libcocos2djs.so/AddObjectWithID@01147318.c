
/* v8::internal::ValueDeserializer::AddObjectWithID(unsigned int,
   v8::internal::Handle<v8::internal::JSReceiver>) */

void __thiscall
v8::internal::ValueDeserializer::AddObjectWithID
          (ValueDeserializer *this,undefined4 param_1,undefined8 param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  
  puVar1 = (ulong *)FixedArray::SetAndGrow
                              (*(undefined8 *)this,*(undefined8 *)(this + 0x30),param_1,param_3);
  puVar3 = *(ulong **)(this + 0x30);
  if ((puVar1 != puVar3) &&
     (((puVar1 == (ulong *)0x0 || (puVar3 == (ulong *)0x0)) || (*puVar1 != *puVar3)))) {
    GlobalHandles::Destroy(puVar3);
    uVar2 = GlobalHandles::Create(*(GlobalHandles **)(*(long *)this + 0x95e0),*puVar1);
    *(undefined8 *)(this + 0x30) = uVar2;
  }
  return;
}

