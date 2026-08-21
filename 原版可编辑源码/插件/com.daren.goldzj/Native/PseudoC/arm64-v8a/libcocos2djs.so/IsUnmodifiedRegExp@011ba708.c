
/* v8::internal::RegExpUtils::IsUnmodifiedRegExp(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

bool v8::internal::RegExpUtils::IsUnmodifiedRegExp(Isolate *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_28;
  
  local_28 = *param_2;
  if (((local_28 & 1) != 0) &&
     (0xa8 < *(ushort *)((local_28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_28 - 1)))) {
    iVar2 = *(int *)(local_28 - 1);
    pIVar1 = param_1 + 0x95a0;
    uVar5 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1
                                                                   )) + 0x13)) + 0x243);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)pIVar1;
      if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar4 + 1;
      *puVar4 = uVar5;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
      uVar5 = *puVar4;
    }
    if (iVar2 == *(int *)(uVar5 + 0x1b)) {
      uVar5 = local_28 & 0xffffffff00000000;
      uVar3 = *(uint *)((uVar5 | *(uint *)(local_28 - 1)) + 0xf);
      if (((uVar3 & 1) != 0) &&
         (uVar7 = uVar5 | uVar3, 0xa8 < *(ushort *)((uVar5 | 7) + (ulong)*(uint *)(uVar7 - 1)))) {
        uVar6 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
        uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(param_1 + 0x2bc8)
                                                                       - 1)) + 0x13)) + 599);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = *(ulong **)pIVar1;
          if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
            puVar4 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar4 + 1;
          *puVar4 = uVar6;
        }
        else {
          puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
          uVar6 = *puVar4;
        }
        uVar3 = *(uint *)(uVar7 - 1);
        if (((uVar3 == (uint)uVar6) &&
            ((*(uint *)((uVar5 | *(uint *)((uVar5 | uVar3) + 0x17)) + 0x1f) >> 3 & 1) != 0)) &&
           (puVar4 = (ulong *)JSReceiver::GetCreationContext((JSReceiver *)&local_28),
           *(int *)((*puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar4 + 0x2a7)) + 0xb) == 2))
        {
          return (*(uint *)(local_28 + 0x17) & 0x80000001) == 0;
        }
      }
    }
  }
  return false;
}

