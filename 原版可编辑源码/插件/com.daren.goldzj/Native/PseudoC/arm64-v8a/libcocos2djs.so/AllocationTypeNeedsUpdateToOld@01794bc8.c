
/* v8::internal::compiler::MemoryOptimizer::AllocationTypeNeedsUpdateToOld(v8::internal::compiler::Node*,
   v8::internal::compiler::Edge) */

undefined8 __thiscall
v8::internal::compiler::MemoryOptimizer::AllocationTypeNeedsUpdateToOld
          (MemoryOptimizer *this,long *param_1,long param_3)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  if (*(short *)(*param_1 + 0x10) == 0xf1) {
    if ((*(uint *)(param_3 + 0x10) & 0xfffffffe) == 2) {
      plVar6 = param_1 + 4;
      if ((~*(uint *)((long)param_1 + 0x14) & 0xf000000) == 0) {
        plVar6 = (long *)(*plVar6 + 0x10);
      }
      if ((*(short *)(*(Operator **)*plVar6 + 0x10) == 0xe8) &&
         (cVar3 = AllocationTypeOf(*(Operator **)*plVar6), cVar3 == '\x01')) {
        return 1;
      }
    }
  }
  else if (*(short *)(*param_1 + 0x10) == 0x1cf) {
    plVar6 = (long *)param_1[3];
    do {
      if (plVar6 == (long *)0x0) {
        return 0;
      }
      uVar2 = *(uint *)(plVar6 + 2);
      lVar7 = *plVar6;
      plVar5 = plVar6 + (ulong)(uVar2 >> 1) * 3 + 3;
      lVar1 = 0x10;
      if ((uVar2 & 1) != 0) {
        lVar1 = 0x20;
      }
      lVar1 = (long)plVar5 + (ulong)(uVar2 >> 1) * 8 + lVar1;
      if ((uVar2 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
      uVar4 = AllocationTypeNeedsUpdateToOld(this,plVar5,plVar6,lVar1);
      plVar6 = (long *)lVar7;
    } while ((uVar4 & 1) == 0);
    return 1;
  }
  return 0;
}

