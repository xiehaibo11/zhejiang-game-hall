
/* v8::internal::JSObject::EnsureWritableFastElements(v8::internal::Handle<v8::internal::JSObject>)
    */

void v8::internal::JSObject::EnsureWritableFastElements(ulong *param_1)

{
  ulong *puVar1;
  int *piVar2;
  ulong uVar3;
  Isolate *pIVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  pIVar4 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar6 = (ulong)pIVar4 | (ulong)*(uint *)(*param_1 + 7);
  if (*(int *)(uVar6 - 1) == *(int *)(pIVar4 + 0xe8)) {
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar6;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar6);
    }
    puVar1 = (ulong *)Factory::CopyFixedArrayWithMap(pIVar4,puVar1,pIVar4 + 0xe0);
    uVar7 = *param_1;
    uVar6 = *puVar1;
    *(int *)(uVar7 + 7) = (int)uVar6;
    if ((uVar6 & 1) != 0) {
      uVar3 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar3 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar7,uVar7 + 7,uVar6);
        uVar3 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar7,uVar7 + 7,uVar6);
      }
    }
    lVar5 = *(long *)(pIVar4 + 0x9520);
    if (*(char *)(lVar5 + 7000) == '\0') {
      *(char *)(lVar5 + 7000) = '\x01';
      piVar2 = (int *)StatsCounterBase::FindLocationInStatsTable
                                ((StatsCounterBase *)(lVar5 + 0x1b40));
      *(int **)(lVar5 + 0x1b50) = piVar2;
    }
    else {
      piVar2 = *(int **)(lVar5 + 0x1b50);
    }
    if (piVar2 != (int *)0x0) {
      *piVar2 = *piVar2 + 1;
    }
  }
  return;
}

