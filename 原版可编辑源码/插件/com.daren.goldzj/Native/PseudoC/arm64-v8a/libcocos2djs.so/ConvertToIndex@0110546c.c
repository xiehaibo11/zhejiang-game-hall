
/* v8::internal::Object::ConvertToIndex(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::MessageTemplate) */

ulong * v8::internal::Object::ConvertToIndex(Factory *param_1,ulong *param_2,undefined4 param_3)

{
  bool bVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    if ((int)uVar4 == *(int *)(param_1 + 0xa0)) {
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
        puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),0);
        return puVar2;
      }
      puVar2 = *(ulong **)(param_1 + 0x95a0);
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend((Isolate *)param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
      *puVar2 = 0;
      return puVar2;
    }
    if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x42) {
      param_2 = (ulong *)ConvertToNumberOrNumeric(param_1,param_2,0);
    }
  }
  if (param_2 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  uVar4 = *param_2;
  if ((uVar4 & 1) == 0) {
    if (-1 < (int)uVar4) {
      return param_2;
    }
    dVar5 = (double)((int)uVar4 >> 1);
  }
  else {
    dVar5 = *(double *)(uVar4 + 3);
    if (NAN(dVar5)) {
      dVar5 = 0.0;
      goto LAB_0110554c;
    }
  }
  if (((dVar5 != 0.0) && (ABS(dVar5) != INFINITY)) && (!NAN(ABS(dVar5)))) {
    dVar6 = (double)(long)dVar5;
    bVar1 = dVar5 < 0.0;
    dVar5 = (double)(long)dVar5;
    if (bVar1) {
      dVar5 = dVar6;
    }
  }
LAB_0110554c:
  dVar5 = dVar5 + 0.0;
  puVar2 = (ulong *)Factory::NewNumber<(v8::internal::AllocationType)0>(param_1,dVar5);
  if ((dVar5 < 0.0) || (9007199254740991.0 < dVar5)) {
    puVar3 = (undefined8 *)Factory::NewRangeError(param_1,param_3,puVar2,0,0);
    Isolate::Throw((Isolate *)param_1,*puVar3,0);
    puVar2 = (ulong *)0x0;
  }
  return puVar2;
}

