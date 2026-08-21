
/* v8::internal::Isolate::GetPromiseOnStackOnThrow() */

Isolate * __thiscall v8::internal::Isolate::GetPromiseOnStackOnThrow(Isolate *this)

{
  Isolate *pIVar1;
  long lVar2;
  StackFrame *this_00;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  Isolate *pIVar6;
  long *plVar7;
  ulong local_610;
  StackFrameIterator aSStack_608 [1416];
  StackFrame *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pIVar1 = this + 0xa0;
  pIVar6 = pIVar1;
  if ((*(long *)(this + 0x2c40) != 0) &&
     (uVar5 = PredictExceptionCatcher(this), (uVar5 & 0xfffffffd) != 0)) {
    plVar7 = *(long **)(this + 0x2c40);
    StackFrameIterator::StackFrameIterator(aSStack_608,this);
    this_00 = local_80;
    while (this_00 != (StackFrame *)0x0) {
      local_80 = this_00;
      uVar3 = (**(code **)(*(long *)this_00 + 8))(this_00);
      if ((uVar3 < 0x15) && ((1 << (ulong)(uVar3 & 0x1f) & 0x119010U) != 0)) {
        uVar3 = FUN_00f50170(this_00);
LAB_00f518ec:
        switch(uVar3) {
        case 1:
        case 3:
          uVar5 = *(ulong *)pIVar6;
          if (((uVar5 & 1) != 0) &&
             (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x42d))
          {
            *(uint *)(uVar5 + 0xf) = *(uint *)(uVar5 + 0xf) & 0xfffffffe | 0x10;
          }
          goto LAB_00f519f0;
        case 2:
          pIVar6 = pIVar1;
          if (plVar7 != (long *)0x0) {
            pIVar6 = (Isolate *)*plVar7;
          }
          goto LAB_00f519f0;
        case 4:
          if (plVar7 == (long *)0x0) goto LAB_00f519f0;
          pIVar6 = (Isolate *)*plVar7;
          uVar5 = *(ulong *)pIVar6;
          if ((((uVar5 & 1) != 0) &&
              (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x42d))
             && (uVar5 = FUN_00f51414(this,pIVar6), (uVar5 & 1) != 0)) goto LAB_00f519f0;
          plVar7 = (long *)plVar7[1];
        }
      }
      else {
        iVar4 = (**(code **)(*(long *)this_00 + 8))(this_00);
        if ((iVar4 == 0xd) &&
           ((((local_610 = StackFrame::LookupCode(this_00),
              *(short *)((local_610 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_610 - 1)) ==
              0x9a && ((*(uint *)(local_610 + 0x17) & 0x3e) == 6)) &&
             (uVar5 = Code::has_handler_table((Code *)&local_610), (uVar5 & 1) != 0)) &&
            ((*(byte *)(local_610 + 0x17) >> 6 & 1) != 0)))) {
          if ((*(uint *)((local_610 & 0xffffffff00000000 | (ulong)*(uint *)(local_610 + 0xf)) + 7)
               >> 4 & 1) == 0) {
            uVar3 = *(uint *)((local_610 & 0xffffffff00000000 | (ulong)*(uint *)(local_610 + 0xf)) +
                             7) >> 5 & 1;
          }
          else {
            uVar3 = 2;
          }
          goto LAB_00f518ec;
        }
      }
      StackFrameIterator::Advance(aSStack_608);
      this_00 = local_80;
    }
  }
LAB_00f519f0:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return pIVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

