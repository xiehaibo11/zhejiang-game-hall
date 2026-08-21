
/* v8::internal::Space::AllocationStep(int, unsigned long, int) */

void __thiscall
v8::internal::Space::AllocationStep(Space *this,int param_1,ulong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((this[0x38] == (Space)0x0) && (*(long *)(this + 8) != *(long *)(this + 0x10))) {
    *(undefined1 *)(*(long *)(this + 0x40) + 0x1a0) = 1;
    Heap::CreateFillerObjectAt(*(Heap **)(this + 0x40),param_2,param_3,1,1);
    puVar1 = *(undefined8 **)(this + 0x10);
    for (puVar2 = *(undefined8 **)(this + 8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
      AllocationObserver::AllocationStep((int)*puVar2,(ulong)(uint)param_1,param_2);
    }
    *(undefined1 *)(*(long *)(this + 0x40) + 0x1a0) = 0;
  }
  return;
}

