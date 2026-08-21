
/* v8::internal::NativeContext::AddOptimizedCode(v8::internal::Code) */

void __thiscall v8::internal::NativeContext::AddOptimizedCode(NativeContext *this,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = *(ulong *)this;
  uVar2 = *(uint *)(uVar3 + 0x417);
  uVar1 = *(uint *)(param_2 + 0xf);
  uVar5 = param_2 & 0xffffffff00000000 | (ulong)uVar1;
  *(uint *)(uVar5 + 3) = uVar2;
  if ((uVar2 & 1) != 0) {
    uVar3 = uVar3 & 0xffffffff00000000;
    uVar6 = uVar3 | uVar2;
    uVar3 = uVar3 | (ulong)uVar2 & 0xfffffffffffc0000;
    uVar4 = *(ulong *)(uVar3 + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 3,uVar6);
      uVar4 = *(ulong *)(uVar3 | 8);
    }
    if (((uVar4 & 0x18) != 0) &&
       ((*(byte *)((param_2 & 0xffffffff00000000 | (ulong)uVar1 & 0xfffffffffffc0000) + 8) & 0x18)
        == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 3,uVar6);
    }
  }
  *(int *)(*(long *)this + 0x417) = (int)param_2;
  if (((param_2 & 1) != 0) && ((*(byte *)((param_2 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) {
    uVar3 = *(ulong *)this;
    if ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0) {
      Heap_GenerationalBarrierSlow(uVar3,uVar3 + 0x417,param_2);
      return;
    }
  }
  return;
}

