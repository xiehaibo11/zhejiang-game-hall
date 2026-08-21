
/* v8::internal::FixedArrayBuilder::Add(v8::internal::Object) */

void __thiscall v8::internal::FixedArrayBuilder::Add(FixedArrayBuilder *this,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = **(ulong **)this;
  lVar1 = uVar3 + (long)(*(int *)(this + 8) << 2);
  *(int *)(lVar1 + 7) = (int)param_2;
  if ((param_2 & 1) != 0) {
    uVar2 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,lVar1,param_2);
      uVar2 = *(ulong *)(param_2 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,lVar1,param_2);
    }
  }
  this[0xc] = (FixedArrayBuilder)0x1;
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}

