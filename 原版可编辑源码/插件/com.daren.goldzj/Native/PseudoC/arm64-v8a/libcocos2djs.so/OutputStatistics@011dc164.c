
/* v8::internal::SerializerAllocator::OutputStatistics() */

void __thiscall v8::internal::SerializerAllocator::OutputStatistics(SerializerAllocator *this)

{
  ulong *puVar1;
  ulong uVar2;
  uint *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  PrintF("  Spaces (bytes):\n");
  uVar4 = Heap::GetSpaceName(0);
  PrintF("%16s",uVar4);
  uVar4 = Heap::GetSpaceName(1);
  PrintF("%16s",uVar4);
  uVar4 = Heap::GetSpaceName(2);
  PrintF("%16s",uVar4);
  uVar4 = Heap::GetSpaceName(3);
  PrintF("%16s",uVar4);
  uVar4 = Heap::GetSpaceName(4);
  PrintF("%16s",uVar4);
  uVar4 = Heap::GetSpaceName(5);
  PrintF("%16s",uVar4);
  PrintF("\n");
  puVar7 = *(uint **)(this + 0x10);
  puVar3 = *(uint **)(this + 0x18);
  uVar5 = (ulong)*(uint *)this;
  if (puVar7 != puVar3) {
    uVar2 = ((ulong)((long)puVar3 + (-4 - (long)puVar7)) >> 2) + 1;
    if (3 < uVar2) {
      uVar8 = uVar2 & 0x7ffffffffffffffc;
      lVar13 = 0;
      lVar11 = 0;
      lVar12 = 0;
      puVar9 = (ulong *)(puVar7 + 2);
      uVar10 = uVar8;
      do {
        puVar1 = puVar9 + -1;
        uVar14 = *puVar9;
        uVar10 = uVar10 - 4;
        puVar9 = puVar9 + 2;
        uVar5 = uVar5 + (*puVar1 & 0xffffffff);
        lVar13 = lVar13 + (*puVar1 >> 0x20);
        lVar11 = lVar11 + (uVar14 & 0xffffffff);
        lVar12 = lVar12 + (uVar14 >> 0x20);
      } while (uVar10 != 0);
      uVar5 = lVar11 + uVar5 + lVar12 + lVar13;
      puVar7 = puVar7 + uVar8;
      if (uVar2 == uVar8) goto LAB_011dc294;
    }
    do {
      puVar6 = puVar7 + 1;
      uVar5 = uVar5 + *puVar7;
      puVar7 = puVar6;
    } while (puVar3 != puVar6);
  }
LAB_011dc294:
  PrintF("%16zu",uVar5);
  puVar7 = *(uint **)(this + 0x28);
  puVar3 = *(uint **)(this + 0x30);
  uVar5 = (ulong)*(uint *)(this + 4);
  if (puVar7 != puVar3) {
    uVar2 = ((ulong)((long)puVar3 + (-4 - (long)puVar7)) >> 2) + 1;
    if (3 < uVar2) {
      uVar8 = uVar2 & 0x7ffffffffffffffc;
      lVar13 = 0;
      lVar11 = 0;
      lVar12 = 0;
      puVar9 = (ulong *)(puVar7 + 2);
      uVar10 = uVar8;
      do {
        puVar1 = puVar9 + -1;
        uVar14 = *puVar9;
        uVar10 = uVar10 - 4;
        puVar9 = puVar9 + 2;
        uVar5 = uVar5 + (*puVar1 & 0xffffffff);
        lVar13 = lVar13 + (*puVar1 >> 0x20);
        lVar11 = lVar11 + (uVar14 & 0xffffffff);
        lVar12 = lVar12 + (uVar14 >> 0x20);
      } while (uVar10 != 0);
      uVar5 = lVar11 + uVar5 + lVar12 + lVar13;
      puVar7 = puVar7 + uVar8;
      if (uVar2 == uVar8) goto LAB_011dc328;
    }
    do {
      puVar6 = puVar7 + 1;
      uVar5 = uVar5 + *puVar7;
      puVar7 = puVar6;
    } while (puVar3 != puVar6);
  }
LAB_011dc328:
  PrintF("%16zu",uVar5);
  puVar7 = *(uint **)(this + 0x40);
  puVar3 = *(uint **)(this + 0x48);
  uVar5 = (ulong)*(uint *)(this + 8);
  if (puVar7 != puVar3) {
    uVar2 = ((ulong)((long)puVar3 + (-4 - (long)puVar7)) >> 2) + 1;
    if (3 < uVar2) {
      uVar8 = uVar2 & 0x7ffffffffffffffc;
      lVar13 = 0;
      lVar11 = 0;
      lVar12 = 0;
      puVar9 = (ulong *)(puVar7 + 2);
      uVar10 = uVar8;
      do {
        puVar1 = puVar9 + -1;
        uVar14 = *puVar9;
        uVar10 = uVar10 - 4;
        puVar9 = puVar9 + 2;
        uVar5 = uVar5 + (*puVar1 & 0xffffffff);
        lVar13 = lVar13 + (*puVar1 >> 0x20);
        lVar11 = lVar11 + (uVar14 & 0xffffffff);
        lVar12 = lVar12 + (uVar14 >> 0x20);
      } while (uVar10 != 0);
      uVar5 = lVar11 + uVar5 + lVar12 + lVar13;
      puVar7 = puVar7 + uVar8;
      if (uVar2 == uVar8) goto LAB_011dc3bc;
    }
    do {
      puVar6 = puVar7 + 1;
      uVar5 = uVar5 + *puVar7;
      puVar7 = puVar6;
    } while (puVar3 != puVar6);
  }
LAB_011dc3bc:
  PrintF("%16zu",uVar5);
  puVar7 = *(uint **)(this + 0x58);
  puVar3 = *(uint **)(this + 0x60);
  uVar5 = (ulong)*(uint *)(this + 0xc);
  if (puVar7 != puVar3) {
    uVar2 = ((ulong)((long)puVar3 + (-4 - (long)puVar7)) >> 2) + 1;
    if (3 < uVar2) {
      uVar8 = uVar2 & 0x7ffffffffffffffc;
      lVar13 = 0;
      lVar11 = 0;
      lVar12 = 0;
      puVar9 = (ulong *)(puVar7 + 2);
      uVar10 = uVar8;
      do {
        puVar1 = puVar9 + -1;
        uVar14 = *puVar9;
        uVar10 = uVar10 - 4;
        puVar9 = puVar9 + 2;
        uVar5 = uVar5 + (*puVar1 & 0xffffffff);
        lVar13 = lVar13 + (*puVar1 >> 0x20);
        lVar11 = lVar11 + (uVar14 & 0xffffffff);
        lVar12 = lVar12 + (uVar14 >> 0x20);
      } while (uVar10 != 0);
      uVar5 = lVar11 + uVar5 + lVar12 + lVar13;
      puVar7 = puVar7 + uVar8;
      if (uVar2 == uVar8) goto LAB_011dc450;
    }
    do {
      puVar6 = puVar7 + 1;
      uVar5 = uVar5 + *puVar7;
      puVar7 = puVar6;
    } while (puVar3 != puVar6);
  }
LAB_011dc450:
  PrintF("%16zu",uVar5);
  PrintF("%16d",(ulong)(uint)(*(int *)(this + 0x70) * 0x28));
  PrintF("%16d\n",(ulong)*(uint *)(this + 0x74));
  return;
}

