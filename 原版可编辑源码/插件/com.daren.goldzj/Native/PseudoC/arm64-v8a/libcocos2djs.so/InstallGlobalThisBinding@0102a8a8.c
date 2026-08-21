
/* v8::internal::Genesis::InstallGlobalThisBinding() */

void __thiscall v8::internal::Genesis::InstallGlobalThisBinding(Genesis *this)

{
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  Factory *pFVar9;
  ulong uVar10;
  undefined8 local_38;
  
  pIVar4 = *(Isolate **)this;
  uVar8 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
          (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0x273);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar8;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar8);
  }
  pFVar9 = *(Factory **)this;
  puVar6 = (ulong *)Factory::NewScriptContext(pFVar9,*(undefined8 *)(this + 0x10),pFVar9 + 0x478);
  local_38 = *(undefined8 *)(pFVar9 + 0x478);
  iVar3 = ScopeInfo::ReceiverContextSlotIndex((ScopeInfo *)&local_38);
  uVar10 = *puVar6;
  local_38 = **(undefined8 **)(this + 0x10);
  uVar8 = Context::global_proxy((Context *)&local_38);
  lVar1 = uVar10 + (long)(iVar3 << 2);
  *(int *)(lVar1 + 7) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,lVar1,uVar8);
      uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,lVar1,uVar8);
    }
  }
  puVar5 = (ulong *)ScriptContextTable::Extend(puVar5,puVar6);
  uVar8 = *puVar5;
  uVar10 = **(ulong **)(this + 0x10);
  puVar2 = (undefined4 *)(uVar10 + 0x273);
  *puVar2 = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,puVar2,uVar8);
      uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,puVar2,uVar8);
    }
  }
  return;
}

