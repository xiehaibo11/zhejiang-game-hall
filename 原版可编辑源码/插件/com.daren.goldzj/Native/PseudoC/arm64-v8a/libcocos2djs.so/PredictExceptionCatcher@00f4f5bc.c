
/* v8::internal::Isolate::PredictExceptionCatcher() */

void __thiscall v8::internal::Isolate::PredictExceptionCatcher(Isolate *this)

{
  Isolate *pIVar1;
  uint uVar2;
  long lVar3;
  StackFrame *this_00;
  undefined4 uVar4;
  ulong uVar5;
  ulong *puVar6;
  uint *puVar7;
  ulong uVar8;
  ulong local_610;
  StackFrameIterator aSStack_608 [1416];
  StackFrame *local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(long *)(this + 0x2bb8) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(ulong *)(*(long *)(this + 0x2bb8) + 0x20);
    if ((uVar8 != 0) && ((*(int *)(this + 0x188) == 0 || (uVar8 <= *(long *)(this + 0x2c30) - 1U))))
    {
LAB_00f4f614:
      uVar5 = 2;
      goto switchD_00f4f6ac_caseD_1;
    }
  }
  StackFrameIterator::StackFrameIterator(aSStack_608,this);
  if (local_80 != (StackFrame *)0x0) {
    pIVar1 = this + 0x95a0;
    do {
      this_00 = local_80;
      uVar4 = (**(code **)(*(long *)local_80 + 8))(local_80);
      switch(uVar4) {
      case 1:
      case 2:
        if (((uVar8 != 0) && (uVar8 <= **(long **)(*(long *)(this_00 + 8) + 0x590) - 1U)) &&
           ((*(byte *)(*(long *)(this + 0x2bb8) + 0x28) & 1) == 0)) goto LAB_00f4f614;
        break;
      case 4:
      case 0xc:
      case 0x14:
        uVar5 = FUN_00f50170(this_00);
        switch(uVar5 & 0xffffffff) {
        case 0:
          break;
        case 1:
          goto switchD_00f4f6ac_caseD_1;
        case 2:
switchD_00f4f6ac_caseD_2:
          uVar5 = 4;
          goto switchD_00f4f6ac_caseD_1;
        case 3:
          uVar5 = 3;
          goto switchD_00f4f6ac_caseD_1;
        case 4:
          uVar5 = 5;
          goto switchD_00f4f6ac_caseD_1;
        default:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
      case 0xd:
        uVar5 = StackFrame::LookupCode(this_00);
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(ulong **)pIVar1;
          if (puVar6 == *(ulong **)(this + 0x95a8)) {
            puVar6 = (ulong *)HandleScope::Extend(this);
          }
          *(ulong **)pIVar1 = puVar6 + 1;
          *puVar6 = uVar5;
        }
        else {
          puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
          uVar5 = *puVar6;
        }
        if ((((*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x9a)
             && ((*(uint *)(uVar5 + 0x17) & 0x3e) == 6)) &&
            (local_610 = uVar5, uVar5 = Code::has_handler_table((Code *)&local_610),
            (uVar5 & 1) != 0)) && (uVar5 = *puVar6, (*(uint *)(uVar5 + 0x17) >> 6 & 1) != 0)) {
          puVar7 = (uint *)(uVar5 + 0xf);
          uVar2 = *puVar7;
          goto LAB_00f4f7d4;
        }
        break;
      case 0x10:
        uVar5 = StackFrame::LookupCode(this_00);
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(ulong **)pIVar1;
          if (puVar6 == *(ulong **)(this + 0x95a8)) {
            puVar6 = (ulong *)HandleScope::Extend(this);
          }
          *(ulong **)pIVar1 = puVar6 + 1;
          *puVar6 = uVar5;
        }
        else {
          puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
          uVar5 = *puVar6;
        }
        puVar7 = (uint *)(uVar5 + 0xf);
        uVar2 = *puVar7;
LAB_00f4f7d4:
        if ((*(uint *)((uVar5 & 0xffffffff00000000 | (ulong)uVar2) + 7) >> 4 & 1) != 0)
        goto switchD_00f4f6ac_caseD_2;
        if ((*(uint *)((uVar5 & 0xffffffff00000000 | (ulong)*puVar7) + 7) >> 5 & 1) != 0) {
          uVar5 = 1;
          goto switchD_00f4f6ac_caseD_1;
        }
      }
      StackFrameIterator::Advance(aSStack_608);
    } while (local_80 != (StackFrame *)0x0);
  }
  uVar5 = 0;
switchD_00f4f6ac_caseD_1:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

