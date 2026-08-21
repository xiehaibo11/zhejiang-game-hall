
/* v8::internal::NormalizedMapCache::Set(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Handle<v8::internal::Map>) */

void __thiscall
v8::internal::NormalizedMapCache::Set(NormalizedMapCache *this,ulong *param_2,ulong *param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar7 = *param_2;
  uVar8 = uVar7 & 0xffffffff00000000;
  uVar6 = uVar8 | *(uint *)(uVar7 + 0x13);
  if ((*(uint *)(uVar7 + 0x13) & 1) != 0) {
    do {
      if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0xa2) break;
      puVar1 = (uint *)(uVar6 + 0x13);
      uVar6 = uVar8 | *puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  uVar8 = *param_3;
  uVar4 = *(int *)(uVar7 + 0xf) << 0xe;
  uVar3 = (uVar4 | (uint)uVar6 >> 2) ^ (int)uVar4 >> 0x10 ^ (uint)*(byte *)(uVar7 + 10);
  uVar4 = uVar3 + 0x3f;
  if (-1 < (int)uVar3) {
    uVar4 = uVar3;
  }
  lVar2 = (long)(int)((uVar3 - (uVar4 & 0x3fffffc0)) * 4) + 7;
  uVar4 = (uint)uVar8 | 2;
  *(uint *)(*(long *)this + lVar2) = uVar4;
  if (((uVar8 & 1) != 0) && (uVar4 != 3)) {
    uVar6 = *(ulong *)this;
    uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    lVar5 = uVar6 + lVar2;
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,lVar5,uVar8 & 0xfffffffffffffffd);
      uVar6 = *(ulong *)this;
      uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
      lVar5 = uVar6 + lVar2;
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,lVar5,uVar8 & 0xfffffffffffffffd);
      return;
    }
  }
  return;
}

