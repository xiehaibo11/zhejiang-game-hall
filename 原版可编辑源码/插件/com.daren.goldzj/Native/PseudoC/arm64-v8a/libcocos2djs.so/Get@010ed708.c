
/* v8::internal::NormalizedMapCache::Get(v8::internal::Handle<v8::internal::Map>,
   v8::internal::ElementsKind, v8::internal::PropertyNormalizationMode) */

ulong * v8::internal::NormalizedMapCache::Get(ulong *param_1,ulong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  CanonicalHandleScope *this;
  ulong uVar5;
  Isolate *pIVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_28;
  
  uVar5 = *param_2;
  uVar8 = uVar5 & 0xffffffff00000000;
  uVar7 = uVar8 | *(uint *)(uVar5 + 0x13);
  if ((*(uint *)(uVar5 + 0x13) & 1) != 0) {
    do {
      if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0xa2) break;
      puVar1 = (uint *)(uVar7 + 0x13);
      uVar7 = uVar8 | *puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  puVar4 = (ulong *)0x0;
  uVar3 = *(int *)(uVar5 + 0xf) << 0xe;
  uVar2 = (uVar3 | (uint)uVar7 >> 2) ^ (int)uVar3 >> 0x10 ^ (uint)*(byte *)(uVar5 + 10);
  uVar3 = uVar2 + 0x3f;
  if (-1 < (int)uVar2) {
    uVar3 = uVar2;
  }
  uVar3 = *(uint *)(*param_1 + (long)(int)((uVar2 - (uVar3 & 0x3fffffc0)) * 4) + 7);
  if ((uVar3 != 3) && (((ulong)uVar3 & 3) == 3)) {
    uVar7 = (ulong)uVar3 & 0xfffffffffffffffd | *param_1 & 0xffffffff00000000;
    local_28 = uVar7;
    uVar5 = Map::EquivalentToForNormalization((Map *)&local_28,*param_2);
    if ((uVar5 & 1) == 0) {
      puVar4 = (ulong *)0x0;
    }
    else {
      this = *(CanonicalHandleScope **)((ulong)*(uint *)((long)param_1 + 4) << 0x20 | 0x95b8);
      if (this == (CanonicalHandleScope *)0x0) {
        pIVar6 = (Isolate *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
        puVar4 = *(ulong **)(pIVar6 + 0x95a0);
        if (puVar4 == *(ulong **)(pIVar6 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(pIVar6);
        }
        *(ulong **)(pIVar6 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar7;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup(this,uVar7);
      }
    }
  }
  return puVar4;
}

