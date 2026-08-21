
/* v8::internal::JSObject::SetNormalizedProperty(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::PropertyDetails) */

void v8::internal::JSObject::SetNormalizedProperty
               (ulong *param_1,long *param_2,ulong *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  int iVar7;
  Isolate *pIVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  Isolate *pIVar14;
  ulong uVar15;
  ulong local_68;
  
  uVar12 = *param_1;
  uVar3 = *(uint *)(*param_2 + 3);
  pIVar14 = (Isolate *)(uVar12 & 0xffffffff00000000);
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar3 >> 3;
    pIVar8 = pIVar14;
  }
  else {
    local_68 = *param_2;
    uVar3 = String::ComputeAndSetHash((String *)&local_68);
    uVar12 = *param_1;
    pIVar8 = (Isolate *)(uVar12 & 0xffffffff00000000);
  }
  uVar15 = (ulong)pIVar8 | (ulong)*(uint *)(uVar12 + 3);
  if (*(short *)(((ulong)pIVar8 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0xaa) {
    if ((*(uint *)(uVar12 + 3) & 1) == 0) {
      uVar15 = *(ulong *)(pIVar8 + 0x410);
    }
    if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar14 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar14 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar14);
      }
      *(ulong **)(pIVar14 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar15;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar15);
      uVar15 = *puVar4;
    }
    uVar3 = *(uint *)(*param_2 + 3);
    if ((uVar3 & 1) == 0) {
      uVar3 = uVar3 >> 3;
    }
    else {
      local_68 = *param_2;
      uVar3 = String::ComputeAndSetHash((String *)&local_68);
    }
    uVar13 = (*(int *)(uVar15 + 0xf) >> 1) - 1;
    uVar3 = uVar13 & uVar3;
    uVar12 = (ulong)uVar3;
    lVar10 = (ulong)(uVar3 * 3) << 0x22;
    iVar7 = *(int *)((lVar10 + 0x1400000000 >> 0x20) + uVar15 + 7);
    if (iVar7 != *(int *)(pIVar14 + 0xa0)) {
      if (iVar7 != (int)*param_2) {
        iVar7 = 1;
        do {
          uVar12 = (ulong)((int)uVar12 + iVar7 & uVar13);
          lVar10 = uVar12 * 0xc00000000;
          iVar1 = *(int *)((lVar10 + 0x1400000000 >> 0x20) + uVar15 + 7);
          if (iVar1 == *(int *)(pIVar14 + 0xa0)) goto LAB_010d2de0;
          iVar7 = iVar7 + 1;
        } while (iVar1 != (int)*param_2);
      }
      local_68 = *puVar4;
      Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::SetEntry
                ((Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape> *)
                 &local_68,pIVar14,uVar12,*param_2,*param_3,
                 *(uint *)(local_68 + (lVar10 + 0x1c00000000 >> 0x20) + 7) >> 1 & 0x7fffff00 |
                 param_4 & 0x800000ff);
      return;
    }
LAB_010d2de0:
    puVar6 = (undefined8 *)
             BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::Add
                       (pIVar14,puVar4,param_2,param_3,param_4,0);
    local_68 = *param_1;
    JSReceiver::SetProperties((JSReceiver *)&local_68,*puVar6);
    return;
  }
  if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar14 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar14 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar14);
    }
    *(ulong **)(pIVar14 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar15;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar15);
    uVar15 = *puVar4;
  }
  uVar2 = (*(int *)(uVar15 + 0xf) >> 1) - 1;
  uVar3 = uVar2 & uVar3;
  uVar13 = *(uint *)(uVar15 + 7 + (long)(int)(uVar3 * 4 + 0x14));
  if (uVar13 != *(uint *)(pIVar14 + 0xa0)) {
    iVar7 = 1;
    do {
      if (*(int *)((uVar15 & 0xffffffff00000000 | (ulong)uVar13) + 3) == (int)*param_2) {
        puVar4 = (ulong *)PropertyCell::PrepareForValue(pIVar14,puVar4,uVar3,param_3,param_4);
        uVar12 = *puVar4;
        uVar15 = *param_3;
        *(int *)(uVar12 + 0xb) = (int)uVar15;
        if ((uVar15 & 1) == 0) {
          return;
        }
        uVar9 = uVar15 & 0xfffffffffffc0000;
        uVar11 = *(ulong *)(uVar9 + 8);
        lVar10 = uVar12 + 0xb;
        uVar3 = (uint)uVar11;
        goto joined_r0x010d2ed4;
      }
      uVar3 = uVar3 + iVar7 & uVar2;
      uVar13 = *(uint *)(uVar15 + 7 + (long)(int)(uVar3 * 4 + 0x14));
      iVar7 = iVar7 + 1;
    } while (uVar13 != *(uint *)(pIVar14 + 0xa0));
  }
  puVar5 = (ulong *)Factory::NewPropertyCell((Factory *)pIVar14,param_2,1);
  uVar15 = *puVar5;
  uVar12 = *param_3;
  *(int *)(uVar15 + 0xb) = (int)uVar12;
  if ((uVar12 & 1) != 0) {
    uVar9 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar15,uVar15 + 0xb,uVar12);
      uVar9 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar15,uVar15 + 0xb,uVar12);
      uVar12 = *param_3;
      iVar7 = (int)uVar12;
      goto joined_r0x010d2d50;
    }
  }
  uVar12 = *param_3;
  iVar7 = (int)uVar12;
joined_r0x010d2d50:
  if ((uVar12 & 1) == 0) {
    uVar3 = 0x40;
  }
  else {
    uVar3 = (uint)(iVar7 != *(int *)(pIVar14 + 0xa0)) << 6;
  }
  puVar4 = (ulong *)BaseNameDictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>
                    ::Add(pIVar14,puVar4,param_2,puVar5,uVar3 | param_4 & 0xffffff3f,0);
  uVar12 = *param_1;
  uVar15 = *puVar4;
  *(int *)(uVar12 + 3) = (int)uVar15;
  if ((uVar15 & 1) != 0) {
    uVar9 = uVar15 & 0xfffffffffffc0000;
    uVar11 = *(ulong *)(uVar9 + 8);
    lVar10 = uVar12 + 3;
    uVar3 = (uint)uVar11;
joined_r0x010d2ed4:
    if ((uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar12,lVar10,uVar15);
      uVar11 = *(ulong *)(uVar9 | 8);
    }
    if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar12,lVar10,uVar15);
    }
  }
  return;
}

