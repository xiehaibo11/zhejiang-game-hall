
/* v8::internal::FrameArrayBuilder::GetElementsAsStackTraceFrameArray(bool) */

ulong * __thiscall
v8::internal::FrameArrayBuilder::GetElementsAsStackTraceFrameArray
          (FrameArrayBuilder *this,bool param_1)

{
  long lVar1;
  Isolate *pIVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  int *piVar14;
  CanonicalHandleScope *this_00;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  Isolate *pIVar20;
  double dVar21;
  ulong local_68;
  
  local_68 = **(ulong **)(this + 0x20);
  FrameArray::ShrinkToFit((FrameArray *)&local_68,*(Isolate **)this);
  iVar16 = *(int *)(**(long **)(this + 0x20) + 7);
  iVar4 = iVar16 >> 1;
  puVar9 = (ulong *)Factory::NewFixedArray(*(Factory **)this,iVar4,0);
  if (iVar16 < 2) {
    return puVar9;
  }
  uVar17 = 0;
  if (param_1) goto LAB_00f57fb0;
LAB_00f580a8:
  bVar8 = false;
LAB_00f580ac:
  do {
    puVar10 = (ulong *)Factory::NewStackTraceFrame
                                 (*(Factory **)this,*(undefined8 *)(this + 0x20),uVar17 & 0xffffffff
                                 );
    uVar19 = *puVar9;
    uVar18 = *puVar10;
    lVar1 = uVar19 + (long)((int)uVar17 << 2);
    *(int *)(lVar1 + 7) = (int)uVar18;
    if ((uVar18 & 1) != 0) {
      uVar15 = *(ulong *)((uVar18 & 0xfffffffffffc0000) + 8);
      lVar1 = lVar1 + 7;
      if (((uint)uVar15 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar19,lVar1,uVar18);
        uVar15 = *(ulong *)(uVar18 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar19 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar19,lVar1,uVar18);
      }
    }
    if (bVar8) {
      pIVar20 = *(Isolate **)this;
      uVar6 = (int)uVar17 * 0x18 | 4;
      pIVar2 = pIVar20 + 0x95a0;
      uVar18 = **(ulong **)(this + 0x20) & 0xffffffff00000000 |
               (ulong)*(uint *)(**(ulong **)(this + 0x20) + (long)(int)(uVar6 + 8) + 7);
      if (*(CanonicalHandleScope **)(pIVar20 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar11 = *(ulong **)pIVar2;
        if (puVar11 == *(ulong **)(pIVar20 + 0x95a8)) {
          puVar11 = (ulong *)HandleScope::Extend(pIVar20);
        }
        *(ulong **)pIVar2 = puVar11 + 1;
        *puVar11 = uVar18;
      }
      else {
        puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar20 + 0x95b8),uVar18);
      }
      iVar16 = *(int *)(**(long **)(this + 0x20) + ((long)(int)(uVar6 + 0xc) | 7U));
      if (FLAG_optimize_for_size == '\0') {
        uVar19 = *puVar11;
        uVar18 = uVar19 & 0xffffffff00000000;
        lVar1 = 0xb;
        if (*(short *)((uVar18 | 7) + (ulong)*(uint *)(uVar19 - 1)) != 0x9a) {
          lVar1 = 0xf;
        }
        if (((*(uint *)(lVar1 + uVar19) & 1) == 0) ||
           (uVar19 = uVar18 | *(uint *)(lVar1 + uVar19),
           *(short *)((uVar18 | 7) + (ulong)*(uint *)(uVar19 - 1)) != 0x69)) {
          uVar18 = 0;
        }
        else {
          uVar18 = uVar18 | *(uint *)(uVar19 + 7);
        }
        if (*(CanonicalHandleScope **)(pIVar20 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar12 = *(ulong **)pIVar2;
          if (puVar12 == *(ulong **)(pIVar20 + 0x95a8)) {
            puVar12 = (ulong *)HandleScope::Extend(pIVar20);
          }
          *(ulong **)pIVar2 = puVar12 + 1;
          *puVar12 = uVar18;
          uVar18 = *puVar12;
          if ((uVar18 & 1) != 0) goto LAB_00f58270;
LAB_00f5828c:
          puVar13 = (ulong *)HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>
                             ::New(pIVar20,1,0,0);
        }
        else {
          puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar20 + 0x95b8),uVar18);
          uVar18 = *puVar12;
          if ((uVar18 & 1) == 0) goto LAB_00f5828c;
LAB_00f58270:
          puVar13 = puVar12;
          if (*(short *)((uVar18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar18 - 1)) != 0x7f)
          goto LAB_00f5828c;
        }
        piVar14 = (int *)SimpleNumberDictionary::Set(pIVar20,puVar13,iVar16 >> 1,puVar10);
        if (((*piVar14 != (int)*puVar13) || (uVar18 = *puVar12, (uVar18 & 1) == 0)) ||
           (*(short *)((uVar18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar18 - 1)) != 0x7f)) {
          AbstractCode::SetStackFrameCache(puVar11,piVar14);
        }
      }
    }
