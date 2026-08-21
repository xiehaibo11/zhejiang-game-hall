
/* v8::internal::SmallOrderedHashMap::Add(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SmallOrderedHashMap>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>) */

ulong * v8::internal::SmallOrderedHashMap::Add
                  (Isolate *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_68;
  
  local_68 = *param_2;
  iVar6 = SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::FindEntry
                    ((SmallOrderedHashTable<v8::internal::SmallOrderedHashMap> *)&local_68,param_1,
                     *param_3);
  if (iVar6 == 0xff) {
    uVar8 = *param_2;
    bVar4 = *(byte *)(uVar8 + 5);
    if ((uint)bVar4 << 1 <= (uint)*(byte *)(uVar8 + 4) + (uint)*(byte *)(uVar8 + 3)) {
      if ((uint)*(byte *)(uVar8 + 4) < (uint)bVar4) {
        uVar3 = 0xfe;
        if (bVar4 != 0x40) {
          uVar3 = (uint)bVar4 << 2;
        }
        if (0xfe < uVar3) {
          return (ulong *)0x0;
        }
      }
      param_2 = (ulong *)SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::Rehash
                                   (param_1,param_2);
      if (param_2 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
    }
    local_68 = *param_3;
    lVar7 = Object::GetOrCreateHash((Object *)&local_68,param_1);
    uVar10 = *param_2;
    uVar8 = *param_4;
    bVar4 = *(byte *)(uVar10 + 3);
    uVar11 = (ulong)*(byte *)(uVar10 + 5) - 1 & (lVar7 << 0x20) >> 0x21;
    uVar5 = *(undefined1 *)(uVar10 + ((ulong)*(byte *)(uVar10 + 5) << 4 | 8) + uVar11 + -1);
    lVar1 = (ulong)*(byte *)(uVar10 + 4) + (ulong)bVar4;
    lVar7 = lVar1 * 8 + uVar10;
    *(int *)(lVar7 + 0xb) = (int)uVar8;
    if ((uVar8 & 1) != 0) {
      uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
      lVar7 = lVar7 + 0xb;
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar10,lVar7,uVar8);
        uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar10,lVar7,uVar8);
      }
    }
    uVar10 = *param_2;
    uVar8 = *param_3;
    puVar2 = (undefined4 *)(uVar10 + (lVar1 * 8 | 7U));
    *puVar2 = (int)uVar8;
    if ((uVar8 & 1) != 0) {
      uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar10,puVar2,uVar8);
        uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar10,puVar2,uVar8);
      }
    }
    *(char *)(*param_2 + ((ulong)*(byte *)(*param_2 + 5) << 4 | 8) + (long)(int)uVar11 + -1) =
         (char)lVar1;
    uVar8 = (ulong)*(byte *)(*param_2 + 5);
    *(undefined1 *)(*param_2 + lVar1 + uVar8 + (uVar8 << 4 | 8) + -1) = uVar5;
    *(byte *)(*param_2 + 3) = bVar4 + 1;
  }
  return param_2;
}

