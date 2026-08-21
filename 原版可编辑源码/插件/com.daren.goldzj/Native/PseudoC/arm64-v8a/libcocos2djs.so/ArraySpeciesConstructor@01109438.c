
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::Object::ArraySpeciesConstructor(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

Isolate * v8::internal::Object::ArraySpeciesConstructor(Isolate *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  ushort uVar2;
  Isolate *pIVar3;
  undefined8 *puVar4;
  Isolate *pIVar5;
  long *plVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  Isolate *pIVar13;
  uint uVar14;
  long lVar15;
  undefined4 local_a8;
  int local_a4;
  undefined8 local_9c;
  Isolate *local_90;
  Isolate *local_88;
  undefined8 uStack_80;
  Isolate *local_78;
  undefined8 uStack_70;
  Isolate *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar10 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  pIVar8 = param_1 + 0x95a0;
  uVar10 = uVar10 | *(uint *)((uVar10 | *(uint *)((uVar10 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x2f);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    pIVar3 = *(Isolate **)pIVar8;
    if (pIVar3 == *(Isolate **)(param_1 + 0x95a8)) {
      pIVar3 = (Isolate *)HandleScope::Extend(param_1);
    }
    *(Isolate **)pIVar8 = pIVar3 + 8;
    *(ulong *)pIVar3 = uVar10;
    uVar10 = *param_2;
  }
  else {
    pIVar3 = (Isolate *)
             CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
    uVar10 = *param_2;
  }
  if (((uVar10 & 1) != 0) &&
     (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x423)) {
    uVar14 = *(uint *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1)) + 0xf);
    uVar10 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    uVar12 = *(uint *)((uVar10 | *(uint *)((uVar10 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) +
                                          0x13)) + 0xe7);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar8;
      if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar8 = puVar7 + 1;
      *puVar7 = uVar10 | uVar12;
    }
    else {
      puVar4 = (undefined8 *)
               CanonicalHandleScope::Lookup
                         (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10 | uVar12);
      uVar12 = (uint)*puVar4;
    }
    if ((uVar14 == uVar12) && (*(int *)(*(long *)(param_1 + 0xeb8) + 0xb) == 2)) {
      return pIVar3;
    }
  }
  uVar10 = *param_2;
  pIVar1 = param_1 + 0xa0;
  pIVar13 = pIVar1;
  if ((uVar10 & 1) != 0) {
    uVar11 = uVar10 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar11 + *(uint *)(uVar10 - 1)) == 0x423) {
LAB_011095d0:
      pIVar5 = (Isolate *)GetProperty(param_1,param_2,param_1 + 0x5d0);
      if (pIVar5 == (Isolate *)0x0) {
        return (Isolate *)0x0;
      }
      uVar10 = *(ulong *)pIVar5;
      pIVar13 = pIVar5;
      if (((uVar10 & 1) != 0) &&
         ((*(byte *)((uVar10 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar10 - 1)) >> 6 & 1) !=
          0)) {
        plVar6 = (long *)JSReceiver::GetFunctionRealm(pIVar5);
        if (plVar6 == (long *)0x0) {
          return (Isolate *)0x0;
        }
        lVar15 = *plVar6;
        uVar10 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
        uVar14 = *(uint *)((uVar10 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
        uVar10 = uVar10 | uVar14;
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)pIVar8;
          if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
            puVar7 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar8 = puVar7 + 1;
          *puVar7 = uVar10;
        }
        else {
          puVar4 = (undefined8 *)
                   CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10)
          ;
          uVar14 = (uint)*puVar4;
        }
        if (((uint)lVar15 != uVar14) &&
           (pIVar13 = pIVar1, *(int *)(*plVar6 + 0x2f) != *(int *)pIVar5)) {
          pIVar13 = pIVar5;
        }
      }
      uVar10 = *(ulong *)pIVar13;
      if (((uVar10 & 1) != 0) &&
         (0xa8 < *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)))) {
        uVar10 = *(ulong *)(param_1 + 0xc48);
        local_88 = param_1 + 0xc48;
        local_a8 = 3;
        if ((*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x40) &&
           (local_a8 = 3, (*(byte *)(uVar10 + 7) & 1) != 0)) {
          local_a8 = 0;
        }
        local_9c = 0xc000000000;
        local_90 = param_1;
        if ((*(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) & 0xffe0)
            == 0x20) {
          local_88 = (Isolate *)StringTable::LookupString(param_1);
        }
        uStack_80 = 0;
        uStack_70 = 0;
        local_58 = 0xffffffffffffffff;
        uStack_60 = 0xffffffffffffffff;
        local_78 = pIVar13;
        local_68 = pIVar13;
        LookupIterator::Start<false>((LookupIterator *)&local_a8);
        if (local_a4 == 4) {
          pIVar8 = local_90 + 0xa0;
          uVar10 = *(ulong *)pIVar8;
          iVar9 = (int)uVar10;
        }
        else {
          pIVar8 = (Isolate *)GetProperty((LookupIterator *)&local_a8,false);
          if (pIVar8 == (Isolate *)0x0) {
            return (Isolate *)0x0;
          }
          uVar10 = *(ulong *)pIVar8;
          iVar9 = (int)uVar10;
        }
        pIVar13 = pIVar8;
        if ((uVar10 & 1) != 0) {
          pIVar13 = pIVar1;
          if (iVar9 != *(int *)(param_1 + 0xb0)) {
            pIVar13 = pIVar8;
          }
          uVar10 = *(ulong *)pIVar13;
          goto joined_r0x011097b4;
        }
      }
    }
    else if (*(short *)(uVar11 + *(uint *)(uVar10 - 1)) == 0xa9) {
      uVar2 = JSProxy::IsArray(param_2);
      if ((uVar2 & 0xff) == 0) {
        return (Isolate *)0x0;
      }
      if (0xff < uVar2) goto LAB_011095d0;
    }
  }
  uVar10 = *(ulong *)pIVar13;
joined_r0x011097b4:
  if ((uVar10 & 1) != 0) {
    if ((int)uVar10 == *(int *)pIVar1) {
      return pIVar3;
    }
    if ((*(byte *)((uVar10 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar10 - 1)) >> 6 & 1) != 0)
    {
      return pIVar13;
    }
  }
  puVar4 = (undefined8 *)Factory::NewTypeError((Factory *)param_1,0x126,0,0,0);
  Isolate::Throw(param_1,*puVar4,0);
  return (Isolate *)0x0;
}

