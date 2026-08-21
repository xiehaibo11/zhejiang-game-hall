
/* v8::internal::SpaceWithLinearArea::InlineAllocationStep(unsigned long, unsigned long, unsigned
   long, unsigned long) */

void __thiscall
v8::internal::SpaceWithLinearArea::InlineAllocationStep
          (SpaceWithLinearArea *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((*(char *)(*(long *)(this + 0x40) + 0x1a0) == '\0') &&
     (uVar2 = *(ulong *)(this + 0x78), uVar2 != 0)) {
    if (param_1 < uVar2) {
      *(ulong *)(this + 0x78) = param_1;
      uVar2 = param_1;
    }
    if ((this[0x38] == (SpaceWithLinearArea)0x0) && (*(long *)(this + 8) != *(long *)(this + 0x10)))
    {
      *(undefined1 *)(*(long *)(this + 0x40) + 0x1a0) = 1;
      Heap::CreateFillerObjectAt(*(Heap **)(this + 0x40),param_3,param_4 & 0xffffffff,1,1);
      puVar1 = *(undefined8 **)(this + 0x10);
      if (*(undefined8 **)(this + 8) != puVar1) {
        puVar3 = *(undefined8 **)(this + 8);
        do {
          puVar4 = puVar3 + 1;
          AllocationObserver::AllocationStep
                    ((int)*puVar3,(ulong)(uint)((int)param_1 - (int)uVar2),param_3);
          puVar3 = puVar4;
        } while (puVar1 != puVar4);
      }
      *(undefined1 *)(*(long *)(this + 0x40) + 0x1a0) = 0;
    }
    *(ulong *)(this + 0x78) = param_2;
  }
  return;
}

