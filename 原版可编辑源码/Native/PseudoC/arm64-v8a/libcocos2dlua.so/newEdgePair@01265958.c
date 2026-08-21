
/* btConvexHullInternal::newEdgePair(btConvexHullInternal::Vertex*, btConvexHullInternal::Vertex*)
    */

undefined8 * __thiscall
btConvexHullInternal::newEdgePair(btConvexHullInternal *this,Vertex *param_1,Vertex *param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  
  puVar16 = *(undefined8 **)(this + 0x50);
  if (puVar16 == (undefined8 *)0x0) {
    puVar16 = *(undefined8 **)(this + 0x48);
    if (puVar16 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)btAlignedAllocInternal(0x18,0x10);
      iVar1 = *(int *)(this + 0x58);
      puVar16[2] = 0;
      *(int *)(puVar16 + 1) = iVar1;
      uVar7 = btAlignedAllocInternal((long)iVar1 * 0x30,0x10);
      *puVar16 = uVar7;
      puVar16[2] = *(undefined8 *)(this + 0x40);
      *(undefined8 **)(this + 0x40) = puVar16;
    }
    else {
      *(undefined8 *)(this + 0x48) = puVar16[2];
    }
    iVar1 = *(int *)(puVar16 + 1);
    puVar16 = (undefined8 *)*puVar16;
    if (0 < iVar1) {
      puVar8 = puVar16 + 6;
      puVar10 = puVar8;
      if (iVar1 == 1) {
        puVar10 = (undefined8 *)0x0;
      }
      *puVar16 = puVar10;
      if (iVar1 != 1) {
        iVar9 = iVar1;
        if (iVar1 < 3) {
          iVar9 = 2;
        }
        uVar2 = (ulong)(iVar9 - 2U) + 1;
        if (uVar2 < 2) {
LAB_01265bcc:
          iVar9 = 1;
        }
        else {
          uVar3 = ~(iVar9 - 2U) & 1;
          lVar12 = uVar2 - uVar3;
          if (lVar12 == 0) goto LAB_01265bcc;
          lVar15 = 0;
          iVar9 = (int)lVar12 + 1;
          puVar8 = puVar8 + lVar12 * 6;
          puVar10 = puVar16;
          do {
            puVar11 = puVar10 + 0xc;
            iVar13 = (int)lVar15;
            lVar15 = lVar15 + 2;
            puVar4 = puVar10 + 0x12;
            puVar5 = puVar11;
            if (iVar1 <= (int)lVar15) {
              puVar5 = (undefined8 *)0x0;
            }
            if (iVar1 <= iVar13 + 3) {
              puVar4 = (undefined8 *)0x0;
            }
            puVar10[6] = puVar5;
            *puVar11 = puVar4;
            puVar10 = puVar11;
          } while (lVar12 != lVar15);
          if (uVar3 == 0) goto LAB_01265980;
        }
        do {
          iVar9 = iVar9 + 1;
          puVar10 = puVar8 + 6;
          if (iVar1 <= iVar9) {
            puVar10 = (undefined8 *)0x0;
          }
          *puVar8 = puVar10;
          puVar8 = puVar8 + 6;
        } while (iVar9 < iVar1);
      }
    }
  }
LAB_01265980:
  *(undefined8 *)(this + 0x50) = *puVar16;
  puVar16[3] = 0;
  puVar16[2] = 0;
  puVar16[5] = 0;
  puVar16[4] = 0;
  puVar16[1] = 0;
  *puVar16 = 0;
  puVar8 = *(undefined8 **)(this + 0x50);
  if (puVar8 != (undefined8 *)0x0) goto LAB_0126599c;
  puVar8 = *(undefined8 **)(this + 0x48);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)btAlignedAllocInternal(0x18,0x10);
    iVar1 = *(int *)(this + 0x58);
    puVar8[2] = 0;
    *(int *)(puVar8 + 1) = iVar1;
    uVar7 = btAlignedAllocInternal((long)iVar1 * 0x30,0x10);
    *puVar8 = uVar7;
    puVar8[2] = *(undefined8 *)(this + 0x40);
    *(undefined8 **)(this + 0x40) = puVar8;
  }
  else {
    *(undefined8 *)(this + 0x48) = puVar8[2];
  }
  iVar1 = *(int *)(puVar8 + 1);
  puVar8 = (undefined8 *)*puVar8;
  if (iVar1 < 1) goto LAB_0126599c;
  puVar10 = puVar8 + 6;
  puVar4 = puVar10;
  if (iVar1 == 1) {
    puVar4 = (undefined8 *)0x0;
  }
  *puVar8 = puVar4;
  if (iVar1 == 1) goto LAB_0126599c;
  iVar9 = iVar1;
  if (iVar1 < 3) {
    iVar9 = 2;
  }
  uVar2 = (ulong)(iVar9 - 2U) + 1;
  if (uVar2 < 2) {
LAB_01265bf0:
    iVar9 = 1;
  }
  else {
    uVar3 = ~(iVar9 - 2U) & 1;
    lVar12 = uVar2 - uVar3;
    if (lVar12 == 0) goto LAB_01265bf0;
    lVar15 = 0;
    iVar9 = (int)lVar12 + 1;
    puVar10 = puVar10 + lVar12 * 6;
    puVar4 = puVar8;
    do {
      puVar14 = puVar4 + 0xc;
      iVar13 = (int)lVar15;
      lVar15 = lVar15 + 2;
      puVar5 = puVar4 + 0x12;
      puVar11 = puVar14;
      if (iVar1 <= (int)lVar15) {
        puVar11 = (undefined8 *)0x0;
      }
      if (iVar1 <= iVar13 + 3) {
        puVar5 = (undefined8 *)0x0;
      }
      puVar4[6] = puVar11;
      *puVar14 = puVar5;
      puVar4 = puVar14;
    } while (lVar12 != lVar15);
    if (uVar3 == 0) goto LAB_0126599c;
  }
  do {
    iVar9 = iVar9 + 1;
    puVar4 = puVar10 + 6;
    if (iVar1 <= iVar9) {
      puVar4 = (undefined8 *)0x0;
    }
    *puVar10 = puVar4;
    puVar10 = puVar10 + 6;
  } while (iVar9 < iVar1);
LAB_0126599c:
  *(undefined8 *)(this + 0x50) = *puVar8;
  puVar8[3] = 0;
  puVar8[2] = 0;
  puVar8[5] = 0;
  puVar8[4] = 0;
  puVar8[1] = 0;
  *puVar8 = 0;
  puVar16[2] = puVar8;
  puVar8[2] = puVar16;
  uVar6 = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)(puVar16 + 5) = uVar6;
  *(undefined4 *)(puVar8 + 5) = uVar6;
  puVar16[3] = param_2;
  puVar8[3] = param_1;
  puVar16[4] = 0;
  puVar8[4] = 0;
  iVar9 = *(int *)(this + 0xb0);
  iVar1 = iVar9 + 1;
  *(int *)(this + 0xb0) = iVar1;
  if (*(int *)(this + 0xb4) <= iVar9) {
    *(int *)(this + 0xb4) = iVar1;
  }
  return puVar16;
}

