
/* WARNING: Removing unreachable block (ram,0x01103f8c) */
/* v8::internal::Object::ConvertToPropertyKey(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

ulong * v8::internal::Object::ConvertToPropertyKey(Isolate *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  
  uVar2 = *param_2;
  puVar1 = param_2;
  if (((uVar2 & 1) != 0) &&
     (0x43 < *(ushort *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 - 1)) + 7))) {
    puVar1 = (ulong *)JSReceiver::ToPrimitive(param_2,2);
  }
  if (puVar1 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  uVar2 = *puVar1;
  if ((uVar2 & 1) == 0) {
    return puVar1;
  }
  uVar3 = uVar2 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x40) {
    return puVar1;
  }
  if (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x42) goto LAB_01104008;
  uVar4 = *param_2;
  if ((uVar4 & 1) == 0) {
    if ((int)uVar4 < 0) goto LAB_01104008;
    dVar5 = (double)(uVar4 >> 1 & 0x7fffffff);
  }
  else {
    if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x42)
    goto LAB_01104008;
    dVar5 = *(double *)(uVar4 + 3) + 4503599627370496.0;
    if (((ulong)dVar5 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar4 + 3) != (double)((ulong)dVar5 & 0xffffffff))) goto LAB_01104008;
  }
  if (((ulong)dVar5 >> 0x1e & 3) == 0) {
    uVar2 = ((ulong)dVar5 & 0xffffffff) << 1;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
      return puVar1;
    }
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar2;
    return puVar1;
  }
LAB_01104008:
  if (*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0x40) {
    return puVar1;
  }
  puVar1 = (ulong *)ConvertToString(param_1);
  return puVar1;
}

