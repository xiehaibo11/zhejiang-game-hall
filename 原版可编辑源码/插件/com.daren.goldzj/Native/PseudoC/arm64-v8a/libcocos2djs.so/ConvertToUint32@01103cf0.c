
/* v8::internal::Object::ConvertToUint32(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

void v8::internal::Object::ConvertToUint32(Isolate *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  double dVar6;
  
  puVar2 = (ulong *)ConvertToNumberOrNumeric(param_1,param_2,0);
  if (puVar2 == (ulong *)0x0) {
    return;
  }
  uVar4 = *puVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
    if (1 < (int)uVar4) {
      uVar1 = (ulong)(uint)((int)uVar4 >> 1) << 1;
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar1);
      return;
    }
    puVar2 = *(ulong **)(param_1 + 0x95a0);
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar1;
    return;
  }
  dVar6 = *(double *)(uVar4 + 3);
  if ((((-2147483648.0 <= dVar6) && (dVar6 <= 2147483647.0)) && (ABS(dVar6) != INFINITY)) &&
     ((!NAN(ABS(dVar6)) && (uVar3 = (int)dVar6, dVar6 == (double)(int)dVar6)))) goto LAB_01103e44;
  uVar3 = 0xfffffbce;
  if (((ulong)dVar6 & 0x7ff0000000000000) != 0) {
    uVar3 = ((uint)((ulong)dVar6 >> 0x34) & 0x7ff) - 0x433;
  }
  if ((int)uVar3 < 0) {
    if ((int)uVar3 < -0x34) goto LAB_01103e18;
    uVar4 = (ulong)dVar6 & 0xfffffffffffff;
    if (((ulong)dVar6 & 0x7ff0000000000000) != 0) {
      uVar4 = (ulong)dVar6 & 0xfffffffffffff | 0x10000000000000;
    }
    uVar5 = (uint)(uVar4 >> ((ulong)-uVar3 & 0x3f));
  }
  else {
    if (0x1f < (int)uVar3) {
LAB_01103e18:
      uVar3 = 0;
      goto LAB_01103e44;
    }
    uVar4 = (ulong)dVar6 & 0xfffffffffffff;
    if (((ulong)dVar6 & 0x7ff0000000000000) != 0) {
      uVar4 = (ulong)dVar6 & 0xfffffffffffff | 0x10000000000000;
    }
    uVar5 = (uint)(uVar4 << ((ulong)uVar3 & 0x3f));
  }
  uVar3 = -uVar5;
  if (-1 < (long)dVar6) {
    uVar3 = uVar5;
  }
LAB_01103e44:
  Factory::NewNumberFromUint((Factory *)param_1,uVar3);
  return;
}

