
/* v8::internal::compiler::PipelineData::ChooseSpecializationContext() */

void __thiscall
v8::internal::compiler::PipelineData::ChooseSpecializationContext(PipelineData *this)

{
  long lVar1;
  OptimizedCompilationInfo *this_00;
  Isolate *pIVar2;
  long lVar3;
  ulong *puVar4;
  PipelineData PVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uStack_50;
  undefined3 uStack_4c;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  this_00 = *(OptimizedCompilationInfo **)(this + 0x18);
  if (((byte)*this_00 & 1) == 0) {
    pIVar2 = (Isolate *)(**(ulong **)(this_00 + 0x20) & 0xffffffff00000000);
    uVar6 = (ulong)pIVar2 | (ulong)*(uint *)(**(ulong **)(this_00 + 0x20) + 0xf);
    if (*(short *)(((ulong)pIVar2 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x8f) {
      lVar7 = 0;
      do {
        if (*(short *)(((ulong)pIVar2 | (ulong)*(uint *)(uVar6 - 1)) + 7) == 0x8e) {
          if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar4 = *(ulong **)(pIVar2 + 0x95a0);
            if (puVar4 == *(ulong **)(pIVar2 + 0x95a8)) {
              puVar4 = (ulong *)HandleScope::Extend(pIVar2);
            }
            *(ulong **)(pIVar2 + 0x95a0) = puVar4 + 1;
            *puVar4 = uVar6;
            PVar5 = (PipelineData)0x1;
          }
          else {
            puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar6);
            PVar5 = (PipelineData)0x1;
          }
          goto LAB_0129f470;
        }
        lVar7 = lVar7 + 1;
        uVar6 = (ulong)pIVar2 | (ulong)*(uint *)(uVar6 + 0xb);
      } while (*(short *)(((ulong)pIVar2 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x8f);
    }
    puVar4 = (ulong *)0x0;
    lVar7 = 0;
    PVar5 = (PipelineData)0x0;
LAB_0129f470:
    this[0x1b8] = PVar5;
    *(uint *)(this + 0x1bc) = CONCAT31(uStack_4c,uStack_50._3_1_);
    *(undefined4 *)(this + 0x1b9) = uStack_50;
    *(ulong **)(this + 0x1c0) = puVar4;
    *(long *)(this + 0x1c8) = lVar7;
  }
  else {
    uVar6 = OptimizedCompilationInfo::context(this_00);
    pIVar2 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar6;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar6);
    }
    this[0x1b8] = (PipelineData)0x1;
    *(uint *)(this + 0x1bc) = CONCAT31(uStack_4c,uStack_50._3_1_);
    *(undefined4 *)(this + 0x1b9) = uStack_50;
    *(ulong **)(this + 0x1c0) = puVar4;
    *(undefined8 *)(this + 0x1c8) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

