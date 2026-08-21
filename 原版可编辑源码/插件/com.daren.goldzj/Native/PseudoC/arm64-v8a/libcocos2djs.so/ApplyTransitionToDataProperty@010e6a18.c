
/* v8::internal::LookupIterator::ApplyTransitionToDataProperty(v8::internal::Handle<v8::internal::JSReceiver>)
    */

void __thiscall
v8::internal::LookupIterator::ApplyTransitionToDataProperty(LookupIterator *this,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  Isolate *pIVar13;
  ulong uVar14;
  long local_68;
  
  *(long **)(this + 0x38) = param_2;
  lVar10 = *param_2;
  uVar12 = *(ulong *)(this + 0x18);
  if (*(short *)((uVar12 | 7) + (ulong)*(uint *)(lVar10 + -1)) == 0xaa) {
    JSObject::InvalidatePrototypeChains(*(uint *)(lVar10 + -1) + uVar12);
    *(undefined4 *)(this + 4) = 6;
  }
  else {
    puVar11 = *(ulong **)(this + 0x28);
    uVar7 = *puVar11;
    uVar14 = *(uint *)(uVar7 + 0x13) + uVar12;
    if (((uVar14 & 1) == 0) || (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar14 - 1)) != 0xa2)) {
      uVar14 = *(ulong *)(uVar12 + 0xa0);
    }
    iVar1 = *(int *)(lVar10 + -1);
    if ((*(int *)this == 3) && ((*(uint *)(uVar7 + 0xb) >> 0x15 & 1) == 0)) {
      uVar8 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x1f);
      if ((*(uint *)(uVar7 + 0x1f) & 1) != 0) {
        uVar8 = (ulong)*(uint *)(uVar8 + 3);
      }
      if ((int)uVar8 != 0) {
        puVar3 = (ulong *)Map::GetOrCreatePrototypeChainValidityCell(puVar11,uVar12);
        uVar8 = *puVar11;
        uVar7 = *puVar3;
        *(int *)(uVar8 + 0x1f) = (int)uVar7;
        if ((uVar7 & 1) != 0) {
          uVar9 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar9 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x1f,uVar7);
            uVar9 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0x1f,uVar7);
          }
        }
      }
    }
    if (*(short *)((*(ulong *)(this + 0x18) | 7) + (ulong)*(uint *)(*param_2 + -1)) != 0xa9) {
      JSObject::MigrateToMap(*(ulong *)(this + 0x18),param_2,puVar11,0);
    }
    if (iVar1 + (int)uVar12 == (int)uVar14) {
      *(long *)(this + 0x50) = (long)(int)((*(uint *)(*puVar11 + 0xb) >> 10 & 0x3ff) - 1);
      iVar1 = *(int *)(*(long *)(this + 0x18) + (ulong)*(uint *)(*puVar11 + 0x17) +
                      ((long)(int)((*(uint *)(*puVar11 + 0xb) >> 10 & 0x3ff) - 1) * 0xc00000000 +
                       0x1000000000 >> 0x20 | 3U));
      *(undefined4 *)(this + 4) = 6;
      *(int *)(this + 0x10) = iVar1 >> 1;
    }
    else {
      pIVar4 = *(Isolate **)(this + 0x18);
      if ((*(uint *)(((ulong)pIVar4 | 0xb) + (ulong)*(uint *)(*param_2 + -1)) >> 0x15 & 1) == 0) {
        *(undefined4 *)(this + 4) = 2;
        *(undefined4 *)(this + 0xc) = 0;
        if (*(ushort *)(pIVar4 + (ulong)*(uint *)(**(long **)(this + 0x38) + -1) + 7) < 0x411) {
          uVar2 = LookupInSpecialHolder<false>();
        }
        else {
          uVar2 = LookupInRegularHolder<false>(this);
        }
        *(undefined4 *)(this + 4) = uVar2;
      }
      else {
        pIVar13 = pIVar4 + *(uint *)(*param_2 + 3);
        if (((ulong)pIVar13 & 1) == 0) {
          pIVar13 = *(Isolate **)(pIVar4 + 0x410);
        }
        if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(undefined8 **)(pIVar4 + 0x95a0);
          if (puVar5 == *(undefined8 **)(pIVar4 + 0x95a8)) {
            puVar5 = (undefined8 *)HandleScope::Extend(pIVar4);
          }
          *(undefined8 **)(pIVar4 + 0x95a0) = puVar5 + 1;
          *puVar5 = pIVar13;
        }
        else {
          puVar5 = (undefined8 *)
                   CanonicalHandleScope::Lookup
                             (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),(ulong)pIVar13);
        }
        lVar10 = *param_2;
        uVar12 = *(ulong *)(this + 0x18);
        if (((*(uint *)((uVar12 | 0xb) + (ulong)*(uint *)(lVar10 + -1)) >> 0x14 & 1) != 0) &&
           (0xa9 < *(ushort *)((uVar12 | 7) + (ulong)*(uint *)(lVar10 + -1)))) {
          JSObject::InvalidatePrototypeChains(uVar12 + *(uint *)(lVar10 + -1));
          uVar12 = *(ulong *)(this + 0x18);
        }
        plVar6 = (long *)BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>
                         ::Add(uVar12,puVar5,*(undefined8 *)(this + 0x20),uVar12 + 0x98,
                               *(undefined4 *)(this + 0x10),this + 0x50);
        local_68 = *param_2;
        JSReceiver::SetProperties((JSReceiver *)&local_68,*plVar6);
        iVar1 = *(int *)(*plVar6 + (*(long *)(this + 0x50) * 0xc00000000 + 0x1c00000000 >> 0x20) + 7
                        );
        this[8] = (LookupIterator)0x1;
        *(int *)(this + 0x10) = iVar1 >> 1;
        *(undefined4 *)(this + 4) = 6;
      }
    }
  }
  return;
}

