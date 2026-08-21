
/* v8::internal::LookupIterator::ReconfigureDataProperty(v8::internal::Handle<v8::internal::Object>,
   v8::internal::PropertyAttributes) */

void __thiscall
v8::internal::LookupIterator::ReconfigureDataProperty
          (LookupIterator *this,ulong *param_2,uint param_3)

{
  Isolate *pIVar1;
  undefined4 uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  ulong *puVar10;
  uint uVar11;
  Isolate *pIVar12;
  ulong uVar13;
  Isolate *local_58;
  
  puVar10 = *(ulong **)(this + 0x38);
  pIVar3 = *(Isolate **)(this + 0x18);
  uVar7 = *puVar10;
  if (*(short *)(((ulong)pIVar3 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0xa9) {
    return;
  }
  pIVar1 = pIVar3 + 0x95a0;
  if ((*(ulong *)(this + 0x48) < 0xffffffff) ||
     ((*(ulong *)(this + 0x48) != 0xffffffffffffffff &&
      ((byte)((*(byte *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 - 1)) + 10) >> 3) -
             0x11) < 0xb)))) {
    uVar11 = *(uint *)(uVar7 + 7);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)pIVar1;
      if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)pIVar1 = puVar4 + 1;
      *puVar4 = (ulong)(pIVar3 + uVar11);
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),
                                   (ulong)(pIVar3 + uVar11));
    }
    plVar5 = *(long **)(ElementsAccessor::elements_accessors_ +
                       ((ulong)*(byte *)((*(ulong *)(this + 0x18) | 10) +
                                        (ulong)*(uint *)(*puVar10 - 1)) & 0xf8));
    (**(code **)(*plVar5 + 0x118))
              (plVar5,puVar10,puVar4,*(undefined8 *)(this + 0x50),param_2,param_3);
    *(undefined4 *)(this + 4) = 2;
    *(undefined4 *)(this + 0xc) = 0;
    if (*(ushort *)(*(long *)(this + 0x18) + (ulong)*(uint *)(**(long **)(this + 0x38) + -1) + 7) <
        0x411) {
      uVar2 = LookupInSpecialHolder<true>();
    }
    else {
      uVar2 = LookupInRegularHolder<true>(this);
    }
  }
  else {
    if ((*(uint *)(((ulong)pIVar3 | 0xb) + (ulong)*(uint *)(uVar7 - 1)) >> 0x15 & 1) != 0)
    goto LAB_010e631c;
    uVar11 = *(uint *)(uVar7 - 1);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)pIVar1;
      if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)pIVar1 = puVar4 + 1;
      *puVar4 = (ulong)(pIVar3 + uVar11);
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),
                                   (ulong)(pIVar3 + uVar11));
    }
    plVar5 = (long *)Map::ReconfigureExistingProperty
                               (*(undefined8 *)(this + 0x18),puVar4,*(undefined8 *)(this + 0x50),0,
                                param_3,0);
    if ((*(uint *)(*plVar5 + 0xb) >> 0x15 & 1) == 0) {
      plVar5 = (long *)Map::PrepareForDataProperty
                                 (*(undefined8 *)(this + 0x18),plVar5,*(undefined8 *)(this + 0x50),0
                                  ,param_2);
    }
    JSObject::MigrateToMap(*(undefined8 *)(this + 0x18),puVar10,plVar5,0);
    *(undefined4 *)(this + 4) = 2;
    *(undefined4 *)(this + 0xc) = 0;
    if (*(ushort *)(*(long *)(this + 0x18) + (ulong)*(uint *)(**(long **)(this + 0x38) + -1) + 7) <
        0x411) {
      uVar2 = LookupInSpecialHolder<false>();
    }
    else {
      uVar2 = LookupInRegularHolder<false>(this);
    }
  }
  *(undefined4 *)(this + 4) = uVar2;
LAB_010e631c:
  if ((0xfffffffe < *(ulong *)(this + 0x48)) &&
     ((uVar7 = *puVar10, *(ulong *)(this + 0x48) == 0xffffffffffffffff ||
      (10 < (byte)((*(byte *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 - 1)) + 10) >> 3)
                  - 0x11))))) {
    puVar9 = (uint *)(uVar7 - 1);
    pIVar3 = *(Isolate **)(this + 0x18);
    if ((*(uint *)(((ulong)pIVar3 | 0xb) + (ulong)*puVar9) >> 0x15 & 1) != 0) {
      if ((((*(uint *)(((ulong)pIVar3 | 0xb) + (ulong)*puVar9) >> 0x14 & 1) != 0) &&
          ((param_3 & 1) != 0)) && ((*(uint *)(this + 0x10) >> 3 & 1) == 0)) {
        JSObject::InvalidatePrototypeChains(pIVar3 + *puVar9);
        uVar7 = *puVar10;
        pIVar3 = *(Isolate **)(this + 0x18);
      }
      pIVar1 = pIVar3 + 0x95a0;
      pIVar12 = pIVar3 + *(uint *)(uVar7 + 3);
      if (*(short *)(((ulong)pIVar3 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0xaa) {
        if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = *(ulong **)pIVar1;
          if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
            puVar4 = (ulong *)HandleScope::Extend(pIVar3);
          }
          *(ulong **)pIVar1 = puVar4 + 1;
          *puVar4 = (ulong)pIVar12;
        }
        else {
          puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),(ulong)pIVar12);
        }
        puVar4 = (ulong *)PropertyCell::PrepareForValue
                                    (*(undefined8 *)(this + 0x18),puVar4,
                                     *(undefined8 *)(this + 0x50),param_2,param_3 << 3 | 0xc0);
        uVar13 = *puVar4;
        uVar7 = *param_2;
        *(int *)(uVar13 + 0xb) = (int)uVar7;
        if ((uVar7 & 1) != 0) {
          uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar8 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar13,uVar13 + 0xb,uVar7);
            uVar8 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar13,uVar13 + 0xb,uVar7);
          }
        }
        uVar11 = *(int *)(*puVar4 + 7) >> 1;
      }
      else {
        if (((ulong)pIVar12 & 1) == 0) {
          pIVar12 = *(Isolate **)(pIVar3 + 0x410);
        }
        if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(undefined8 **)pIVar1;
          if (puVar6 == *(undefined8 **)(pIVar3 + 0x95a8)) {
            puVar6 = (undefined8 *)HandleScope::Extend(pIVar3);
          }
          *(undefined8 **)pIVar1 = puVar6 + 1;
          *puVar6 = pIVar12;
        }
        else {
          puVar6 = (undefined8 *)
                   CanonicalHandleScope::Lookup
                             (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),(ulong)pIVar12);
          pIVar12 = (Isolate *)*puVar6;
        }
        uVar11 = *(uint *)(pIVar12 +
                          (*(long *)(this + 0x50) * 0xc00000000 + 0x1c00000000 >> 0x20) + 7) >> 1 &
                 0x7fffff00 | param_3 << 3 & 0x800000f8 | 0xc0;
        local_58 = pIVar12;
        Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::SetEntry
                  ((Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape> *)
                   &local_58,*(undefined8 *)(this + 0x18),*(long *)(this + 0x50),
                   **(undefined8 **)(this + 0x20),*param_2,uVar11);
      }
      *(uint *)(this + 0x10) = uVar11;
      *(undefined4 *)(this + 4) = 6;
    }
  }
  WriteDataValue(this,param_2,0);
  if (FLAG_verify_heap != '\0') {
    local_58 = (Isolate *)*puVar10;
    HeapObject::HeapObjectVerify((HeapObject *)&local_58,*(Isolate **)(this + 0x18));
  }
  return;
}

