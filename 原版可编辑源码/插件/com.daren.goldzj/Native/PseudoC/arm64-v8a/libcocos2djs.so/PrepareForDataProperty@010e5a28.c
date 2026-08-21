
/* v8::internal::LookupIterator::PrepareForDataProperty(v8::internal::Handle<v8::internal::Object>)
    */

void __thiscall
v8::internal::LookupIterator::PrepareForDataProperty(LookupIterator *this,ulong *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  Isolate *pIVar6;
  Isolate *pIVar7;
  ulong *puVar8;
  ulong *puVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  byte bVar14;
  Isolate *pIVar15;
  
  puVar13 = *(ulong **)(this + 0x38);
  pIVar6 = *(Isolate **)(this + 0x18);
  uVar12 = *puVar13;
  uVar11 = (ulong)pIVar6 | 7;
  if (*(short *)(uVar11 + *(uint *)(uVar12 - 1)) != 0xa9) {
    puVar10 = (uint *)(uVar12 - 1);
    if ((*(ulong *)(this + 0x48) < 0xffffffff) ||
       ((*(ulong *)(this + 0x48) != 0xffffffffffffffff &&
        ((byte)((*(byte *)((uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1)) + 10) >> 3)
               - 0x11) < 0xb)))) {
      bVar2 = *(byte *)(((ulong)pIVar6 | 10) + (ulong)*puVar10);
      bVar3 = bVar2 >> 3;
      if ((*param_2 & 1) == 0) {
        bVar14 = 0;
      }
      else {
        bVar14 = 4;
        if (*(short *)(uVar11 + *(uint *)(*param_2 - 1)) != 0x42) {
          bVar14 = 2;
        }
      }
      if ((bVar2 < 0x30) && ((bVar2 >> 3 & 1) != 0)) {
        if (bVar14 == 0) {
          bVar14 = 1;
        }
        else if (bVar14 == 2) {
          bVar14 = 3;
        }
        else if (bVar14 == 4) {
          bVar14 = 5;
        }
      }
      uVar11 = IsMoreGeneralElementsKindTransition(bVar3,bVar14);
      if ((uVar11 & 1) == 0) {
        bVar14 = bVar3;
      }
      if (bVar3 != bVar14) {
        JSObject::TransitionElementsKind(puVar13,bVar14);
      }
      if (((bVar14 < 4) || ((bVar14 & 0x1e) == 8)) || ((bVar14 & 0x1e) == 6)) {
        JSObject::EnsureWritableFastElements(puVar13);
        return;
      }
    }
    else {
      if (*(short *)(uVar11 + *puVar10) == 0xaa) {
        pIVar15 = pIVar6 + *(uint *)(uVar12 + 3);
        if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar13 = *(ulong **)(pIVar6 + 0x95a0);
          if (puVar13 == *(ulong **)(pIVar6 + 0x95a8)) {
            puVar13 = (ulong *)HandleScope::Extend(pIVar6);
          }
          *(ulong **)(pIVar6 + 0x95a0) = puVar13 + 1;
          *puVar13 = (ulong)pIVar15;
        }
        else {
          puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),(ulong)pIVar15);
          pIVar15 = (Isolate *)*puVar13;
        }
        pIVar7 = *(Isolate **)(this + 0x18);
        pIVar6 = pIVar7 + *(uint *)(pIVar15 + (long)(*(int *)(this + 0x50) * 4 + 0x14) + 7);
        if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar8 = *(ulong **)(pIVar7 + 0x95a0);
          if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
            puVar8 = (ulong *)HandleScope::Extend(pIVar7);
          }
          *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
          *puVar8 = (ulong)pIVar6;
        }
        else {
          puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),(ulong)pIVar6);
          pIVar6 = (Isolate *)*puVar8;
        }
        *(int *)(this + 0x10) = *(int *)(pIVar6 + 7) >> 1;
        PropertyCell::PrepareForValue
                  (*(undefined8 *)(this + 0x18),puVar13,*(undefined8 *)(this + 0x50),param_2);
        return;
      }
      if ((*(uint *)(((ulong)pIVar6 | 0xb) + (ulong)*puVar10) >> 0x15 & 1) == 0) {
        if (((byte)this[0x10] >> 2 & 1) == 0) {
          uVar4 = 1;
        }
        else {
          uVar4 = IsConstFieldValueEqualTo(this,*param_2);
          pIVar6 = *(Isolate **)(this + 0x18);
          uVar4 = uVar4 & 1;
          puVar10 = (uint *)(*puVar13 - 1);
        }
        uVar1 = *puVar10;
        if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar8 = *(ulong **)(pIVar6 + 0x95a0);
          if (puVar8 == *(ulong **)(pIVar6 + 0x95a8)) {
            puVar8 = (ulong *)HandleScope::Extend(pIVar6);
          }
          *(ulong **)(pIVar6 + 0x95a0) = puVar8 + 1;
          *puVar8 = (ulong)(pIVar6 + uVar1);
        }
        else {
          puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),
                                       (ulong)(pIVar6 + uVar1));
        }
        puVar9 = (ulong *)Map::Update(*(undefined8 *)(this + 0x18),puVar8);
        if (((*(uint *)(*puVar9 + 0xb) >> 0x15 & 1) == 0) &&
           ((puVar9 = (ulong *)Map::PrepareForDataProperty
                                         (*(undefined8 *)(this + 0x18),puVar9,
                                          *(undefined8 *)(this + 0x50),uVar4,param_2),
            puVar8 == puVar9 ||
            (((puVar8 != (ulong *)0x0 && (puVar9 != (ulong *)0x0)) && (*puVar8 == *puVar9)))))) {
          if (((*(uint *)(this + 0x10) & 0x1c0) == 0) ||
             ((*(uint *)(this + 0x10) >> 2 & 1) != uVar4)) {
            *(int *)(this + 0x10) =
                 *(int *)(*(long *)(this + 0x18) + (ulong)*(uint *)(*puVar9 + 0x17) +
                         (*(long *)(this + 0x50) * 0xc00000000 + 0x1000000000 >> 0x20 | 3U)) >> 1;
          }
        }
        else {
          JSObject::MigrateToMap(*(undefined8 *)(this + 0x18),puVar13,puVar9,0);
          *(undefined4 *)(this + 4) = 2;
          *(undefined4 *)(this + 0xc) = 0;
          if (*(ushort *)
               (*(long *)(this + 0x18) + (ulong)*(uint *)(**(long **)(this + 0x38) + -1) + 7) <
              0x411) {
            uVar5 = LookupInSpecialHolder<false>();
          }
          else {
            uVar5 = LookupInRegularHolder<false>(this);
          }
          *(undefined4 *)(this + 4) = uVar5;
        }
      }
    }
  }
  return;
}

