
void FUN_010a6fa8(undefined8 *param_1,ulong *param_2,ulong param_3,ulong *param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  Factory *this;
  ulong uVar10;
  undefined8 local_68;
  
  uVar8 = *param_2;
  this = (Factory *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  uVar5 = (*(int *)(uVar8 + 3) >> 1) - 2;
  uVar7 = uVar8 & 0xffffffff00000000;
  if ((uint)param_3 < uVar5) {
    lVar2 = (long)(int)((uint)param_3 * 4 + 8) + 7;
    uVar5 = *(uint *)(uVar8 + 7);
    uVar10 = *param_4;
    iVar4 = *(int *)(uVar8 + lVar2) >> 1;
    uVar8 = uVar7 | uVar5;
    lVar1 = uVar8 + (long)(iVar4 << 2);
    *(int *)(lVar1 + 7) = (int)uVar10;
    if ((uVar10 & 1) != 0) {
      uVar9 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
      lVar1 = lVar1 + 7;
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar8,lVar1,uVar10);
        uVar9 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar9 & 0x18) != 0) &&
         ((*(byte *)((uVar7 | (ulong)uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar8,lVar1,uVar10);
      }
    }
    uVar8 = *param_2;
    uVar7 = *(ulong *)(this + 0xa8);
    puVar3 = (undefined4 *)(uVar8 + lVar2);
    *puVar3 = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar10 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar10 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar8,puVar3,uVar7);
        uVar10 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar8,puVar3,uVar7);
      }
    }
    if ((param_5 & 1) == 0) {
      param_4 = (ulong *)v8::internal::Factory::NewAliasedArgumentsEntry(this,iVar4);
    }
    uVar7 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(this + 0x95a0);
      if (puVar6 == *(ulong **)(this + 0x95a8)) {
        puVar6 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)(this + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar7;
    }
    else {
      puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
    }
    puVar6 = (ulong *)v8::internal::
                      Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>
                      ::Add(this,puVar6,param_3 & 0xffffffff,param_4,param_5 << 3 | 0xc0,0);
    local_68 = *param_1;
    v8::internal::JSObject::RequireSlowElements((JSObject *)&local_68,*puVar6);
    uVar8 = *param_2;
    uVar7 = *puVar6;
    *(int *)(uVar8 + 0xb) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar10 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar10 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xb,uVar7);
        uVar10 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xb,uVar7);
      }
    }
    return;
  }
  uVar7 = uVar7 | *(uint *)(uVar8 + 0xb);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(this + 0x95a0);
    if (puVar6 == *(ulong **)(this + 0x95a8)) {
      puVar6 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar7;
  }
  else {
    puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
  }
  FUN_010842c0(param_1,puVar6,param_3 - uVar5,param_4,param_5);
  return;
}

