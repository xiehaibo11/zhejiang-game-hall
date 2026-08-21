
undefined8 FUN_00e5a8b0(long param_1,uint param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  lVar7 = *(long *)(param_1 + 0x5b0);
  if (lVar7 == 0) {
    return 6;
  }
  if (param_2 < *(ushort *)(param_1 + 0x418)) {
    uVar5 = *(ushort *)(param_1 + 0x430);
    puVar2 = (undefined1 *)(*(long *)(lVar7 + 0x10) + (ulong)(param_2 << 1));
    uVar6 = CONCAT11(*puVar2,puVar2[1]);
    if ((uint)*(ushort *)(lVar7 + 2) < (uint)uVar6 + (uint)uVar5) {
      return 8;
    }
    if (uVar5 != 0) {
      puVar9 = *(undefined1 **)(param_1 + 0x448);
      lVar7 = *(long *)(lVar7 + 8);
      lVar12 = (ulong)uVar6 * 4;
      puVar3 = puVar9 + (ulong)uVar5 * 4;
      puVar2 = puVar9 + 4;
      puVar8 = puVar3;
      if (puVar3 <= puVar2) {
        puVar8 = puVar2;
      }
      uVar1 = ((ulong)(puVar8 + ~(ulong)puVar9) >> 2) + 1;
      puVar8 = (undefined1 *)(lVar7 + lVar12);
      if (0x1f < uVar1) {
        puVar4 = puVar3;
        if (puVar3 <= puVar2) {
          puVar4 = puVar2;
        }
        if (((undefined1 *)
             (lVar7 + ((ulong)(puVar4 + ~(ulong)puVar9) & 0xfffffffffffffffc) + lVar12 + 4) <=
             puVar9) ||
           (puVar9 + ((ulong)(puVar4 + ~(ulong)puVar9) & 0xfffffffffffffffc) + 4 <= puVar8)) {
          uVar10 = uVar1 & 0x7fffffffffffffe0;
          puVar14 = (undefined8 *)(puVar9 + 0x40);
          puVar8 = puVar8 + uVar10 * 4;
          puVar9 = puVar9 + uVar10 * 4;
          puVar11 = (undefined8 *)(lVar7 + lVar12 + 0x40);
          uVar13 = uVar10;
          do {
            uVar16 = puVar11[-7];
            uVar15 = puVar11[-8];
            uVar18 = puVar11[-5];
            uVar17 = puVar11[-6];
            uVar19 = puVar11[-4];
            uVar21 = puVar11[-1];
            uVar20 = puVar11[-2];
            uVar23 = puVar11[1];
            uVar22 = *puVar11;
            uVar25 = puVar11[3];
            uVar24 = puVar11[2];
            uVar27 = puVar11[5];
            uVar26 = puVar11[4];
            uVar29 = puVar11[7];
            uVar28 = puVar11[6];
            uVar13 = uVar13 - 0x20;
            puVar14[-3] = puVar11[-3];
            puVar14[-4] = uVar19;
            puVar14[-1] = uVar21;
            puVar14[-2] = uVar20;
            puVar14[-7] = uVar16;
            puVar14[-8] = uVar15;
            puVar14[-5] = uVar18;
            puVar14[-6] = uVar17;
            puVar14[5] = uVar27;
            puVar14[4] = uVar26;
            puVar14[7] = uVar29;
            puVar14[6] = uVar28;
            puVar14[1] = uVar23;
            *puVar14 = uVar22;
            puVar14[3] = uVar25;
            puVar14[2] = uVar24;
            puVar11 = puVar11 + 0x10;
            puVar14 = puVar14 + 0x10;
          } while (uVar13 != 0);
          if (uVar1 == uVar10) {
            return 0;
          }
        }
      }
      do {
        *puVar9 = *puVar8;
        puVar9[1] = puVar8[1];
        puVar9[2] = puVar8[2];
        puVar2 = puVar8 + 3;
        puVar8 = puVar8 + 4;
        puVar9[3] = *puVar2;
        puVar9 = puVar9 + 4;
      } while (puVar9 < puVar3);
    }
    return 0;
  }
  return 6;
}

