
/* btAlignedObjectArray<btFace>::reserve(int) */

void __thiscall
btAlignedObjectArray<btFace>::reserve(btAlignedObjectArray<btFace> *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  char *pcVar20;
  ulong uVar21;
  uint *puVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  if (param_1 <= *(int *)(this + 8)) {
    return;
  }
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = btAlignedAllocInternal((long)param_1 * 0x30,0x10);
  }
  uVar1 = *(uint *)(this + 4);
  if (0 < (int)uVar1) {
    uVar21 = 0;
    do {
      lVar23 = *(long *)(this + 0x10);
      lVar15 = lVar5 + uVar21 * 0x30;
      pcVar20 = (char *)(lVar15 + 0x18);
      *pcVar20 = '\x01';
      puVar17 = (ulong *)(lVar15 + 0x10);
      *puVar17 = 0;
      puVar22 = (uint *)(lVar15 + 4);
      puVar22[0] = 0;
      puVar22[1] = 0;
      uVar2 = *(uint *)(lVar23 + uVar21 * 0x30 + 4);
      if ((int)uVar2 < 1) {
        *puVar22 = uVar2;
      }
      else {
        uVar18 = (ulong)(int)uVar2;
        uVar19 = uVar18 * 4;
        pvVar6 = (void *)btAlignedAllocInternal(uVar19,0x10);
        uVar3 = *puVar22;
        uVar9 = (ulong)(int)uVar3;
        pvVar7 = (void *)*puVar17;
        if ((int)uVar3 < 1) {
          if (pvVar7 != (void *)0x0) goto LAB_0122e648;
        }
        else {
          if (uVar3 < 8) {
LAB_0122e614:
            uVar12 = 0;
          }
          else {
            uVar12 = uVar9 & 0xfffffffffffffff8;
            if (uVar12 != 0) {
              if ((pvVar6 < (void *)((long)pvVar7 + uVar9 * 4)) &&
                 (pvVar7 < (void *)((long)pvVar6 + uVar9 * 4))) goto LAB_0122e614;
              puVar14 = (undefined8 *)((long)pvVar6 + 0x10);
              puVar16 = (undefined8 *)((long)pvVar7 + 0x10);
              uVar13 = uVar12;
              do {
                puVar4 = puVar16 + -1;
                uVar24 = puVar16[-2];
                uVar26 = puVar16[1];
                uVar25 = *puVar16;
                uVar13 = uVar13 - 8;
                puVar16 = puVar16 + 4;
                puVar14[-1] = *puVar4;
                puVar14[-2] = uVar24;
                puVar14[1] = uVar26;
                *puVar14 = uVar25;
                puVar14 = puVar14 + 4;
              } while (uVar13 != 0);
              if (uVar12 == uVar9) goto LAB_0122e648;
            }
          }
          lVar10 = uVar9 - uVar12;
          puVar8 = (undefined4 *)((long)pvVar7 + uVar12 * 4);
          puVar11 = (undefined4 *)((long)pvVar6 + uVar12 * 4);
          do {
            lVar10 = lVar10 + -1;
            *puVar11 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
          } while (lVar10 != 0);
LAB_0122e648:
          if (*pcVar20 != '\0') {
            btAlignedFreeInternal(pvVar7);
          }
        }
        *pcVar20 = '\x01';
        *puVar17 = (ulong)pvVar6;
        *(uint *)(lVar15 + 8) = uVar2;
        memset(pvVar6,0,uVar19);
        uVar9 = *puVar17;
        *puVar22 = uVar2;
        uVar12 = *(ulong *)(lVar23 + uVar21 * 0x30 + 0x10);
        if (uVar2 < 8) {
          uVar13 = 0;
        }
        else {
          uVar13 = uVar18 & 0xfffffffffffffff8;
          if (uVar13 != 0) {
            if ((uVar9 < uVar12 + uVar19) && (uVar12 < uVar9 + uVar19)) {
              uVar13 = 0;
            }
            else {
              puVar14 = (undefined8 *)(uVar9 + 0x10);
              puVar16 = (undefined8 *)(uVar12 + 0x10);
              uVar19 = uVar13;
              do {
                puVar4 = puVar16 + -1;
                uVar24 = puVar16[-2];
                uVar26 = puVar16[1];
                uVar25 = *puVar16;
                uVar19 = uVar19 - 8;
                puVar16 = puVar16 + 4;
                puVar14[-1] = *puVar4;
                puVar14[-2] = uVar24;
                puVar14[1] = uVar26;
                *puVar14 = uVar25;
                puVar14 = puVar14 + 4;
              } while (uVar19 != 0);
              if (uVar13 == uVar18) goto LAB_0122e72c;
            }
          }
        }
        lVar15 = uVar18 - uVar13;
        puVar8 = (undefined4 *)(uVar9 + uVar13 * 4);
        puVar11 = (undefined4 *)(uVar12 + uVar13 * 4);
        do {
          lVar15 = lVar15 + -1;
          *puVar8 = *puVar11;
          puVar8 = puVar8 + 1;
          puVar11 = puVar11 + 1;
        } while (lVar15 != 0);
      }
LAB_0122e72c:
      lVar15 = uVar21 * 0x30;
      lVar23 = lVar23 + lVar15;
      uVar24 = *(undefined8 *)(lVar23 + 0x20);
      uVar21 = uVar21 + 1;
      lVar15 = lVar5 + lVar15;
      *(undefined8 *)(lVar15 + 0x28) = *(undefined8 *)(lVar23 + 0x28);
      *(undefined8 *)(lVar15 + 0x20) = uVar24;
    } while (uVar21 != uVar1);
    uVar21 = (ulong)*(uint *)(this + 4);
    if (0 < (int)*(uint *)(this + 4)) {
      lVar15 = 0;
      do {
        lVar23 = *(long *)(this + 0x10) + lVar15;
        if (*(void **)(lVar23 + 0x10) != (void *)0x0) {
          if (*(char *)(lVar23 + 0x18) != '\0') {
            btAlignedFreeInternal(*(void **)(lVar23 + 0x10));
          }
          *(undefined8 *)(lVar23 + 0x10) = 0;
        }
        uVar21 = uVar21 - 1;
        lVar15 = lVar15 + 0x30;
        *(undefined1 *)(lVar23 + 0x18) = 1;
        *(undefined8 *)(lVar23 + 0x10) = 0;
        *(undefined4 *)(lVar23 + 4) = 0;
        *(undefined4 *)(lVar23 + 8) = 0;
      } while (uVar21 != 0);
      pvVar6 = *(void **)(this + 0x10);
      goto joined_r0x0122e7d8;
    }
  }
  pvVar6 = *(void **)(this + 0x10);
joined_r0x0122e7d8:
  if (pvVar6 != (void *)0x0) {
    if (this[0x18] != (btAlignedObjectArray<btFace>)0x0) {
      btAlignedFreeInternal(pvVar6);
    }
    *(undefined8 *)(this + 0x10) = 0;
  }
  this[0x18] = (btAlignedObjectArray<btFace>)0x1;
  *(long *)(this + 0x10) = lVar5;
  *(int *)(this + 8) = param_1;
  return;
}

