
/* v8::internal::FixedArray::CopyTo(int, v8::internal::FixedArray, int, int) const */

void __thiscall
v8::internal::FixedArray::CopyTo
          (FixedArray *this,int param_1,ulong param_3,int param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((param_5 != 0) && (0 < (int)param_5)) {
    uVar5 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
    uVar7 = (ulong)param_5;
    param_4 = param_4 << 2;
    param_1 = param_1 << 2;
    do {
      uVar3 = *(ulong *)this;
      puVar1 = (uint *)(param_3 + 7 + (long)param_4);
      uVar2 = *(uint *)(uVar3 + (long)param_1 + 7);
      *puVar1 = uVar2;
      if (((uVar5 & 0x40000) != 0 || (uVar5 & 0x18) == 0) && (uVar2 & 1) != 0) {
        uVar3 = uVar3 & 0xffffffff00000000;
        uVar6 = uVar3 | uVar2;
        uVar3 = uVar3 | (ulong)uVar2 & 0xfffffffffffc0000;
        uVar4 = *(ulong *)(uVar3 + 8);
        if (((uint)uVar4 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(param_3,puVar1,uVar6);
          uVar4 = *(ulong *)(uVar3 | 8);
        }
        if (((uVar4 & 0x18) != 0) && ((*(byte *)(param_3 & 0xfffffffffffc0000 | 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(param_3,puVar1,uVar6);
        }
      }
      param_4 = param_4 + 4;
      uVar7 = uVar7 - 1;
      param_1 = param_1 + 4;
    } while (uVar7 != 0);
  }
  return;
}

