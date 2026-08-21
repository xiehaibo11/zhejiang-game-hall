
/* btAlignedObjectArray<btFace>::push_back(btFace const&) */

void __thiscall
btAlignedObjectArray<btFace>::push_back(btAlignedObjectArray<btFace> *this,btFace *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  void *__s;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  uint *puVar19;
  long lVar20;
  char *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  iVar5 = *(int *)(this + 4);
  if (iVar5 == *(int *)(this + 8)) {
    iVar3 = iVar5 << 1;
    if (iVar5 == 0) {
      iVar3 = 1;
    }
    reserve(this,iVar3);
    iVar5 = *(int *)(this + 4);
  }
  lVar16 = *(long *)(this + 0x10);
  lVar20 = lVar16 + (long)iVar5 * 0x30;
  pcVar21 = (char *)(lVar20 + 0x18);
  *pcVar21 = '\x01';
  puVar17 = (ulong *)(lVar20 + 0x10);
  *puVar17 = 0;
  puVar19 = (uint *)(lVar20 + 4);
  puVar19[0] = 0;
  puVar19[1] = 0;
  uVar1 = *(uint *)(param_1 + 4);
  if ((int)uVar1 < 1) {
    *puVar19 = uVar1;
    goto LAB_0122d8ac;
  }
  uVar18 = (ulong)(int)uVar1;
  uVar15 = uVar18 * 4;
  __s = (void *)btAlignedAllocInternal(uVar15,0x10);
  uVar2 = *puVar19;
  uVar8 = (ulong)(int)uVar2;
  pvVar6 = (void *)*puVar17;
  if ((int)uVar2 < 1) {
    if (pvVar6 != (void *)0x0) goto LAB_0122d7e0;
  }
  else {
    if (uVar2 < 8) {
LAB_0122d77c:
      uVar11 = 0;
    }
    else {
      uVar11 = uVar8 & 0xfffffffffffffff8;
      if (uVar11 != 0) {
        if ((__s < (void *)((long)pvVar6 + uVar8 * 4)) && (pvVar6 < (void *)((long)__s + uVar8 * 4))
           ) goto LAB_0122d77c;
        puVar13 = (undefined8 *)((long)__s + 0x10);
        puVar14 = (undefined8 *)((long)pvVar6 + 0x10);
        uVar12 = uVar11;
        do {
          puVar4 = puVar14 + -1;
          uVar22 = puVar14[-2];
          uVar24 = puVar14[1];
          uVar23 = *puVar14;
          uVar12 = uVar12 - 8;
          puVar14 = puVar14 + 4;
          puVar13[-1] = *puVar4;
          puVar13[-2] = uVar22;
          puVar13[1] = uVar24;
          *puVar13 = uVar23;
          puVar13 = puVar13 + 4;
        } while (uVar12 != 0);
        if (uVar11 == uVar8) goto LAB_0122d7e0;
      }
    }
    lVar9 = uVar8 - uVar11;
    puVar7 = (undefined4 *)((long)pvVar6 + uVar11 * 4);
    puVar10 = (undefined4 *)((long)__s + uVar11 * 4);
    do {
      lVar9 = lVar9 + -1;
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    } while (lVar9 != 0);
LAB_0122d7e0:
    if (*pcVar21 != '\0') {
      btAlignedFreeInternal(pvVar6);
    }
  }
  *pcVar21 = '\x01';
  *puVar17 = (ulong)__s;
  *(uint *)(lVar20 + 8) = uVar1;
  memset(__s,0,uVar15);
  uVar8 = *puVar17;
  *puVar19 = uVar1;
  uVar11 = *(ulong *)(param_1 + 0x10);
  if (uVar1 < 8) {
LAB_0122d848:
    uVar12 = 0;
  }
  else {
    uVar12 = uVar18 & 0xfffffffffffffff8;
    if (uVar12 != 0) {
      if ((uVar8 < uVar11 + uVar15) && (uVar11 < uVar8 + uVar15)) goto LAB_0122d848;
      puVar13 = (undefined8 *)(uVar8 + 0x10);
      puVar14 = (undefined8 *)(uVar11 + 0x10);
      uVar15 = uVar12;
      do {
        puVar4 = puVar14 + -1;
        uVar22 = puVar14[-2];
        uVar24 = puVar14[1];
        uVar23 = *puVar14;
        uVar15 = uVar15 - 8;
        puVar14 = puVar14 + 4;
        puVar13[-1] = *puVar4;
        puVar13[-2] = uVar22;
        puVar13[1] = uVar24;
        *puVar13 = uVar23;
        puVar13 = puVar13 + 4;
      } while (uVar15 != 0);
      if (uVar12 == uVar18) goto LAB_0122d8ac;
    }
  }
  lVar20 = uVar18 - uVar12;
  puVar7 = (undefined4 *)(uVar8 + uVar12 * 4);
  puVar10 = (undefined4 *)(uVar11 + uVar12 * 4);
  do {
    lVar20 = lVar20 + -1;
    *puVar7 = *puVar10;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  } while (lVar20 != 0);
LAB_0122d8ac:
  uVar22 = *(undefined8 *)(param_1 + 0x20);
  lVar16 = lVar16 + (long)iVar5 * 0x30;
  *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(lVar16 + 0x20) = uVar22;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}

