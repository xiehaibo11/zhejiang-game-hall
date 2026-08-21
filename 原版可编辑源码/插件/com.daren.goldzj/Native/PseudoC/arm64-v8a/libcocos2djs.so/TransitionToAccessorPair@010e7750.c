
/* v8::internal::LookupIterator::TransitionToAccessorPair(v8::internal::Handle<v8::internal::Object>,
   v8::internal::PropertyAttributes) */

void __thiscall
v8::internal::LookupIterator::TransitionToAccessorPair
          (LookupIterator *this,undefined8 param_2,int param_3)

{
  long lVar1;
  Isolate *pIVar2;
  bool bVar3;
  byte bVar4;
  undefined4 uVar5;
  Isolate *pIVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong *puVar13;
  ulong local_38;
  
  puVar13 = *(ulong **)(this + 0x30);
  uVar9 = *puVar13;
  if ((uVar9 & 1) != 0) {
    pIVar6 = *(Isolate **)(this + 0x18);
    if ((*(short *)(((ulong)pIVar6 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0xab) &&
       (pIVar2 = pIVar6 + *(uint *)(((ulong)pIVar6 | 0xf) + (ulong)*(uint *)(uVar9 - 1)),
       *(short *)(((ulong)pIVar6 | 7) + (ulong)*(uint *)(pIVar2 + -1)) == 0xaa)) {
      if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar13 = *(ulong **)(pIVar6 + 0x95a0);
        if (puVar13 == *(ulong **)(pIVar6 + 0x95a8)) {
          puVar13 = (ulong *)HandleScope::Extend(pIVar6);
        }
        *(ulong **)(pIVar6 + 0x95a0) = puVar13 + 1;
        *puVar13 = (ulong)pIVar2;
      }
      else {
        puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),(ulong)pIVar2);
      }
    }
  }
  uVar12 = param_3 << 3 | 0xc1;
  *(ulong **)(this + 0x38) = puVar13;
  if ((0xfffffffe < *(ulong *)(this + 0x48)) &&
     ((uVar9 = *puVar13, *(ulong *)(this + 0x48) == 0xffffffffffffffff ||
      (10 < (byte)((*(byte *)((uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 - 1)) + 10) >> 3)
                  - 0x11))))) {
    uVar10 = *(ulong *)(this + 0x18);
    bVar3 = (*(uint *)((uVar10 | 0xb) + (ulong)*(uint *)(uVar9 - 1)) >> 0x14 & 1) != 0;
    if (bVar3) {
      JSObject::InvalidatePrototypeChains(uVar10 + *(uint *)(uVar9 - 1));
      uVar10 = *(ulong *)(this + 0x18);
    }
    JSObject::NormalizeProperties(uVar10,puVar13,bVar3,0,"TransitionToAccessorPair");
    JSObject::SetNormalizedProperty(puVar13,*(undefined8 *)(this + 0x20),param_2,uVar12);
    JSObject::ReoptimizeIfPrototype(puVar13);
    *(undefined4 *)(this + 4) = 2;
    *(undefined4 *)(this + 0xc) = 0;
    if (*(ushort *)(*(long *)(this + 0x18) + (ulong)*(uint *)(**(long **)(this + 0x38) + -1) + 7) <
        0x411) {
      uVar5 = LookupInSpecialHolder<false>();
    }
    else {
      uVar5 = LookupInRegularHolder<false>(this);
    }
    goto LAB_010e7ae8;
  }
  Isolate::CountUsage(*(undefined8 *)(this + 0x18),0x2a);
  uVar7 = JSObject::NormalizeElements(puVar13);
  puVar8 = (ulong *)NumberDictionary::Set
                              (*(undefined8 *)(this + 0x18),uVar7,*(undefined4 *)(this + 0x48),
                               param_2,puVar13,uVar12);
  local_38 = *puVar13;
  JSObject::RequireSlowElements((JSObject *)&local_38,*puVar8);
  uVar9 = *puVar13;
  uVar10 = *(ulong *)(this + 0x18);
  if ((*(byte *)((uVar10 | 10) + (ulong)*(uint *)(uVar9 - 1)) & 0xf8) == 0x70) {
    if (*(long *)(this + 0x50) != -1) {
      uVar9 = *(uint *)(uVar9 + 7) + uVar10;
      uVar12 = (uint)*(long *)(this + 0x50);
      if (uVar12 < (*(int *)(uVar9 + 3) >> 1) - 2U) {
        uVar10 = *(ulong *)(uVar10 + 0xa8);
        lVar1 = uVar9 + (long)(int)(uVar12 * 4 + 8);
        *(int *)(lVar1 + 7) = (int)uVar10;
        if ((uVar10 & 1) != 0) {
          uVar11 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
          lVar1 = lVar1 + 7;
          if (((uint)uVar11 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar9,lVar1,uVar10);
            uVar11 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar9,lVar1,uVar10);
          }
        }
      }
    }
    uVar10 = *puVar8;
    uVar9 = *(long *)(this + 0x18) + (ulong)*(uint *)(*puVar13 + 7);
    *(int *)(uVar9 + 0xb) = (int)uVar10;
    if ((uVar10 & 1) != 0) {
      uVar11 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
      lVar1 = uVar9 + 0xb;
      if (((uint)uVar11 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar9,lVar1,uVar10);
        uVar11 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
      }
      if ((uVar11 & 0x18) != 0) {
        bVar4 = *(byte *)((uVar9 & 0xfffffffffffc0000) + 8);
joined_r0x010e7a14:
        if ((bVar4 & 0x18) == 0) {
          Heap_GenerationalBarrierSlow(uVar9,lVar1,uVar10);
        }
      }
    }
  }
  else {
    uVar10 = *puVar8;
    *(int *)(uVar9 + 7) = (int)uVar10;
    if ((uVar10 & 1) != 0) {
      uVar11 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
      lVar1 = uVar9 + 7;
      if (((uint)uVar11 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar9,lVar1,uVar10);
        uVar11 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
      }
      if ((uVar11 & 0x18) != 0) {
        bVar4 = *(byte *)((uVar9 & 0xfffffffffffc0000) + 8);
        goto joined_r0x010e7a14;
      }
    }
  }
  *(undefined4 *)(this + 4) = 2;
  *(undefined4 *)(this + 0xc) = 0;
  if (*(ushort *)(*(long *)(this + 0x18) + (ulong)*(uint *)(**(long **)(this + 0x38) + -1) + 7) <
      0x411) {
    uVar5 = LookupInSpecialHolder<true>();
  }
  else {
    uVar5 = LookupInRegularHolder<true>(this);
  }
LAB_010e7ae8:
  *(undefined4 *)(this + 4) = uVar5;
  return;
}

