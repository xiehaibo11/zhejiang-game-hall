
/* v8::internal::ValueDeserializer::ReadDenseJSArray() */

ulong * __thiscall v8::internal::ValueDeserializer::ReadDenseJSArray(ValueDeserializer *this)

{
  long lVar1;
  Isolate *pIVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  Isolate *pIVar11;
  uint uVar12;
  byte *pbVar13;
  ulong *puVar14;
  char *pcVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  Isolate *pIVar21;
  ulong uVar22;
  
  lVar20 = *(long *)this;
  uVar7 = GetCurrentStackPosition();
  if (uVar7 < *(ulong *)(lVar20 + 0x58)) {
    Isolate::StackOverflow(*(Isolate **)this);
  }
  else {
    pbVar13 = *(byte **)(this + 0x10);
    uVar19 = 0;
    uVar17 = 0;
    do {
      if (*(byte **)(this + 0x18) <= pbVar13) {
        return (ulong *)0x0;
      }
      bVar6 = *pbVar13;
      if (uVar17 < 0x20) {
        uVar19 = (bVar6 & 0x7f) << (ulong)(uVar17 & 0x1f) | uVar19;
        uVar17 = uVar17 + 7;
      }
      pbVar13 = pbVar13 + 1;
      *(byte **)(this + 0x10) = pbVar13;
    } while ((char)bVar6 < '\0');
    if ((uVar19 < 0x7fffffe) &&
       ((ulong)uVar19 <= (ulong)((long)*(byte **)(this + 0x18) - (long)pbVar13))) {
      iVar4 = *(int *)(this + 0x24);
      pIVar21 = *(Isolate **)this;
      *(int *)(this + 0x24) = iVar4 + 1;
      pIVar2 = pIVar21 + 0x95a0;
      lVar20 = *(long *)pIVar2;
      lVar3 = *(long *)(pIVar21 + 0x95a8);
      *(int *)(pIVar21 + 0x95b0) = *(int *)(pIVar21 + 0x95b0) + 1;
      puVar8 = (ulong *)Factory::NewJSArray(*(Factory **)this,3,uVar19,uVar19,1,0);
      puVar9 = (ulong *)FixedArray::SetAndGrow
                                  (*(undefined8 *)this,*(undefined8 *)(this + 0x30),iVar4,puVar8);
      puVar14 = *(ulong **)(this + 0x30);
      if ((puVar9 != puVar14) &&
         (((puVar9 == (ulong *)0x0 || (puVar14 == (ulong *)0x0)) || (*puVar9 != *puVar14)))) {
        GlobalHandles::Destroy(puVar14);
        uVar10 = GlobalHandles::Create(*(GlobalHandles **)(*(long *)this + 0x95e0),*puVar9);
        *(undefined8 *)(this + 0x30) = uVar10;
      }
      pIVar11 = *(Isolate **)this;
      uVar7 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 7);
      if (*(CanonicalHandleScope **)(pIVar11 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)(pIVar11 + 0x95a0);
        if (puVar9 == *(ulong **)(pIVar11 + 0x95a8)) {
          puVar9 = (ulong *)HandleScope::Extend(pIVar11);
        }
        *(ulong **)(pIVar11 + 0x95a0) = puVar9 + 1;
        *puVar9 = uVar7;
      }
      else {
        puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar11 + 0x95b8),uVar7);
      }
      if (uVar19 != 0) {
        uVar17 = 0;
        do {
          pcVar15 = *(char **)(this + 0x10);
          do {
            if (*(char **)(this + 0x18) <= pcVar15) goto LAB_011454f4;
            cVar5 = *pcVar15;
            pcVar15 = pcVar15 + 1;
          } while (cVar5 == '\0');
          pcVar15 = *(char **)(this + 0x10);
          if (cVar5 == '-') {
            do {
              if (*(char **)(this + 0x18) <= pcVar15) {
                v8::V8::FromJustIsNothing();
                break;
              }
              cVar5 = *pcVar15;
              *(char **)(this + 0x10) = pcVar15 + 1;
              pcVar15 = pcVar15 + 1;
            } while (cVar5 == '\0');
          }
          else {
LAB_011454f4:
            puVar14 = (ulong *)ReadObject(this);
            if (puVar14 == (ulong *)0x0) goto LAB_01145660;
            if (((10 < *(uint *)(this + 0x20)) || ((*puVar14 & 1) == 0)) ||
               ((int)*puVar14 != *(int *)(*(long *)this + 0xa0))) {
              uVar7 = *puVar9;
              if ((uint)(*(int *)(uVar7 + 3) >> 1) <= uVar17) goto LAB_01145660;
              uVar22 = *puVar14;
              lVar1 = uVar7 + (long)(int)(uVar17 << 2);
              *(int *)(lVar1 + 7) = (int)uVar22;
              if ((uVar22 & 1) != 0) {
                uVar16 = *(ulong *)((uVar22 & 0xfffffffffffc0000) + 8);
                lVar1 = lVar1 + 7;
                if (((uint)uVar16 >> 0x12 & 1) != 0) {
                  Heap_MarkingBarrierSlow(uVar7,lVar1,uVar22);
                  uVar16 = *(ulong *)(uVar22 & 0xfffffffffffc0000 | 8);
                }
                if (((uVar16 & 0x18) != 0) &&
                   ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                  Heap_GenerationalBarrierSlow(uVar7,lVar1,uVar22);
                }
              }
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar19);
      }
      uVar7 = ReadJSObjectProperties(this,puVar8,0x24,0);
      if ((uVar7 & 0xff) != 0) {
        pbVar13 = *(byte **)(this + 0x10);
        uVar12 = 0;
        uVar17 = 0;
        do {
          if (*(byte **)(this + 0x18) <= pbVar13) goto LAB_01145660;
          bVar6 = *pbVar13;
          if (uVar17 < 0x20) {
            uVar12 = (bVar6 & 0x7f) << (ulong)(uVar17 & 0x1f) | uVar12;
            uVar17 = uVar17 + 7;
          }
          pbVar13 = pbVar13 + 1;
          *(byte **)(this + 0x10) = pbVar13;
        } while ((char)bVar6 < '\0');
        uVar18 = 0;
        uVar17 = 0;
        do {
          if (*(byte **)(this + 0x18) <= pbVar13) goto LAB_01145660;
          bVar6 = *pbVar13;
          if (uVar17 < 0x20) {
            uVar18 = (bVar6 & 0x7f) << (ulong)(uVar17 & 0x1f) | uVar18;
            uVar17 = uVar17 + 7;
          }
          pbVar13 = pbVar13 + 1;
          *(byte **)(this + 0x10) = pbVar13;
        } while ((char)bVar6 < '\0');
        if ((uVar12 == (uint)(uVar7 >> 0x20)) && (uVar19 == uVar18)) {
          uVar7 = *puVar8;
          *(long *)pIVar2 = lVar20;
          *(int *)(pIVar21 + 0x95b0) = *(int *)(pIVar21 + 0x95b0) + -1;
          if (*(long *)(pIVar21 + 0x95a8) != lVar3) {
            *(long *)(pIVar21 + 0x95a8) = lVar3;
            HandleScope::DeleteExtensions(pIVar21);
          }
          if (*(CanonicalHandleScope **)(pIVar21 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)pIVar2;
            if (puVar8 == *(ulong **)(pIVar21 + 0x95a8)) {
              puVar8 = (ulong *)HandleScope::Extend(pIVar21);
            }
            *(ulong **)pIVar2 = puVar8 + 1;
            *puVar8 = uVar7;
            return puVar8;
          }
          puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar21 + 0x95b8),uVar7);
          return puVar8;
        }
      }
LAB_01145660:
      if (pIVar21 == (Isolate *)0x0) {
        return (ulong *)0x0;
      }
      *(long *)pIVar2 = lVar20;
      *(int *)(pIVar21 + 0x95b0) = *(int *)(pIVar21 + 0x95b0) + -1;
      if (*(long *)(pIVar21 + 0x95a8) != lVar3) {
        *(long *)(pIVar21 + 0x95a8) = lVar3;
        HandleScope::DeleteExtensions(pIVar21);
      }
    }
  }
  return (ulong *)0x0;
}

