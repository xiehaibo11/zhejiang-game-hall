
/* v8::internal::ValueDeserializer::ReadTransferredJSArrayBuffer() */

ulong * __thiscall
v8::internal::ValueDeserializer::ReadTransferredJSArrayBuffer(ValueDeserializer *this)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  int iVar15;
  double dVar16;
  
  iVar2 = *(int *)(this + 0x24);
  pbVar13 = *(byte **)(this + 0x10);
  uVar9 = 0;
  uVar11 = 0;
  *(int *)(this + 0x24) = iVar2 + 1;
  do {
    if (*(byte **)(this + 0x18) <= pbVar13) {
      return (ulong *)0x0;
    }
    bVar3 = *pbVar13;
    if (uVar11 < 0x20) {
      uVar9 = (bVar3 & 0x7f) << (ulong)(uVar11 & 0x1f) | uVar9;
      uVar11 = uVar11 + 7;
    }
    pbVar13 = pbVar13 + 1;
    *(byte **)(this + 0x10) = pbVar13;
  } while ((char)bVar3 < '\0');
  if (*(ulong **)(this + 0x38) != (ulong *)0x0) {
    pIVar5 = *(Isolate **)this;
    uVar12 = **(ulong **)(this + 0x38);
    uVar14 = (*(ulong *)(*(long *)(pIVar5 + 0x490) + 7) ^ (ulong)uVar9 ^ 0xffffffffffffffff) +
             (*(ulong *)(*(long *)(pIVar5 + 0x490) + 7) ^ (ulong)uVar9) * 0x40000;
    uVar14 = (uVar14 ^ uVar14 >> 0x1f) * 0x15;
    uVar14 = (uVar14 ^ uVar14 >> 0xb) * 0x41;
    uVar4 = (*(int *)(uVar12 + 0xf) >> 1) - 1;
    uVar1 = uVar4 & ((uint)(uVar14 >> 0x16) ^ (uint)uVar14);
    uVar11 = uVar1 & 0x3fffffff;
    uVar1 = *(uint *)(uVar12 + 7 + (long)(int)(uVar1 * 8 + 0xc));
    if (uVar1 != *(uint *)(pIVar5 + 0xa0)) {
      iVar15 = 1;
      do {
        if (uVar1 != (uint)*(undefined8 *)(pIVar5 + 0xa8)) {
          if ((uVar1 & 1) == 0) {
            dVar16 = (double)((int)uVar1 >> 1);
          }
          else {
            dVar16 = *(double *)((uVar12 & 0xffffffff00000000 | (ulong)uVar1) + 3);
          }
          if (uVar9 == (int)dVar16) {
            uVar14 = uVar12 & 0xffffffff00000000 |
                     (ulong)*(uint *)(uVar12 + ((long)(int)(uVar11 * 8 + 0x10) | 7U));
            if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar6 = *(ulong **)(pIVar5 + 0x95a0);
              if (puVar6 == *(ulong **)(pIVar5 + 0x95a8)) {
                puVar6 = (ulong *)HandleScope::Extend(pIVar5);
              }
              *(ulong **)(pIVar5 + 0x95a0) = puVar6 + 1;
              *puVar6 = uVar14;
            }
            else {
              puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar14);
            }
            puVar7 = (ulong *)FixedArray::SetAndGrow
                                        (*(undefined8 *)this,*(undefined8 *)(this + 0x30),iVar2,
                                         puVar6);
            puVar10 = *(ulong **)(this + 0x30);
            if (puVar7 != puVar10) {
              if (((puVar7 != (ulong *)0x0) && (puVar10 != (ulong *)0x0)) && (*puVar7 == *puVar10))
              {
                return puVar6;
              }
              GlobalHandles::Destroy(puVar10);
              uVar8 = GlobalHandles::Create(*(GlobalHandles **)(*(long *)this + 0x95e0),*puVar7);
              *(undefined8 *)(this + 0x30) = uVar8;
              return puVar6;
            }
            return puVar6;
          }
        }
        uVar11 = uVar11 + iVar15 & uVar4;
        uVar1 = *(uint *)(uVar12 + 7 + (long)(int)(uVar11 * 8 + 0xc));
        iVar15 = iVar15 + 1;
      } while (uVar1 != *(uint *)(pIVar5 + 0xa0));
    }
  }
  return (ulong *)0x0;
}

