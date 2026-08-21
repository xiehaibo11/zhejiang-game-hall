
/* v8::internal::ObjectHashTableBase<v8::internal::ObjectHashTable,
   v8::internal::ObjectHashTableShape>::Remove(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::ObjectHashTable>, v8::internal::Handle<v8::internal::Object>,
   bool*) */

undefined8
v8::internal::ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
::Remove(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  uVar2 = *param_3;
  uVar1 = Object::GetSimpleHash(uVar2);
  if ((uVar1 & 1) != 0) {
    local_28 = uVar2;
    uVar1 = JSReceiver::GetIdentityHash((JSReceiver *)&local_28);
    if (((uVar1 & 1) != 0) && ((int)uVar1 == *(int *)((uVar1 & 0xffffffff00000000) + 0xa0))) {
      *param_4 = 0;
      return param_2;
    }
  }
  uVar2 = Remove(param_1,param_2,param_3,param_4,(int)uVar1 >> 1);
  return uVar2;
}

