
/* v8::internal::BigInt::FromObject(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

ulong * v8::internal::BigInt::FromObject(Isolate *param_1,ulong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong local_28;
  
  local_28 = *param_2;
  if ((local_28 & 1) != 0) {
    if (0xa8 < *(ushort *)((local_28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_28 - 1))) {
      param_2 = (ulong *)JSReceiver::ToPrimitive(param_2,1);
      if (param_2 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      local_28 = *param_2;
      if ((local_28 & 1) == 0) goto LAB_0106f790;
    }
    uVar4 = local_28 & 0xffffffff00000000 | 7;
    if ((*(short *)(uVar4 + *(uint *)(local_28 - 1)) == 0x43) &&
       ((*(uint *)(local_28 + 0x17) >> 1 & 0xff) < 2)) {
      uVar1 = Object::BooleanValue((Object *)&local_28,param_1);
      puVar3 = (ulong *)MutableBigInt::NewFromInt(param_1,uVar1 & 1);
      return puVar3;
    }
    if (*(short *)(uVar4 + *(uint *)(local_28 - 1)) == 0x41) {
      return param_2;
    }
    if (*(ushort *)(uVar4 + *(uint *)(local_28 - 1)) < 0x40) {
      puVar3 = (ulong *)StringToBigInt(param_1,param_2);
      if (puVar3 != (ulong *)0x0) {
        return puVar3;
      }
      puVar2 = (undefined8 *)Factory::NewSyntaxError((Factory *)param_1,0x13,param_2,0,0);
      goto LAB_0106f7a8;
    }
  }
LAB_0106f790:
  puVar2 = (undefined8 *)Factory::NewTypeError((Factory *)param_1,0x13,param_2,0,0);
LAB_0106f7a8:
  Isolate::Throw(param_1,*puVar2,0);
  return (ulong *)0x0;
}

