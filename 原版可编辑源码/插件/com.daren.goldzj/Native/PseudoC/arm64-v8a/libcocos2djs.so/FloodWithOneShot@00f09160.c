
/* v8::internal::Debug::FloodWithOneShot(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   bool) */

void __thiscall v8::internal::Debug::FloodWithOneShot(Debug *this,ulong *param_2,uint param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  int iVar7;
  int local_a4;
  BreakIterator aBStack_98 [8];
  int local_90;
  int local_8c;
  int local_88;
  SourcePositionTableIterator aSStack_80 [24];
  int local_68;
  uint local_58;
  char local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = IsBlackboxed();
  if (((uVar4 & 1) == 0) && (uVar4 = EnsureBreakInfo(this,param_2), (uVar4 & 1) != 0)) {
    PrepareFunctionForDebugExecution(this,param_2);
    pIVar5 = *(Isolate **)(this + 0x88);
    uVar4 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xf);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar4;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar4);
    }
    BreakIterator::BreakIterator(aBStack_98,puVar6);
    if (local_68 != -1) {
      do {
        if (((param_3 & 1) == 0) || (BreakIterator::GetBreakLocation(), 3 < local_a4)) {
          BreakIterator::SetDebugBreak(aBStack_98);
        }
        bVar2 = local_90 == -1;
        iVar7 = local_68;
        do {
          if (iVar7 == -1) {
            local_90 = local_90 + 1;
            goto LAB_00f092d8;
          }
          if ((!bVar2) &&
             (SourcePositionTableIterator::Advance(aSStack_80), iVar7 = local_68, local_68 == -1))
          goto LAB_00f092d8;
          local_8c = (local_58 >> 1 & 0x3fffffff) - 1;
          if (local_50 != '\0') {
            local_88 = local_8c;
          }
          iVar3 = BreakIterator::GetDebugBreakType(aBStack_98);
          bVar2 = false;
        } while (iVar3 == 0);
        local_90 = local_90 + 1;
      } while( true );
    }
  }
LAB_00f092d8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

