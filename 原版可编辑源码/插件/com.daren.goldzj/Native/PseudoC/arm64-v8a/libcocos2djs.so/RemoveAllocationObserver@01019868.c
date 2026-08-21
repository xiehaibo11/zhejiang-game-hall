
/* v8::internal::SpaceWithLinearArea::RemoveAllocationObserver(v8::internal::AllocationObserver*) */

void __thiscall
v8::internal::SpaceWithLinearArea::RemoveAllocationObserver
          (SpaceWithLinearArea *this,AllocationObserver *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  size_t __n;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar3 = *(undefined8 **)(this + 8);
  puVar4 = *(undefined8 **)(this + 0x10);
  uVar6 = *(ulong *)(this + 0x68);
  uVar2 = 0;
  if ((long)puVar4 - (long)puVar3 != 8) {
    uVar2 = uVar6;
  }
  if ((*(char *)(*(long *)(this + 0x40) + 0x1a0) == '\0') &&
     (uVar7 = *(ulong *)(this + 0x78), uVar7 != 0)) {
    if (uVar6 < uVar7) {
      *(ulong *)(this + 0x78) = uVar6;
      uVar7 = uVar6;
    }
    if ((this[0x38] == (SpaceWithLinearArea)0x0) && (puVar3 != puVar4)) {
      *(undefined1 *)(*(long *)(this + 0x40) + 0x1a0) = 1;
      Heap::CreateFillerObjectAt(*(Heap **)(this + 0x40),0,0,1,1);
      puVar3 = *(undefined8 **)(this + 0x10);
      if (*(undefined8 **)(this + 8) != puVar3) {
        puVar4 = *(undefined8 **)(this + 8);
        do {
          puVar5 = puVar4 + 1;
          AllocationObserver::AllocationStep((int)*puVar4,(ulong)(uint)((int)uVar6 - (int)uVar7),0);
          puVar4 = puVar5;
        } while (puVar3 != puVar5);
      }
      *(undefined1 *)(*(long *)(this + 0x40) + 0x1a0) = 0;
      puVar3 = *(undefined8 **)(this + 8);
      puVar4 = *(undefined8 **)(this + 0x10);
    }
    *(ulong *)(this + 0x78) = uVar2;
  }
  if ((puVar3 != puVar4) && ((AllocationObserver *)*puVar3 != param_1)) {
    puVar5 = puVar3;
    do {
      puVar3 = puVar4;
      if (puVar4 + -1 == puVar5) break;
      puVar1 = puVar5 + 1;
      puVar3 = puVar5 + 1;
      puVar5 = puVar3;
    } while ((AllocationObserver *)*puVar1 != param_1);
  }
  __n = (long)puVar4 - (long)(puVar3 + 1);
  if (__n != 0) {
    memmove(puVar3,puVar3 + 1,__n);
  }
  *(undefined8 **)(this + 0x10) = puVar3 + ((long)__n >> 3);
                    /* WARNING: Could not recover jumptable at 0x010199bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x30))(this);
  return;
}

