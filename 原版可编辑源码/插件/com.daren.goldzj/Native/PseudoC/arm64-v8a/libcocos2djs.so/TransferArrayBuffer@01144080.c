
/* v8::internal::ValueDeserializer::TransferArrayBuffer(unsigned int,
   v8::internal::Handle<v8::internal::JSArrayBuffer>) */

void __thiscall
v8::internal::ValueDeserializer::TransferArrayBuffer
          (ValueDeserializer *this,undefined4 param_1,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  GlobalHandles *pGVar5;
  
  puVar4 = *(ulong **)(this + 0x38);
  if (puVar4 == (ulong *)0x0) {
    pGVar5 = *(GlobalHandles **)(*(long *)this + 0x95e0);
    puVar1 = (undefined8 *)
             HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>
             ::New(*(long *)this,0,0,0);
    puVar4 = (ulong *)GlobalHandles::Create(pGVar5,*puVar1);
    *(ulong **)(this + 0x38) = puVar4;
    if (puVar4 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
  }
  puVar2 = (ulong *)SimpleNumberDictionary::Set(*(undefined8 *)this,puVar4,param_1,param_3);
  if ((puVar4 != puVar2) && ((puVar2 == (ulong *)0x0 || (*puVar2 != *puVar4)))) {
    GlobalHandles::Destroy(puVar4);
    uVar3 = GlobalHandles::Create(*(GlobalHandles **)(*(long *)this + 0x95e0),*puVar2);
    *(undefined8 *)(this + 0x38) = uVar3;
  }
  return;
}

