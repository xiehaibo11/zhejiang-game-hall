
/* v8::internal::StringSet::Add(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::StringSet>, v8::internal::Handle<v8::internal::String>) */

ulong * v8::internal::StringSet::Add(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  ulong local_28;
  
  local_28 = *param_2;
  lVar4 = HashTable<v8::internal::StringSet,v8::internal::StringSetShape>::FindEntry
                    ((HashTable<v8::internal::StringSet,v8::internal::StringSetShape> *)&local_28,
                     param_1,*param_3);
  if (lVar4 == -1) {
    param_2 = (ulong *)HashTable<v8::internal::StringSet,v8::internal::StringSetShape>::
                       EnsureCapacity(param_1,param_2,1,0);
    uVar3 = *(uint *)(*param_3 + 3);
    if ((uVar3 & 1) == 0) {
      uVar3 = uVar3 >> 3;
    }
    else {
      local_28 = *param_3;
      uVar3 = String::ComputeAndSetHash((String *)&local_28);
    }
    uVar9 = *param_2;
    lVar4 = uVar9 + 7;
    uVar2 = (*(int *)(uVar9 + 0xf) >> 1) - 1;
    uVar3 = uVar2 & uVar3;
    piVar10 = (int *)(lVar4 + (int)(uVar3 * 4 + 0xc));
    iVar6 = *piVar10;
    iVar1 = *(int *)((uVar9 & 0xffffffff00000000) + 0xa8);
    if (iVar6 != iVar1) {
      iVar7 = 1;
      do {
        if (iVar6 == *(int *)((uVar9 & 0xffffffff00000000) + 0xa0)) {
          piVar10 = (int *)(lVar4 + (int)(uVar3 * 4 + 0xc));
          break;
        }
        uVar3 = uVar3 + iVar7 & uVar2;
        piVar10 = (int *)(lVar4 + (int)(uVar3 * 4 + 0xc));
        iVar6 = *piVar10;
        iVar7 = iVar7 + 1;
      } while (iVar6 != iVar1);
    }
    uVar8 = *param_3;
    *piVar10 = (int)uVar8;
    if ((uVar8 & 1) != 0) {
      uVar5 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar9,piVar10,uVar8);
        uVar5 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar9,piVar10,uVar8);
      }
    }
    *(uint *)(*param_2 + 7) = *(uint *)(*param_2 + 7) + 2 & 0xfffffffe;
  }
  return param_2;
}

