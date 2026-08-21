
Isolate * FUN_010d217c(long param_1,ulong *param_2,undefined1 *param_3)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  Isolate *this;
  undefined8 *puVar8;
  Logger *pLVar9;
  PropertyCallbackArguments local_c0 [8];
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  long local_98;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  *param_3 = 0;
  uVar7 = *param_2;
  this = *(Isolate **)(param_1 + 0x18);
  if (((*(uint *)(uVar7 + 3) & 1) == 0) ||
     (pIVar2 = this + 0xa0, *(uint *)(uVar7 + 3) != *(uint *)pIVar2)) {
    puVar4 = *(ulong **)(param_1 + 0x38);
    uVar6 = **(ulong **)(param_1 + 0x30);
    if (((uVar6 & 1) == 0) ||
       (*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0xa9)) {
      puVar3 = (ulong *)v8::internal::Object::ConvertReceiver(this);
      if (puVar3 == (ulong *)0x0) {
        return (Isolate *)0x0;
      }
      uVar7 = *param_2;
      uVar6 = *puVar3;
    }
    v8::internal::PropertyCallbackArguments::PropertyCallbackArguments
              (local_c0,this,uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x1f),uVar6,
               *puVar4,0x100000001);
    uVar7 = *(ulong *)(param_1 + 0x48);
    if ((uVar7 < 0xffffffff) ||
       ((uVar7 != 0xffffffffffffffff &&
        (uVar6 = *puVar4,
        (byte)((*(byte *)((uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1)) + 10) >> 3) -
              0x11) < 0xb)))) {
      local_50 = 0;
      uStack_68 = 0;
      local_70 = (RuntimeCallStats *)0x0;
      uStack_58 = 0;
      uStack_60 = 0;
      if (v8::internal::TracingFlags::runtime_stats != 0) {
        local_70 = (RuntimeCallStats *)(*(long *)(local_98 + 0x9520) + 0x58a0);
        v8::internal::RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0xa0);
      }
      pLVar9 = *(Logger **)(local_98 + 0x9558);
      uVar6 = v8::internal::Logger::is_logging(pLVar9);
      if ((uVar6 & 1) != 0) {
        v8::internal::Logger::ApiIndexedPropertyAccess
                  (pLVar9,"interceptor-indexed-getter",local_a0,uVar7 & 0xffffffff);
      }
      uVar1 = *(uint *)(*param_2 + 3);
      if (uVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)((*param_2 & 0xffffffff00000000 | (ulong)uVar1) + 3);
      }
      puVar4 = (ulong *)v8::internal::PropertyCallbackArguments::BasicCallIndexedGetterCallback
                                  (local_c0,uVar5,uVar7 & 0xffffffff,param_2);
    }
    else {
      puVar8 = *(undefined8 **)(param_1 + 0x20);
      local_50 = 0;
      uStack_68 = 0;
      local_70 = (RuntimeCallStats *)0x0;
      uStack_58 = 0;
      uStack_60 = 0;
      if (v8::internal::TracingFlags::runtime_stats != 0) {
        local_70 = (RuntimeCallStats *)(*(long *)(local_98 + 0x9520) + 0x58a0);
        v8::internal::RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0xa0);
      }
      pLVar9 = *(Logger **)(local_98 + 0x9558);
      uVar7 = v8::internal::Logger::is_logging(pLVar9);
      if ((uVar7 & 1) != 0) {
        v8::internal::Logger::ApiNamedPropertyAccess
                  (pLVar9,"interceptor-named-getter",local_a0,*puVar8);
      }
      uVar1 = *(uint *)(*param_2 + 3);
      if (uVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)((*param_2 & 0xffffffff00000000 | (ulong)uVar1) + 3);
      }
      puVar4 = (ulong *)v8::internal::PropertyCallbackArguments::BasicCallNamedGetterCallback
                                  (local_c0,uVar5,puVar8,param_2,0);
    }
    if (local_70 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
    }
    if (*(int *)(this + 0x2c20) == *(int *)(this + 0xa8)) {
      if (puVar4 == (ulong *)0x0) {
        pIVar2 = this + 0xa0;
      }
      else {
        *param_3 = 1;
        uVar7 = *puVar4;
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          pIVar2 = *(Isolate **)(this + 0x95a0);
          if (pIVar2 == *(Isolate **)(this + 0x95a8)) {
            pIVar2 = (Isolate *)v8::internal::HandleScope::Extend(this);
          }
          *(Isolate **)(this + 0x95a0) = pIVar2 + 8;
          *(ulong *)pIVar2 = uVar7;
        }
        else {
          pIVar2 = (Isolate *)
                   v8::internal::CanonicalHandleScope::Lookup
                             (*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
        }
      }
    }
    else {
      v8::internal::Isolate::PromoteScheduledException(this);
      pIVar2 = (Isolate *)0x0;
    }
    *(undefined8 *)(local_b8 + 0xb790) = uStack_b0;
  }
  return pIVar2;
}

