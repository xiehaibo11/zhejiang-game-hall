
/* v8::internal::ProfilingMigrationObserver::Move(v8::internal::AllocationSpace,
   v8::internal::HeapObject, v8::internal::HeapObject, int) */

void __thiscall
v8::internal::ProfilingMigrationObserver::Move
          (ProfilingMigrationObserver *this,int param_2,undefined8 param_3,ulong param_4,
          undefined4 param_5)

{
  Mutex *this_00;
  long lVar1;
  long *plVar2;
  
  if ((param_2 == 3) ||
     ((param_2 == 2 &&
      (*(short *)((param_4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_4 - 1)) == 0x86)))) {
    lVar1 = *(long *)(*(long *)(this + 8) + 0x2e88);
    this_00 = (Mutex *)(lVar1 + 0x28);
    base::Mutex::Lock(this_00);
    for (plVar2 = *(long **)(lVar1 + 0x10); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      (**(code **)(*(long *)plVar2[2] + 0x58))((long *)plVar2[2],param_3,param_4);
    }
    base::Mutex::Unlock(this_00);
  }
  Heap::OnMoveEvent(*(Heap **)(this + 8),param_4,param_3,param_5);
  return;
}

