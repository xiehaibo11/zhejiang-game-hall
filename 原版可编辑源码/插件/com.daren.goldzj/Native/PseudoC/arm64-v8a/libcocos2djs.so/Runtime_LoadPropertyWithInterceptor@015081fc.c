
/* v8::internal::Runtime_LoadPropertyWithInterceptor(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_LoadPropertyWithInterceptor(int param_1,ulong *param_2,Isolate *param_3)

{
  uint *puVar1;
  Isolate *pIVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  Logger *this;
  ulong *puVar15;
  ulong local_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long local_f8;
  ulong *local_f0;
  undefined8 uStack_e8;
  ulong *local_e0;
  ulong *local_d8;
  ulong *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined **local_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  long local_90;
  undefined8 local_80;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar10 = FUN_01508678(param_1,param_2,param_3);
    return uVar10;
  }
  pIVar2 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar2;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar7 = param_2 + -1;
  uVar11 = *puVar7;
  if ((((uVar11 & 1) == 0) ||
      (*(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) < 0xa9)) &&
     (puVar7 = (ulong *)Object::ConvertReceiver(param_3,puVar7), puVar7 == (ulong *)0x0)) {
    uVar10 = *(undefined8 *)(param_3 + 0x180);
  }
  else {
    puVar15 = param_2 + -2;
    uVar11 = *puVar15 & 0xffffffff00000000;
    uVar5 = *(uint *)((uVar11 | 0x13) + (ulong)*(uint *)(*puVar15 - 1));
    uVar13 = uVar11 | uVar5;
    if ((uVar5 & 1) != 0) {
      do {
        if (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0xa2) {
          if (((uVar13 & 1) != 0) &&
             (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0x439)) {
            uVar13 = uVar13 & 0xffffffff00000000 |
                     (ulong)*(uint *)((uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + 0xb))
                                     + 3);
          }
          break;
        }
        puVar1 = (uint *)(uVar13 + 0x13);
        uVar13 = uVar11 | *puVar1;
      } while ((*puVar1 & 1) != 0);
    }
    uVar14 = *(ulong *)(uVar11 + 0xa0);
    if (*(uint *)(uVar13 + 0x23) != (uint)uVar14) {
      uVar14 = uVar11 | *(uint *)((uVar11 | *(uint *)(uVar13 + 0x23)) + 0xf);
    }
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)pIVar2;
      if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar2 = puVar8 + 1;
      *puVar8 = uVar14;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar14);
      uVar14 = *puVar8;
    }
    PropertyCallbackArguments::PropertyCallbackArguments
              ((PropertyCallbackArguments *)&local_b8,param_3,
               uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0x1f),*puVar7,*puVar15,
               0x100000001);
    local_f0 = (ulong *)0x0;
    uStack_108 = 0;
    uStack_104 = 0;
    local_110 = (RuntimeCallStats *)0x0;
    local_f8 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    if (TracingFlags::runtime_stats != 0) {
      local_110 = (RuntimeCallStats *)(*(long *)(local_90 + 0x9520) + 0x58a0);
      RuntimeCallStats::Enter(local_110,(ulong)&local_110 | 8,0xa0);
    }
    this = *(Logger **)(local_90 + 0x9558);
    uVar11 = Logger::is_logging(this);
    if ((uVar11 & 1) != 0) {
      Logger::ApiNamedPropertyAccess(this,"interceptor-named-getter",local_98,*param_2);
    }
    uVar5 = *(uint *)(*puVar8 + 3);
    if (uVar5 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)((*puVar8 & 0xffffffff00000000 | (ulong)uVar5) + 3);
    }
    puVar9 = (undefined8 *)
             PropertyCallbackArguments::BasicCallNamedGetterCallback
                       ((PropertyCallbackArguments *)&local_b8,uVar10,param_2,puVar8,0);
    if (local_110 != (RuntimeCallStats *)0x0) {
      RuntimeCallStats::Leave(local_110,(RuntimeCallTimer *)((ulong)&local_110 | 8));
    }
    if (*(int *)(param_3 + 0x2c20) == *(int *)(param_3 + 0xa8)) {
      if (puVar9 == (undefined8 *)0x0) {
        uVar11 = *param_2;
        local_f8 = (ulong)*(uint *)((long)param_2 + -0xc) << 0x20;
        uVar12 = 3;
        if ((*(short *)(((ulong)*(uint *)((long)param_2 + -0xc) << 0x20 | 7) +
                       (ulong)*(uint *)(uVar11 - 1)) == 0x40) &&
           (uVar12 = 3, (*(byte *)(uVar11 + 7) & 1) != 0)) {
          uVar12 = 0;
        }
        local_110 = (RuntimeCallStats *)CONCAT44(local_110._4_4_,uVar12);
        uStack_104 = 0;
        uStack_100 = 0xc0;
        puVar8 = param_2;
        if ((*(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) & 0xffe0)
            == 0x20) {
          puVar8 = (ulong *)StringTable::LookupString(local_f8,param_2);
        }
        uStack_e8 = 0;
        local_d8 = (ulong *)0x0;
        local_c0 = 0xffffffffffffffff;
        uStack_c8 = 0xffffffffffffffff;
        local_f0 = puVar8;
        local_e0 = puVar7;
        local_d0 = puVar15;
        LookupIterator::Start<false>((LookupIterator *)&local_110);
        do {
          while (local_110._4_4_ != 2) {
LAB_0150854c:
            LookupIterator::Next((LookupIterator *)&local_110);
          }
          if (local_d8 == puVar15) {
            LookupIterator::Next((LookupIterator *)&local_110);
            break;
          }
          if ((puVar15 == (ulong *)0x0) || (local_d8 == (ulong *)0x0)) goto LAB_0150854c;
          uVar11 = *local_d8;
          uVar13 = *puVar15;
          LookupIterator::Next((LookupIterator *)&local_110);
        } while (uVar11 != uVar13);
        puVar9 = (undefined8 *)Object::GetProperty((LookupIterator *)&local_110,false);
        if (puVar9 == (undefined8 *)0x0) {
          uVar10 = *(undefined8 *)(param_3 + 0x180);
        }
        else if (local_110._4_4_ == 4) {
          local_118 = param_2[-4];
          iVar6 = FeedbackVector::GetKind((FeedbackVector *)&local_118,(int)param_2[-3] >> 1);
          if (iVar6 == 6) {
            puVar9 = (undefined8 *)Factory::NewReferenceError((Factory *)param_3,0xb2,local_f0,0,0);
            uVar10 = Isolate::Throw(param_3,*puVar9,0);
          }
          else {
            uVar10 = *(undefined8 *)(param_3 + 0xa0);
          }
        }
        else {
          uVar10 = *puVar9;
        }
      }
      else {
        uVar10 = *puVar9;
      }
    }
    else {
      uVar10 = Isolate::PromoteScheduledException(param_3);
    }
    local_b8 = &PTR__Relocatable_01cacc40;
    local_80 = 0x1baddead0baddeaf;
    *(undefined8 *)(local_b0 + 0xb790) = uStack_a8;
    if (param_3 == (Isolate *)0x0) {
      return uVar10;
    }
  }
  *(long *)pIVar2 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar10;
}

