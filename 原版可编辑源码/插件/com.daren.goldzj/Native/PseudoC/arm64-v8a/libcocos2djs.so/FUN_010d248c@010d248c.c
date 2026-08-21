
ulong FUN_010d248c(long param_1,ulong *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  Isolate *this;
  Logger *pLVar11;
  undefined8 *puVar12;
  uint local_d4;
  undefined **local_d0;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_98;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  this = *(Isolate **)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(this + 0x95a0);
  lVar2 = *(long *)(this + 0x95a8);
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  puVar3 = *(ulong **)(param_1 + 0x38);
  uVar10 = **(ulong **)(param_1 + 0x30);
  if (((uVar10 & 1) == 0) ||
     (*(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0xa9)) {
    puVar6 = (ulong *)v8::internal::Object::ConvertReceiver(this,*(ulong **)(param_1 + 0x30));
    if (puVar6 == (ulong *)0x0) {
      uVar10 = 0;
      goto joined_r0x010d2654;
    }
    uVar10 = *puVar6;
  }
  v8::internal::PropertyCallbackArguments::PropertyCallbackArguments
            ((PropertyCallbackArguments *)&local_d0,this,
             *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x1f),uVar10,*puVar3,
             0x100000001);
  uVar4 = *(uint *)(*param_2 + 0xb);
  if (((uVar4 & 1) == 0) || (uVar4 != *(uint *)(this + 0xa0))) {
    if ((*(ulong *)(param_1 + 0x48) < 0xffffffff) ||
       ((*(ulong *)(param_1 + 0x48) != 0xffffffffffffffff &&
        ((byte)((*(byte *)((*puVar3 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar3 - 1)) + 10) >> 3
                ) - 0x11) < 0xb)))) {
      puVar12 = (undefined8 *)
                v8::internal::PropertyCallbackArguments::CallIndexedQuery
                          ((PropertyCallbackArguments *)&local_d0,param_2);
    }
    else {
      puVar12 = (undefined8 *)
                v8::internal::PropertyCallbackArguments::CallNamedQuery
                          ((PropertyCallbackArguments *)&local_d0,param_2,
                           *(undefined8 *)(param_1 + 0x20));
    }
    if (puVar12 == (undefined8 *)0x0) goto LAB_010d2768;
    local_80 = (RuntimeCallStats *)*puVar12;
    uVar10 = v8::internal::Object::ToInt32((Object *)&local_80,(int *)&local_d4);
    if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","result->ToInt32(&value)");
    }
    uVar10 = (ulong)local_d4 << 0x20 | 1;
  }
  else {
    uVar5 = *(uint *)(*param_2 + 3);
    if (((uVar5 & 1) == 0) || (uVar5 != uVar4)) {
      uVar10 = *(ulong *)(param_1 + 0x48);
      if ((uVar10 < 0xffffffff) ||
         ((uVar10 != 0xffffffffffffffff &&
          ((byte)((*(byte *)((*puVar3 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar3 - 1)) + 10) >>
                  3) - 0x11) < 0xb)))) {
        local_60 = 0;
        uStack_78 = 0;
        local_80 = (RuntimeCallStats *)0x0;
        uStack_68 = 0;
        uStack_70 = 0;
        if (v8::internal::TracingFlags::runtime_stats != 0) {
          local_80 = (RuntimeCallStats *)(*(long *)(local_a8 + 0x9520) + 0x58a0);
          v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0xa0);
        }
        pLVar11 = *(Logger **)(local_a8 + 0x9558);
        uVar7 = v8::internal::Logger::is_logging(pLVar11);
        if ((uVar7 & 1) != 0) {
          v8::internal::Logger::ApiIndexedPropertyAccess
                    (pLVar11,"interceptor-indexed-getter",local_b0,uVar10 & 0xffffffff);
        }
        uVar4 = *(uint *)(*param_2 + 3);
        if (uVar4 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)((*param_2 & 0xffffffff00000000 | (ulong)uVar4) + 3);
        }
        lVar8 = v8::internal::PropertyCallbackArguments::BasicCallIndexedGetterCallback
                          ((PropertyCallbackArguments *)&local_d0,uVar9,uVar10 & 0xffffffff,param_2)
        ;
      }
      else {
        puVar12 = *(undefined8 **)(param_1 + 0x20);
        local_60 = 0;
        uStack_78 = 0;
        local_80 = (RuntimeCallStats *)0x0;
        uStack_68 = 0;
        uStack_70 = 0;
        if (v8::internal::TracingFlags::runtime_stats != 0) {
          local_80 = (RuntimeCallStats *)(*(long *)(local_a8 + 0x9520) + 0x58a0);
          v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0xa0);
        }
        pLVar11 = *(Logger **)(local_a8 + 0x9558);
        uVar10 = v8::internal::Logger::is_logging(pLVar11);
        if ((uVar10 & 1) != 0) {
          v8::internal::Logger::ApiNamedPropertyAccess
                    (pLVar11,"interceptor-named-getter",local_b0,*puVar12);
        }
        uVar4 = *(uint *)(*param_2 + 3);
        if (uVar4 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)((*param_2 & 0xffffffff00000000 | (ulong)uVar4) + 3);
        }
        lVar8 = v8::internal::PropertyCallbackArguments::BasicCallNamedGetterCallback
                          ((PropertyCallbackArguments *)&local_d0,uVar9,puVar12,param_2,0);
      }
      if (local_80 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
      }
      if (lVar8 != 0) {
        uVar10 = 0x200000001;
        goto LAB_010d2790;
      }
    }
LAB_010d2768:
    if (*(int *)(this + 0x2c20) == *(int *)(this + 0xa8)) {
      uVar10 = 0x4000000001;
    }
    else {
      v8::internal::Isolate::PromoteScheduledException(this);
      uVar10 = 0;
    }
  }
LAB_010d2790:
  local_d0 = &PTR__Relocatable_01cacc40;
  local_98 = 0x1baddead0baddeaf;
  *(undefined8 *)(local_c8 + 0xb790) = uStack_c0;
joined_r0x010d2654:
  if (this != (Isolate *)0x0) {
    *(undefined8 *)(this + 0x95a0) = uVar1;
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
    if (*(long *)(this + 0x95a8) != lVar2) {
      *(long *)(this + 0x95a8) = lVar2;
      v8::internal::HandleScope::DeleteExtensions(this);
    }
  }
  return uVar10;
}

