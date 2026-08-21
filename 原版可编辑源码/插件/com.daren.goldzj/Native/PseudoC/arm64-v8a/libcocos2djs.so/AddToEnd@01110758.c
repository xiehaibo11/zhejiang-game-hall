
/* v8::internal::WeakArrayList::AddToEnd(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WeakArrayList>, v8::internal::MaybeObjectHandle const&,
   v8::internal::MaybeObjectHandle const&) */

ulong * v8::internal::WeakArrayList::AddToEnd
                  (Factory *param_1,ulong *param_2,int *param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar8 = *param_2;
  iVar3 = *(int *)(uVar8 + 7) >> 1;
  iVar2 = iVar3 + 2;
  iVar4 = *(int *)(uVar8 + 3) >> 1;
  iVar6 = iVar2 - iVar4;
  if (iVar6 != 0 && iVar4 <= iVar2) {
    if (iVar2 < 0) {
      iVar2 = iVar3 + 3;
    }
    iVar2 = iVar2 >> 1;
    if (iVar2 < 3) {
      iVar2 = 2;
    }
    param_2 = (ulong *)Factory::CopyWeakArrayListAndGrow(param_1,param_2,iVar6 + iVar2,0);
    uVar8 = *param_2;
  }
  uVar5 = *(uint *)(uVar8 + 7);
  puVar7 = *(ulong **)(param_3 + 2);
  if (*param_3 == 0) {
    if (puVar7 == (ulong *)0x0) goto LAB_01110914;
    uVar9 = *puVar7 | 2;
  }
  else {
    if (puVar7 == (ulong *)0x0) goto LAB_01110914;
    uVar9 = *puVar7;
  }
  iVar2 = (uVar5 >> 1) * 4;
  lVar1 = uVar8 + (long)iVar2;
  *(int *)(lVar1 + 0xb) = (int)uVar9;
  if (((int)uVar9 != 3) && ((uVar9 & 1) != 0)) {
    lVar1 = lVar1 + 0xb;
    if ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,lVar1,uVar9 & 0xfffffffffffffffd);
    }
    if (((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
       ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,lVar1,uVar9 & 0xfffffffffffffffd);
    }
  }
  uVar8 = *param_2;
  puVar7 = *(ulong **)(param_4 + 2);
  if (*param_4 == 0) {
    if (puVar7 == (ulong *)0x0) goto LAB_01110914;
    uVar9 = *puVar7 | 2;
  }
  else {
    if (puVar7 == (ulong *)0x0) {
LAB_01110914:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar9 = *puVar7;
  }
  lVar1 = uVar8 + (long)(iVar2 + 4);
  *(int *)(lVar1 + 0xb) = (int)uVar9;
  if (((int)uVar9 != 3) && ((uVar9 & 1) != 0)) {
    lVar1 = lVar1 + 0xb;
    if ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,lVar1,uVar9 & 0xfffffffffffffffd);
    }
    if (((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
       ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,lVar1,uVar9 & 0xfffffffffffffffd);
    }
  }
  *(uint *)(*param_2 + 7) = uVar5 + 4 & 0xfffffffe;
  return param_2;
}

