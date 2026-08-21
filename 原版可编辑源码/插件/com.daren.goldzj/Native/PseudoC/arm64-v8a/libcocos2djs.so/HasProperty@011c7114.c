
/* v8::internal::Runtime::HasProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>) */

Factory * v8::internal::Runtime::HasProperty(Factory *param_1,ulong *param_2,ulong *param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  LookupIterator aLStack_78 [88];
  
  uVar3 = *param_2;
  if (((uVar3 & 1) == 0) ||
     (*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0xa9)) {
    puVar2 = (undefined8 *)Factory::NewTypeError(param_1,0x40,param_3,param_2,0);
    Isolate::Throw((Isolate *)param_1,*puVar2,0);
  }
  else {
    uVar3 = *param_3;
    if (((uVar3 & 1) == 0) ||
       (0x40 < *(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)))) {
      param_3 = (ulong *)Object::ConvertToName(param_1,param_3);
    }
    if (param_3 != (ulong *)0x0) {
      LookupIterator::PropertyOrElement
                (aLStack_78,(ulong)*(uint *)((long)param_2 + 4) << 0x20,param_2,param_3,param_2,3);
      uVar1 = JSReceiver::HasProperty(aLStack_78);
      if ((uVar1 & 0xff) != 0) {
        if (0xff < uVar1) {
          return param_1 + 0xb8;
        }
        return param_1 + 0xc0;
      }
    }
  }
  return (Factory *)0x0;
}

