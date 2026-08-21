
/* v8::Context::Global() */

ulong * __thiscall v8::Context::Global(Context *this)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  CanonicalHandleScope *pCVar5;
  Isolate *pIVar6;
  undefined8 local_88;
  ulong local_80;
  ulong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_80 = *(ulong *)this;
  pIVar6 = (Isolate *)(local_80 & 0xffffffff00000000);
  uVar3 = internal::Context::global_proxy((Context *)&local_80);
  pCVar5 = *(CanonicalHandleScope **)((ulong)pIVar6 | 0x95b8);
  if (pCVar5 == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar6 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar6 + 0x95a8)) {
      puVar4 = (ulong *)internal::HandleScope::Extend(pIVar6);
    }
    *(ulong **)(pIVar6 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar3;
  }
  else {
    puVar4 = (ulong *)internal::CanonicalHandleScope::Lookup(pCVar5,uVar3);
  }
  local_88 = *(undefined8 *)this;
  uVar3 = *puVar4;
  iVar2 = internal::Context::global_object((Context *)&local_88);
  local_80 = uVar3 & 0xffffffff00000000;
  uStack_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_78 = uVar3;
  internal::PrototypeIterator::Advance((PrototypeIterator *)&local_80);
  if ((int)local_78 != iVar2) {
    local_80 = *(ulong *)this;
    uVar3 = internal::Context::global_object((Context *)&local_80);
    pCVar5 = *(CanonicalHandleScope **)((ulong)pIVar6 | 0x95b8);
    if (pCVar5 == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar6 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar4 = (ulong *)internal::HandleScope::Extend(pIVar6);
      }
      *(ulong **)(pIVar6 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar3;
    }
    else {
      puVar4 = (ulong *)internal::CanonicalHandleScope::Lookup(pCVar5,uVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

