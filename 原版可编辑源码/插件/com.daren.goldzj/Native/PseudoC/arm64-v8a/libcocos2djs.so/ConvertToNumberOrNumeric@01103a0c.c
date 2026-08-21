
/* v8::internal::Object::ConvertToNumberOrNumeric(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Object::Conversion) */

ulong * v8::internal::Object::ConvertToNumberOrNumeric(Isolate *param_1,ulong *param_2,int param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  while( true ) {
    uVar4 = *param_2;
    if ((uVar4 & 1) == 0) {
      return param_2;
    }
    uVar5 = uVar4 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar5 + *(uint *)(uVar4 - 1)) == 0x42) {
      return param_2;
    }
    if (*(ushort *)(uVar5 + *(uint *)(uVar4 - 1)) < 0x40) {
      puVar1 = (ulong *)String::ToNumber(param_1,param_2);
      return puVar1;
    }
    if (*(short *)(uVar5 + *(uint *)(uVar4 - 1)) == 0x43) {
      uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xf);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
        puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
        return puVar1;
      }
      puVar1 = *(ulong **)(param_1 + 0x95a0);
      if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar4;
      return puVar1;
    }
    if (*(short *)(uVar5 + *(uint *)(uVar4 - 1)) == 0x40) break;
    if (*(short *)(uVar5 + *(uint *)(uVar4 - 1)) == 0x41) {
      if (param_3 == 1) {
        return param_2;
      }
      uVar3 = 0x17;
      goto LAB_01103af4;
    }
    param_2 = (ulong *)JSReceiver::ToPrimitive(param_2,1);
    if (param_2 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
  }
  uVar3 = 0xab;
LAB_01103af4:
  puVar2 = (undefined8 *)Factory::NewTypeError((Factory *)param_1,uVar3,0,0,0);
  Isolate::Throw(param_1,*puVar2,0);
  return (ulong *)0x0;
}

