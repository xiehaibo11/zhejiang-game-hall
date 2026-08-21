
/* v8::internal::JSRegExpResultIndices::BuildIndices(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::RegExpMatchInfo>, v8::internal::Handle<v8::internal::Object>)
    */

ulong * v8::internal::JSRegExpResultIndices::BuildIndices
                  (Isolate *param_1,long *param_2,ulong *param_3)

{
  Isolate *pIVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long *plVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int iVar22;
  ulong local_68;
  
  uVar14 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar14 = uVar14 | *(uint *)((uVar14 | *(uint *)((uVar14 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x263);
  pIVar1 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar1;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar7 + 1;
    *puVar7 = uVar14;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
  }
  puVar7 = (ulong *)Factory::NewJSObjectFromMap(param_1,puVar7,0,0);
  *(undefined4 *)(*puVar7 + 0xb) = 0;
  iVar22 = *(int *)(*param_2 + 7);
  iVar3 = iVar22 >> 2;
  puVar8 = (ulong *)Factory::NewFixedArray((Factory *)param_1,iVar3,0);
  JSObject::EnsureCanContainElements(puVar7,puVar8,*(int *)(*puVar8 + 3) >> 1,1);
  uVar21 = *puVar7;
  uVar14 = *puVar8;
  *(int *)(uVar21 + 7) = (int)uVar14;
  if ((uVar14 & 1) != 0) {
    uVar15 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar21,uVar21 + 7,uVar14);
      uVar15 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar21 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar21,uVar21 + 7,uVar14);
    }
  }
  *(uint *)(*puVar7 + 0xb) = *(uint *)(*puVar8 + 3) & 0xfffffffe;
  if (3 < iVar22) {
    lVar18 = 0;
    iVar22 = 0x17;
    lVar20 = 0xc00000000;
    lVar19 = 7;
    do {
      uVar5 = *(uint *)(*param_2 + (lVar20 >> 0x20) + 7);
      uVar6 = *(uint *)(*param_2 + (long)iVar22);
      if (uVar5 < 0xfffffffe) {
        plVar9 = (long *)Factory::NewFixedArray((Factory *)param_1,2,0);
        *(uint *)(*plVar9 + 7) = uVar5 & 0xfffffffe;
        *(uint *)(*plVar9 + 0xb) = uVar6 & 0xfffffffe;
        puVar10 = (ulong *)Factory::NewJSArrayWithElements(param_1,plVar9,0,2,0);
        uVar21 = *puVar8;
        uVar14 = *puVar10;
      }
      else {
        uVar21 = *puVar8;
        uVar14 = *(ulong *)(param_1 + 0xa0);
      }
      puVar2 = (undefined4 *)(lVar19 + uVar21);
      *puVar2 = (int)uVar14;
      if ((uVar14 & 1) != 0) {
        uVar15 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar15 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar21,puVar2,uVar14);
          uVar15 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar21 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar21,puVar2,uVar14);
        }
      }
      lVar18 = lVar18 + 1;
      iVar22 = iVar22 + 8;
      lVar20 = lVar20 + 0x800000000;
      lVar19 = lVar19 + 4;
    } while (lVar18 < iVar3);
  }
  uVar14 = *puVar7;
  uVar21 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 - 1);
  uVar5 = *(int *)((uVar14 & 0xffffffff00000000 | 0x1f) + (ulong)*(uint *)(uVar21 + 0x17)) >> 1;
  uVar6 = uVar5 >> 0x13 & 0x3ff;
  iVar3 = (uint)*(byte *)(uVar21 + 3) - (uint)*(byte *)(uVar21 + 4);
  if ((int)uVar6 < iVar3) {
    uVar15 = (ulong)*(byte *)(uVar21 + 4) << 0x1c;
    iVar22 = (uVar6 + *(byte *)(uVar21 + 4)) * 4;
  }
  else {
    iVar22 = (uVar6 - iVar3) * 4 + 8;
    uVar15 = 0x20000000;
  }
  uVar5 = uVar5 >> 6 & 7;
  local_68 = CONCAT71(local_68._1_7_,(char)uVar5);
  if (4 < uVar5) {
    uVar13 = Representation::Mnemonic((Representation *)&local_68);
    PrintF("%s\n",uVar13);
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uVar16 = *(ulong *)(&DAT_019d7618 + (ulong)uVar5 * 8);
  uVar21 = *param_3;
  if (((uVar21 & 1) == 0) || (uVar13 = *(undefined8 *)(param_1 + 0xa0), (int)uVar21 != (int)uVar13))
  {
    iVar17 = *(int *)(uVar21 + 3);
    iVar4 = iVar17 >> 2;
    uVar13 = BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::New
                       (param_1,iVar4,0,0);
    if (3 < iVar17) {
      lVar19 = 0;
      lVar18 = 0;
      iVar17 = 4;
      do {
        uVar14 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + (lVar19 >> 0x20 | 7U));
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar10 = *(ulong **)pIVar1;
          if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
            puVar10 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar10 + 1;
          *puVar10 = uVar14;
        }
        else {
          puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
        }
        uVar14 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + (long)iVar17 + 7);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar11 = *(ulong **)pIVar1;
          if (puVar11 == *(ulong **)(param_1 + 0x95a8)) {
            puVar11 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar11 + 1;
          *puVar11 = uVar14;
        }
        else {
          puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
          uVar14 = *puVar11;
        }
        uVar14 = *puVar8 & 0xffffffff00000000 |
                 (ulong)*(uint *)(*puVar8 + (long)(int)(((uint)uVar14 & 0x7ffffffe) << 1) + 7);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar11 = *(ulong **)pIVar1;
          if (puVar11 == *(ulong **)(param_1 + 0x95a8)) {
            puVar11 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar11 + 1;
          *puVar11 = uVar14;
        }
        else {
          puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
        }
        uVar13 = BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>
                 ::Add(param_1,uVar13,puVar10,puVar11,0xc0,0);
        lVar18 = lVar18 + 1;
        iVar17 = iVar17 + 8;
        lVar19 = lVar19 + 0x800000000;
      } while (lVar18 < iVar4);
    }
    puVar12 = (undefined8 *)
              Factory::NewSlowJSObjectWithPropertiesAndElements
                        ((Factory *)param_1,param_1 + 0xb0,uVar13,param_1 + 0x168);
    uVar13 = *puVar12;
    uVar14 = *puVar7;
  }
  local_68 = uVar14;
  JSObject::RawFastPropertyAtPut
            ((JSObject *)&local_68,
             (ulong)((int)uVar6 < iVar3) << 0xd | (long)iVar3 << 0x10 | (long)iVar22 | uVar15 |
             uVar16,uVar13,4);
  return puVar7;
}

