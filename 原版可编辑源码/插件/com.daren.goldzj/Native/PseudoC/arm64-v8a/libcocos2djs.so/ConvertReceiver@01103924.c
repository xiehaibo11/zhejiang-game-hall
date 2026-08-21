
/* v8::internal::Object::ConvertReceiver(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

ulong * v8::internal::Object::ConvertReceiver(Isolate *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 local_18;
  
  uVar2 = *param_2;
  if ((uVar2 & 1) == 0) {
LAB_01103940:
    puVar1 = (ulong *)ToObjectImpl(param_1,param_2,0);
    return puVar1;
  }
  uVar3 = uVar2 & 0xffffffff00000000 | 7;
  if (*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0xa9) {
    if (((int)uVar2 == *(int *)(param_1 + 0xb0)) || ((int)uVar2 == *(int *)(param_1 + 0xa0))) {
      local_18 = *(undefined8 *)(param_1 + 0x2bc8);
      uVar2 = Context::global_proxy((Context *)&local_18);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        param_2 = *(ulong **)(param_1 + 0x95a0);
        if (param_2 == *(ulong **)(param_1 + 0x95a8)) {
          param_2 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = param_2 + 1;
        *param_2 = uVar2;
      }
      else {
        param_2 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
      }
    }
    else if (*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0xa9) goto LAB_01103940;
  }
  return param_2;
}

