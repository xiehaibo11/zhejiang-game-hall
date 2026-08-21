
/* v8::internal::SharedFunctionInfo::set_script(v8::internal::HeapObject) */

void __thiscall v8::internal::SharedFunctionInfo::set_script(SharedFunctionInfo *this,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = *(ulong *)this;
  uVar1 = *(uint *)(uVar4 + 0xf);
  uVar5 = uVar4 & 0xffffffff00000000;
  uVar6 = uVar5 | uVar1;
  if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x5b) {
    *(int *)(uVar6 + 0xb) = (int)param_2;
    if ((param_2 & 1) == 0) {
      return;
    }
    uVar4 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
    lVar3 = uVar6 + 0xb;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,lVar3,param_2);
      uVar4 = *(ulong *)(param_2 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar4 & 0x18) == 0) {
      return;
    }
    bVar2 = *(byte *)((uVar5 | (ulong)uVar1 & 0xfffffffffffc0000) + 8);
  }
  else {
    *(int *)(uVar4 + 0xf) = (int)param_2;
    if ((param_2 & 1) == 0) {
      return;
    }
    uVar6 = *(ulong *)this;
    uVar4 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
    lVar3 = uVar6 + 0xf;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,lVar3,param_2);
      uVar6 = *(ulong *)this;
      uVar4 = *(ulong *)(param_2 & 0xfffffffffffc0000 | 8);
      lVar3 = uVar6 + 0xf;
    }
    if ((uVar4 & 0x18) == 0) {
      return;
    }
    bVar2 = *(byte *)((uVar6 & 0xfffffffffffc0000) + 8);
  }
  if ((bVar2 & 0x18) != 0) {
    return;
  }
  Heap_GenerationalBarrierSlow(uVar6,lVar3,param_2);
  return;
}

