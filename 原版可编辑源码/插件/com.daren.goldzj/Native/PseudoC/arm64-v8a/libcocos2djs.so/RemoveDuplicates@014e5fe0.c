
/* v8::internal::SafepointTableBuilder::RemoveDuplicates() */

void __thiscall v8::internal::SafepointTableBuilder::RemoveDuplicates(SafepointTableBuilder *this)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  
  if (1 < *(ulong *)(this + 8)) {
    puVar6 = *(uint **)(this + 0x10);
    uVar10 = 1;
    uVar1 = *puVar6;
    uVar8 = (ulong)uVar1;
    puVar9 = puVar6;
    uVar2 = uVar8;
    if (uVar1 < 2) {
      do {
        puVar9 = *(uint **)(puVar9 + 2);
        uVar10 = uVar10 - uVar2;
        uVar2 = (ulong)*puVar9;
      } while (*puVar9 <= uVar10);
      uVar10 = uVar10 & 0xffffffff;
    }
    puVar11 = *(uint **)(this + 0x18);
    puVar12 = puVar9 + 6;
    puVar13 = puVar6;
    if (puVar11 != (uint *)0x0) goto LAB_014e6050;
joined_r0x014e607c:
    if (uVar10 != 0) goto LAB_014e6098;
    while (puVar13 != puVar9) {
LAB_014e6098:
      do {
        if (puVar6[7] != puVar12[uVar10 * 6 + 1]) {
          return;
        }
        lVar7 = *(long *)(puVar6 + 10);
        if (*(long *)(lVar7 + 8) != *(long *)(*(long *)(puVar12 + uVar10 * 6 + 4) + 8)) {
          return;
        }
        puVar13 = *(uint **)(lVar7 + 0x10);
        puVar14 = *(uint **)(lVar7 + 0x18);
        if (puVar14 == (uint *)0x0) {
          uVar2 = 0;
          puVar14 = puVar13;
LAB_014e60e4:
          if (puVar14 != puVar13) goto LAB_014e60fc;
        }
        else {
          uVar2 = (ulong)puVar14[1];
          if (puVar14[1] == *puVar14) {
            puVar14 = *(uint **)(puVar14 + 2);
            uVar2 = 0;
          }
          if (uVar2 == 0) goto LAB_014e60e4;
LAB_014e60fc:
          puVar3 = *(uint **)(*(long *)(puVar12 + uVar10 * 6 + 4) + 0x10);
          uVar4 = 0;
          uVar5 = 0;
          do {
            if (puVar13[uVar4 + 6] != puVar3[uVar5 + 6]) {
              return;
            }
            uVar4 = uVar4 + 1;
            if (*puVar13 <= uVar4) {
              puVar13 = *(uint **)(puVar13 + 2);
              uVar4 = 0;
            }
            uVar5 = uVar5 + 1;
            if (*puVar3 <= uVar5) {
              puVar3 = *(uint **)(puVar3 + 2);
              uVar5 = 0;
            }
          } while ((puVar14 != puVar13) || (uVar2 != uVar4));
        }
        uVar10 = uVar10 + 1;
        if (*puVar9 <= uVar10) {
          puVar9 = *(uint **)(puVar9 + 2);
          uVar10 = 0;
          puVar12 = puVar9 + 6;
        }
        puVar13 = puVar6;
        if (puVar11 == (uint *)0x0) goto joined_r0x014e607c;
LAB_014e6050:
        if (puVar11[1] == *puVar11) {
          puVar13 = *(uint **)(puVar11 + 2);
          goto joined_r0x014e607c;
        }
        puVar13 = puVar11;
      } while (puVar11[1] != uVar10);
    }
    if (1 < *(ulong *)(this + 8)) {
      uVar10 = 1;
      if (uVar1 < 2) {
        do {
          puVar6 = *(uint **)(puVar6 + 2);
          uVar10 = uVar10 - uVar8;
          uVar8 = (ulong)*puVar6;
        } while (uVar8 <= uVar10);
      }
      puVar6[1] = (uint)uVar10;
      *(uint **)(this + 0x18) = puVar6;
      for (lVar7 = *(long *)(puVar6 + 2); lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
        *(undefined4 *)(lVar7 + 4) = 0;
      }
      puVar6 = *(uint **)(this + 0x10);
      *(undefined8 *)(this + 8) = 1;
    }
    puVar6[6] = 0xffffffff;
  }
  return;
}

