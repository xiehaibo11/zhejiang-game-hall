
/* v8::internal::FrameFunctionIterator::next() */

ulong * __thiscall v8::internal::FrameFunctionIterator::next(FrameFunctionIterator *this)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  FrameSummary *this_00;
  FrameSummary *pFVar9;
  
  uVar4 = *(uint *)(this + 0x5c8);
  uVar5 = (ulong)uVar4;
  do {
    iVar3 = (int)uVar5;
    if ((int)uVar4 < 1) {
      if (*(long *)(this + 0x598) != 0) {
        JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)(this + 0x10));
        pFVar9 = *(FrameSummary **)(this + 0x5b0);
        this_00 = *(FrameSummary **)(this + 0x5b8);
        while (this_00 != pFVar9) {
          this_00 = this_00 + -0x38;
          FrameSummary::~FrameSummary(this_00);
        }
        plVar1 = *(long **)(this + 0x598);
        *(FrameSummary **)(this + 0x5b8) = pFVar9;
        *(undefined4 *)(this + 0x5c8) = 0xffffffff;
        if (plVar1 == (long *)0x0) {
          return (ulong *)0x0;
        }
        (**(code **)(*plVar1 + 0x88))(plVar1,this + 0x5b0);
        iVar3 = (int)((ulong)(*(long *)(this + 0x5b8) - *(long *)(this + 0x5b0)) >> 3) * -0x49249249
        ;
        *(int *)(this + 0x5c8) = iVar3;
      }
      if (iVar3 == -1) {
        return (ulong *)0x0;
      }
    }
    uVar5 = (long)iVar3 - 1;
    uVar4 = (uint)uVar5;
    *(uint *)(this + 0x5c8) = uVar4;
    puVar2 = *(ulong **)(*(long *)(this + 0x5b0) + uVar5 * 0x38 + 0x18);
    uVar7 = *puVar2;
    uVar6 = *(ulong *)(*(long *)this + 0x2bc8) & 0xffffffff00000000;
    uVar8 = uVar7 & 0xffffffff00000000;
    if (*(int *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(*(long *)this + 0x2bc8) - 1)) +
                                   0x13)) + 0x27b) ==
        *(int *)((uVar8 | *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(uVar7 + 0xf)) - 1)) + 0x13
                                   )) + 0x27b)) {
      return puVar2;
    }
  } while( true );
}

