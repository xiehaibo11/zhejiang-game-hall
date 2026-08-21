
/* v8::internal::Genesis::InitializeGlobal_harmony_promise_all_settled() */

void __thiscall v8::internal::Genesis::InitializeGlobal_harmony_promise_all_settled(Genesis *this)

{
  long lVar1;
  undefined4 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  Isolate *pIVar6;
  ulong uVar7;
  
  if (FLAG_harmony_promise_all_settled != '\0') {
    pIVar6 = *(Isolate **)this;
    uVar4 = *(ulong *)(pIVar6 + 0x2bc8) & 0xffffffff00000000;
    uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)(pIVar6 + 0x2bc8) - 1)
                                                 ) + 0x13)) + 0x393);
    if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar6 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar6);
      }
      *(ulong **)(pIVar6 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar4;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar4);
    }
    FUN_01029064(pIVar6,puVar3,"allSettled",0x1e0,1,1,2);
    lVar1 = *(long *)this + 200;
    puVar3 = (ulong *)FUN_01036b50(*(long *)this,0x1e1,lVar1,1,0);
    uVar4 = *puVar3;
    uVar7 = **(ulong **)(this + 0x10);
    puVar2 = (undefined4 *)(uVar7 + 0x233);
    *puVar2 = (int)uVar4;
    if ((uVar4 & 1) != 0) {
      uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar7,puVar2,uVar4);
        uVar5 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar7,puVar2,uVar4);
      }
    }
    puVar3 = (ulong *)FUN_01036b50(*(undefined8 *)this,0x1e2,lVar1,1,0);
    uVar4 = *puVar3;
    uVar7 = **(ulong **)(this + 0x10);
    puVar2 = (undefined4 *)(uVar7 + 0x237);
    *puVar2 = (int)uVar4;
    if ((uVar4 & 1) != 0) {
      uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar7,puVar2,uVar4);
        uVar5 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar7,puVar2,uVar4);
        return;
      }
    }
  }
  return;
}

