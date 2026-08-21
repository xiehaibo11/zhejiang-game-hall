
/* v8::internal::OrderedNameDictionary::SetEntry(v8::internal::Isolate*, int, v8::internal::Object,
   v8::internal::Object, v8::internal::PropertyDetails) */

void __thiscall
v8::internal::OrderedNameDictionary::SetEntry
          (OrderedNameDictionary *this,undefined8 param_2_00,int param_2,ulong param_4,ulong param_5
          ,int param_6)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  iVar2 = (param_2 * 4 + (*(uint *)(*(long *)this + 0x13) >> 1)) * 4;
  lVar1 = (long)(iVar2 + 0x10) + 7;
  *(int *)(lVar1 + *(long *)this) = (int)param_4;
  uVar3 = *(ulong *)this;
  if ((param_4 & 1) != 0) {
    uVar5 = *(ulong *)((param_4 & 0xfffffffffffc0000) + 8);
    lVar4 = lVar1 + uVar3;
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,lVar4,param_4);
      uVar3 = *(ulong *)this;
      uVar5 = *(ulong *)(param_4 & 0xfffffffffffc0000 | 8);
      lVar4 = uVar3 + lVar1;
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,lVar4,param_4);
      uVar3 = *(ulong *)this;
    }
  }
  lVar1 = (long)(iVar2 + 0x14) + 7;
  *(int *)(uVar3 + lVar1) = (int)param_5;
  uVar3 = *(ulong *)this;
  if ((param_5 & 1) != 0) {
    uVar5 = *(ulong *)((param_5 & 0xfffffffffffc0000) + 8);
    lVar4 = uVar3 + lVar1;
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,lVar4,param_5);
      uVar3 = *(ulong *)this;
      uVar5 = *(ulong *)(param_5 & 0xfffffffffffc0000 | 8);
      lVar4 = uVar3 + lVar1;
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,lVar4,param_5);
      uVar3 = *(ulong *)this;
    }
  }
  *(int *)(uVar3 + (long)(iVar2 + 0x18) + 7) = param_6 << 1;
  return;
}

