
/* v8::Isolate::GetHeapSpaceStatistics(v8::HeapSpaceStatistics*, unsigned long) */

undefined8 __thiscall
v8::Isolate::GetHeapSpaceStatistics(Isolate *this,HeapSpaceStatistics *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((param_1 == (HeapSpaceStatistics *)0x0) ||
     (uVar1 = internal::Heap::IsValidAllocationSpace(param_2 & 0xffffffff), (uVar1 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    plVar3 = *(long **)(this + ((long)(param_2 << 0x20) >> 0x1d) + 0x8978);
    uVar2 = internal::Heap::GetSpaceName(param_2 & 0xffffffff);
    *(undefined8 *)param_1 = uVar2;
    uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    *(undefined8 *)(param_1 + 8) = uVar2;
    uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar2 = (**(code **)(*plVar3 + 0x60))(plVar3);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    uVar2 = 1;
  }
  return uVar2;
}

