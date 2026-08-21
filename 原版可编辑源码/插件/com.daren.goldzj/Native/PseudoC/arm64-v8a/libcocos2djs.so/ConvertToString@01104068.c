
/* v8::internal::Object::ConvertToString(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

ulong * v8::internal::Object::ConvertToString(Isolate *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *param_2;
  if ((uVar3 & 1) != 0) {
    while( true ) {
      uVar4 = uVar3 & 0xffffffff00000000 | 7;
      if (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) == 0x43) {
        uVar3 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0xb);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
          puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
          return puVar1;
        }
        puVar1 = *(ulong **)(param_1 + 0x95a0);
        if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
          puVar1 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
        *puVar1 = uVar3;
        return puVar1;
      }
      if (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) == 0x42) break;
      if (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) == 0x40) {
        puVar2 = (undefined8 *)Factory::NewTypeError((Factory *)param_1,0xac,0,0,0);
        Isolate::Throw(param_1,*puVar2,0);
        return (ulong *)0x0;
      }
      if (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) == 0x41) {
        puVar1 = (ulong *)BigInt::ToString(param_1,param_2,10,0);
        return puVar1;
      }
      param_2 = (ulong *)JSReceiver::ToPrimitive(param_2,2);
      if (param_2 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      uVar3 = *param_2;
      if ((uVar3 & 1) == 0) break;
      if (*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0x40) {
        return param_2;
      }
    }
  }
  puVar1 = (ulong *)Factory::NumberToString((Factory *)param_1,param_2,1);
  return puVar1;
}

