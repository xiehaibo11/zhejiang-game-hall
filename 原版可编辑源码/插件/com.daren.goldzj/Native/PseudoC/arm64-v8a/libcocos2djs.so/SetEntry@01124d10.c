
/* v8::internal::SmallOrderedNameDictionary::SetEntry(v8::internal::Isolate*, int,
   v8::internal::Object, v8::internal::Object, v8::internal::PropertyDetails) */

void __thiscall
v8::internal::SmallOrderedNameDictionary::SetEntry
          (SmallOrderedNameDictionary *this,undefined8 param_2_00,int param_2,ulong param_4,
          ulong param_5,int param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = (long)(param_2 * 0xc);
  lVar1 = lVar5 + 0xf;
  *(int *)(*(long *)this + lVar1) = (int)param_5;
  uVar2 = *(ulong *)this;
  if ((param_5 & 1) != 0) {
    uVar4 = *(ulong *)((param_5 & 0xfffffffffffc0000) + 8);
    lVar3 = uVar2 + lVar1;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar2,lVar3,param_5);
      uVar2 = *(ulong *)this;
      uVar4 = *(ulong *)(param_5 & 0xfffffffffffc0000 | 8);
      lVar3 = uVar2 + lVar1;
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar2,lVar3,param_5);
      uVar2 = *(ulong *)this;
    }
  }
  lVar1 = lVar5 + 0xb;
  *(int *)(uVar2 + lVar1) = (int)param_4;
  uVar2 = *(ulong *)this;
  if ((param_4 & 1) != 0) {
    uVar4 = *(ulong *)((param_4 & 0xfffffffffffc0000) + 8);
    lVar3 = uVar2 + lVar1;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar2,lVar3,param_4);
      uVar2 = *(ulong *)this;
      uVar4 = *(ulong *)(param_4 & 0xfffffffffffc0000 | 8);
      lVar3 = uVar2 + lVar1;
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar2,lVar3,param_4);
      uVar2 = *(ulong *)this;
    }
  }
  *(int *)(lVar5 + uVar2 + 0x13) = param_6 << 1;
  return;
}

