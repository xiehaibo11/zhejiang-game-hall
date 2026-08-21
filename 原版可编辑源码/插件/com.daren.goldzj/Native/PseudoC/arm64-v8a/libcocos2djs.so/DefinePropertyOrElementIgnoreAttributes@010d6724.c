
/* v8::internal::JSObject::DefinePropertyOrElementIgnoreAttributes(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::PropertyAttributes) */

undefined8
v8::internal::JSObject::DefinePropertyOrElementIgnoreAttributes
          (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  char cVar2;
  LookupIterator aLStack_78 [88];
  
  LookupIterator::PropertyOrElement
            (aLStack_78,(ulong)*(uint *)(param_1 + 4) << 0x20,param_1,param_2,param_1,1);
  cVar2 = DefineOwnPropertyIgnoreAttributes(aLStack_78,param_3,param_4,1,1);
  uVar1 = 0;
  if (cVar2 != '\0') {
    uVar1 = param_3;
  }
  return uVar1;
}