LAB_00f57f9c:
    uVar17 = uVar17 + 1;
    if ((long)iVar4 <= (long)uVar17) {
      return puVar9;
    }
    if (!param_1) goto LAB_00f580a8;
LAB_00f57fb0:
    if (*(char *)(*(long *)this + 0xb6b8) != '\0') goto LAB_00f580a8;
    uVar6 = (int)uVar17 * 0x18 | 4;
    uVar18 = **(ulong **)(this + 0x20);
    lVar1 = (long)(int)(uVar6 + 0x10) + 7;
    if ((((*(uint *)(lVar1 + uVar18) >> 1 & 1) != 0) || ((*(uint *)(uVar18 + lVar1) >> 2 & 1) != 0))
       || (((*(uint *)(uVar18 + lVar1) >> 2 & 1) != 0 || ((*(uint *)(uVar18 + lVar1) >> 3 & 1) != 0)
           ))) goto LAB_00f580a8;
    uVar19 = uVar18 & 0xffffffff00000000;
    uVar18 = uVar19 | *(uint *)((uVar19 | *(uint *)((uVar19 | *(uint *)(uVar18 + ((long)(int)(uVar6 
                                                  + 4) | 7U))) + 0xb)) + 0xf);
    if (*(short *)((uVar19 | 7) + (ulong)*(uint *)(uVar18 - 1)) == 0x5b) {
      uVar18 = uVar19 | *(uint *)(uVar18 + 0xb);
    }
    if ((((uVar18 & 1) != 0) && ((int)uVar18 == *(int *)((uVar18 & 0xffffffff00000000) + 0xa0))) ||
       (local_68 = uVar18, uVar18 = Script::IsUserJavaScript((Script *)&local_68), (uVar18 & 1) == 0
       )) goto LAB_00f580a8;
    pIVar20 = *(Isolate **)this;
    pIVar2 = pIVar20 + 0x95a0;
    uVar18 = **(ulong **)(this + 0x20) & 0xffffffff00000000 |
             (ulong)*(uint *)(**(ulong **)(this + 0x20) + (long)(int)(uVar6 + 8) + 7);
    if (*(CanonicalHandleScope **)(pIVar20 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = *(ulong **)pIVar2;
      if (puVar10 == *(ulong **)(pIVar20 + 0x95a8)) {
        puVar10 = (ulong *)HandleScope::Extend(pIVar20);
      }
      *(ulong **)pIVar2 = puVar10 + 1;
      *puVar10 = uVar18;
    }
    else {
      puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(pIVar20 + 0x95b8),uVar18);
    }
    iVar16 = *(int *)(**(long **)(this + 0x20) + ((long)(int)(uVar6 + 0xc) | 7U));
    if (FLAG_optimize_for_size == '\0') {
      uVar19 = *puVar10;
      uVar18 = uVar19 & 0xffffffff00000000;
      lVar1 = 0xb;
      if (*(short *)((uVar18 | 7) + (ulong)*(uint *)(uVar19 - 1)) != 0x9a) {
        lVar1 = 0xf;
      }
      if (((*(uint *)(lVar1 + uVar19) & 1) == 0) ||
         (uVar19 = uVar18 | *(uint *)(lVar1 + uVar19),
         *(short *)((uVar18 | 7) + (ulong)*(uint *)(uVar19 - 1)) != 0x69)) {
        uVar18 = 0;
        this_00 = *(CanonicalHandleScope **)(pIVar20 + 0x95b8);
        if (this_00 == (CanonicalHandleScope *)0x0) goto LAB_00f58394;
LAB_00f583c8:
        puVar10 = (ulong *)CanonicalHandleScope::Lookup(this_00,uVar18);
        uVar18 = *puVar10;
      }
      else {
        uVar18 = uVar18 | *(uint *)(uVar19 + 7);
        this_00 = *(CanonicalHandleScope **)(pIVar20 + 0x95b8);
        if (this_00 != (CanonicalHandleScope *)0x0) goto LAB_00f583c8;
LAB_00f58394:
        puVar10 = *(ulong **)pIVar2;
        if (puVar10 == *(ulong **)(pIVar20 + 0x95a8)) {
          puVar10 = (ulong *)HandleScope::Extend(pIVar20);
        }
        *(ulong **)pIVar2 = puVar10 + 1;
        *puVar10 = uVar18;
      }
      if (((uVar18 & 1) != 0) &&
         (uVar19 = uVar18 & 0xffffffff00000000,
         *(short *)((uVar19 | 7) + (ulong)*(uint *)(uVar18 - 1)) == 0x7f)) {
        uVar5 = iVar16 >> 1;
        uVar7 = (*(int *)(uVar18 + 0xf) >> 1) - 1;
        uVar15 = (*(ulong *)(*(long *)(pIVar20 + 0x490) + 7) ^ (ulong)uVar5 ^ 0xffffffffffffffff) +
                 (*(ulong *)(*(long *)(pIVar20 + 0x490) + 7) ^ (ulong)uVar5) * 0x40000;
        uVar15 = (uVar15 ^ uVar15 >> 0x1f) * 0x15;
        uVar15 = (uVar15 ^ uVar15 >> 0xb) * 0x41;
        uVar3 = uVar7 & ((uint)(uVar15 >> 0x16) ^ (uint)uVar15);
        uVar6 = uVar3 & 0x3fffffff;
        uVar3 = *(uint *)(uVar18 + 7 + (long)(int)(uVar3 * 8 + 0xc));
        if (uVar3 != *(uint *)(pIVar20 + 0xa0)) {
          iVar16 = 1;
          do {
            if (uVar3 != (uint)*(undefined8 *)(pIVar20 + 0xa8)) {
              if ((uVar3 & 1) == 0) {
                dVar21 = (double)((int)uVar3 >> 1);
              }
              else {
                dVar21 = *(double *)((uVar19 | uVar3) + 3);
              }
              if (uVar5 == (int)dVar21) goto LAB_00f584bc;
            }
            uVar6 = uVar6 + iVar16 & uVar7;
            uVar3 = *(uint *)(uVar18 + 7 + (long)(int)(uVar6 * 8 + 0xc));
            iVar16 = iVar16 + 1;
            bVar8 = true;
            if (uVar3 == *(uint *)(pIVar20 + 0xa0)) goto LAB_00f580ac;
          } while( true );
        }
      }
    }
LAB_00f5833c:
    bVar8 = true;
  } while( true );
LAB_00f584bc:
  uVar19 = uVar19 | *(uint *)(uVar18 + ((long)(int)(uVar6 * 8 + 0x10) | 7U));
  if (*(CanonicalHandleScope **)(pIVar20 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)pIVar2;
    if (puVar10 == *(ulong **)(pIVar20 + 0x95a8)) {
      puVar10 = (ulong *)HandleScope::Extend(pIVar20);
    }
    *(ulong **)pIVar2 = puVar10 + 1;
    *puVar10 = uVar19;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(pIVar20 + 0x95b8),uVar19);
  }
  if (puVar10 == (ulong *)0x0) goto LAB_00f5833c;
  uVar19 = *puVar9;
  uVar18 = *puVar10;
  lVar1 = uVar19 + (long)((int)uVar17 << 2);
  *(int *)(lVar1 + 7) = (int)uVar18;
  if ((uVar18 & 1) != 0) {
    uVar15 = *(ulong *)((uVar18 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar19,lVar1,uVar18);
      uVar15 = *(ulong *)(uVar18 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar19 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar19,lVar1,uVar18);
    }
  }
  goto LAB_00f57f9c;
}

