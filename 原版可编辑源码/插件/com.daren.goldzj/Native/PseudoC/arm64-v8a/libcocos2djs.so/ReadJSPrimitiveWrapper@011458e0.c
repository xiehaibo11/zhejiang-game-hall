
/* v8::internal::ValueDeserializer::ReadJSPrimitiveWrapper(v8::internal::SerializationTag) */

ulong * __thiscall
v8::internal::ValueDeserializer::ReadJSPrimitiveWrapper(ValueDeserializer *this,undefined1 param_2)

{
  double *pdVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  uint uVar12;
  uint uVar13;
  Isolate *pIVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  
  iVar2 = *(int *)(this + 0x24);
  *(int *)(this + 0x24) = iVar2 + 1;
  switch(param_2) {
  case 0x6e:
    pdVar1 = *(double **)(this + 0x10);
    if ((double *)(*(long *)(this + 0x18) - 8U) < pdVar1) {
      return (ulong *)0x0;
    }
    dVar17 = *pdVar1;
    pIVar14 = *(Isolate **)this;
    *(double **)(this + 0x10) = pdVar1 + 1;
    uVar9 = *(ulong *)(pIVar14 + 0x2bc8) & 0xffffffff00000000;
    uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(pIVar14 + 0x2bc8) - 1
                                                                   )) + 0x13)) + 0x1ef);
    if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar14 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar14 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar14);
      }
      *(ulong **)(pIVar14 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar9;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar9);
    }
    puVar5 = (ulong *)Factory::NewJSObject((Factory *)pIVar14,puVar6,0);
    dVar16 = NAN;
    if (!NAN(dVar17)) {
      dVar16 = dVar17;
    }
    puVar6 = (ulong *)Factory::NewNumber<(v8::internal::AllocationType)0>(*(Factory **)this,dVar16);
    uVar9 = *puVar5;
    uVar15 = *puVar6;
    *(int *)(uVar9 + 0xb) = (int)uVar15;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x73:
    puVar6 = (ulong *)ReadString(this);
    if (puVar6 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    pIVar14 = *(Isolate **)this;
    uVar9 = *(ulong *)(pIVar14 + 0x2bc8) & 0xffffffff00000000;
    uVar12 = *(uint *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(pIVar14 + 0x2bc8) - 1)) +
                                         0x13)) + 0x30b);
    goto LAB_011459c8;
  case 0x78:
    pIVar14 = *(Isolate **)this;
    uVar9 = *(ulong *)(pIVar14 + 0x2bc8) & 0xffffffff00000000;
    uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(pIVar14 + 0x2bc8) - 1
                                                                   )) + 0x13)) + 0x7b);
    if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar14 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar14 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar14);
      }
      *(ulong **)(pIVar14 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar9;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar9);
    }
    puVar5 = (ulong *)Factory::NewJSObject((Factory *)pIVar14,puVar6,0);
    uVar9 = *puVar5;
    uVar15 = *(ulong *)(*(long *)this + 0xc0);
    *(int *)(uVar9 + 0xb) = (int)uVar15;
    break;
  case 0x79:
    pIVar14 = *(Isolate **)this;
    uVar9 = *(ulong *)(pIVar14 + 0x2bc8) & 0xffffffff00000000;
    uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(pIVar14 + 0x2bc8) - 1
                                                                   )) + 0x13)) + 0x7b);
    if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar14 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar14 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar14);
      }
      *(ulong **)(pIVar14 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar9;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar9);
    }
    puVar5 = (ulong *)Factory::NewJSObject((Factory *)pIVar14,puVar6,0);
    uVar9 = *puVar5;
    uVar15 = *(ulong *)(*(long *)this + 0xb8);
    *(int *)(uVar9 + 0xb) = (int)uVar15;
    break;
  case 0x7a:
    pbVar8 = *(byte **)(this + 0x10);
    uVar13 = 0;
    uVar12 = 0;
    do {
      if (*(byte **)(this + 0x18) <= pbVar8) {
        return (ulong *)0x0;
      }
      bVar3 = *pbVar8;
      if (uVar12 < 0x20) {
        uVar13 = (bVar3 & 0x7f) << (ulong)(uVar12 & 0x1f) | uVar13;
        uVar12 = uVar12 + 7;
      }
      pbVar8 = pbVar8 + 1;
      *(byte **)(this + 0x10) = pbVar8;
    } while ((char)bVar3 < '\0');
    iVar4 = BigInt::DigitsByteLengthForBitfield(uVar13);
    if (*(long *)(this + 0x18) - *(long *)(this + 0x10) < (long)iVar4) {
      return (ulong *)0x0;
    }
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + (long)iVar4;
    puVar6 = (ulong *)BigInt::FromSerializedDigits(*(undefined8 *)this,uVar13);
    if (puVar6 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    pIVar14 = *(Isolate **)this;
    uVar9 = *(ulong *)(pIVar14 + 0x2bc8) & 0xffffffff00000000;
    uVar12 = *(uint *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(pIVar14 + 0x2bc8) - 1)) +
                                         0x13)) + 0x6f);
LAB_011459c8:
    if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar14 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar14 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar14);
      }
      *(ulong **)(pIVar14 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar9 | uVar12;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar9 | uVar12);
    }
    puVar5 = (ulong *)Factory::NewJSObject((Factory *)pIVar14,puVar5,0);
    uVar9 = *puVar5;
    uVar15 = *puVar6;
    *(int *)(uVar9 + 0xb) = (int)uVar15;
  }
  if ((uVar15 & 1) != 0) {
    uVar10 = *(ulong *)((uVar15 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,uVar9 + 0xb,uVar15);
      uVar10 = *(ulong *)(uVar15 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0xb,uVar15);
    }
  }
  puVar6 = (ulong *)FixedArray::SetAndGrow
                              (*(undefined8 *)this,*(undefined8 *)(this + 0x30),iVar2,puVar5);
  puVar11 = *(ulong **)(this + 0x30);
  if ((puVar6 != puVar11) &&
     (((puVar6 == (ulong *)0x0 || (puVar11 == (ulong *)0x0)) || (*puVar6 != *puVar11)))) {
    GlobalHandles::Destroy(puVar11);
    uVar7 = GlobalHandles::Create(*(GlobalHandles **)(*(long *)this + 0x95e0),*puVar6);
    *(undefined8 *)(this + 0x30) = uVar7;
  }
  return puVar5;
}

