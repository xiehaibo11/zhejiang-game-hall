
/* v8::internal::SpaceWithLinearArea::AddAllocationObserver(v8::internal::AllocationObserver*) */

void __thiscall
v8::internal::SpaceWithLinearArea::AddAllocationObserver
          (SpaceWithLinearArea *this,AllocationObserver *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  AllocationObserver *local_48;
  undefined8 *puVar5;
  
  if ((*(char *)(*(long *)(this + 0x40) + 0x1a0) == '\0') &&
     (uVar2 = *(ulong *)(this + 0x78), uVar2 != 0)) {
    uVar3 = *(ulong *)(this + 0x68);
    if (uVar3 < uVar2) {
      *(ulong *)(this + 0x78) = uVar3;
      uVar2 = uVar3;
    }
    if ((this[0x38] == (SpaceWithLinearArea)0x0) && (*(long *)(this + 8) != *(long *)(this + 0x10)))
    {
      *(undefined1 *)(*(long *)(this + 0x40) + 0x1a0) = 1;
      Heap::CreateFillerObjectAt(*(Heap **)(this + 0x40),0,0,1,1);
      puVar1 = *(undefined8 **)(this + 0x10);
      if (*(undefined8 **)(this + 8) != puVar1) {
        puVar4 = *(undefined8 **)(this + 8);
        do {
          puVar5 = puVar4 + 1;
          AllocationObserver::AllocationStep((int)*puVar4,(ulong)(uint)((int)uVar3 - (int)uVar2),0);
          puVar4 = puVar5;
        } while (puVar1 != puVar5);
      }
      *(undefined1 *)(*(long *)(this + 0x40) + 0x1a0) = 0;
    }
    *(ulong *)(this + 0x78) = uVar3;
  }
  local_48 = param_1;
  if (*(undefined8 **)(this + 0x10) == *(undefined8 **)(this + 0x18)) {
    std::__ndk1::
    vector<v8::internal::AllocationObserver*,std::__ndk1::allocator<v8::internal::AllocationObserver*>>
    ::__push_back_slow_path<v8::internal::AllocationObserver*const&>
              ((vector<v8::internal::AllocationObserver*,std::__ndk1::allocator<v8::internal::AllocationObserver*>>
                *)(this + 8),&local_48);
  }
  else {
    **(undefined8 **)(this + 0x10) = param_1;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  }
  (**(code **)(*(long *)this + 0x30))(this);
  return;
}

