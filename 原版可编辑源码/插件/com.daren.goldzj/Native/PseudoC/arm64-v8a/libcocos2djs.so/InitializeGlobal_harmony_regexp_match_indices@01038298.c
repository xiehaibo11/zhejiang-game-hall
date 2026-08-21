
/* v8::internal::Genesis::InitializeGlobal_harmony_regexp_match_indices() */

void __thiscall v8::internal::Genesis::InitializeGlobal_harmony_regexp_match_indices(Genesis *this)

{
  long lVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong local_70;
  Descriptor aDStack_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (FLAG_harmony_regexp_match_indices != '\0') {
    pIVar2 = *(Isolate **)this;
    uVar4 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
            (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0x25f);
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar4;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar4);
    }
    Descriptor::AccessorConstant(aDStack_68,*(long *)this + 0x758,*(long *)this + 0xe68,0);
    Map::EnsureDescriptorSlack(*(undefined8 *)this,puVar3,1);
    local_70 = *puVar3;
    Map::AppendDescriptor((Map *)&local_70,*(Isolate **)this,aDStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

