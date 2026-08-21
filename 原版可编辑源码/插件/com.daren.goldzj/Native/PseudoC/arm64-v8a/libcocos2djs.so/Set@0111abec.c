
/* v8::internal::NumberDictionary::Set(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::NumberDictionary>, unsigned int,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::PropertyDetails) */

long * v8::internal::NumberDictionary::Set
                 (undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 local_38;
  
  plVar2 = (long *)Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
                   AtPut();
  lVar4 = *plVar2;
  if ((*(uint *)(lVar4 + 0x13) & 3) != 2) {
    if (param_3 >> 0x1d == 0) {
      if ((*(uint *)(lVar4 + 0x13) & 1) == 0) {
        uVar1 = (uint)((int)*(uint *)(lVar4 + 0x13) >> 1) >> 1;
        if ((*(uint *)(lVar4 + 0x13) & 1) != 0) {
          uVar1 = 0;
        }
        if (param_3 <= uVar1) {
          return plVar2;
        }
      }
      iVar3 = param_3 << 2;
    }
    else {
      if (param_5 != (undefined8 *)0x0) {
        local_38 = *param_5;
        JSObject::RequireSlowElements((JSObject *)&local_38,lVar4);
      }
      iVar3 = 2;
    }
    *(int *)(lVar4 + 0x13) = iVar3;
  }
  return plVar2;
}

