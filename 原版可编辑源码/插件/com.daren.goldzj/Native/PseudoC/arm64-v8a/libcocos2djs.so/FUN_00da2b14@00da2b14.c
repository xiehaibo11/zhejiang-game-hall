
void FUN_00da2b14(long *param_1,int param_2,uint param_3,long *param_4)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  uint *puVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  uint auStack_574 [258];
  byte local_16c [260];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (3 < param_3) {
    puVar7 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar7 + 5) = 0x34;
    *(uint *)((long)puVar7 + 0x2c) = param_3;
    (*(code *)*puVar7)(param_1);
  }
  plVar3 = param_1 + 0x1d;
  if (param_2 == 0) {
    plVar3 = param_1 + 0x21;
  }
  lVar15 = plVar3[(int)param_3];
  if (lVar15 == 0) {
    puVar7 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar7 + 5) = 0x34;
    *(uint *)((long)puVar7 + 0x2c) = param_3;
    (*(code *)*puVar7)(param_1);
  }
  lVar13 = *param_4;
  if (lVar13 == 0) {
    lVar13 = (**(code **)param_1[1])(param_1,1,0x620);
    *param_4 = lVar13;
  }
  uVar16 = 0;
  lVar14 = 1;
  *(long *)(lVar13 + 0x118) = lVar15;
  do {
    bVar4 = *(byte *)(lVar15 + lVar14);
    if (0x100 < (int)(uVar16 + bVar4)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 9;
      (*(code *)*puVar7)(param_1);
    }
    if (bVar4 != 0) {
      memset(local_16c + (int)uVar16,(int)lVar14,(ulong)(bVar4 - 1) + 1);
      uVar16 = uVar16 + bVar4;
    }
    lVar14 = lVar14 + 1;
  } while (lVar14 != 0x11);
  local_16c[(int)uVar16] = 0;
  uVar17 = (ulong)local_16c[0];
  if (uVar17 != 0) {
    iVar6 = 0;
    uVar18 = 0;
    uVar10 = uVar17;
    do {
      if (uVar10 == uVar17) {
        puVar8 = auStack_574 + (long)iVar6 + 1;
        pbVar9 = (byte *)(((ulong)local_16c | 1) + (long)iVar6);
        do {
          *puVar8 = uVar18;
          bVar4 = *pbVar9;
          uVar18 = uVar18 + 1;
          iVar6 = iVar6 + 1;
          puVar8 = puVar8 + 1;
          pbVar9 = pbVar9 + 1;
        } while (uVar10 == bVar4);
      }
      if (1L << (uVar10 & 0x3f) <= (long)(ulong)uVar18) {
        puVar7 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar7 + 5) = 9;
        (*(code *)*puVar7)(param_1);
      }
      bVar4 = local_16c[iVar6];
      uVar17 = (ulong)bVar4;
      uVar18 = uVar18 << 1;
      uVar10 = uVar10 + 1;
    } while (bVar4 != 0);
  }
  if (*(char *)(lVar15 + 1) == '\0') {
    uVar10 = 0xffffffffffffffff;
    uVar17 = 0;
  }
  else {
    *(ulong *)(lVar13 + 0x98) = -(ulong)auStack_574[1];
    uVar17 = (ulong)*(byte *)(lVar15 + 1);
    uVar10 = (ulong)auStack_574[uVar17];
  }
  *(ulong *)(lVar13 + 8) = uVar10;
  if (*(char *)(lVar15 + 2) == '\0') {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    *(ulong *)(lVar13 + 0xa0) = uVar17 - auStack_574[uVar17 + 1];
    uVar17 = uVar17 + *(byte *)(lVar15 + 2);
    uVar10 = (ulong)auStack_574[uVar17];
  }
  *(ulong *)(lVar13 + 0x10) = uVar10;
  if (*(char *)(lVar15 + 3) == '\0') {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    iVar6 = (int)uVar17;
    *(ulong *)(lVar13 + 0xa8) = (long)iVar6 - (ulong)auStack_574[(long)iVar6 + 1];
    uVar17 = (long)iVar6 + (ulong)*(byte *)(lVar15 + 3);
    uVar10 = (ulong)auStack_574[uVar17];
  }
  *(ulong *)(lVar13 + 0x18) = uVar10;
  if (*(char *)(lVar15 + 4) == '\0') {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    iVar6 = (int)uVar17;
    *(ulong *)(lVar13 + 0xb0) = (long)iVar6 - (ulong)auStack_574[(long)iVar6 + 1];
    uVar17 = (long)iVar6 + (ulong)*(byte *)(lVar15 + 4);
    uVar10 = (ulong)auStack_574[uVar17];
  }
  *(ulong *)(lVar13 + 0x20) = uVar10;
  if (*(char *)(lVar15 + 5) == '\0') {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    iVar6 = (int)uVar17;
    *(ulong *)(lVar13 + 0xb8) = (long)iVar6 - (ulong)auStack_574[(long)iVar6 + 1];
    uVar17 = (long)iVar6 + (ulong)*(byte *)(lVar15 + 5);
    uVar10 = (ulong)auStack_574[uVar17];
  }
  *(ulong *)(lVar13 + 0x28) = uVar10;
  if (*(char *)(lVar15 + 6) == '\0') {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    iVar6 = (int)uVar17;
    *(ulong *)(lVar13 + 0xc0) = (long)iVar6 - (ulong)auStack_574[(long)iVar6 + 1];
    uVar17 = (long)iVar6 + (ulong)*(byte *)(lVar15 + 6);
    uVar10 = (ulong)auStack_574[uVar17];
  }
  *(ulong *)(lVar13 + 0x30) = uVar10;
  if (*(char *)(lVar15 + 7) == '\0') {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    iVar6 = (int)uVar17;
    *(ulong *)(lVar13 + 200) = (long)iVar6 - (ulong)auStack_574[(long)iVar6 + 1];
    uVar17 = (long)iVar6 + (ulong)*(byte *)(lVar15 + 7);
    uVar10 = (ulong)auStack_574[uVar17];
  }
  *(ulong *)(lVar13 + 0x38) = uVar10;
  if (*(char *)(lVar15 + 8) == '\0') {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    iVar6 = (int)uVar17;
    *(ulong *)(lVar13 + 0xd0) = (long)iVar6 - (ulong)auStack_574[(long)iVar6 + 1];
    uVar17 = (long)iVar6 + (ulong)*(byte *)(lVar15 + 8);
    uVar10 = (ulong)auStack_574[uVar17];
  }
  *(ulong *)(lVar13 + 0x40) = uVar10;
  if (*(char *)(lVar15 + 9) == '\0') {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    iVar6 = (int)uVar17;
    *(ulong *)(lVar13 + 0xd8) = (long)iVar6 - (ulong)auStack_574[(long)iVar6 + 1];
    uVar17 = (long)iVar6 + (ulong)*(byte *)(lVar15 + 9);
    uVar10 = (ulong)auStack_574[uVar17];
  }
  *(ulong *)(lVar13 + 0x48) = uVar10;
  if (*(char *)(lVar15 + 10) == '\0') {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    iVar6 = (int)uVar17;
    *(ulong *)(lVar13 + 0xe0) = (long)iVar6 - (ulong)auStack_574[(long)iVar6 + 1];
    uVar17 = (long)iVar6 + (ulong)*(byte *)(lVar15 + 10);
    uVar10 = (ulong)auStack_574[uVar17];
  }
  *(ulong *)(lVar13 + 0x50) = uVar10;
  if (*(char *)(lVar15 + 0xb) == '\0') {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    iVar6 = (int)uVar17;
    *(ulong *)(lVar13 + 0xe8) = (long)iVar6 - (ulong)auStack_574[(long)iVar6 + 1];
    uVar17 = (long)iVar6 + (ulong)*(byte *)(lVar15 + 0xb);
    uVar10 = (ulong)auStack_574[uVar17];
  }
  *(ulong *)(lVar13 + 0x58) = uVar10;
  if (*(char *)(lVar15 + 0xc) == '\0') {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    iVar6 = (int)uVar17;
    *(ulong *)(lVar13 + 0xf0) = (long)iVar6 - (ulong)auStack_574[(long)iVar6 + 1];
    uVar17 = (long)iVar6 + (ulong)*(byte *)(lVar15 + 0xc);
    uVar10 = (ulong)auStack_574[uVar17];
  }
  *(ulong *)(lVar13 + 0x60) = uVar10;
  if (*(char *)(lVar15 + 0xd) == '\0') {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    iVar6 = (int)uVar17;
    *(ulong *)(lVar13 + 0xf8) = (long)iVar6 - (ulong)auStack_574[(long)iVar6 + 1];
    uVar17 = (long)iVar6 + (ulong)*(byte *)(lVar15 + 0xd);
    uVar10 = (ulong)auStack_574[uVar17];
  }
  *(ulong *)(lVar13 + 0x68) = uVar10;
  if (*(char *)(lVar15 + 0xe) == '\0') {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    iVar6 = (int)uVar17;
    *(ulong *)(lVar13 + 0x100) = (long)iVar6 - (ulong)auStack_574[(long)iVar6 + 1];
    uVar17 = (long)iVar6 + (ulong)*(byte *)(lVar15 + 0xe);
    uVar10 = (ulong)auStack_574[uVar17];
  }
  *(ulong *)(lVar13 + 0x70) = uVar10;
  if (*(char *)(lVar15 + 0xf) == '\0') {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    iVar6 = (int)uVar17;
    *(ulong *)(lVar13 + 0x108) = (long)iVar6 - (ulong)auStack_574[(long)iVar6 + 1];
    uVar17 = (long)iVar6 + (ulong)*(byte *)(lVar15 + 0xf);
    uVar10 = (ulong)auStack_574[uVar17];
  }
  *(ulong *)(lVar13 + 0x78) = uVar10;
  if (*(char *)(lVar15 + 0x10) == '\0') {
    uVar17 = 0xffffffffffffffff;
  }
  else {
    iVar6 = (int)uVar17;
    *(ulong *)(lVar13 + 0x110) = (long)iVar6 - (ulong)auStack_574[(long)iVar6 + 1];
    uVar17 = (ulong)auStack_574[(long)iVar6 + (ulong)*(byte *)(lVar15 + 0x10)];
  }
  *(ulong *)(lVar13 + 0x80) = uVar17;
  *(undefined8 *)(lVar13 + 0x88) = 0xfffff;
  memset((void *)(lVar13 + 0x120),0,0x400);
  uVar17 = (ulong)*(byte *)(lVar15 + 1);
  if (*(byte *)(lVar15 + 1) != 0) {
    uVar17 = 0;
    iVar6 = 1;
    do {
      iVar12 = 0x81;
      lVar14 = (long)(int)(auStack_574[uVar17 + 1] << 7);
      do {
        *(undefined4 *)(lVar13 + 0x520 + lVar14 * 4 + -0x400) = 1;
        iVar12 = iVar12 + -1;
        *(undefined1 *)(lVar13 + 0x520 + lVar14) = *(undefined1 *)(lVar15 + uVar17 + 0x11);
        lVar14 = lVar14 + 1;
      } while (1 < iVar12);
      uVar17 = uVar17 + 1;
      bVar1 = iVar6 < (int)(uint)*(byte *)(lVar15 + 1);
      iVar6 = iVar6 + 1;
    } while (bVar1);
  }
  if (*(char *)(lVar15 + 2) != '\0') {
    uVar17 = (ulong)(int)uVar17;
    iVar6 = 1;
    do {
      iVar12 = 0x41;
      lVar14 = (long)(int)(auStack_574[uVar17 + 1] << 6);
      do {
        *(undefined4 *)(lVar13 + lVar14 * 4 + 0x120) = 2;
        iVar12 = iVar12 + -1;
        lVar11 = lVar13 + lVar14;
        lVar14 = lVar14 + 1;
        *(undefined1 *)(lVar11 + 0x520) = *(undefined1 *)(lVar15 + uVar17 + 0x11);
      } while (1 < iVar12);
      uVar17 = uVar17 + 1;
      bVar1 = iVar6 < (int)(uint)*(byte *)(lVar15 + 2);
      iVar6 = iVar6 + 1;
    } while (bVar1);
  }
  if (*(char *)(lVar15 + 3) != '\0') {
    uVar17 = (ulong)(int)uVar17;
    iVar6 = 1;
    do {
      iVar12 = 0x21;
      lVar14 = (long)(int)(auStack_574[uVar17 + 1] << 5);
      do {
        *(undefined4 *)(lVar13 + lVar14 * 4 + 0x120) = 3;
        iVar12 = iVar12 + -1;
        lVar11 = lVar13 + lVar14;
        lVar14 = lVar14 + 1;
        *(undefined1 *)(lVar11 + 0x520) = *(undefined1 *)(lVar15 + uVar17 + 0x11);
      } while (1 < iVar12);
      uVar17 = uVar17 + 1;
      bVar1 = iVar6 < (int)(uint)*(byte *)(lVar15 + 3);
      iVar6 = iVar6 + 1;
    } while (bVar1);
  }
  if (*(char *)(lVar15 + 4) != '\0') {
    uVar17 = (ulong)(int)uVar17;
    iVar6 = 1;
    do {
      iVar12 = 0x11;
      lVar14 = (long)(int)(auStack_574[uVar17 + 1] << 4);
      do {
        *(undefined4 *)(lVar13 + lVar14 * 4 + 0x120) = 4;
        iVar12 = iVar12 + -1;
        lVar11 = lVar13 + lVar14;
        lVar14 = lVar14 + 1;
        *(undefined1 *)(lVar11 + 0x520) = *(undefined1 *)(lVar15 + uVar17 + 0x11);
      } while (1 < iVar12);
      uVar17 = uVar17 + 1;
      bVar1 = iVar6 < (int)(uint)*(byte *)(lVar15 + 4);
      iVar6 = iVar6 + 1;
    } while (bVar1);
  }
  if (*(char *)(lVar15 + 5) != '\0') {
    uVar17 = (ulong)(int)uVar17;
    iVar6 = 1;
    do {
      iVar12 = 9;
      lVar14 = (long)(int)(auStack_574[uVar17 + 1] << 3);
      do {
        *(undefined4 *)(lVar13 + lVar14 * 4 + 0x120) = 5;
        iVar12 = iVar12 + -1;
        lVar11 = lVar13 + lVar14;
        lVar14 = lVar14 + 1;
        *(undefined1 *)(lVar11 + 0x520) = *(undefined1 *)(lVar15 + uVar17 + 0x11);
      } while (1 < iVar12);
      uVar17 = uVar17 + 1;
      bVar1 = iVar6 < (int)(uint)*(byte *)(lVar15 + 5);
      iVar6 = iVar6 + 1;
    } while (bVar1);
  }
  if (*(char *)(lVar15 + 6) != '\0') {
    uVar17 = (ulong)(int)uVar17;
    iVar6 = 1;
    do {
      iVar12 = 5;
      lVar14 = (long)(int)(auStack_574[uVar17 + 1] << 2);
      do {
        *(undefined4 *)(lVar13 + lVar14 * 4 + 0x120) = 6;
        iVar12 = iVar12 + -1;
        lVar11 = lVar13 + lVar14;
        lVar14 = lVar14 + 1;
        *(undefined1 *)(lVar11 + 0x520) = *(undefined1 *)(lVar15 + uVar17 + 0x11);
      } while (1 < iVar12);
      uVar17 = uVar17 + 1;
      bVar1 = iVar6 < (int)(uint)*(byte *)(lVar15 + 6);
      iVar6 = iVar6 + 1;
    } while (bVar1);
  }
  if (*(char *)(lVar15 + 7) != '\0') {
    uVar17 = (ulong)(int)uVar17;
    iVar6 = 1;
    do {
      iVar12 = 3;
      lVar14 = (long)(int)(auStack_574[uVar17 + 1] << 1);
      do {
        *(undefined4 *)(lVar13 + lVar14 * 4 + 0x120) = 7;
        iVar12 = iVar12 + -1;
        lVar11 = lVar13 + lVar14;
        lVar14 = lVar14 + 1;
        *(undefined1 *)(lVar11 + 0x520) = *(undefined1 *)(lVar15 + uVar17 + 0x11);
      } while (1 < iVar12);
      uVar17 = uVar17 + 1;
      bVar1 = iVar6 < (int)(uint)*(byte *)(lVar15 + 7);
      iVar6 = iVar6 + 1;
    } while (bVar1);
  }
  if (*(char *)(lVar15 + 8) != '\0') {
    lVar14 = (long)(int)uVar17;
    iVar6 = 1;
    do {
      lVar11 = (long)(int)auStack_574[lVar14 + 1];
      iVar12 = 2;
      do {
        *(undefined4 *)(lVar13 + lVar11 * 4 + 0x120) = 8;
        iVar12 = iVar12 + -1;
        lVar2 = lVar13 + lVar11;
        lVar11 = lVar11 + 1;
        *(undefined1 *)(lVar2 + 0x520) = *(undefined1 *)(lVar15 + lVar14 + 0x11);
      } while (1 < iVar12);
      lVar14 = lVar14 + 1;
      bVar1 = iVar6 < (int)(uint)*(byte *)(lVar15 + 8);
      iVar6 = iVar6 + 1;
    } while (bVar1);
  }
  if ((param_2 != 0) && (0 < (int)uVar16)) {
    uVar17 = (ulong)uVar16;
    pbVar9 = (byte *)(lVar15 + 0x11);
    do {
      if (0xf < *pbVar9) {
        puVar7 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar7 + 5) = 9;
        (*(code *)*puVar7)(param_1);
      }
      uVar17 = uVar17 - 1;
      pbVar9 = pbVar9 + 1;
    } while (uVar17 != 0);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

