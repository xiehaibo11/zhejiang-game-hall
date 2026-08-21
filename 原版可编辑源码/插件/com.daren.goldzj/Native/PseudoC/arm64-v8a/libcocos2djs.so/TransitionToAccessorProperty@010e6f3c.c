
/* v8::internal::LookupIterator::TransitionToAccessorProperty(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyAttributes) */

void __thiscall
v8::internal::LookupIterator::TransitionToAccessorProperty
          (LookupIterator *this,int *param_2,int *param_3,uint param_4)

{
  Isolate *pIVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong local_58;
  
  puVar11 = *(ulong **)(this + 0x30);
  uVar9 = *puVar11;
  if ((uVar9 & 1) != 0) {
    pIVar5 = *(Isolate **)(this + 0x18);
    if ((*(short *)(((ulong)pIVar5 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0xab) &&
       (pIVar1 = pIVar5 + *(uint *)(((ulong)pIVar5 | 0xf) + (ulong)*(uint *)(uVar9 - 1)),
       *(short *)(((ulong)pIVar5 | 7) + (ulong)*(uint *)(pIVar1 + -1)) == 0xaa)) {
      if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar11 = *(ulong **)(pIVar5 + 0x95a0);
        if (puVar11 == *(ulong **)(pIVar5 + 0x95a8)) {
          puVar11 = (ulong *)HandleScope::Extend(pIVar5);
        }
        *(ulong **)(pIVar5 + 0x95a0) = puVar11 + 1;
        *puVar11 = (ulong)pIVar1;
      }
      else {
        puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),(ulong)pIVar1);
      }
    }
  }
  if (*(ulong *)(this + 0x48) == 0xffffffffffffffff) {
    pIVar5 = *(Isolate **)(this + 0x18);
    if (*(short *)(((ulong)pIVar5 | 7) + (ulong)*(uint *)(**(long **)(this + 0x20) + -1)) == 0x40) {
      param_4 = (*(uint *)(**(long **)(this + 0x20) + 7) & 1) << 1 | param_4;
    }
    uVar9 = *puVar11;
LAB_010e7064:
    if ((*(uint *)(((ulong)pIVar5 | 0xb) + (ulong)*(uint *)(uVar9 - 1)) >> 0x15 & 1) == 0) {
      uVar2 = *(uint *)(uVar9 - 1);
      if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)(pIVar5 + 0x95a0);
        if (puVar6 == *(ulong **)(pIVar5 + 0x95a8)) {
          puVar6 = (ulong *)HandleScope::Extend(pIVar5);
        }
        *(ulong **)(pIVar5 + 0x95a0) = puVar6 + 1;
        *puVar6 = (ulong)(pIVar5 + uVar2);
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),
                                     (ulong)(pIVar5 + uVar2));
      }
      puVar10 = *(ulong **)(this + 0x38);
      if ((puVar10 == puVar11) ||
         (((puVar11 != (ulong *)0x0 && (puVar10 != (ulong *)0x0)) && (*puVar10 == *puVar11)))) {
        if (*(int *)(this + 4) == 2) {
          LookupInRegularHolder<false>(this,*puVar6,*puVar10);
        }
      }
      else {
        *(ulong **)(this + 0x38) = puVar11;
        *(undefined4 *)(this + 4) = 4;
      }
      plVar7 = (long *)Map::TransitionToAccessorProperty
                                 (*(undefined8 *)(this + 0x18),puVar6,*(undefined8 *)(this + 0x20),
                                  *(undefined8 *)(this + 0x50),param_2,param_3,param_4);
      uVar8 = *(ulong *)(this + 0x18);
      uVar9 = *(uint *)(*plVar7 + 0x13) + uVar8;
      if (((uVar9 & 1) == 0) || (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0xa2)) {
        uVar9 = *(ulong *)(uVar8 + 0xa0);
      }
      iVar3 = *(int *)(*puVar11 - 1);
      JSObject::MigrateToMap(uVar8,puVar11,plVar7,0);
      if (iVar3 + (int)uVar8 == (int)uVar9) {
        *(long *)(this + 0x50) = (long)(int)((*(uint *)(*plVar7 + 0xb) >> 10 & 0x3ff) - 1);
        iVar3 = *(int *)(*(long *)(this + 0x18) + (ulong)*(uint *)(*plVar7 + 0x17) +
                        ((long)(int)((*(uint *)(*plVar7 + 0xb) >> 10 & 0x3ff) - 1) * 0xc00000000 +
                         0x1000000000 >> 0x20 | 3U));
        *(undefined4 *)(this + 4) = 5;
        *(int *)(this + 0x10) = iVar3 >> 1;
        return;
      }
      *(undefined4 *)(this + 4) = 2;
      *(undefined4 *)(this + 0xc) = 0;
      if (*(ushort *)(*(long *)(this + 0x18) + (ulong)*(uint *)(**(long **)(this + 0x38) + -1) + 7)
          < 0x411) {
        uVar4 = LookupInSpecialHolder<false>();
      }
      else {
        uVar4 = LookupInRegularHolder<false>(this);
      }
      *(undefined4 *)(this + 4) = uVar4;
      if ((*(uint *)(*plVar7 + 0xb) >> 0x15 & 1) == 0) {
        return;
      }
    }
  }
  else if ((0xfffffffe < *(ulong *)(this + 0x48)) &&
          (uVar9 = *puVar11,
          10 < (byte)((*(byte *)((uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 - 1)) + 10) >>
                      3) - 0x11))) {
    pIVar5 = *(Isolate **)(this + 0x18);
    goto LAB_010e7064;
  }
  if (*(int *)(this + 4) == 5) {
    puVar6 = (ulong *)FetchValue(this);
    if (((*puVar6 & 1) == 0) ||
       (*(short *)((*(ulong *)(this + 0x18) | 7) + (ulong)*(uint *)(*puVar6 - 1)) != 0x52))
    goto LAB_010e7308;
    plVar7 = (long *)FetchValue(this);
    if ((*(int *)(*plVar7 + 3) == *param_2) && (*(int *)(*plVar7 + 7) == *param_3)) {
      if ((*(uint *)(this + 0x10) >> 3 & 7) == param_4) {
        if (*(ulong *)(this + 0x48) < 0xffffffff) {
          return;
        }
        if ((*(ulong *)(this + 0x48) != 0xffffffffffffffff) &&
           ((byte)((*(byte *)((*puVar11 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar11 - 1)) + 10)
                   >> 3) - 0x11) < 0xb)) {
          return;
        }
        JSObject::ReoptimizeIfPrototype(puVar11);
        return;
      }
      goto LAB_010e732c;
    }
    plVar7 = (long *)AccessorPair::Copy(*(undefined8 *)(this + 0x18),plVar7);
  }
  else {
LAB_010e7308:
    plVar7 = (long *)Factory::NewAccessorPair(*(Factory **)(this + 0x18));
  }
  local_58 = *plVar7;
  AccessorPair::SetComponents
            ((AccessorPair *)&local_58,*(undefined8 *)param_2,*(undefined8 *)param_3);
LAB_010e732c:
  TransitionToAccessorPair(this,plVar7,param_4);
  if (FLAG_verify_heap != '\0') {
    local_58 = *puVar11;
    JSObject::JSObjectVerify((JSObject *)&local_58,*(Isolate **)(this + 0x18));
  }
  return;
}

