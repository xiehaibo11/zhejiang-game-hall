
/* v8::internal::TransitionsAccessor::SetPrototypeTransitions(v8::internal::Handle<v8::internal::WeakFixedArray>)
    */

void __thiscall
v8::internal::TransitionsAccessor::SetPrototypeTransitions(TransitionsAccessor *this,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  EnsureHasFullTransitionArray(this);
  uVar1 = *param_2;
  uVar3 = *(ulong *)(this + 0x18);
  *(int *)(uVar3 + 7) = (int)uVar1;
  if (((int)uVar1 != 3) && ((uVar1 & 1) != 0)) {
    uVar2 = *(ulong *)((uVar1 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,uVar3 + 7,uVar1 & 0xfffffffffffffffd);
      uVar2 = *(ulong *)(uVar1 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,uVar3 + 7,uVar1 & 0xfffffffffffffffd);
      return;
    }
  }
  return;
}

