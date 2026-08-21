
/* v8::internal::IncrementalMarking::IncrementalMarking(v8::internal::Heap*,
   v8::internal::MarkCompactCollector::MarkingWorklist*, v8::internal::WeakObjects*) */

void __thiscall
v8::internal::IncrementalMarking::IncrementalMarking
          (IncrementalMarking *this,Heap *param_1,MarkingWorklist *param_2,WeakObjects *param_3)

{
  undefined8 uVar1;
  
  *(Heap **)this = param_1;
  uVar1 = *(undefined8 *)(param_1 + 0x800);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(WeakObjects **)(this + 0x18) = param_3;
  *(undefined8 *)(this + 0x78) = 0x10000;
  *(undefined8 *)(this + 0x70) = 0x10000;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x5f) = 0;
  *(IncrementalMarking **)(this + 0xa0) = this;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined ***)(this + 0x68) = &PTR__AllocationObserver_01ca8000;
  *(undefined8 *)(this + 0x98) = 0x40000;
  *(undefined8 *)(this + 0x90) = 0x40000;
  *(IncrementalMarking **)(this + 0x80) = this;
  *(undefined ***)(this + 0x88) = &PTR__AllocationObserver_01ca8000;
  *(undefined8 *)(this + 8) = uVar1;
  *(MarkingWorklist **)(this + 0x10) = param_2;
  param_1[0xac0] = (Heap)0x0;
  return;
}

