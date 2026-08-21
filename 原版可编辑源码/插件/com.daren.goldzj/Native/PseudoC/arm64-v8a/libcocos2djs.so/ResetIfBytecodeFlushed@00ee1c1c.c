
/* v8::internal::JSFunction::ResetIfBytecodeFlushed() */

void __thiscall v8::internal::JSFunction::ResetIfBytecodeFlushed(JSFunction *this)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (FLAG_flush_bytecode != '\0') {
    uVar2 = *(uint *)(*(ulong *)this + 0xb);
    uVar3 = *(uint *)(*(ulong *)this + 0x17);
    if ((uVar2 & 1) != 0) {
      uVar4 = *(ulong *)this & 0xffffffff00000000;
      uVar6 = uVar4 | uVar2;
      if ((((uVar3 & 1) != 0) && (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0xa6)) &&
         (uVar7 = *(ulong *)this & 0xffffffff00000000, uVar5 = uVar7 | uVar3,
         *(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x9a)) {
        uVar2 = *(uint *)(uVar6 + 3);
        if (((uVar2 == 0x84) ||
            (((uVar2 & 1) != 0 &&
             (*(ushort *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar2) - 1)) - 0x95 < 2)))) &&
           (*(int *)(uVar5 + 0x27) != 0x42)) {
          uVar4 = Builtins::builtin((Builtins *)((ulong)*(uint *)(this + 4) << 0x20 | 0x9e00),0x42);
          *(int *)(*(long *)this + 0x17) = (int)uVar4;
          uVar6 = *(ulong *)this;
          if (((uVar4 & 1) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0))
          {
            Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x17);
            uVar6 = *(ulong *)this;
          }
          uVar4 = uVar6 & 0xffffffff00000000;
          uVar2 = *(uint *)(uVar6 + 0x13);
          uVar5 = *(ulong *)(uVar4 + 0xa0);
          uVar6 = uVar4 | uVar2;
          *(int *)(uVar6 + 3) = (int)uVar5;
          if ((uVar5 & 1) != 0) {
            uVar7 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar7 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar6,uVar6 + 3,uVar5);
              uVar7 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar7 & 0x18) != 0) &&
               ((*(byte *)((uVar4 | (ulong)uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar6,uVar6 + 3,uVar5);
            }
          }
          puVar1 = &FLAG_interrupt_budget;
          if (FLAG_lazy_feedback_allocation != '\0') {
            puVar1 = &FLAG_budget_for_feedback_vector_allocation;
          }
          *(undefined4 *)(uVar6 + 7) = *puVar1;
        }
      }
    }
  }
  return;
}

