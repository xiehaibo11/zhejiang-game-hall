
/* v8::internal::JSPromise::Resolve(v8::internal::Handle<v8::internal::JSPromise>,
   v8::internal::Handle<v8::internal::Object>) */

ulong v8::internal::JSPromise::Resolve(ulong *param_1,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  CanonicalHandleScope *pCVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  Isolate *pIVar10;
  undefined4 local_a8;
  int local_a4;
  undefined8 local_9c;
  Isolate *local_90;
  Isolate *local_88;
  undefined8 uStack_80;
  ulong *local_78;
  undefined8 uStack_70;
  ulong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  pIVar10 = (Isolate *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  uVar2 = (ulong)*(uint *)((long)param_1 + 4) << 0x20 | 0xa0;
  Isolate::RunPromiseHook(pIVar10,1,param_1,uVar2);
  if (param_1 != param_2) {
    if ((param_1 == (ulong *)0x0) || (param_2 == (ulong *)0x0)) {
      uVar8 = *param_2;
    }
    else {
      uVar8 = *param_2;
      if (*param_1 == uVar8) goto LAB_011175b4;
    }
    if ((uVar8 & 1) != 0) {
      uVar9 = uVar8 & 0xffffffff00000000;
      if (0xa8 < *(ushort *)((uVar9 | 7) + (ulong)*(uint *)(uVar8 - 1))) {
        if (((*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x42d) &&
            (uVar8 = Isolate::IsInAnyContext
                               (pIVar10,uVar9 | *(uint *)((uVar9 | *(uint *)(uVar8 - 1)) + 0xf),0x8d
                               ), (uVar8 & 1) != 0)) &&
           (*(int *)(*(long *)(pIVar10 + 0xf00) + 0xb) == 2)) {
          uVar8 = *(ulong *)(pIVar10 + 0x2bc8) & 0xffffffff00000000;
          uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(pIVar10 +
                                                                                    0x2bc8) - 1)) +
                                                      0x13)) + 0x413);
          if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            pIVar3 = *(Isolate **)(pIVar10 + 0x95a0);
            if (pIVar3 == *(Isolate **)(pIVar10 + 0x95a8)) {
              pIVar3 = (Isolate *)HandleScope::Extend(pIVar10);
            }
            *(Isolate **)(pIVar10 + 0x95a0) = pIVar3 + 8;
            *(ulong *)pIVar3 = uVar8;
          }
          else {
            pIVar3 = (Isolate *)
                     CanonicalHandleScope::Lookup
                               (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar8);
          }
        }
        else {
          uVar8 = *(ulong *)(pIVar10 + 0xa38);
          local_88 = pIVar10 + 0xa38;
          local_a8 = 3;
          if ((*(short *)(((ulong)pIVar10 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x40) &&
             (local_a8 = 3, (*(byte *)(uVar8 + 7) & 1) != 0)) {
            local_a8 = 0;
          }
          local_9c = 0xc000000000;
          local_90 = pIVar10;
          if ((*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) & 0xffe0)
              == 0x20) {
            local_88 = (Isolate *)StringTable::LookupString(pIVar10);
          }
          uStack_80 = 0;
          uStack_70 = 0;
          local_58 = 0xffffffffffffffff;
          uStack_60 = 0xffffffffffffffff;
          local_78 = param_2;
          local_68 = param_2;
          LookupIterator::Start<false>((LookupIterator *)&local_a8);
          if (local_a4 == 4) {
            pIVar3 = local_90 + 0xa0;
          }
          else {
            pIVar3 = (Isolate *)Object::GetProperty((LookupIterator *)&local_a8,false);
          }
        }
        if (pIVar3 == (Isolate *)0x0) {
          uVar2 = *(ulong *)(pIVar10 + 0x2bd8);
          if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar4 = *(ulong **)(pIVar10 + 0x95a0);
            if (puVar4 == *(ulong **)(pIVar10 + 0x95a8)) {
              puVar4 = (ulong *)HandleScope::Extend(pIVar10);
            }
            *(ulong **)(pIVar10 + 0x95a0) = puVar4 + 1;
            *puVar4 = uVar2;
          }
          else {
            puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar2);
          }
          *(undefined8 *)(pIVar10 + 0x2bd8) = *(undefined8 *)(pIVar10 + 0xa8);
          uVar2 = Reject(param_1,puVar4,0);
        }
        else {
          uVar8 = *(ulong *)pIVar3;
          if (((uVar8 & 1) == 0) ||
             ((*(byte *)((uVar8 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar8 - 1)) >> 1 & 1)
              == 0)) {
            uVar2 = Fulfill(param_1,param_2);
          }
          else {
            uVar8 = *(ulong *)(pIVar10 + 0x2bc8) & 0xffffffff00000000;
            pCVar5 = *(CanonicalHandleScope **)(pIVar10 + 0x95b8);
            uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(pIVar10 + 0x2bc8) - 1)) + 0x13);
            if (pCVar5 == (CanonicalHandleScope *)0x0) {
              puVar4 = *(ulong **)(pIVar10 + 0x95a0);
              if (puVar4 == *(ulong **)(pIVar10 + 0x95a8)) {
                puVar4 = (ulong *)HandleScope::Extend(pIVar10);
              }
              *(ulong **)(pIVar10 + 0x95a0) = puVar4 + 1;
              *puVar4 = uVar8;
            }
            else {
              puVar4 = (ulong *)CanonicalHandleScope::Lookup(pCVar5,uVar8);
            }
            puVar6 = (undefined8 *)
                     Factory::NewPromiseResolveThenableJobTask
                               ((Factory *)pIVar10,param_1,pIVar3,param_2,puVar4);
            if ((((*(char *)(*(long *)(pIVar10 + 0xb6c8) + 8) != '\0') &&
                 (uVar8 = *param_2, (uVar8 & 1) != 0)) &&
                (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x42d
                )) && (lVar7 = Object::SetProperty(pIVar10,param_2,pIVar10 + 3000,param_1,0,0),
                      lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","(location_) != nullptr");
            }
            uVar8 = *(ulong *)(pIVar10 + 0x2bc8) & 0xffffffff00000000;
            pCVar5 = *(CanonicalHandleScope **)(pIVar10 + 0x95b8);
            uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(pIVar10 + 0x2bc8) - 1)) + 0x13);
            if (pCVar5 == (CanonicalHandleScope *)0x0) {
              puVar4 = *(ulong **)(pIVar10 + 0x95a0);
              if (puVar4 == *(ulong **)(pIVar10 + 0x95a8)) {
                puVar4 = (ulong *)HandleScope::Extend(pIVar10);
              }
              *(ulong **)(pIVar10 + 0x95a0) = puVar4 + 1;
              *puVar4 = uVar8;
            }
            else {
              puVar4 = (ulong *)CanonicalHandleScope::Lookup(pCVar5,uVar8);
              uVar8 = *puVar4;
            }
            if (*(MicrotaskQueue **)(uVar8 + 0x423) != (MicrotaskQueue *)0x0) {
              MicrotaskQueue::EnqueueMicrotask(*(MicrotaskQueue **)(uVar8 + 0x423),*puVar6);
            }
          }
        }
        return uVar2;
      }
    }
    uVar2 = Fulfill(param_1,param_2);
    return uVar2;
  }
LAB_011175b4:
  uVar1 = Factory::NewTypeError((Factory *)pIVar10,0x6e,param_2,0,0);
  uVar2 = Reject(param_1,uVar1,1);
  return uVar2;
}

