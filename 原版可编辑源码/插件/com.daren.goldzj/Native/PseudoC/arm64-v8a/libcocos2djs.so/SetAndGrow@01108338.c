
/* v8::internal::FixedArray::SetAndGrow(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::FixedArray>, int, v8::internal::Handle<v8::internal::Object>)
    */

ulong * v8::internal::FixedArray::SetAndGrow
                  (Factory *param_1,ulong *param_2,int param_3,ulong *param_4)

{
  int iVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_28;
  
  uVar8 = *param_2;
  uVar3 = *(int *)(uVar8 + 3) >> 1;
  if (param_3 < (int)uVar3) {
    uVar7 = *param_4;
    lVar5 = uVar8 + (long)(param_3 << 2);
    *(int *)(lVar5 + 7) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar4 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      lVar5 = lVar5 + 7;
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar8,lVar5,uVar7);
        uVar4 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar8,lVar5,uVar7);
      }
    }
  }
  else {
    do {
      uVar3 = uVar3 + (uVar3 >> 1) + 0x10;
    } while ((int)uVar3 <= param_3);
    puVar2 = (ulong *)Factory::NewUninitializedFixedArray(param_1,uVar3);
    local_28 = *param_2;
    CopyTo((FixedArray *)&local_28,0,*puVar2,0,*(int *)(*param_2 + 3) >> 1);
    uVar8 = *puVar2;
    iVar6 = *(int *)(*param_2 + 3) >> 1;
    iVar1 = *(int *)(uVar8 + 3) >> 1;
    if (iVar6 < iVar1) {
      lVar5 = (long)iVar1 - (long)iVar6;
      iVar6 = iVar6 << 2;
      do {
        lVar5 = lVar5 + -1;
        *(undefined4 *)(uVar8 + 7 + (long)iVar6) =
             *(undefined4 *)((uVar8 & 0xffffffff00000000) + 0xa8);
        iVar6 = iVar6 + 4;
      } while (lVar5 != 0);
      uVar8 = *puVar2;
    }
    uVar7 = *param_4;
    lVar5 = uVar8 + (long)(param_3 << 2);
    *(int *)(lVar5 + 7) = (int)uVar7;
    param_2 = puVar2;
    if ((uVar7 & 1) != 0) {
      uVar4 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      lVar5 = lVar5 + 7;
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar8,lVar5,uVar7);
        uVar4 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar8,lVar5,uVar7);
      }
    }
  }
  return param_2;
}

