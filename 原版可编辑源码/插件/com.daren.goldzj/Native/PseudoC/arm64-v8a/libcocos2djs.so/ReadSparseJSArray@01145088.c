
/* v8::internal::ValueDeserializer::ReadSparseJSArray() */

ulong * __thiscall v8::internal::ValueDeserializer::ReadSparseJSArray(ValueDeserializer *this)

{
  Isolate *pIVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  uint uVar9;
  byte *pbVar10;
  ulong *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  Isolate *pIVar16;
  
  lVar15 = *(long *)this;
  uVar5 = GetCurrentStackPosition();
  if (uVar5 < *(ulong *)(lVar15 + 0x58)) {
    Isolate::StackOverflow(*(Isolate **)this);
  }
  else {
    pbVar10 = *(byte **)(this + 0x10);
    uVar14 = 0;
    uVar12 = 0;
    do {
      if (*(byte **)(this + 0x18) <= pbVar10) {
        return (ulong *)0x0;
      }
      bVar4 = *pbVar10;
      if (uVar12 < 0x20) {
        uVar14 = (bVar4 & 0x7f) << (ulong)(uVar12 & 0x1f) | uVar14;
        uVar12 = uVar12 + 7;
      }
      pbVar10 = pbVar10 + 1;
      *(byte **)(this + 0x10) = pbVar10;
    } while ((char)bVar4 < '\0');
    iVar3 = *(int *)(this + 0x24);
    pIVar16 = *(Isolate **)this;
    *(int *)(this + 0x24) = iVar3 + 1;
    pIVar1 = pIVar16 + 0x95a0;
    lVar15 = *(long *)pIVar1;
    lVar2 = *(long *)(pIVar16 + 0x95a8);
    *(int *)(pIVar16 + 0x95b0) = *(int *)(pIVar16 + 0x95b0) + 1;
    puVar6 = (ulong *)Factory::NewJSArray(*(Factory **)this,3,0,0,1,0);
    JSArray::SetLength(puVar6,uVar14);
    puVar7 = (ulong *)FixedArray::SetAndGrow
                                (*(undefined8 *)this,*(undefined8 *)(this + 0x30),iVar3,puVar6);
    puVar11 = *(ulong **)(this + 0x30);
    if ((puVar7 != puVar11) &&
       (((puVar7 == (ulong *)0x0 || (puVar11 == (ulong *)0x0)) || (*puVar7 != *puVar11)))) {
      GlobalHandles::Destroy(puVar11);
      uVar8 = GlobalHandles::Create(*(GlobalHandles **)(*(long *)this + 0x95e0),*puVar7);
      *(undefined8 *)(this + 0x30) = uVar8;
    }
    uVar5 = ReadJSObjectProperties(this,puVar6,0x40,0);
    if ((uVar5 & 0xff) != 0) {
      pbVar10 = *(byte **)(this + 0x10);
      uVar9 = 0;
      uVar12 = 0;
      do {
        if (*(byte **)(this + 0x18) <= pbVar10) goto LAB_0114525c;
        bVar4 = *pbVar10;
        if (uVar12 < 0x20) {
          uVar9 = (bVar4 & 0x7f) << (ulong)(uVar12 & 0x1f) | uVar9;
          uVar12 = uVar12 + 7;
        }
        pbVar10 = pbVar10 + 1;
        *(byte **)(this + 0x10) = pbVar10;
      } while ((char)bVar4 < '\0');
      uVar13 = 0;
      uVar12 = 0;
      do {
        if (*(byte **)(this + 0x18) <= pbVar10) goto LAB_0114525c;
        bVar4 = *pbVar10;
        if (uVar12 < 0x20) {
          uVar13 = (bVar4 & 0x7f) << (ulong)(uVar12 & 0x1f) | uVar13;
          uVar12 = uVar12 + 7;
        }
        pbVar10 = pbVar10 + 1;
        *(byte **)(this + 0x10) = pbVar10;
      } while ((char)bVar4 < '\0');
      if ((uVar9 == (uint)(uVar5 >> 0x20)) && (uVar14 == uVar13)) {
        uVar5 = *puVar6;
        *(long *)pIVar1 = lVar15;
        *(int *)(pIVar16 + 0x95b0) = *(int *)(pIVar16 + 0x95b0) + -1;
        if (*(long *)(pIVar16 + 0x95a8) != lVar2) {
          *(long *)(pIVar16 + 0x95a8) = lVar2;
          HandleScope::DeleteExtensions(pIVar16);
        }
        if (*(CanonicalHandleScope **)(pIVar16 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(ulong **)pIVar1;
          if (puVar6 == *(ulong **)(pIVar16 + 0x95a8)) {
            puVar6 = (ulong *)HandleScope::Extend(pIVar16);
          }
          *(ulong **)pIVar1 = puVar6 + 1;
          *puVar6 = uVar5;
          return puVar6;
        }
        puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar16 + 0x95b8),uVar5);
        return puVar6;
      }
    }
LAB_0114525c:
    if (pIVar16 != (Isolate *)0x0) {
      *(long *)pIVar1 = lVar15;
      *(int *)(pIVar16 + 0x95b0) = *(int *)(pIVar16 + 0x95b0) + -1;
      if (*(long *)(pIVar16 + 0x95a8) != lVar2) {
        *(long *)(pIVar16 + 0x95a8) = lVar2;
        HandleScope::DeleteExtensions(pIVar16);
      }
    }
  }
  return (ulong *)0x0;
}

