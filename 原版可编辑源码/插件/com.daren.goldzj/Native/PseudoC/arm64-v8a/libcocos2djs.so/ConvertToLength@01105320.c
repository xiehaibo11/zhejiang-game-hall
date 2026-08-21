
/* v8::internal::Object::ConvertToLength(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

ulong * v8::internal::Object::ConvertToLength(Factory *param_1,ulong *param_2)

{
  Factory *pFVar1;
  bool bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  double dVar6;
  
  uVar5 = *param_2;
  if (((uVar5 & 1) != 0) &&
     (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x42)) {
    param_2 = (ulong *)ConvertToNumberOrNumeric(param_1,param_2,0);
  }
  if (param_2 == (ulong *)0x0) {
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    pFVar1 = param_1 + 0x95a0;
    if ((uVar5 & 1) == 0) {
      uVar5 = (ulong)(((uint)(uVar5 >> 1) & 0x7fffffff & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) << 1);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)pFVar1;
        if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend((Isolate *)param_1);
        }
        *(ulong **)pFVar1 = puVar4 + 1;
        *puVar4 = uVar5;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
      }
    }
    else {
      dVar6 = *(double *)(uVar5 + 3);
      if (!NAN(dVar6)) {
        bVar3 = true;
        if ((ABS(dVar6) != INFINITY) && (bVar3 = true, !NAN(ABS(dVar6)))) {
          bVar3 = false;
        }
        bVar2 = true;
        if ((!bVar3) && (bVar2 = false, !NAN(dVar6))) {
          bVar2 = dVar6 == 0.0;
        }
        if (!bVar2) {
          dVar6 = (double)(long)dVar6;
        }
        if (0.0 < dVar6) {
          if (9007199254740991.0 < dVar6) {
            dVar6 = 9007199254740991.0;
          }
          puVar4 = (ulong *)Factory::NewNumber<(v8::internal::AllocationType)0>(param_1,dVar6);
          return puVar4;
        }
      }
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)pFVar1;
        if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend((Isolate *)param_1);
        }
        *(ulong **)pFVar1 = puVar4 + 1;
        *puVar4 = 0;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),0);
      }
    }
  }
  return puVar4;
}

