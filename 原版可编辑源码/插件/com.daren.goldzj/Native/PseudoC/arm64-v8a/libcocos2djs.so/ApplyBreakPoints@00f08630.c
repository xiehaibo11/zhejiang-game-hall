
/* v8::internal::Debug::ApplyBreakPoints(v8::internal::Handle<v8::internal::DebugInfo>) */

void __thiscall v8::internal::Debug::ApplyBreakPoints(Debug *this,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong local_c0;
  ulong local_b8 [12];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_b8[0] = *param_2;
  uVar4 = DebugInfo::CanBreakAtEntry((DebugInfo *)local_b8);
  if ((uVar4 & 1) == 0) {
    uVar4 = *param_2;
    uVar6 = uVar4 & 0xffffffff00000000;
    if (*(short *)((uVar6 | 7) + (ulong)*(uint *)((uVar6 | *(uint *)(uVar4 + 0x13)) - 1)) != 0x86)
    goto LAB_00f0875c;
    uVar4 = uVar6 | *(uint *)(uVar4 + 0x17);
    iVar3 = *(int *)(uVar4 + 3);
    if (1 < iVar3) {
      iVar5 = 0;
      lVar7 = 0;
      do {
        uVar1 = *(uint *)(uVar4 + 7 + (long)iVar5);
        if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)(*(Isolate **)(this + 0x88) + 0xa0))) {
          local_c0 = uVar6 | *(uint *)((long)iVar5 + uVar4 + 7);
          iVar3 = BreakPointInfo::GetBreakPointCount
                            ((BreakPointInfo *)&local_c0,*(Isolate **)(this + 0x88));
          if (iVar3 != 0) {
            BreakIterator::BreakIterator((BreakIterator *)local_b8,param_2);
            BreakIterator::SkipToPosition((BreakIterator *)local_b8,*(int *)(local_c0 + 3) >> 1);
            BreakIterator::SetDebugBreak((BreakIterator *)local_b8);
          }
          iVar3 = *(int *)(uVar4 + 3);
        }
        lVar7 = lVar7 + 1;
        iVar5 = iVar5 + 4;
      } while (lVar7 < iVar3 >> 1);
    }
  }
  else {
    local_b8[0] = *param_2;
    DebugInfo::SetBreakAtEntry((DebugInfo *)local_b8);
  }
  local_b8[0] = *param_2;
  DebugInfo::SetDebugExecutionMode((DebugInfo *)local_b8,0);
LAB_00f0875c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

