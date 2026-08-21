
/* v8::internal::Debug::ClearBreakPoints(v8::internal::Handle<v8::internal::DebugInfo>) */

void __thiscall v8::internal::Debug::ClearBreakPoints(undefined8 param_1,ulong *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  int iVar6;
  ulong *local_98;
  int local_90;
  int local_8c;
  int local_88;
  SourcePositionTableIterator aSStack_80 [24];
  int local_68;
  int local_60;
  uint local_58;
  char local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_98 = (ulong *)*param_2;
  uVar4 = DebugInfo::CanBreakAtEntry((DebugInfo *)&local_98);
  if ((uVar4 & 1) == 0) {
    puVar5 = (ulong *)*param_2;
    if (((*(short *)(((ulong)puVar5 & 0xffffffff00000000 | 7) +
                    (ulong)*(uint *)(((ulong)puVar5 & 0xffffffff00000000 |
                                     (ulong)*(uint *)((long)puVar5 + 0x13)) - 1)) == 0x86) &&
        (local_98 = puVar5, uVar4 = DebugInfo::HasBreakInfo((DebugInfo *)&local_98),
        (uVar4 & 1) != 0)) &&
       (BreakIterator::BreakIterator((BreakIterator *)&local_98,param_2), local_68 != -1)) {
      iVar6 = local_68;
      do {
        iVar3 = BreakIterator::GetDebugBreakType((BreakIterator *)&local_98);
        if (iVar3 != 1) {
          uVar4 = *local_98;
          *(undefined1 *)
           ((long)local_60 + 0x21 + (uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0x13))) =
               *(undefined1 *)
                ((long)local_60 + 0x21 +
                (uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xf)));
          iVar6 = local_68;
        }
        bVar2 = local_90 == -1;
        do {
          if (iVar6 == -1) break;
          if ((!bVar2) &&
             (SourcePositionTableIterator::Advance(aSStack_80), iVar6 = local_68, local_68 == -1))
          goto LAB_00f08608;
          local_8c = (local_58 >> 1 & 0x3fffffff) - 1;
          if (local_50 != '\0') {
            local_88 = local_8c;
          }
          iVar3 = BreakIterator::GetDebugBreakType((BreakIterator *)&local_98);
          bVar2 = false;
        } while (iVar3 == 0);
        local_90 = local_90 + 1;
      } while (iVar6 != -1);
    }
  }
  else {
    local_98 = (ulong *)*param_2;
    DebugInfo::ClearBreakAtEntry((DebugInfo *)&local_98);
  }
LAB_00f08608:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

