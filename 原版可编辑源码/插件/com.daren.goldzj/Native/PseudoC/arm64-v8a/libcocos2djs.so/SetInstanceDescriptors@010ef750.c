
/* v8::internal::Map::SetInstanceDescriptors(v8::internal::Isolate*, v8::internal::DescriptorArray,
   int) */

void __thiscall
v8::internal::Map::SetInstanceDescriptors(Map *this,long param_1,ulong param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  *(int *)(*(long *)this + 0x17) = (int)param_3;
  if ((param_3 & 1) != 0) {
    uVar1 = *(ulong *)this;
    uVar3 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
    lVar2 = uVar1 + 0x17;
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar1,lVar2,param_3);
      uVar1 = *(ulong *)this;
      uVar3 = *(ulong *)(param_3 & 0xfffffffffffc0000 | 8);
      lVar2 = uVar1 + 0x17;
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar1,lVar2,param_3);
    }
  }
  if (param_4 < 0x3fd) {
    *(uint *)(*(long *)this + 0xb) = *(uint *)(*(long *)this + 0xb) & 0xfff003ff | param_4 << 10;
    if ((*(byte *)((param_3 & 0xfffffffffffc0000) + 10) >> 2 & 1) == 0) {
      return;
    }
    Heap_MarkingBarrierForDescriptorArraySlow(param_1 + 0x8850,*(undefined8 *)this,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "static_cast<unsigned>(number) <= static_cast<unsigned>(kMaxNumberOfDescriptors)");
}

