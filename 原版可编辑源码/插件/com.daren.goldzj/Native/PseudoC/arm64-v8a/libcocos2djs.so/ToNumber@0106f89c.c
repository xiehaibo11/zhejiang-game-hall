
/* v8::internal::BigInt::ToNumber(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigInt>) */

void v8::internal::BigInt::ToNumber(Factory *param_1,long *param_2)

{
  Factory *pFVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  lVar6 = *param_2;
  pFVar1 = param_1 + 0x95a0;
  if ((*(uint *)(lVar6 + 3) & 0x7ffffffe) == 0) {
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(undefined8 **)pFVar1;
      if (puVar4 == *(undefined8 **)(param_1 + 0x95a8)) {
        puVar4 = (undefined8 *)HandleScope::Extend((Isolate *)param_1);
      }
      *(undefined8 **)pFVar1 = puVar4 + 1;
      *puVar4 = 0;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),0);
    }
  }
  else if (((*(uint *)(lVar6 + 3) & 0x7ffffffe) == 2) &&
          (uVar7 = *(ulong *)(lVar6 + 7), uVar7 < 0x3fffffff)) {
    uVar2 = -uVar7;
    if ((*(uint *)(lVar6 + 3) & 1) == 0) {
      uVar2 = uVar7;
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pFVar1;
      if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend((Isolate *)param_1);
      }
      *(ulong **)pFVar1 = puVar5 + 1;
      *puVar5 = uVar2 << 1;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2 << 1);
    }
  }
  else {
    uVar8 = MutableBigInt::ToDouble(param_2);
    plVar3 = (long *)Factory::NewHeapNumber<(v8::internal::AllocationType)0>(param_1);
    *(undefined8 *)(*plVar3 + 3) = uVar8;
  }
  return;
}

