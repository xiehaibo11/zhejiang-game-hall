
/* v8::internal::Runtime_StorePropertyWithInterceptor(int, unsigned long*, v8::internal::Isolate*)
    */

ulong v8::internal::Runtime_StorePropertyWithInterceptor
                (int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  ulong *puVar14;
  undefined4 local_108;
  int local_104;
  undefined8 local_fc;
  long local_f0;
  ulong *local_e8;
  undefined8 uStack_e0;
  ulong *local_d8;
  undefined8 uStack_d0;
  ulong *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined **local_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_78;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar10 = FUN_01509018(param_1,param_2,param_3);
    return uVar10;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar1;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar14 = param_2 + -1;
  uVar12 = *puVar14;
  uVar10 = uVar12 & 0xffffffff00000000;
  uVar11 = uVar10 | 7;
  puVar7 = puVar14;
  if (*(short *)(uVar11 + *(uint *)(uVar12 - 1)) == 0xab) {
    puVar13 = (uint *)(uVar12 - 1);
    if ((*(byte *)((uVar10 | 9) + (ulong)*puVar13) >> 2 & 1) != 0) {
      uVar5 = *(uint *)((uVar10 | 0x13) + (ulong)*puVar13);
      while (uVar12 = uVar10 | uVar5, (uVar5 & 1) != 0) {
        if (*(short *)(uVar11 + *(uint *)(uVar12 - 1)) != 0xa2) {
          if (((uVar5 & 1) != 0) && (*(short *)(uVar11 + *(uint *)(uVar12 - 1)) == 0x439)) {
            uVar12 = uVar10 | *(uint *)((uVar10 | *(uint *)(uVar12 + 0xb)) + 3);
          }
          break;
        }
        uVar5 = *(uint *)(uVar12 + 0x13);
      }
      uVar11 = *(ulong *)(uVar10 + 0xa0);
      if (*(uint *)(uVar12 + 0x23) != (uint)uVar11) {
        uVar11 = uVar10 | *(uint *)((uVar10 | *(uint *)(uVar12 + 0x23)) + 0xf);
      }
      if ((*(byte *)(uVar11 + 0x23) >> 3 & 1) == 0) goto LAB_01508d44;
      uVar10 = *puVar14 & 0xffffffff00000000;
      puVar13 = (uint *)(*puVar14 - 1);
    }
    uVar10 = uVar10 | *(uint *)((uVar10 | *puVar13) + 0xf);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar1;
      if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar7 + 1;
      *puVar7 = uVar10;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
    }
  }
LAB_01508d44:
  uVar10 = *puVar7 & 0xffffffff00000000;
  uVar5 = *(uint *)((uVar10 | 0x13) + (ulong)*(uint *)(*puVar7 - 1));
  uVar11 = uVar10 | uVar5;
  if ((uVar5 & 1) != 0) {
    do {
      if (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0xa2) {
        if (((uVar11 & 1) != 0) &&
           (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x439)) {
          uVar11 = uVar11 & 0xffffffff00000000 |
                   (ulong)*(uint *)((uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 0xb)) +
                                   3);
        }
        break;
      }
      puVar13 = (uint *)(uVar11 + 0x13);
      uVar11 = uVar10 | *puVar13;
    } while ((*puVar13 & 1) != 0);
  }
  uVar12 = *(ulong *)(uVar10 + 0xa0);
  puVar7 = param_2 + -2;
  if (*(uint *)(uVar11 + 0x23) != (uint)uVar12) {
    uVar12 = uVar10 | *(uint *)((uVar10 | *(uint *)(uVar11 + 0x23)) + 0xf);
  }
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)pIVar1;
    if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar8 + 1;
    *puVar8 = uVar12;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
    uVar12 = *puVar8;
  }
  PropertyCallbackArguments::PropertyCallbackArguments
            ((PropertyCallbackArguments *)&local_b0,param_3,
             uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 0x1f),param_2[-1],param_2[-1],
             0x100000001);
  lVar9 = PropertyCallbackArguments::CallNamedSetter
                    ((PropertyCallbackArguments *)&local_b0,puVar8,puVar7,param_2);
  if (*(int *)(param_3 + 0x2c20) == *(int *)(param_3 + 0xa8)) {
    if (lVar9 == 0) {
      local_f0 = (ulong)*(uint *)((long)param_2 + -4) << 0x20;
      local_108 = 3;
      if ((*(short *)(((ulong)*(uint *)((long)param_2 + -4) << 0x20 | 7) +
                     (ulong)*(uint *)(*puVar7 - 1)) == 0x40) &&
         (local_108 = 3, (*(byte *)(*puVar7 + 7) & 1) != 0)) {
        local_108 = 0;
      }
      local_fc = 0xc000000000;
      if ((*(ushort *)((*puVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar7 - 1)) & 0xffe0)
          == 0x20) {
        puVar7 = (ulong *)StringTable::LookupString(local_f0,puVar7);
      }
      uStack_e0 = 0;
      uStack_d0 = 0;
      local_b8 = 0xffffffffffffffff;
      uStack_c0 = 0xffffffffffffffff;
      local_e8 = puVar7;
      local_d8 = puVar14;
      local_c8 = puVar14;
      LookupIterator::Start<false>((LookupIterator *)&local_108);
      if (local_104 == 0) {
        LookupIterator::Next((LookupIterator *)&local_108);
      }
      LookupIterator::Next((LookupIterator *)&local_108);
      cVar6 = Object::SetProperty(&local_108,param_2,1,0);
      pIVar2 = param_3 + 0x180;
      if (cVar6 != '\0') {
        pIVar2 = (Isolate *)param_2;
      }
      uVar10 = *(ulong *)pIVar2;
    }
    else {
      uVar10 = *param_2;
    }
  }
  else {
    uVar10 = Isolate::PromoteScheduledException(param_3);
  }
  local_b0 = &PTR__Relocatable_01cacc40;
  local_78 = 0x1baddead0baddeaf;
  *(undefined8 *)(local_a8 + 0xb790) = uStack_a0;
  *(long *)pIVar1 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar10;
}

