
/* v8::internal::MarkCompactCollector::MarkCompactCollector(v8::internal::Heap*) */

void __thiscall
v8::internal::MarkCompactCollector::MarkCompactCollector(MarkCompactCollector *this,Heap *param_1)

{
  Sweeper *this_00;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__MarkCompactCollector_01ca8068;
  *(Heap **)(this + 8) = param_1;
  base::Mutex::Mutex((Mutex *)(this + 0x14));
  base::Semaphore::Semaphore((Semaphore *)(this + 0x3c),0);
  this[0x50] = (MarkCompactCollector)0x0;
  *(undefined4 *)(this + 0x4c) = 0;
  MarkingWorklist::MarkingWorklist((MarkingWorklist *)(this + 0x58),param_1);
  WeakObjects::WeakObjects((WeakObjects *)(this + 0x880));
  *(undefined8 *)(this + 0x2678) = 0;
  *(undefined8 *)(this + 0x2670) = 0;
  *(undefined8 *)(this + 0x2668) = 0;
  *(undefined8 *)(this + 0x2698) = 0;
  *(undefined8 *)(this + 0x2690) = 0;
  *(undefined8 *)(this + 0x26a8) = 0;
  *(undefined8 *)(this + 0x26a0) = 0;
  *(undefined8 *)(this + 0x26b8) = 0;
  *(undefined8 *)(this + 0x26b0) = 0;
  *(undefined8 *)(this + 0x26c8) = 0;
  *(undefined8 *)(this + 0x26c0) = 0;
  *(undefined8 *)(this + 0x26d8) = 0;
  *(undefined8 *)(this + 0x26d0) = 0;
  *(undefined8 *)(this + 0x26e8) = 0;
  *(undefined8 *)(this + 0x26e0) = 0;
  *(undefined8 *)(this + 0x26f0) = 0;
  this_00 = operator_new(0x148);
  Sweeper::Sweeper(this_00,param_1,(MajorNonAtomicMarkingState *)(this + 0x2701));
  *(Sweeper **)(this + 0x26f8) = this_00;
  *(undefined4 *)(this + 0x2704) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  return;
}

