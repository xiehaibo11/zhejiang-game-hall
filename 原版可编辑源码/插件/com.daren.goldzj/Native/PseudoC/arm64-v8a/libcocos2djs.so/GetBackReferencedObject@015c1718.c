
/* v8::internal::Deserializer::GetBackReferencedObject(v8::internal::SnapshotSpace) */

void __thiscall
v8::internal::Deserializer::GetBackReferencedObject(Deserializer *this,undefined8 param_2)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  Deserializer DVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte bVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  
  iVar10 = (int)param_2;
  if (iVar10 == 0) {
    lVar13 = *(long *)(this + 0x70);
    puVar2 = (uint *)(lVar13 + *(int *)(this + 0x7c));
    uVar11 = *puVar2;
    lVar1 = ((ulong)(byte)*puVar2 & 3) + 1;
    lVar3 = lVar1 + *(int *)(this + 0x7c);
    iVar10 = (int)lVar3;
    *(int *)(this + 0x7c) = iVar10;
    lVar12 = lVar13 + iVar10;
    bVar8 = *(byte *)(lVar13 + lVar3);
    uVar5 = *(undefined1 *)(lVar12 + 1);
    uVar6 = *(undefined1 *)(lVar12 + 2);
    uVar7 = *(undefined1 *)(lVar12 + 3);
    uVar11 = (uVar11 & 0xffffffffU >> (ulong)((int)lVar1 * -8 & 0x1f)) >> 2;
    lVar12 = ((ulong)bVar8 & 3) + 1;
    *(int *)(this + 0x7c) = (int)lVar12 + iVar10;
    uVar9 = ((ulong)CONCAT13(uVar7,CONCAT12(uVar6,CONCAT11(uVar5,bVar8))) &
            0xffffffffUL >> (lVar12 * -8 + 0x20U & 0x3f)) >> 2;
    if (*(char *)(*(long *)(this + 0x50) + 0x9394) != '\0') {
      lVar12 = *(long *)(*(long *)(*(long *)(this + 0x50) + 0x8970) + 0x20);
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        lVar12 = *(long *)(lVar12 + 0xe0);
      }
      uVar9 = uVar9 + lVar12 + 1;
      DVar4 = this[0x250];
      goto joined_r0x015c18d4;
    }
    param_2 = 0;
  }
  else {
    if (iVar10 == 4) {
      puVar2 = (uint *)(*(long *)(this + 0x70) + (long)*(int *)(this + 0x7c));
      uVar11 = *puVar2;
      iVar10 = ((byte)*puVar2 & 3) + 1;
      *(int *)(this + 0x7c) = iVar10 + *(int *)(this + 0x7c);
      uVar9 = DeserializerAllocator::GetMap
                        ((DeserializerAllocator *)(this + 0x148),
                         (uVar11 & 0xffffffffU >> (ulong)(iVar10 * -8 & 0x1f)) >> 2);
      DVar4 = this[0x250];
      goto joined_r0x015c18d4;
    }
    if (iVar10 == 5) {
      puVar2 = (uint *)(*(long *)(this + 0x70) + (long)*(int *)(this + 0x7c));
      uVar11 = *puVar2;
      iVar10 = ((byte)*puVar2 & 3) + 1;
      *(int *)(this + 0x7c) = iVar10 + *(int *)(this + 0x7c);
      uVar9 = DeserializerAllocator::GetLargeObject
                        ((DeserializerAllocator *)(this + 0x148),
                         (uVar11 & 0xffffffffU >> (ulong)(iVar10 * -8 & 0x1f)) >> 2);
      DVar4 = this[0x250];
      goto joined_r0x015c18d4;
    }
    lVar13 = *(long *)(this + 0x70);
    puVar2 = (uint *)(lVar13 + *(int *)(this + 0x7c));
    uVar11 = *puVar2;
    lVar1 = ((ulong)(byte)*puVar2 & 3) + 1;
    lVar3 = lVar1 + *(int *)(this + 0x7c);
    iVar14 = (int)lVar3;
    *(int *)(this + 0x7c) = iVar14;
    lVar12 = lVar13 + iVar14;
    bVar8 = *(byte *)(lVar13 + lVar3);
    uVar5 = *(undefined1 *)(lVar12 + 1);
    uVar6 = *(undefined1 *)(lVar12 + 2);
    uVar7 = *(undefined1 *)(lVar12 + 3);
    uVar11 = (uVar11 & 0xffffffffU >> (ulong)((int)lVar1 * -8 & 0x1f)) >> 2;
    iVar10 = (bVar8 & 3) + 1;
    *(int *)(this + 0x7c) = iVar10 + iVar14;
    uVar9 = (ulong)((CONCAT13(uVar7,CONCAT12(uVar6,CONCAT11(uVar5,bVar8))) &
                    0xffffffffU >> (ulong)(iVar10 * -8 & 0x1f)) >> 2);
  }
  uVar9 = DeserializerAllocator::GetObject
                    ((DeserializerAllocator *)(this + 0x148),param_2,uVar11,uVar9);
  DVar4 = this[0x250];
joined_r0x015c18d4:
  if (DVar4 != (Deserializer)0x0) {
    uVar15 = uVar9 & 0xffffffff00000000 | 7;
    if ((*(ushort *)(uVar15 + *(uint *)(uVar9 - 1)) < 0x40) &&
       ((*(ushort *)(uVar15 + *(uint *)(uVar9 - 1)) & 7) == 5)) {
      uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0xb);
    }
  }
  *(ulong *)(this + (long)*(int *)(this + 0x48) * 8 + 8) = uVar9;
  *(uint *)(this + 0x48) = *(int *)(this + 0x48) + 1U & 7;
  return;
}

