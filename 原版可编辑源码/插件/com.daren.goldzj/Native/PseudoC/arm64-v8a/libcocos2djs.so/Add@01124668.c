
/* v8::internal::SmallOrderedHashSet::Add(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SmallOrderedHashSet>,
   v8::internal::Handle<v8::internal::Object>) */

ulong * v8::internal::SmallOrderedHashSet::Add(Isolate *param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_48;
  
  local_48 = *param_2;
  iVar6 = SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::FindEntry
                    ((SmallOrderedHashTable<v8::internal::SmallOrderedHashSet> *)&local_48,param_1,
                     *param_3);
  if (iVar6 == 0xff) {
    uVar7 = *param_2;
    bVar4 = *(byte *)(uVar7 + 5);
    if ((uint)bVar4 << 1 <= (uint)*(byte *)(uVar7 + 4) + (uint)*(byte *)(uVar7 + 3)) {
      if ((uint)*(byte *)(uVar7 + 4) < (uint)bVar4) {
        uVar3 = 0xfe;
        if (bVar4 != 0x40) {
          uVar3 = (uint)bVar4 << 2;
        }
        if (0xfe < uVar3) {
          return (ulong *)0x0;
        }
      }
      param_2 = (ulong *)SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::Rehash
                                   (param_1,param_2);
      if (param_2 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
    }
    local_48 = *param_3;
    iVar6 = Object::GetOrCreateHash((Object *)&local_48,param_1);
    uVar9 = *param_2;
    uVar7 = *param_3;
    bVar4 = *(byte *)(uVar9 + 3);
    iVar6 = (*(byte *)(uVar9 + 5) - 1 & iVar6 >> 1) + 8;
    uVar5 = *(undefined1 *)(uVar9 + (long)(int)(iVar6 + (uint)*(byte *)(uVar9 + 5) * 8) + -1);
    lVar1 = (ulong)*(byte *)(uVar9 + 4) + (ulong)bVar4;
    lVar2 = uVar9 + lVar1 * 4;
    *(int *)(lVar2 + 7) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      lVar2 = lVar2 + 7;
      if (((uint)uVar8 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar9,lVar2,uVar7);
        uVar8 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar9,lVar2,uVar7);
      }
    }
    *(char *)(*param_2 + (long)(int)(iVar6 + (uint)*(byte *)(*param_2 + 5) * 8) + -1) = (char)lVar1;
    *(undefined1 *)(lVar1 + (ulong)*(byte *)(*param_2 + 5) * 9 + *param_2 + 7) = uVar5;
    *(byte *)(*param_2 + 3) = bVar4 + 1;
  }
  return param_2;
}

