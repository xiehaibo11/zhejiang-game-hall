
/* v8::internal::PrototypeIterator::HasAccess() const */

uint __thiscall v8::internal::PrototypeIterator::HasAccess(PrototypeIterator *this)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar6 = **(ulong **)(this + 0x10);
  uVar7 = uVar6 & 0xffffffff00000000;
  if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0xab) {
    local_70 = *(undefined8 *)(uVar7 + 0x2bc8);
    iVar2 = Context::global_object((Context *)&local_70);
    local_60 = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_70 = uVar7;
    local_68 = uVar6;
    Advance((PrototypeIterator *)&local_70);
    if ((int)local_68 != iVar2) {
LAB_00f8030c:
      pIVar5 = *(Isolate **)this;
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
      uVar3 = Isolate::MayAccess(pIVar5,puVar4,*(undefined8 *)(this + 0x10));
      goto LAB_00f80368;
    }
  }
  else if ((*(byte *)((uVar7 | 9) + (ulong)*(uint *)(uVar6 - 1)) >> 5 & 1) != 0) goto LAB_00f8030c;
  uVar3 = 1;
LAB_00f80368:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

