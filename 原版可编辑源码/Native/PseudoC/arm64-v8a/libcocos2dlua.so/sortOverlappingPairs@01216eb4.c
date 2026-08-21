
/* btHashedOverlappingPairCache::sortOverlappingPairs(btDispatcher*) */

void __thiscall
btHashedOverlappingPairCache::sortOverlappingPairs
          (btHashedOverlappingPairCache *this,btDispatcher *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
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
  btAlignedObjectArray<btBroadphasePair> abStack_70 [4];
  long local_6c;
  void *local_60;
  char local_58;
  btBroadphasePairSortPredicate abStack_48 [8];
  
  local_58 = '\x01';
  local_60 = (void *)0x0;
  local_6c = 0;
  iVar4 = *(int *)(this + 0xc);
  if (iVar4 < 1) {
    uVar7 = 0;
  }
  else {
    pvVar12 = (void *)0x0;
    uVar3 = 0;
    uVar7 = 0;
    lVar13 = 0;
    do {
      local_58 = '\x01';
      lVar14 = *(long *)(this + 0x18);
      uVar10 = uVar7;
      if (uVar7 == uVar3) {
        uVar7 = uVar3 << 1;
        if (uVar3 == 0) {
          uVar7 = 1;
        }
        uVar10 = uVar3;
        if ((int)uVar3 < (int)uVar7) {
          if (uVar7 == 0) {
            pvVar12 = (void *)0x0;
            if (0 < (int)uVar3) goto LAB_01216f88;
LAB_01217018:
            if (local_60 != (void *)0x0) goto LAB_01217020;
          }
          else {
            pvVar12 = (void *)btAlignedAllocInternal
                                        (-(ulong)(uVar7 >> 0x1f) & 0xffffffe000000000 |
                                         (ulong)uVar7 << 5,0x10);
            uVar3 = (uint)local_6c;
            if ((int)(uint)local_6c < 1) goto LAB_01217018;
LAB_01216f88:
            uVar5 = (ulong)(int)uVar3;
            if (uVar3 < 4) {
LAB_01216fbc:
              uVar8 = 0;
LAB_01216fc0:
              lVar6 = uVar5 - uVar8;
              lVar9 = uVar8 << 5;
              do {
                puVar1 = (undefined8 *)((long)local_60 + lVar9);
                uVar15 = *puVar1;
                puVar2 = (undefined8 *)((long)pvVar12 + lVar9);
                lVar6 = lVar6 + -1;
                lVar9 = lVar9 + 0x20;
                puVar2[1] = puVar1[1];
                *puVar2 = uVar15;
                puVar2[2] = puVar1[2];
                puVar2[3] = puVar1[3];
              } while (lVar6 != 0);
            }
            else {
              uVar8 = uVar5 & 0xfffffffffffffffc;
              if (uVar8 == 0) goto LAB_01216fc0;
              if ((pvVar12 < (void *)((long)local_60 + uVar5 * 0x20)) &&
                 (local_60 < (void *)((long)pvVar12 + uVar5 * 0x20))) goto LAB_01216fbc;
              lVar9 = 0;
              uVar11 = uVar8;
              do {
                puVar1 = (undefined8 *)((long)local_60 + lVar9);
                uVar16 = puVar1[1];
                uVar18 = puVar1[2];
                uVar20 = puVar1[3];
                uVar15 = puVar1[4];
                uVar17 = puVar1[5];
                uVar19 = puVar1[6];
                uVar21 = puVar1[7];
                uVar11 = uVar11 - 4;
                uVar22 = puVar1[8];
                uVar24 = puVar1[9];
                uVar26 = puVar1[10];
                uVar28 = puVar1[0xb];
                uVar23 = puVar1[0xc];
                uVar25 = puVar1[0xd];
                uVar27 = puVar1[0xe];
                uVar29 = puVar1[0xf];
                puVar2 = (undefined8 *)((long)pvVar12 + lVar9);
                *puVar2 = *puVar1;
                puVar2[1] = uVar16;
                puVar2[2] = uVar18;
                puVar2[3] = uVar20;
                puVar2[4] = uVar15;
                puVar2[5] = uVar17;
                puVar2[6] = uVar19;
                puVar2[7] = uVar21;
                lVar9 = lVar9 + 0x80;
                puVar2[8] = uVar22;
                puVar2[9] = uVar24;
                puVar2[10] = uVar26;
                puVar2[0xb] = uVar28;
                puVar2[0xc] = uVar23;
                puVar2[0xd] = uVar25;
                puVar2[0xe] = uVar27;
                puVar2[0xf] = uVar29;
              } while (uVar11 != 0);
              if (uVar8 != uVar5) goto LAB_01216fc0;
            }
LAB_01217020:
            if (local_58 != '\0') {
              btAlignedFreeInternal(local_60);
              uVar3 = (uint)local_6c;
            }
          }
          local_6c = (ulong)uVar7 << 0x20;
          iVar4 = *(int *)(this + 0xc);
          uVar10 = uVar3;
          uVar3 = uVar7;
          local_60 = pvVar12;
        }
      }
      local_58 = '\x01';
      puVar1 = (undefined8 *)(lVar14 + lVar13 * 0x20);
      uVar15 = *puVar1;
      puVar2 = (undefined8 *)((long)pvVar12 + (long)(int)uVar10 * 0x20);
      lVar13 = lVar13 + 1;
      puVar2[1] = puVar1[1];
      *puVar2 = uVar15;
      puVar2[2] = puVar1[2];
      uVar7 = uVar10 + 1;
      puVar2[3] = puVar1[3];
      local_6c = CONCAT44(local_6c._4_4_,uVar7);
    } while (lVar13 < iVar4);
    if (-1 < (int)uVar10) {
      lVar13 = 0;
      lVar14 = 1;
      while( true ) {
        (**(code **)(*(long *)this + 0x18))
                  (this,*(undefined8 *)((long)pvVar12 + lVar13),
                   ((undefined8 *)((long)pvVar12 + lVar13))[1],param_1);
        uVar7 = (uint)local_6c;
        if ((int)(uint)local_6c <= lVar14) break;
        lVar13 = lVar13 + 0x20;
        lVar14 = lVar14 + 1;
        pvVar12 = local_60;
      }
    }
  }
  if (0 < *(int *)(this + 0x5c)) {
    lVar14 = *(long *)(this + 0x68);
    lVar13 = 0;
    do {
      *(undefined4 *)(lVar14 + lVar13 * 4) = 0xffffffff;
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(this + 0x5c));
    uVar7 = (uint)local_6c;
  }
  if (uVar7 - 1 != 0 && 0 < (int)uVar7) {
    btAlignedObjectArray<btBroadphasePair>::quickSortInternal<btBroadphasePairSortPredicate>
              (abStack_70,abStack_48,0,uVar7 - 1);
    uVar7 = (uint)local_6c;
  }
  if (0 < (int)uVar7) {
    lVar14 = 0;
    lVar13 = 0;
    do {
      (**(code **)(*(long *)this + 0x10))
                (this,*(undefined8 *)((long)local_60 + lVar14),
                 ((undefined8 *)((long)local_60 + lVar14))[1]);
      lVar13 = lVar13 + 1;
      lVar14 = lVar14 + 0x20;
    } while (lVar13 < (int)(uint)local_6c);
  }
  if ((local_60 != (void *)0x0) && (local_58 != '\0')) {
    btAlignedFreeInternal(local_60);
  }
  return;
}

