
/* v8::internal::ValueDeserializer::ReadJSObject() */

ulong * __thiscall v8::internal::ValueDeserializer::ReadJSObject(ValueDeserializer *this)

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
  ulong *puVar10;
  uint uVar11;
  byte *pbVar12;
  long lVar13;
  Isolate *pIVar14;
  Isolate *pIVar15;
  
  lVar13 = *(long *)this;
  uVar5 = GetCurrentStackPosition();
  if (uVar5 < *(ulong *)(lVar13 + 0x58)) {
    Isolate::StackOverflow(*(Isolate **)this);
  }
  else {
    iVar3 = *(int *)(this + 0x24);
    pIVar14 = *(Isolate **)this;
    pIVar1 = pIVar14 + 0x95a0;
    *(int *)(this + 0x24) = iVar3 + 1;
    lVar13 = *(long *)pIVar1;
    lVar2 = *(long *)(pIVar14 + 0x95a8);
    *(int *)(pIVar14 + 0x95b0) = *(int *)(pIVar14 + 0x95b0) + 1;
    pIVar15 = *(Isolate **)this;
    uVar5 = *(ulong *)(pIVar15 + 0x2bc8) & 0xffffffff00000000;
    uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(pIVar15 + 0x2bc8) - 1
                                                                   )) + 0x13)) + 499);
    if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar15 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar15 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar15);
      }
      *(ulong **)(pIVar15 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar5;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar5);
    }
    puVar6 = (ulong *)Factory::NewJSObject((Factory *)pIVar15,puVar6,0);
    puVar7 = (ulong *)FixedArray::SetAndGrow
                                (*(undefined8 *)this,*(undefined8 *)(this + 0x30),iVar3,puVar6);
    puVar10 = *(ulong **)(this + 0x30);
    if ((puVar7 != puVar10) &&
       (((puVar7 == (ulong *)0x0 || (puVar10 == (ulong *)0x0)) || (*puVar7 != *puVar10)))) {
      GlobalHandles::Destroy(puVar10);
      uVar8 = GlobalHandles::Create(*(GlobalHandles **)(*(long *)this + 0x95e0),*puVar7);
      *(undefined8 *)(this + 0x30) = uVar8;
    }
    uVar5 = ReadJSObjectProperties(this,puVar6,0x7b,1);
    if ((uVar5 & 0xff) != 0) {
      pbVar12 = *(byte **)(this + 0x10);
      uVar9 = 0;
      uVar11 = 0;
      do {
        if (*(byte **)(this + 0x18) <= pbVar12) goto LAB_01144fd8;
        bVar4 = *pbVar12;
        if (uVar11 < 0x20) {
          uVar9 = (bVar4 & 0x7f) << (ulong)(uVar11 & 0x1f) | uVar9;
          uVar11 = uVar11 + 7;
        }
        pbVar12 = pbVar12 + 1;
        *(byte **)(this + 0x10) = pbVar12;
      } while ((char)bVar4 < '\0');
      if (uVar9 == (uint)(uVar5 >> 0x20)) {
        uVar5 = *puVar6;
        *(long *)pIVar1 = lVar13;
        *(int *)(pIVar14 + 0x95b0) = *(int *)(pIVar14 + 0x95b0) + -1;
        if (*(long *)(pIVar14 + 0x95a8) != lVar2) {
          *(long *)(pIVar14 + 0x95a8) = lVar2;
          HandleScope::DeleteExtensions(pIVar14);
        }
        if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) != (CanonicalHandleScope *)0x0) {
          puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar5);
          return puVar6;
        }
        puVar6 = *(ulong **)pIVar1;
        if (puVar6 == *(ulong **)(pIVar14 + 0x95a8)) {
          puVar6 = (ulong *)HandleScope::Extend(pIVar14);
        }
        *(ulong **)pIVar1 = puVar6 + 1;
        *puVar6 = uVar5;
        return puVar6;
      }
    }
LAB_01144fd8:
    if (pIVar14 != (Isolate *)0x0) {
      *(long *)pIVar1 = lVar13;
      *(int *)(pIVar14 + 0x95b0) = *(int *)(pIVar14 + 0x95b0) + -1;
      if (*(long *)(pIVar14 + 0x95a8) != lVar2) {
        *(long *)(pIVar14 + 0x95a8) = lVar2;
        HandleScope::DeleteExtensions(pIVar14);
      }
    }
  }
  return (ulong *)0x0;
}

