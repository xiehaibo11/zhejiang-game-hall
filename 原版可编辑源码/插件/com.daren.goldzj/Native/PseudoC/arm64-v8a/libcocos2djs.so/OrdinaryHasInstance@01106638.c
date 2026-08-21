
/* v8::internal::Object::OrdinaryHasInstance(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>) */

Factory * v8::internal::Object::OrdinaryHasInstance(Factory *param_1,ulong *param_2,ulong *param_3)

{
  ushort uVar1;
  ulong *puVar2;
  Factory *pFVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = *param_2;
  if (((uVar5 & 1) != 0) &&
     (uVar6 = uVar5 & 0xffffffff00000000,
     (*(byte *)((uVar6 | 9) + (ulong)*(uint *)(uVar5 - 1)) >> 1 & 1) != 0)) {
    if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x438) {
      uVar6 = uVar6 | *(uint *)(uVar5 + 0xb);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar2 = *(ulong **)(param_1 + 0x95a0);
        if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
          puVar2 = (ulong *)HandleScope::Extend((Isolate *)param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
        *puVar2 = uVar6;
      }
      else {
        puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
      }
      pFVar3 = (Factory *)InstanceOf(param_1,param_3,puVar2);
      return pFVar3;
    }
    uVar5 = *param_3;
    if (((uVar5 & 1) != 0) &&
       (0xa8 < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)))) {
      puVar2 = (ulong *)GetProperty(param_1,param_2,param_1 + 0x908);
      if (puVar2 == (ulong *)0x0) {
        return (Factory *)0x0;
      }
      uVar5 = *puVar2;
      if (((uVar5 & 1) == 0) ||
         (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0xa9)) {
        puVar4 = (undefined8 *)Factory::NewTypeError(param_1,0x3e,puVar2,0,0);
        Isolate::Throw((Isolate *)param_1,*puVar4,0);
      }
      else {
        uVar1 = JSReceiver::HasInPrototypeChain(param_1,param_3);
        if ((uVar1 & 0xff) != 0) {
          pFVar3 = (Factory *)Factory::ToBoolean(param_1,0xff < uVar1);
          return pFVar3;
        }
      }
      return (Factory *)0x0;
    }
  }
  return param_1 + 0xc0;
}

