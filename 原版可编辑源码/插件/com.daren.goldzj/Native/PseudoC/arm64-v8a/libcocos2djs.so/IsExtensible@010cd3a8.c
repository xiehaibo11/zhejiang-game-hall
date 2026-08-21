
/* v8::internal::JSObject::IsExtensible(v8::internal::Handle<v8::internal::JSObject>) */

void v8::internal::JSObject::IsExtensible(ulong *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  ulong uVar6;
  Isolate *local_70;
  ulong local_68;
  undefined8 local_60;
  undefined4 local_58;
  char local_54;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar6 = *param_1;
  pIVar5 = (Isolate *)(uVar6 & 0xffffffff00000000);
  if (*(short *)(((ulong)pIVar5 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0xab) {
    local_70 = *(Isolate **)(pIVar5 + 0x2bc8);
    iVar2 = Context::global_object((Context *)&local_70);
    local_60 = 0;
    local_58 = 0;
    local_54 = '\0';
    local_50 = 0;
    local_70 = pIVar5;
    local_68 = uVar6;
    PrototypeIterator::Advance((PrototypeIterator *)&local_70);
    if ((int)local_68 != iVar2) {
LAB_010cd440:
      uVar6 = *(ulong *)(pIVar5 + 0x2bc8);
      if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(pIVar5 + 0x95a0);
        if (puVar4 == *(ulong **)(pIVar5 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(pIVar5);
        }
        *(ulong **)(pIVar5 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar6;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar6);
      }
      uVar6 = Isolate::MayAccess(pIVar5,puVar4,param_1);
      if ((uVar6 & 1) == 0) {
        uVar3 = 1;
        goto LAB_010cd50c;
      }
    }
  }
  else if ((*(byte *)(((ulong)pIVar5 | 9) + (ulong)*(uint *)(uVar6 - 1)) >> 5 & 1) != 0)
  goto LAB_010cd440;
  uVar6 = *param_1;
  if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0xab) {
    local_60 = 0;
    local_58 = 0;
    local_54 = '\0';
    local_50 = 0;
    local_70 = pIVar5;
    local_68 = uVar6;
    PrototypeIterator::Advance((PrototypeIterator *)&local_70);
    uVar3 = 0;
    if (local_54 != '\0') goto LAB_010cd50c;
    uVar6 = local_68 & 0xffffffff00000000 | (ulong)*(uint *)(local_68 - 1);
  }
  else {
    uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1);
  }
  uVar3 = *(uint *)(uVar6 + 0xb) >> 0x1b & 1;
LAB_010cd50c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

