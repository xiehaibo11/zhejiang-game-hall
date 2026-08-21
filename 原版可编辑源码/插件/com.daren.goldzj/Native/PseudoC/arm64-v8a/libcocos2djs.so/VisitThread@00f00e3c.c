
/* v8::internal::RedirectActiveFunctions::VisitThread(v8::internal::Isolate*,
   v8::internal::ThreadLocalTop*) */

void __thiscall
v8::internal::RedirectActiveFunctions::VisitThread
          (RedirectActiveFunctions *this,Isolate *param_1,ThreadLocalTop *param_2)

{
  long lVar1;
  InterpretedFrame *pIVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  StackFrameIterator aSStack_5e8 [1416];
  InterpretedFrame *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  StackFrameIterator::StackFrameIterator(aSStack_5e8,param_1,param_2);
  if (local_60 != (InterpretedFrame *)0x0) {
    while (JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_5e8),
          pIVar2 = local_60, local_60 != (InterpretedFrame *)0x0) {
      lVar4 = (**(code **)(*(long *)local_60 + 0x98))(local_60);
      iVar3 = (**(code **)(*(long *)pIVar2 + 8))(pIVar2);
      if ((iVar3 == 0xc) && (uVar7 = *(ulong *)(this + 8), *(int *)(lVar4 + 0xb) == (int)uVar7)) {
        uVar5 = uVar7 & 0xffffffff00000000;
        uVar9 = uVar5 | *(uint *)(uVar7 + 0xf);
        if (*(int *)(this + 0x10) == 1) {
          uVar6 = *(uint *)(uVar9 + 0x13);
        }
        else {
          uVar8 = uVar5 | 7;
          if ((*(short *)(uVar8 + *(uint *)(uVar9 - 1)) == 0x5b) &&
             (*(short *)(uVar8 + *(uint *)((uVar5 | *(uint *)(uVar9 + 0x13)) - 1)) == 0x86)) {
            uVar6 = *(uint *)(uVar9 + 0xf);
          }
          else if (((*(uint *)(uVar7 + 3) & 1) == 0) ||
                  (*(short *)(uVar8 + *(uint *)((uVar5 | *(uint *)(uVar7 + 3)) - 1)) != 0x86)) {
            uVar5 = *(ulong *)(this + 8) & 0xffffffff00000000;
            uVar6 = *(uint *)((uVar5 | *(uint *)(*(ulong *)(this + 8) + 3)) + 3);
          }
          else {
            uVar6 = *(uint *)(*(ulong *)(this + 8) + 3);
            uVar5 = *(ulong *)(this + 8) & 0xffffffff00000000;
          }
        }
        InterpretedFrame::PatchBytecodeArray(pIVar2,uVar5 | uVar6);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

