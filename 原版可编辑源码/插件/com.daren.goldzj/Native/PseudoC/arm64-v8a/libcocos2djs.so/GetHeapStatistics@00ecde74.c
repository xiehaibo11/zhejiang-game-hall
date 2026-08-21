
/* v8::Isolate::GetHeapStatistics(v8::HeapStatistics*) */

void __thiscall v8::Isolate::GetHeapStatistics(Isolate *this,HeapStatistics *param_1)

{
  Heap *this_00;
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  this_00 = (Heap *)(this + 0x8850);
  uVar1 = internal::Heap::CommittedMemory(this_00);
  *(undefined8 *)param_1 = uVar1;
  uVar1 = internal::Heap::CommittedPhysicalMemory(this_00);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = internal::Heap::Available(this_00);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = internal::Heap::SizeOfObjects(this_00);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  plVar3 = *(long **)(this + 0x8970);
  lVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
  *(long *)param_1 = *(long *)param_1 + lVar2;
  lVar2 = (**(code **)(*plVar3 + 0x58))(plVar3);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar2;
  lVar2 = (**(code **)(*plVar3 + 0x60))(plVar3);
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + lVar2;
  lVar2 = (**(code **)(*plVar3 + 0x50))(plVar3);
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar2;
  uVar1 = internal::Heap::CommittedMemoryExecutable(this_00);
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = internal::Heap::MaxReserved(this_00);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(long *)(param_1 + 0x30) =
       *(long *)(*(long *)(this + 0xc770) + 0x60) + *(long *)(*(long *)(this + 0x95d0) + 8);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(this + 0x88f0);
  *(long *)(param_1 + 0x40) =
       *(long *)(*(long *)(this + 0xc770) + 0x68) + *(long *)(*(long *)(this + 0x95d0) + 0x10);
  uVar1 = internal::Heap::NumberOfNativeContexts(this_00);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  uVar1 = internal::Heap::NumberOfDetachedContexts(this_00);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  param_1[0x48] = internal::FLAG_verify_heap;
  return;
}

