
/* v8::internal::ObjectHashTableBase<v8::internal::EphemeronHashTable,
   v8::internal::EphemeronHashTableShape>::Put(v8::internal::Handle<v8::internal::EphemeronHashTable>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>) */

void v8::internal::
     ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>::
     Put(ulong *param_1,undefined8 *param_2,undefined8 param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  
  uVar3 = *param_2;
  pIVar1 = (Isolate *)(*(long *)((*param_1 & 0xfffffffffffc0000) + 0x18) + -0x8850);
  uVar2 = Object::GetSimpleHash(uVar3);
  if ((uVar2 & 1) != 0) {
    local_28 = uVar3;
    uVar2 = JSReceiver::GetOrCreateIdentityHash((JSReceiver *)&local_28,pIVar1);
  }
  Put(pIVar1,param_1,param_2,param_3,(int)uVar2 >> 1);
  return;
}

