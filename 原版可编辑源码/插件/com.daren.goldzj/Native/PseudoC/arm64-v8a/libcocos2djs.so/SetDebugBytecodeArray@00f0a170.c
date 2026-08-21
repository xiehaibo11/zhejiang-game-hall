
/* v8::internal::SharedFunctionInfo::SetDebugBytecodeArray(v8::internal::BytecodeArray) */

void __thiscall
v8::internal::SharedFunctionInfo::SetDebugBytecodeArray(SharedFunctionInfo *this,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(*(ulong *)this + 3);
  if (((uVar1 & 1) == 0) ||
     (uVar4 = *(ulong *)this & 0xffffffff00000000,
     *(short *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar1) - 1)) != 0x86)) {
    uVar7 = (ulong)*(uint *)(*(ulong *)this + 3);
    uVar5 = *(ulong *)this & 0xffffffff00000000;
    uVar4 = uVar5 | uVar7;
    *(int *)(uVar4 + 3) = (int)param_2;
    if ((param_2 & 1) == 0) {
      return;
    }
    uVar6 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
    lVar3 = uVar4 + 3;
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,lVar3,param_2);
      uVar6 = *(ulong *)(param_2 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar6 & 0x18) == 0) {
      return;
    }
    bVar2 = *(byte *)((uVar5 | uVar7 & 0xfffffffffffc0000) + 8);
  }
  else {
    *(int *)(*(long *)this + 3) = (int)param_2;
    if ((param_2 & 1) == 0) {
      return;
    }
    uVar4 = *(ulong *)this;
    uVar5 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
    lVar3 = uVar4 + 3;
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,lVar3,param_2);
      uVar4 = *(ulong *)this;
      uVar5 = *(ulong *)(param_2 & 0xfffffffffffc0000 | 8);
      lVar3 = uVar4 + 3;
    }
    if ((uVar5 & 0x18) == 0) {
      return;
    }
    bVar2 = *(byte *)((uVar4 & 0xfffffffffffc0000) + 8);
  }
  if ((bVar2 & 0x18) != 0) {
    return;
  }
  Heap_GenerationalBarrierSlow(uVar4,lVar3,param_2);
  return;
}

